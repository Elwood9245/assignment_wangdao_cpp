#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    cin >> x;
    if (x < 5)
        cout << x;
    else if (x >= 15)
        cout << x - 6;
    else
        cout << x + 6;
    return 0;
}
