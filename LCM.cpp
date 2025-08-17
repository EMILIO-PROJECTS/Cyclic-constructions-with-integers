#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int originalA = A;
    int originalB = B;

    while (B != 0) {
        int gcd = B;
        B = A % B;
        A = gcd;
    }

    int gcd = A;  

    int lcm = originalA * originalB / gcd;

    cout << lcm << endl;

}