/*题目：定义一个含有10个int的数组，另每个元素的值就是其下标值，并输出数组的全部元素*/

#include<iostream>

using namespace std;

int main()
{
  const int sz = 10;
  int a[sz];
  //使用for循环为数组元素赋值
  for(int i = 0; i < sz; i++)
	  a[i] = i;
  //通过范围for循环输出数组的全部元素
  for(auto val : a)
	  cout << val << " ";
  cout << endl;

  return 0;
}
