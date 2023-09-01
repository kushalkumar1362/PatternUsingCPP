#include <iostream>
using namespace std;
/*
    1  
   121 
  12321     Numeric Palindrome Equilateral Pyramid
 1234321    Pattern
123454321
 */
int main()
{
    int num;
    int rev;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int space = 0; space < num - row - 1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            rev = col + 1;
            cout << rev;
        }
        for (int col = rev; col > 1;)
        {
            col = col - 1;
            cout << col;
        }
        cout << endl;
    }

    return 0;
}