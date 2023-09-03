#include <iostream>
using namespace std;
/*
12345
2  5
3 5
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
            if (row == 0 || col == 0 || col == num - row - 1)
            {
                cout << row + col + 1;
            }
            else{
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}