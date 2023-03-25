#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> number = {1, 2, 3};
    for(auto n : number) //auto 自動判斷變數類型
    {
        cout << n;
        //cout << n << endl;
    }
    cout << "\n";//endl;
    return 0;
}