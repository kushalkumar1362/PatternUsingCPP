#include <iostream>
using namespace std;
/*
    * 
   * *      Full Pyramid
  * * *     Pattern
 * * * *
* * * * *
 */
int main()
{
    int num;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for(int space = 0; space < num - row -1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1 ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int row = 0; row < num; row++)
    {
        for(int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < num - row  ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
   


    return 0;
}