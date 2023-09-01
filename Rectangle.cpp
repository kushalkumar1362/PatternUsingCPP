#include <iostream>
using namespace std;
/*
* * * * * 
* * * * *  Rectangle
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
        for (int col = 1; col <= num + 1; col++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}