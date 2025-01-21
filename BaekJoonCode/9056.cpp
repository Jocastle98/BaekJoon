#include <iostream>
#include <vector>
using namespace std;	

int main_9056() {

    while (true) {
        int n;
        cin >> n;
        if (n == -1) break; 

        vector<int> divisors; 
        int sum = 0;


        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                sum += i;
            }
        }


        if (sum == n) {
            cout << n << " = ";
            for (size_t i = 0; i < divisors.size(); i++) {
                if (i != 0) cout << " + ";
                cout << divisors[i];
            }
            cout << endl;
        }
        else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    return 0;

}