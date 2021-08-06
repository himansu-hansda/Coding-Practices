#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
long long gT(int n,int m){
    vector<vector<long long>> arr(n+1,vector<long long> (m+1));
    //long long arr[100][100]={0};
    arr[1][1]=1;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            int current=arr[i][j];
            if(j+1<=m) arr[i][j+1]+=current;
            if(i+1<=n) arr[i+1][j]+=current;
        }
    }
    return arr[n][m];

}
int main()
{
    cout<<gT(1,1)<<endl;
    cout<<gT(2,3)<<endl;
    cout<<gT(3,2)<<endl;
    cout<<gT(3,3)<<endl;
    cout<<gT(18,18)<<endl;

}
