#include <iostream>
using namespace std;
/*
* 
* * 
* * *       HalfPyramid
* * * *     Pattern
* * * * * 
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
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}