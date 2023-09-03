#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter the number of rows : ";
    cin >> n;
    for (int row = 1; row <= n; row = row + 1)
    {
        int formula = 1;
        for (int col = 1; col <= row; col = col + 1)
        {
            cout << formula;
            formula = formula * (row  - col )/col;
        }
        cout << endl;
    }

    return 0;
}