#include<iostream>
#include<vector>
using namespace std;//
long long fibo(int n,vector <long long>& memo)
{
	if(n<=2) return 1;
    if(memo[n]!=0) return memo[n];
    memo[n]= fibo(n-1,memo) + fibo(n-2,memo);
    return memo[n];
}
int main()
{
	int n;
	cin>>n;
    vector<long long> v(n+1); 
    cout<<fibo(n,v)<<" ";
}