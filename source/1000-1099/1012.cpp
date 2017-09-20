#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    cout << "0 1" << endl;
    cout << "1 2" << endl;
    cout << "2 2.5" << endl;
    double e = 2.5f, fac=2.0f;
    for(int n=3; n<=9; n++) {
        cout << n << " ";
        fac *= n;
        e += 1.0/fac;
        cout << fixed << setprecision(9) << e << endl;
    }
    return 0;
}