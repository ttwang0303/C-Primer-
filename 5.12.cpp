/*题目要求:编写一段程序，使其能统计以下含有两个字符的字符序列的数量:ff fl fi*/
/*解题思路:假设一个字符只会被统计一次，如果用户输入xxxxxfflxxx,则统计结果是:
           ff: 1 次．fl: 0 次. fi: 0 次．如果用户输入xxxxxfiffffflxxx,则统计结果是
　　　　　 ff: 2 次．fl: 1 次．fi: 1 次．*/
#include<iostream>

using namespace std;
int main()
{
  unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
  char ch, prech = '\0';
  cout << "请输入一段文本:" << endl;
  while(cin >> ch)
  {
     bool bl = true;
     if(prech == 'f')
     {
        switch(ch)
	{
	 case 'f':
		 ++ffCnt;
		 bl = false;
		 break;
         case 'l':
		 ++flCnt;
		 break;
	 case 'i':
		 ++fiCnt;
		 break;
	}
     }
     if(!bl)
	 prech = '\0';
     else
	 prech = ch;
   
  }
  cout << "ff的数量是:" << ffCnt << endl;
  cout << "fl的数量是:" << flCnt << endl;
  cout << "fi的数量是:" << fiCnt << endl;
  return 0;
}



