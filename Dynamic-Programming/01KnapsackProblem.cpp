#include<iostream>
#include<map>
using namespace std;
//int max(int a, int b) { return (a > b) ? a : b; }

int knapsack(int W,int wt[],int val[],int n,map<string,int>& memo){
    string key=to_string(n)+","+to_string(W);
    map<string,int>::iterator itr=memo.find(key);
    if(itr->first==key)
        return itr->second;
    if(n==0||W==0)
        return 0;
    if(wt[n-1]>W)
        return knapsack(W,wt,val,n-1,memo);
    else
        return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1,memo),knapsack(W,wt,val,n-1,memo));
}

int main()
{
    map<string,int> memo;
    int val[]={ 60 , 100 , 120 ,70,60,90,80,50,230,150};
    int wt[]={ 10 , 20 , 30 ,40,50,60,70,80,90,100};
    int n=sizeof(val) / sizeof(val[0]);
    int C=200;
    cout<<knapsack(C,wt,val,n,memo);
}
