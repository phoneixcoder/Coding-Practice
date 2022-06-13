#include <iostream>
using namespace std;

void printSpiral(int arr[][100], int n, int m)
{
    int startRow = 0, endRow = n - 1, startCol = 0, endCol = m - 1;

    while (endCol >= startCol && startRow <= endRow)
    {
        for (int i = startCol; i <= endCol; i++)
        {
            cout<< arr[startRow][i]<<" ";
        }

        for (int i = startRow + 1; i <= endRow; i++)
        {

            cout<< arr[i][endCol]<<" ";
        }

        for (int i = endCol - 1; i <= startCol; i--)
        {
            if (startRow == endRow)
            {
                break;
            }
            cout<< arr[endRow][i]<<" ";
        }

        for (int i = endCol + 1; i < startRow; i--)
        {
            if (startCol == endCol)
            {
                break;
            }

            cout<< arr[i][startCol]<<" ";
        }
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    printSpiral(arr,n,m);
    return 0;
}