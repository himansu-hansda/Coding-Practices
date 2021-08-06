#include<iostream>
#include<string.h>
#include<map>
#include<vector>
using namespace std;
long long fib(int num){
    vector<long long> arr(num+1,0);
    arr[1]=1;
    for(int i=0;i<=num;i++){
        arr[i+1]+=arr[i];
        arr[i+2]+=arr[i];
    }
    return arr[num];


}
int main()
{
    cout<<fib(6)<<endl;
    cout<<fib(7)<<endl;
    cout<<fib(8)<<endl;
    cout<<fib(50)<<endl;

}
