#include <iostream>


using namespace std;


int main() {

    system ("cls");

    int N;
    cin >> N;

    for (int p = 2; p <= N; p++) {
        int d;
        for (d = 2; d < p; d++) {
            if (p % d == 0) {
                break;
            }
        }
        if (d == p) {
            int power = 0;
            int x = p;
            while (x <= N) {
                power += N / x;
                x *= p;
            }
            if (power > 0) {
                cout << p << "^" << power << " ";
            }
        }
    }
    cout << endl;

}