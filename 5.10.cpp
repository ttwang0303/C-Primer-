/*题目要求:5.9的程序,如果元音字母是大写形式，不会被统计在内，修改程序，也实现大写形式的记录
　　　　　　使用switch编程*/
#include<iostream>

using namespace std;
int main()
{
   unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
   char ch;
   cout << "请输入一段文本:" << endl;
   while(cin >> ch)
   {
      switch(ch)
      {
        case 'a':
	case 'A':
		++aCnt;
		break;
	case 'e':
	case 'E':
		++eCnt;
		break;
	case 'i':
	case 'I':
		++iCnt;
		break;
	case 'o':
	case 'O':
		++oCnt;
		break;
	case 'u':
	case 'U': 
		++uCnt;
		break;
      }
   } 
 
   cout << "元音字母a的数量是:" << aCnt << endl;
   cout << "元音字母e的数量是:" << eCnt << endl;
   cout << "元音字母i的数量是:" << iCnt << endl;
   cout << "元音字母o的数量是:" << oCnt << endl;
   cout << "元音字母u的数量是:" << uCnt << endl;
   return 0;
}

