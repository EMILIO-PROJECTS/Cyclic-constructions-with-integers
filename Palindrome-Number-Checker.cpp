#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    int backward = 0;
    cin >> N;

    int forward = N;
    while(N > 0){
        int tail = N % 10;
        backward = backward * 10 + tail;
        N = N / 10;
    }

    if (forward == backward) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}