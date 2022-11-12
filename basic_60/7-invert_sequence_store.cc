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
}