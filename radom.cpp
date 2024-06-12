#include <bits/stdc++.h>
using namespace std;

int coins(int n){
    if(n<5)return n;
    return 4*n/5+n%5;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	int n;
	while(t--){
	    cin>>n;
	    cout<<coins(n)<<endl;
	}
}
