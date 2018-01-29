/*题目要求：根据优先级表，说明下面这条表达式的含义
            someValue ? ++x, ++y : --x, --y    */
/*解析：条件运算符的优先级高于逗号运算符号，所以上式等价于
        (someValue ? ++x, ++y : --x), --y。它的求值过程是：
        首先判断someValue是否为真，如果为真，依次执行++x和++y,
        最后执行--y;如果为假，执行--x和--y。               */
/*程序验证推断：*/
#include<iostream>

using namespace std;

int main()
{
   int x = 10, y = 20;
   //检验条件为真的情况
   bool someValue = true;
   someValue ? ++x,++y : --x, --y;
   cout << x << endl;
   cout << y << endl;
   cout << someValue << endl;

   x = 10, y=20;
   //检验条件为假的情况
   someValue = false;
   someValue ? ++x, ++y : --x, --y;
   cout << x << endl;
   cout << y << endl;
   cout << someValue << endl;

   return 0;
}
