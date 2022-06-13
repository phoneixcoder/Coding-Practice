#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minStep = 0;
    int checkAd = 0;

    int j = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[j])
        {
            checkAd++;
        }
        if (checkAd == 1)
        {
            if (arr[i + 1] == arr[j + 1])
            {
                i++;
                j++;
                checkAd++;
            }
            minStep++;
            checkAd = 0;
        }
        j++;
    }
    cout << minStep;
    return 0;
}