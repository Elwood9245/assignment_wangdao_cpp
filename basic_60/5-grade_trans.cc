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
}
