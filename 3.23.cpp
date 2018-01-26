/*题目内容:创建一个含有10个整数的vector对象,然后使用迭代器将所有元素的值都变成原来的两倍.输出vector对象的内容,检验程序是否正确*/
/*解题思路:由程序自动生成随机数并添加到vector对象中,当输出原始数据时,只需读取无 需修改,所以迭代器用begin和end;当执行翻倍计算时,需要读写元素内容,所以迭代器选用begin和end */
#include<iostream>
#include<vector>
#include<ctime>       //用于生成随机种子
#include<cstdlib>     //用于调用rand()

using namespace std;

int main()
{
  vector<int> vInt;
  srand((unsigned)time(NULL));
  for(int i=0;i<10;i++)//循环10次
  {
     //每次循环生成一个1000以内的随机数并添加到vInt中
     vInt.push_back( rand() % 1000 );
  }  
  cout << "随机生成10个数字是:" << endl;
  //利用常量迭代器读取原始数据
  for(auto it = vInt.cbegin();it != vInt.cend();it++)
  {
     cout << *it << " ";//输出当前数字
  }
  cout << endl;
  cout << "翻倍后的10个数字是: " << endl;
  //利用非常量迭代器修改vInt内容并输出
  for(auto it = vInt.begin(); it != vInt.end(); it++)
  {
     *it *= 2;
     cout << *it << " ";   //输出当前数字
  }
  cout << endl;

  return 0;
}
