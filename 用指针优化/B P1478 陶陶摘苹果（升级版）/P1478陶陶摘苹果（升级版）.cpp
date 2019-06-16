#include<bits/stdc++.h>
using namespace std;
int main(){
	int *x=NULL,*y=NULL;
	int n,s,a,b,sum=0;
	cin>>n>>s>>a>>b;
	x=new int[n+5];
	y=new int[n+5];
	for(int i=1;i<=n;i++)
	    cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(y[i]<y[j]){
				swap(x[i],x[j]);
				swap(y[i],y[j]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(x[i]<=b+a&&s>=y[i]){
			sum++;
			s-=y[i];
		}
	}
	cout<<sum;
	return 0;
}

