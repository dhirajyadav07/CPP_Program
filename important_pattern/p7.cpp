/*
print:
   *
  **
 ***
****

*/

#include <iostream>
int main()
{
    using namespace std;
    int n;
    cout << "Enter the number of row:";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = 0;
        while (space < n - row) // for printing space
        {
            cout << " ";
            space++;
        }
        int col = 0;
        while (col < row) // for printing stars
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}