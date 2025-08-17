#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    int maximum = 0;
    cin >> N;

    while (N > 0){
        int tail = N % 10;
        if (tail > maximum){
            maximum = tail;
        }
        N = N / 10;
    }


    cout << maximum << endl;

}