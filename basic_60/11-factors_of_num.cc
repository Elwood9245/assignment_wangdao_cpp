#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num = 0, i = 2;
    cin >> num;
    if (num == 0)
    {
        cout << "0 do not have a factor." << endl;
        return 0;
    }
    cout << num << "=1";
    while (i <= num)
    {
        if (num % i == 0)
        {
            cout << "*" << i;
            num = num / i;
            continue;
        }
        ++i;
    }
    cout << endl;
    return 0;
}
