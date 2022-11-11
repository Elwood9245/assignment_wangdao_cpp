# Assignment of Wangdao cpp

This repository is used to save personal assignment.

## Task 1 piecewise_func

```cpp
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
}   //11th, Nov.
```

## Task 2 Upper to lower Case

```cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char upperCase = getchar();
    upperCase += 32;
    cout << upperCase << endl;
    return 0;
}   //11th, Nov.
```
本题关键在于，c++在运算时会统一精度，如无`upperCase += 32;`直接写成`cout << upperCase+32 << endl;`
最终会导致输出整型数。

