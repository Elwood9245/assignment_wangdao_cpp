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
    return 0;
}
