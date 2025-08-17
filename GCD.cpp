#include <iostream>


using namespace std;


int main() {

    system("cls");

    int A, B;
    cin >> A >> B;

    while (B != 0) {
        int gcd = B;
        B = A % B;
        A = gcd;
    }

    cout << A << endl;

}