#include<iostream>
#include<string.h>
#include<map>
using namespace std;//
long long gridTraveller(int m,int n,map<string,long long>& memo)
{
    string tmp1=to_string(m);
    string tmp2=to_string(n);
    string key=tmp1+","+tmp2;
	if(m==1&&n==1) return 1;
    if(m==0||n==0) return 0;
    map<string,long long>::iterator itr=memo.find(key);
    if(itr->first==key)
    {
        return itr->second;
    }
    else{
        memo[key] = gridTraveller(m-1,n,memo) + gridTraveller(m,n-1,memo);
        return memo[key];
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,m;
	cin>>n>>m;
    map<string,long long> mp;
    cout<<gridTraveller(n,m,mp);
}
