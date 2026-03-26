#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int num, i = 1;
    cin >> num;

    while (i != num)
    {
        i++; 
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}