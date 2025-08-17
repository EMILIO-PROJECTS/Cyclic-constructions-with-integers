#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N1, N2;
    cin >> N1 >> N2;

    for (int num = N1; num <= N2; num++) {
        if (num < 2) {
           
        } else {
            int i = 2;
            for (; i < num; i++) {
                if (num % i == 0) {
                    break;
                }
            }
            if (i == num) { 
                cout << num << " ";
            }
        }
    }
    cout << endl;

}