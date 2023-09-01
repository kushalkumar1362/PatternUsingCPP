#include <iostream>
using namespace std;
/*
* * * * * * 
*       *
*     *     Hollow Inverted Half Pyramid
*   *       Pattern
* *
*     
 */
int main()
{
    int num;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row; col++)
        {
            if(row == 0 || col == 0 || col == num - row - 1)
                cout << "* ";
            else
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}