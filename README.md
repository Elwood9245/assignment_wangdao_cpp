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

## Task 3 Martix

由于未规定输入形式，这里采用的是从上到下从左到右依次输入按回车。

```cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int martix[3][3];
    cout << "Please enter the 3x3 martix in top-down & left-right order:\n";
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> martix[i][j];
    }
    cout << martix[0][0]+martix[1][1]+martix[2][2];
    return 0;   //11th, Nov.
}
```

## Task 4 Narcissistic number (3 digits)

取余数也可以，这里用的是整型变量除法运算后直接舍去小数位数。

```cpp
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
}   //11th, Nov.
```

## Task 5 Grade Trans

这题好像稍微有点问题，描述是五级分制，其实只有四级。写的时候补了一级E。

```cpp
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int score;
    cin >> score;
    if (score > 100 || score < 0){
        cout << "Error!";
        return -1;
    }
    else if (score <= 100 && score >= 90)
        cout << "A" << endl;
    else if (score <= 89 && score >= 80)
        cout << "B" << endl;
    else if (score <= 79 && score >= 70)
        cout << "C" << endl;
    else if (score <= 69 && score >= 60)
        cout << "D" << endl;
    else
        cout << "E" << endl;
    return 0;
}   //12th, Nov.
```
