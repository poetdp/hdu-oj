#include <iostream>

using namespace std;

int main() {
    int n, sum;
    while(cin >> n) {
        sum = 0;
        while(n > 0) {
            sum += n;
            n--;
        }
        cout << sum << endl << endl;
    }
    return 0;
}