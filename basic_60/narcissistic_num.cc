#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int hundred, ten, one;
    for (int i = 100; i < 1000; i++)
    {
        hundred = i/100;
        ten = (i - hundred *100)/10;
        one = i - hundred * 100 - ten * 10;
        if (pow(hundred,3) + pow(ten,3) + pow(one,3) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
