#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int n;
    cin >> n;
    int i = 1;
    int y = 1;
    
    while (n >= i)
    {
        int x = 1;
        while (x <= n)
        {
            cout << (i * x) << " ";
            x++;
        }
        cout << endl;
        i++;
    }


    return 0;
}