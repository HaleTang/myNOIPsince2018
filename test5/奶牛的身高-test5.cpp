#include<bits/stdc++.h>
using namespace std;
int a[80005];
int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n-1;i++){
    	for(int j=i+1;j<=n;j++){
    		if(a[j]>=a[i])break;
    		sum++;
		}
	}
	cout<<sum;
	return 0;
}

