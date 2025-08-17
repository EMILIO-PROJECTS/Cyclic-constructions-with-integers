#include <iostream>


using namespace std;


int main() {
    
    int N;
    cin >> N;

    for (int i = 2; i <= N; i++) {
        int count = 0;
        while (N % i == 0) {
            count++;
            N = N / i;
        }
        if (count > 0) {
            cout << i << "^" << count << " ";
        }
    }
    cout << endl;

}