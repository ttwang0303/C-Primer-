/*题目要求：编写3个不同版本的程序，令其均能输出ia的元素。
            版本1使用范围for语句管理迭代过程；版本2和3都使用普通的for语句，
            其中版本2要求用下标运算符，版本3要求用指针。另外，在所有3个版本的程序中都要直接写出数据类型，
            改写3.43程序，使用auto关键字自动推断循环控制变量的类型          */
#include<iostream>

using namespace std;


int main()
{
  int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
  cout << "利用范围for语句输出多维数组的内容：" << endl;
  for(auto  &row : ia)
  {
     for(auto &col : row)
	     cout << col << " ";
     cout << endl;
  }

  cout << "利用普通for语句和下标运算符号输出多维数组的内容： "  << endl;
  for(auto i = 0; i != 3; i++)
  {
     for(auto j = 0; j != 4; j++)
	     cout << ia[i][j] << " ";
     cout << endl;
  }

  cout << "利用普通for语句和指针输出多维数组的内容： " << endl;
  for(auto p = ia ; p != ia + 3;  p++)
  {
    for(auto q = *p; q != *p + 4 ; q++)
	    cout << *q << " ";
    cout << endl;
  }

  return 0;
}
