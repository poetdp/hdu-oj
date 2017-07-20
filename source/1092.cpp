#include <iostream>

using namespace std;

int main() {
    int a, b, sum;
    while(cin >> a, a) {
        sum = 0;
        while(a > 0) {
            cin >> b;
            sum += b;
            --a;
        }
        cout << sum << endl;
    }
    return 0;
}