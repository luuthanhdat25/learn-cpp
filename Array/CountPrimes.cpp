#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    if (n <= 2) return 0;

    vector<int> isPrime(n / 2, true);
    int count = n / 2; 

    for (int i = 3; i*i < n; i += 2) { 
        if (isPrime[i / 2]) {
            for (int j = i*i ; j < n; j += 2*i) { 
                if (isPrime[j / 2]) { 
                    isPrime[j / 2] = false;
                    count--;
                }
            }
        }
    }
    return count;
}

int main() {
    cout << countPrimes(50000);

    return 0;
}

