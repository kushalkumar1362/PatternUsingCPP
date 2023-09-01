#include <iostream>
using namespace std;
/*
* * * * * 
* * * * *  Square
* * * * *  Pattern
* * * * * 
*/
int main()
{
    int num;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}