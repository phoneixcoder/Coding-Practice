#include<iostream>
using namespace std;

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

    int key;
    cin>>key;
    
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (arr[i][j] > key)
        {
            j--;
        }else if (arr[i][j] < key)
        {
            i++;
        }
        else{
            cout<<"Found at "<<i<<", "<<j;
            break;
        }
    }
    return 0;
}