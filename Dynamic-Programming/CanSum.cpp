#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std; //
string canSum(int num,vector<int>& arr,map<int,string>& memo)
{
    map<int,string>::iterator itr=memo.find(num);
    if(itr->first==num){
        return memo[num];
    }
    if(num==0) {
        return "true";
    }
    if(num<0) return "false";
    for(int i=0;i<arr.size();i++){
        int rem=num-arr[i];
        if(canSum(rem,arr,memo)=="true"){
            memo[num]="true";
            return "true";
        }
    }
    memo[num]="false";
    return "false";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr;
    map<int,string> memo;
	int n,m;
    //bool state2;
	cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<canSum(n,arr,memo);
    return 0;
}
