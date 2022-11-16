#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;

    cout << "Moi ban nhap n = ";
    cin >> n;

    int triangle[n][n];

    // init
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || i == j)
                triangle[i][j] = 1;
            else
                triangle[i][j] = 0;
        }
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // output
    for (int i = 0; i < n; i++)
    {
        for (int z = 0; z < n - i; z++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << triangle[i][j] << " ";

        cout << endl;
    }

    return 0;
}
