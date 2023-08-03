#include <iostream>
using namespace std;

int main()
{
    int n = 10, g = 4, flag = 0, dd = 0;

    while (flag < n)
    {
        for (int i = 1; i <= g; i++)
        {
            if (flag < n)
            {
                char c = 'a';

                for (int j = 1; j <= i and j <= 4; j++)
                {
                    cout << c;
                    c++;
                }
                flag++;
                cout << endl;
            }
            else
            {
                break;
            }
        }
    }
}