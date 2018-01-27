/*题目要求：编写一段程序，比较两个vector对象是否相等*/
/*解题注意：对比两个vector对象是否相等，必须逐一比较其元素，为了简化，程序中设定两个待比较vector容量一致*/
/*题目背景转换：该例类似于一个彩票游戏，先由程序随机选出5个0-9的数字，此过程类似于摇奖。
                再由用户输入5个猜测的数字，类似于购买彩票；分别把两组数字存入vector容器a和b,然
                后逐一对比两个vector的元素；一旦有数字不一致，则告知用户猜测错误，只有当两
                个vector的所有元素都相等时，判断vector相等，即用户猜测正确*/
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;

int main()
{
   const int sz = 5;                        //常量sz作为vector的容量
   vector<int> a,b;                         //定义两个数组
   srand( (unsigned) time (NULL) );         //生成随机数种子
   //通过for循环为vector元素赋值
   for(int i = 0; i < sz ; i++)
	   //每次循环生成一个10以内的随机数并添加到a中
	   a.push_back( rand() % 10 );
   cout << "系统数据已生成，请输入您猜测的5个数字(0~9),可以重复：" << endl;
   int uVal;
   //通过for循环为vector元素赋值
   for(int i = 0; i < sz ; i++)
	   if(cin >> uVal)
		   b.push_back(uVal);
   cout << "系统生成的数据是：" << endl;
   for(auto val : a)
	   cout << val << " ";
   cout << endl;
   cout << "您猜测的数据是：" << endl;
   for(auto val : b)
	   cout << val << " ";
   cout << endl;
   //令it1,it2分别指向vector对象a和b的首元素
   auto it1 = a.cbegin(),it2 = b.cbegin();
   while(it1 != a.cend() && it2 != b.cend())
   {
      if(*it1 != *it2)
      {
        cout << "您的猜测错误，两个vector不相等" << endl;
	return -1;
      }
      it1++;                  //it1向后移动一位
      it2++;                  //it2向后移动一位
   } 
   cout << "恭喜您全都猜对了！" << endl;

   return 0;	   
}
