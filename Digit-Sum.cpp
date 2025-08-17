#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    int sum = 0;
    cin >> N;

    while (N > 0) {
        int tail = N % 10;
        sum += tail;
        N = N / 10;
    }

    cout << sum << endl;

}