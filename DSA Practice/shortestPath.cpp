#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char *arr = new char[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int x = 0, y = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 'S' || arr[i] == 's')
        {
            x--;
        }
        else if (arr[i] == 'N' || arr[i] == 'n')
        {
            x++;
        }
        if (arr[i] == 'w' || arr[i] == 'W')
        {
            y--;
        }
        else if (arr[i] == 'E' || arr[i] == 'e')
        {
            y++;
        }
    }
    if (y >= 0)
    {
        while (y--)
        {
            cout << 'E';
        }
    }
    else
    {
        y = -y;
        while (y--)
        {
            cout << 'W';
        }
    }
    if (x >= 0)
    {
        while (x--)
        {
            cout << 'N';
        }
    }
    else
    {
        x = -x;
        while (x--)
        {
            cout << 'S';
        }
    }

    delete[] arr;
    return 0;
}