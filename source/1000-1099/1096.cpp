#include <iostream>

using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a;
    while(a > 0) {
        sum = 0;
        cin >> b;
        while(b > 0) {
            cin >> c;
            sum += c;
            --b;
        }
        cout << sum << endl << (a==1?"":"\n");
        --a;
    }
    return 0;
}