#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    while(a > 0) {
        cin >> b >> c;
        cout << b+c << endl;
        --a;
    }
    return 0;
}