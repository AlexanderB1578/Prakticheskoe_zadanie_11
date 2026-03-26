#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;
    int i = 0;
    while (n != 0)
    {
        n/=10;
        i++;
    }
    cout << i;

    return 0;
}