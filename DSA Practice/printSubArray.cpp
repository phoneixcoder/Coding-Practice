#include <iostream>

using namespace std;

int countSubArrayProductLessThanK(int* a, int n, long long k)
{

    if (n == 1)
    {
        if (a[0] < k)
            return 1;
        else
            return 0;
    }

    long long prePro = 1;
    int i = 0, j = 0;
    long count = 0;
    while (j < n)
    {
        prePro *= a[j];

        while (prePro >= k and i <= j)
        {
            prePro /= a[i];
            i++;
        }
        count += (j - i + 1);

        j++;
    }

    return (int)count;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        int *arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        int k;
        cin >> k;
        int num = 0;
        num = countSubArrayProductLessThanK(arr, N, k);
        cout << num << endl;
    }

    return 0;
}