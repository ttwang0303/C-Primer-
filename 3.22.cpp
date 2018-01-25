/*题目内容:把text第一段的程序改成大写,并输出*/
/*思路: 需要把第一段(vector对象第一个空串元素之前的所有元素)改成大写字母的形式
        再输出,因为需要更改vector对象的内容,所以使用迭代器begin和end*/
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
  vector<string> text;
  string s;
  //利用getline读取一句话,直接回车产生一个空串,表示段落结束
  while(getline(cin,s))
	 text.push_back(s);    //逐个添加到text中
  
  //利用迭代器遍历全部字符串,遇到空串停止
  for(auto it = text.begin();it!=text.end() && !it -> empty(); it++)
  {
    //利用迭代器遍历当前字符串
    for(auto it2 = it-> begin();it2 != it -> end(); it2++)
	    *it2 = toupper(*it2);   //利用toupper改写成大写形式
    cout << *it << endl;            //输出当前字符串
  } 

  return 0;

}
