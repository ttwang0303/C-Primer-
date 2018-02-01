/*题目要求:编写一段程序,使用一系列if语句统计从cin读入的文本中有多少元音字母*/
#include<iostream>

using namespace std;
int main()
{
  unsigned int vowelCnt = 0;
  char ch;
  cout << "请输入一段文本:" << endl;
  while(cin >> ch)
  {
     if(ch == 'a')
	     ++vowelCnt;
     if(ch == 'e')
	     ++vowelCnt;
     if(ch == 'i')
	     ++vowelCnt;
     if(ch == 'o')
	     ++vowelCnt;
     if(ch == 'u')
	     ++vowelCnt;
  }
  cout << "您输入的文本中共有" << vowelCnt << "个元音字母" << endl;
  return 0;
}

