#include <iostream>
#include "main.h"

using namespace std;

int main()
{
    int a = 1;
    int b = 2;

    int c = add(a, b);
    int d = sub(a, b);

    cout << "a+b = " << c << endl;
    cout << "a-b = " << d << endl;

    return 0;
}