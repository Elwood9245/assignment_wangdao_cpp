#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float s, p;
    float side[3];
    for (int i = 0; i < 3; i++)
        cin >> side[i];
    sort(side, side + 3);
    p = (side[0] + side[1] + side[2]) / 2;
    if (p * (p - side[1]) * (p - side[2]) * (p - side[0]) <= 0){
        cout << "That is not a triangle!" << endl;
        return -1;
    }
    s = sqrt(p * (p - side[1]) * (p - side[2]) * (p - side[0]));
    cout << "面积为" << s << endl;
    if (side[0] == side[1] && side[1] == side[2])
        cout << "等边三角形" << endl;
    else if (side[0] == side[1] || side[1] == side[2] || side[0] == side[2])
            cout << "等腰三角形" << endl;
    else if (pow(side[0], 2) + pow(side[1], 2) == pow(side[2], 2))
        cout << "直角三角形" << endl;
    else
        cout << "普通三角形" << endl;
    return 0;
}
