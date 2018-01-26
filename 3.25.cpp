/*题目：成绩取值范围(0~100),以每10分为一个分数段，当输入一组成绩时，统计在各个分数段的成绩个数*/
/*要求：用迭代器实现*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
  //该vector对象记录各分数段的人数，初始值均为0
  vector<unsigned> vUS(11);
  auto it = vUS.begin();
  int iVal;
  cout << "请输入一组成绩(0~100)：" << endl;
  while(cin >> iVal)
      if(iVal < 101)            //成绩在合理范围之内
	  ++*(it + iVal / 10);  //利用迭代器定位到对应的元素，加1
  cout << "您总计输入了" << vUS.size() << "个成绩" << endl;
  cout << "各分数段的人数分布是（成绩从低到高）：" << endl;
  //利用迭代器遍历vUS的元素并逐个输出
  for(it = vUS.begin(); it != vUS.end();it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}
