#include<bits/stdc++.h>

using namespace std;

char* subString(char str[], int n)
{
    char* arr = new char[n];
    
    for (int len = 1; len <= n; len++)
    {   
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                arr[i] = str[k];
        }
    }
    return arr;
}
 

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        char s[1000];
        char* arr = new char[100][100];
        arr = subString(s,1000);
        int max;
        for (int i = 0; arr[i] != '\0'; i++)
        {
            
        }
        

        cin>>s;

    }
    
}