/*题目要求：编写一段程序，从标准输入中读取若干string对象并查找连续重复出现的单词．所谓连续重复
　　　　　　出现的意思是:一个单词后面紧跟着这个单词本身．要求记录连续重复出现的最大次数以及对
　　　　　　应的单词．如果这样的单词存在，输出重复出现的最大次数；如果不存在，输出一条信息说明
　　　　　　任何单词都没有连续出现过．例如，输入的是: how now now now brown cow cow
            那么输出应该表明单词now连续出现了3次*/
/*解题思路：使用while循环遍历用户输入的每一个字符串，根据当前字符串与上一个字符串是否相等决定
　　　　　　如何更新各个变量的状态。如果相等，判断当前字符练习出现的次数是否已经超过系统记录的
　　　　　　值，如果超过则及时更新。*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
 //定义3个字符串变量，分别表示:
 //当前操作的字符串、前一个字符串、当前出现次数最多的字符串
 string currString, preString = "", maxString; 
 //定义2个整型变量，分别表示:
 //当前连续出现的字符串数量、当前出现次数最多的字符串数量
 int currCnt = 1, maxCnt = 0;
 while(cin >> currString) //检查每一个字符串
 {
   //如果当前字符串与前一个字符串一致，更新状态
   if(currString == preString)
   {
     ++currCnt;
     if(currCnt > maxCnt)
     {
       maxCnt = currCnt;
       maxString = currString;
     }
   }
   //如果当前字符串与前一个字符串不一致，重置currCnt
   else
   {
    currCnt = 1;
   }
   //更新preString以便于下一次循环使用
   preString = currString;
 }
 if(maxCnt > 1)
   cout << "出现最多的字符串是:" << maxString << ",次数是: " << maxCnt << endl;
 else 
   cout << "每个字符串都只出现了一次" << endl;
 return 0;
}
