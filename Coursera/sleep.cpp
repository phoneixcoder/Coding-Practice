#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int H;
        int L;
        cin >> L >> H;
        char S[L + 1];
        cin >> S;
        int count = 0;
        if (S[0] == 0)
        {
            int i = 0;
            while(S[i] == '0')
            {
                count++;
                i++;
            }
            if (cout >= H)
            {
                cout<<"YES"<<endl;
            }
            else{
                
            }
            
        }

        for (int i = 0; i < sizeof(S); i++)
        {
            if (S[i] == '0')
            {
                count++;
            }
        }
        //cout<<count;
        if (count >= H)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}