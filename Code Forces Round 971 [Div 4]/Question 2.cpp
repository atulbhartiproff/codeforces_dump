#include <iostream>
using namespace std;

int main()
{
    int T, n;
    cin >> T;
    for (; T > 0; T--)
    {
        // Dynamically creating the array to store the values
        cin >> n;
        int k = 0;
        int *final_arr = new int[n];
        char **arr = new char *[n];
        for (int i = 0; i < n; i++)
            arr[n] = new char[4];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '#')
                    final_arr[k++] = j;
            }
        }

        for (; k > 0;)
            cout << final_arr[--k] + 1 << " ";
        cout << "\n";
    }
}