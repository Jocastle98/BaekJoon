#include <iostream>
#include <vector>
using namespace std;

int main_2051() {
    int N, K;
    cin >> N >> K;

    vector<int> divisors;


    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            divisors.push_back(i);
        }
    }


    if (K <= divisors.size()) {
        cout << divisors[K - 1] << endl;
    }
    else {
        cout << 0 << endl;
    }

	return 0;
}