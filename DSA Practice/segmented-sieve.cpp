#include<iostream>
#include<vector>

using namespace std;
#define MAX 100001

vector<int>* sieve(){
    bool isPrime[MAX];
    for (int i = 0; i < MAX; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 2; i * i < MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX; j++)
            {
                isPrime[j] = false;
            }
            
        }
        
    }
    vector<int>* primes = new vector<int>();
    primes->push_back(2);
    for (int i = 3; i < MAX; i += 2)
    {
        if (isPrime[i])
        {
            primes->push_back(i);
        }
        
    }
    return primes;
}

void printPrime(long long l, long long r, vector<int>* &primes){
    bool *isPrime = new bool(r-l+1);
    for (int i = 0; i <= r-l; i++)
    {
        isPrime[i] = true;
    }
    for (int i = 0; primes -> at(i) * (long long) primes -> at(i) <= r; i++)
    {
        int currPrime = primes->at(i);
        long long base = (l/(currPrime)) * (currPrime);
        if (base < l)
        {
            base = base + currPrime;
        }
        for (long long j = base; j <= r; j+= currPrime)
        {
            isPrime[j-l] = false;
        }
        if (base == currPrime)
        {
            isPrime[base - l] = true;
        }      
    }
    
    for (int i = 0; i <= r-l; i++)
    {
        if (isPrime[i] == true)
        {
            cout<<i + l<<endl;       
        }
        
    }
    
}

int main(){
    vector<int>* primes = sieve();
    int t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        printPrime(l,r,primes);
    }
    return 0;
}