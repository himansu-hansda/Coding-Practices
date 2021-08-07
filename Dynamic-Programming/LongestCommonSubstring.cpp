#include<iostream>
#include<cstring>
#include<map>
using namespace std;
string X, Y;
int LCS(int n,int m,int count){
    if(n==0||m==0) return count;
    if(X[n-1]==Y[m-1])
    {
        count=LCS(n-1,m-1,count+1);
    }
    count=max(count,max(LCS(n,m-1,0),LCS(n-1,m,0)));
    
    return count;
}
int main()
{
    X="abcd";
    Y="abefd";
    int n=X.size();
    int m=Y.size();
    cout<<LCS(n,m,0);
    return 0;
}