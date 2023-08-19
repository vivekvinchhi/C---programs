#include <iostream>
using namespace std;

int main()
{

    int num[6] = {4, 5, 6, 2, 2,3};
    int targetsum = 13;

    int size = sizeof(num) / 4;

    int sum = 0;
    for (int j = 0; j < size; j++)
    {sum = 0;
        for (int i = j; i < size; i++)
        {

            sum = sum + num[i];

            if (sum == targetsum)
            {
                cout << num[j]<<" ";
                break;
            }
        }
    }

    
}