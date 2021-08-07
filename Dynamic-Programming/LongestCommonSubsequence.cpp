#include<iostream>
#include<cstring>
#include<map>
using namespace std;
int LCS(char* x,char* y,int n,int m){
    if(n==0||m==0) return 0;
    if(x[n-1]==y[m-1])
    {
        return 1+LCS(x,y,n-1,m-1);
    }
    else{
        return max(LCS(x,y,n,m-1),LCS(x,y,n-1,m));
    }
    
}
int main()
{
    char x[]="abcd";
    char y[]="aefd";
    int n=strlen(x);
    int m=strlen(y);
    cout<<LCS(x,y,n,m);
    return 0;
}