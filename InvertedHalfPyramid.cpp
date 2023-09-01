#include <iostream>
using namespace std;
/*
* * * * * 
* * * *     Inverted Half Pyramid
* * *       Pattern
* *
* 
 */
int main()
{
    int num;
    cout << "Enter number of rows : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row ; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}