#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;

    
    if (N < 2) {
        cout << "Не простое" << endl;
        return 0;
    }

    bool isPrime = true;
    int i = 2;

    
    while (i <= sqrt(N)) {
        if (N % i == 0) {  
            isPrime = false;
            break;  
        }
        i++;
    }


    if (isPrime) {
        cout << "Простое" << endl;
    }
    else {
        cout << "Не простое" << endl;
    }

    return 0;
}