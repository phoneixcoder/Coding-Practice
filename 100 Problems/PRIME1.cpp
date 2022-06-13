#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    if (t <= 10)
    {
        while (t--)
        {
            int m;
            int n;
            cin >> m >> n;
            int num = m;

            while (num <= n)
            {
                if (checkPrime(num))
                {
                    cout << num << endl;
                }
                num++;
            }
            cout << endl;
        }
    }

    return 0;
}