#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    int n, f = 1, i = 1;;
    cin >> n;
    
    
    while (i <= n)
    {    
        f *= i; i++;
    }
    cout << f;

    return 0;
}