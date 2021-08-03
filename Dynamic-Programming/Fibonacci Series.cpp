#include<iostream>
using namespace std;
long long fibo(int n,vector <long long>& memory)
{
    if(d[n]!=0) return d[n];
    if(n<=2) return 1;
    memory[n]= fibo(n-1,memory) + fibo(n-2,memory);
    return memory[n];
}
int main()
{
    cout<<fibo(5)<<" ";
    cout<<fibo(50);
}