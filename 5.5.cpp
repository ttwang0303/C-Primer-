/*题目要求:使用if-else语句实现将数字成绩转换为字母成绩的要求*/
#include<iostream>

using namespace std;

int main()
{
  int grade;
  cout << "请输入您的成绩:" << endl;
  cin >> grade;
  if(grade < 0 || grade > 100)
  {
    cout << "该成绩不合法:" << endl;
    return -1;
  } 
  if(grade < 60)
  {
    cout << "该成绩的等级是:" << "F" << endl;
    return -1;
  }
  int iU = grade / 10;        //成绩的十位
  int iT = grade % 10;        //成绩的个位
  string score, level, lettergrade;
  //根据成绩的十位数字确定score
  if(iU == 9)
	  score = "A";
  else if(iU == 8)
	  score = "B";
  else if(iU == 7)
	  score = "C";
  else 
	  score = "D";
  //根据成绩的个位数字确定level
  if(iT < 3)
	  level = "-";
  else if(iT > 7)
	  level = "+";
  else 
	  level = "";
  //累加求得等级成绩
  lettergrade = score + level;
  cout << "等级成绩是:" << lettergrade << endl;
  
}
