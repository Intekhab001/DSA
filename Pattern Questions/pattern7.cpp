#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    // char ch = 'A';
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << (char)(65 + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}