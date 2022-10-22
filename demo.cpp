#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int b[n];
        int g[n];
        int k[n];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            cin >> g[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {

                k[i] = b[i] + g[j];
            }
        }
    }
    return 0;
}
