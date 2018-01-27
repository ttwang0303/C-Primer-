/*题目：定义一个含有10个int的数组，令每个元素的值就是其下标值，
        将定义好的数组拷贝给另外一个数组*/
/*注意：一个数组拷贝给另外一个数组，不能直接对数组使用赋值运算符，而应该逐一拷贝数组的元素*/

#include<iostream>

using namespace std;

int main()
{
  const int sz = 10;//常量sz作为数组的维度
  int a[sz],b[sz];
  //使用for循环为数组元素赋值
  for(int i = 0; i < sz; i++)
	  a[i] = i;
  for(int j = 0; j < sz; j++)
	  b[j] = a[j];
  //通过范围for循环输出数组的全部元素
  for(auto val : b)
	  cout << val << " ";
  cout << endl;

  return 0;
}
