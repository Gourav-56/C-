#include<iostream>
using namespace std;

// int x=1;
// void printNos(int N){
//     if(x>N){
//         return;
//     }
//     //Your code here
//     cout<<x<<" ";
//     // cout<<"HELLO"<<x;
//     x++;
//     printNos(N);
// }
// 
// void check(int i, string s, int n){
//     if(i>n){
//         cout<<"YES";
//         return;
//     }
//     if(s[i]!=s[n]){
//         cout<<"NO";
//         return;
//     }
//     check(i+1,s,n-1);
// }

// find hcf or gcd(Using Eucleid's Algorithm)
int hcf(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a %= b;
        }else{
            b %= a;
        }
    }
    if(a==0){
        return b;
    }return a;
}
int main(){
    int a,b;
    cin>>a>>b;

    int HCF = hcf(a,b);
    cout<<"HCF is:"<<HCF<<endl;
    return 0;
}