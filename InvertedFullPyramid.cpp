#include <iostream>
using namespace std;
/*
* * * * * 
 * * * *    Inverted full Pyramid
  * * *     Pattern
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