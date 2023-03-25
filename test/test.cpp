#include <iostream>
using namespace std;

int main()
{
    int nCol;
    int nRow;
    int write[10][10];

    for(nCol = 0; nCol < 10; nCol++)
    {
        for(nRow = 0; nRow < 10; nRow++)
        {
            write[nCol][nRow] = 1;
            cout << nCol << nRow << "  ";
            cout << write[nCol][nRow] << "\n";

        }
    }
    
    return 0;

}

