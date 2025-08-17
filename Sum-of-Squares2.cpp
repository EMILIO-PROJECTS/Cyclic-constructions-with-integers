#include <iostream>


using namespace std;


int main() {

    system("cls");

    int N;
    cin >> N;
    
            for (int a = 1; a * a <= N; ++a) {
            for (int b = a + 1; b * b <= N; ++b) {
                int sum = a * a + b * b;
            if (sum <= N) {
                cout << a << "^2 + " << b << "^2 = " << sum << endl;
        }
    }
}

}