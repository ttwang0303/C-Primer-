#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
   vector<int> v1;
   vector<int> v2(10);
   vector<int> v3(10,42);
   vector<int> v4{10};
   vector<int> v5{10,42};
   vector<int> v6{10};
   vector<string> v7{10, "hi"};

   cout << "v1的元素个数是:" << v1.size() << endl;
   if(v1.cbegin() != v1.end())//当vector含有元素时逐个输出
   {
     cout << "v1的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v1.cbegin(); it != v1.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v2的元素个数是:" << v2.size() << endl;
   if(v2.cbegin() != v2.end())//当vector含有元素时逐个输出
   {
     cout << "v2的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v2.cbegin(); it != v2.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v3的元素个数是:" << v3.size() << endl;
   if(v3.cbegin() != v3.end())//当vector含有元素时逐个输出
   {
     cout << "v3的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v3.cbegin(); it != v3.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v4的元素个数是:" << v4.size() << endl;
   if(v4.cbegin() != v4.end())//当vector含有元素时逐个输出
   {
     cout << "v4的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v4.cbegin(); it != v4.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v5的元素个数是:" << v5.size() << endl;
   if(v5.cbegin() != v5.end())//当vector含有元素时逐个输出
   {
     cout << "v5的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v5.cbegin(); it != v5.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v6的元素个数是:" << v6.size() << endl;
   if(v6.cbegin() != v6.end())//当vector含有元素时逐个输出
   {
     cout << "v6的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v6.cbegin(); it != v6.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }

   cout << "v7的元素个数是:" << v7.size() << endl;
   if(v7.cbegin() != v7.end())//当vector含有元素时逐个输出
   {
     cout << "v7的元素分别是:" << endl;
     //使用范围for语句遍历每一个元素
     for(auto it = v7.cbegin(); it != v7.cend(); it++)
             cout << *it <<" ";
     cout << endl;
   }
   return 0;
}
