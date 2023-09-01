#include <iostream>
using namespace std;
/*
*        *
**      **
***    ***
****  ****      
**********      Butterfly
**********
****  ****
***    ***
**      **
*        * 
*/
int main()
{
    int num;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2*(num - row) - 2 ; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2*row ; col++)
        {
            cout << " 5";
        }
        for (int col = 0; col < num - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}