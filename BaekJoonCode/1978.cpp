#include <iostream>
using namespace std;

// 소수 판별 함수
bool isPrime(int num) {
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;
    }
    return true;
}

int main_1978() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (isPrime(a)) { 
            count++;
        }
    }

    cout << count << endl; 

    return 0;
}
