#include <iostream>
#define N 5    //using 5 as an example. N can be any int.
using namespace std;

int main(int argc, char const *argv[])
{
    int newNum, temp;
    int originNum[N+1] = {5,9,10,43,239};  //orignNum is an order array.
    cin >> newNum;
    for (int i = 0; i < N; ++i)
    {
        if (newNum <= originNum[i])
        {
            continue;
        }
        temp = i;
        for (int j = N; j >= temp; --j)
        {
            originNum[j] = originNum[j-1];
        }
        originNum[temp] = newNum; 
    }
    
    return 0;
}
