#include<iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
    int base = 2;
    int exponent = 4;
    int pow = power(base, exponent);

    cout << base <<"^" << exponent << " = " << pow << endl;

    system("pause");
    return 0;
}