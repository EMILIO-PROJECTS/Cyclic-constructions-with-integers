#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    cin >> N;


        for (int a = 1; a * a < N; ++a) {
        for (int b = 1; b < a; ++b) {
            if (a * a + b * b == N) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

}