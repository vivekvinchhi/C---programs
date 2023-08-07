// find difference of product and sum of each digit eg=>234 =>2*3*4 - 2+3+4 => 24-9 => 15

#include <iostream>
using namespace std;
int main()
{

    cout << "enter number";
    int n;
    cin >> n;
    int p = 1;
    int s = 0;
    while (n != 0)
    {
        int nu = n % 10;
        p = p * nu;
        s = s + nu;
        n = n / 10;
    }
    int answer = p - s;
    cout << answer;
}