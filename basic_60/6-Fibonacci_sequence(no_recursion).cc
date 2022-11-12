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
}
