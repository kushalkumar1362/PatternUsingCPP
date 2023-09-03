#include <iostream>
using namespace std;
/*
1
12
1 3
1  4
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
            if (col == 0 || col == row)
            {
                cout << col + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}