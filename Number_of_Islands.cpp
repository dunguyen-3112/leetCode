#include <iostream>
using namespace std;

void BFS(char grid[4][4], int i, int j)
{
    if (i >= 4 || j >= 4 || i < 0 || j < 0 || grid[i][j] == '0')
        return;
    grid[i][j] = '0';
    BFS(grid, i + 1, j);
    BFS(grid, i - 1, j);
    BFS(grid, i, j + 1);
    BFS(grid, i, j - 1);
}

int Islands(char grid[4][4])
{
    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (grid[i][j] == '1')
            {
                count++;
                BFS(grid, i, j);
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    // cout << "Hello, world!" << endl;

    char grid[4][4] = {{'1', '1', '0', '0'},
                       {'0', '1', '0', '0'},
                       {'0', '0', '0', '1'},
                       {'1', '0', '0', '1'}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    int n = Islands(grid);

    cout << "n = " << n << endl;
    return 0;
}
