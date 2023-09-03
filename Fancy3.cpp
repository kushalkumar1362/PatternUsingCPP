#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col < row )
                cout << ++count << " * ";
            else
                cout << ++count;
        }
        cout << endl;
    }

    count = count - 3;
    for (int row = 4; row > 0; row--)
    {
        for (int col = 0; col < row ; col++)
        {
            if (col < row - 1)
                cout << count++ << " * ";
            else
                cout << count++;
        }
        count = (count + 1) - 2 * row;
        cout << endl;
    }
    return 0;
}