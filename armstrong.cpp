#include <iostream>
#include <cmath>
using namespace std;

int isarmstrong(int n)
{
    int sum = 0;
    int num = n;
    int count = log10(n) + 1;


    while (n != 0)
    {
        int digit = n % 10;
        // res = res*10+digit;
        sum = sum + round(pow(digit, count));
        n = n / 10;
    }

    if (sum == num)
    {
        cout << "Entered number is armstrong ";
    }
    else
    {
        cout << "Entered number is not armstrong number";
    }
}

int main()
{
    int n = 153;
    isarmstrong(n);
    cout << endl;
    return 0;
}