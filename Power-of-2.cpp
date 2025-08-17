#include <iostream>


using namespace std;


int main() {

    int N;
    cin >> N;

    while (N % 2 == 0 && N > 1) {
        N = N / 2;
    }

    if (N == 1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

}