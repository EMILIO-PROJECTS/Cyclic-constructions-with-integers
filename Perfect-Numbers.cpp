#include <iostream>


using namespace std;


int main() {

    system ("cls");

    int N;
    cin >> N;

    for (int num = 2; num < N; num++) {
        int sum = 0;

        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            cout << num << " ";
        }
    }
    cout << endl;

}