#include<iostream>
#include<vector>
using namespace std; //跟std相關的話要加
int main() //抽象指標
{
int a[7] = { 5, 1, 3, 2, 5, 20, 4}; //宣告陣列a[7]內之值
vector<int> v(a,a+6);  //定義v長度為a，元素初始值是a+6
vector<int>::iterator it ;
for ( it = v.begin( ); it != v.end( ) ; it++)
cout << *it <<" ";
cout << endl;
return 0;
}