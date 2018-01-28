/*题目要求：编写一段程序，使用条件运算符从vector<int>中找出哪些元素值是奇数，
            然后将这些奇数的值加倍。  */

#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
  vector<int> vInt;
  const int sz = 10;               //使用sz作为数组的维度
  srand( (unsigned) time (NULL));  //生成随机数种子
  //使用普通for循环为数组赋初值
  cout << "数组的初值是: " << endl;
  for(int i = 0; i != sz; ++i)
  {
    vInt.push_back( rand() % 10); //生成100以内的随机数
    cout << vInt[i] << " ";
  }
  cout << endl;
  //使用范围for循环和迭代器输出数组的当前值
  for(auto &val : vInt)
	  val = (val % 2 != 0) ? val * 2 : val; //条件表达式
  cout << "调整后的数组值是: " << endl;
  for(auto it = vInt.cbegin(); it !=vInt.cend(); ++it)
	  cout << *it << " ";
  cout << endl;
  
  return 0;

}
