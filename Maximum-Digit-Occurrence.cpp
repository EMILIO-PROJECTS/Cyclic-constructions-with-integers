#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    int maximum = 0;
    cin >> N;
    int times = N;

    while (times > 0) {
        int tail = times % 10;
        if (tail > maximum) {
            maximum = tail;
        }
        times = times / 10;
    }

    int counter = 0;
    while (N > 0) {
        int tail = N % 10;
        if (tail == maximum) {
            counter++;
        }
        N = N / 10;
    }

    cout << counter << endl;
}