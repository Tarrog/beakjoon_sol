#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a;
    cin >> b;
    c = b;

    for (int i = 0; i < 3; ++i) {
        cout << a * (b % 10) << endl;
        b /= 10;
    }
    cout << a * c;
    return 0;
}