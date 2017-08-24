#include <iostream>
using namespace std;
// #include "Utility.h"

bool IsPrime(int x);

bool Is2MorePrime(int x);

int main(int argc, char **argv)
{
    int x;
    cout << "Enter a number" << endl;
    cin >> x;

    if (IsPrime(x))
        cout << x << " is prime" << endl;
    else
        cout << x << " is not prime" << endl;

    if (Is2MorePrime(x))
        cout << x << " + 2 is prime" << endl;
    else
        cout << x << " + 2 is not prime" << endl;

    return 0;
}

bool IsPrime(int x)
{
    bool prime = true;
    for (int i = 2; i <= x / i; i = i + 1)
    {
        int factor = x / i;
        if (factor * i == x)
        {
            cout << x << " has a factor of " << factor << endl;
            prime = false;
            break;
        }
        return prime;
    }
}

bool Is2MorePrime(int x)
{
    x = x + 2;
    return IsPrime(x);
}