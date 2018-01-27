/*题目：定义一个含有10个int的数组，令每个元素的值就是其下标值，
        将定义好的数组拷贝给另外一个数组*/
/*注意：一个数组拷贝给另外一个数组，不能直接对数组使用赋值运算符，而应该逐一拷贝数组的元素*/
/*区别于3.32-1，改程序用vector实现*/

//实现vector拷贝的程序
#include<iostream>
#include<vector>

using namespace std;

int main()
{
  const int sz = 10;//常量sz作为vector的容量
  vector<int> vInt1,vInt2;
  //使用for循环为vector对象的元素赋值
  for(int i = 0; i < sz; i++)
	  vInt1.push_back(i);
  for(int j = 0; j < sz; j++)
	  vInt2.push_back(vInt1[j]);
  //通过范围for循环输出vector对象中的全部元素
  for(auto val : vInt2)
	  cout << val << " ";
  cout << endl;

  return 0;
}
