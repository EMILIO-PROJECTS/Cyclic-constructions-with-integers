#include <iostream>


using namespace std;


int main() {

    int N;
    cin >> N;

    int lcm = 1;
    for (int i = 2; i <= N; i++) {
        int a = lcm, b = i;
        while (b != 0) {
            int gcd = b;
            b = a % b;
            a = gcd;
        }
        lcm = lcm * i / a;
    }

    cout << lcm << endl;

}