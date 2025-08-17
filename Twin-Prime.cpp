#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    cin >> N;

    for (int num = 2; num <= N - 2; num++) {
        int i;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                break;
            }
        }
        if (i != num) continue;;


        int j;
        int twin = num + 2;
        if (twin > N) break;

        for (j = 2; j < twin; j++) {
            if (twin % j == 0) {
                break;
            }
        }
        if (j == twin) {
            cout << "(" << num << ", " << twin << ")" << endl;
        }
    }

}