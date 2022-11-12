#include <iostream>
using namespace std;

float transFunc(float f){
    return (f-32)*5/9.0;
}

int main(int argc, char const *argv[])
{
    float f;
    cin >> f;
    cout << transFunc(f) << endl;
    return 0;
}
