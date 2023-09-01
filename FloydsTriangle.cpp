#include <iostream>
using namespace std;
/*
1 
2 3 
4 5 6       Floyd's Triangle
7 8 9 10       
11 12 13 14 15 
*/
int main()
{
    int num;
    int count = 0;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            count++;
            cout <<count << " ";
        }
        cout << endl;
    }

    return 0;
}