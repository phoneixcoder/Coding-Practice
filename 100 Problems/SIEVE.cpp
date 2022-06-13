#include<iostream>
#include<vector>

using namespace std;
const int N = 1e7 + 10;

int main(){

    vector<bool> prime (N, 1);
    prime[0] = prime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if(prime[i] == true){
            for (int j = 2 * i; j < N; j+= i)
            {
                prime[j] = false;
            }
        }
    }

    //Time Complexity = NLog(Log(N))

    for (int i = 0; i < 100; i++)
    {
        if (prime[i] == true)
        {
            cout<<i<<endl;
        }
    }
    
    
    //Time Complexity = Q * NLog(Log(N))
    
}