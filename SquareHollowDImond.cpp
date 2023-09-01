#include <iostream>
using namespace std;
/*
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * *
* *               * *
*                   *   Square Hollow Dimond 
*                   *   Pattern
* *               * *
* * *           * * *
* * * *       * * * * 
* * * * *   * * * * *
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
            cout << "* ";
        }
        for (int space = 0; space < 2 * row + 1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < num - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int space = 0; space < (2*num) - (2 * row) - 1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}