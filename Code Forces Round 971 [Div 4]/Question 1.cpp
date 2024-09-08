#include <iostream>
using namespace std;

int main()
{
    int T, a, b, c;
    cin >> T;
    for (; T > 0; T--)
    {
        cin >> a;
        cin >> b;
        cout << (b - a) << "\n";
    }
}