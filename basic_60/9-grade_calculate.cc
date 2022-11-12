#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float score, highest = 0, lowest = 100;
    while (cin >> score){
        if (score < 0)  break;
        if (score > highest)  highest = score;
        if (score < lowest)  lowest = score;
    }
    cout << "The highest score is " << highest << endl;
    cout << "The lowest score is " << lowest << endl;
    return 0;
}
