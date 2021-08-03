#include<iostream>
#include<vector>
using namespace std;
long long fibo(int n,vector <long long>& memory)
{
	if(n<=2) return 1;
    if(memory[n]!=0) return memory[n];
    memory[n]= fibo(n-1,memory) + fibo(n-2,memory);
    return memory[n];
}
int main()
{
	int n;
	cin>>n;
    vector<long long> v(n+1); 
    cout<<fibo(n,v)<<" ";
    //cout<<fibo(50,v);
}