# Assignment of Wangdao C/C++Linux

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
本题关键在于，c++在运算时会统一精度，如无 `upperCase += 32;` 直接写成 `cout << upperCase+32 << endl;`, 最终会导致输出整型数。

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

这题好像稍微有点问题，描述是五级分制，其实只有四级。写的时候补充了 grade E.

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

## Task 6 Fibonacci Sequence(no recursion)

不使用递归的话，可以用就用循环来迭代，用一个中间变量来存储计算值。因为不是满二叉树所以递归的时间复杂度应该略小于 O(2^n) ，用循环的话应该是 O(n).

```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    long long fibn, temp1 = 1, temp2 = 1;
    cin >> n;
    if (n == 0 || n == 1){
        cout << 1 << endl;
        return 0;
    }
    for(int i = 2; i <= n; ++i){
        fibn = temp1 + temp2;
        temp2 = temp1;
        temp1 = fibn;
    }
    cout << fibn << endl;
    return 0;
}   //12th, Nov.
```

这题有意思的地方在于，一旦数字变大，就有可能出现数据溢出，所以用 `long long` 来存了Fibonacci number. 而数字变大，递归方式的时间复杂度提高，很难算出结果，用循环的方式产生更快。

## Task 7 Invert sequence store

对于一个给定的n，输入一组数，然后输出其反转。

```cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n, temp;
    int num[100] = {0};
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> num[i];
    for (int j = n - 1, i = 0; j > (n - 1) / 2; --j, ++i)
    {
        temp = num[j];
        num[j] = num[i];
        num[i] = temp;
    }
    for (int i = 0; i < n; ++i)
        cout << num[i] << " ";
    return 0;
}   //12th, Nov.
```

