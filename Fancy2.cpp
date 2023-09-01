#include <iostream>
using namespace std;
/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
 */
int main()
{
    // int num;
    // cout << "Enter number of rows : ";
    // cin >> num;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 8 - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2*row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << "*";
            }
        }
        for (int col = 0; col < 8 - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}