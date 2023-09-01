#include <iostream>
using namespace std;
/*
A 
A B A       Alphabat Half Pyramid
A B C B A   Pattern
A B C D C B A
 */
int main()
{
    int num;
    char ch;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            ch = col + 'A';
            cout << ch << " ";
        }
        for (char character = ch; character > 'A';)
        {
            character = character - 1;
            cout << character << " ";
        }
        cout << endl;
    }

    return 0;
}