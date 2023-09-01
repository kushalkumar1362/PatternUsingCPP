#include <iostream>
using namespace std;
/*
12345
2345    Numeric Hollow Inverted Half Pyramid
345     Pattern
45
5
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
           cout  << row + col + 1;
        }
        cout << endl;
    }

    return 0;
}