#include <iostream>


using namespace std;


int main() {

    system("cls");

    int M, N; 
    cin >> M >> N;

    for (int A = M; A <= N; A++) {
        int sumM = 0;

        for (int i = 1; i < A; i++) {
            if (A % i == 0) {
                sumM = sumM + i;
            }
        }

        int B = sumM;

        if (B > A && B <= N) {
            int sumN = 0;

            for (int j = 1; j < B; j++) {
                if (B % j == 0) {
                    sumN = sumN + j;
                }
            }

            if (sumN == A) {
                cout << "(" << A << ", " << B << ")";
                cout << endl;
            }
        }
    }

}