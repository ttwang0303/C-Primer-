/*题目要求：在下述表达式的合理位置添加括号，使得添加括号后运算对象的组合顺序与添加括号前一致*/
/*(a) *vec.begin()   (b)   *vec.begin() + 1 */
/*解析：优先级最高的是成员选择运算符和函数调用运算符，其次是解引用运算符，最后是加法运算符。其次

        添加括号后等价的式子是 ： (a) *(vec.begin())    (b) (*(vec.begin())) + 1             */

//程序验证推断：
#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
  vector<int> vec;
  srand( (unsigned) time (NULL));
  cout << "系统自动为向量生成一组元素....." << endl;
  for(int i = 0; i != 10; i++)
	  vec.push_back(rand() % 100);
  cout << "生成的向量数据是: " << endl;
  for(auto c : vec)
	  cout << c << " " ;
  cout << endl;
  cout << "验证添加的括号是否正确: " << endl;
  cout << "*vec.begin()的值是: " << *vec.begin() << endl;
  cout << "*(vec.begin())的值是: " << *(vec.begin()) << endl;
  cout << "*vec.begin() + 1 的值是: " << *vec.begin() + 1 << endl;
  cout << "(*(vec.begin())) + 1 的值是: " << (*(vec.begin())) + 1 << endl;

  return 0;
}
