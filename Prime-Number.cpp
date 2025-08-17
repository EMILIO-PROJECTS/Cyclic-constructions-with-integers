#include <iostream>


using namespace std;


int main() {

    int N;
    cin >> N;

    if (N < 2) {
        cout << "No" << endl;
    }

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes";

}