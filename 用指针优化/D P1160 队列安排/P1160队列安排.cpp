#include<bits/stdc++.h>
using namespace std;
int que[100005];
int main(){
    int n,num=1;
    cin>>n;
    que[1]=1;
    for(int i=2;i<=n;i++){
    	int k,p;
		cin>>k>>p;
		num++;
		que[i]=i;
		if(p==1){
			for(int j=num;j>=k+1;j--)
				que[j]=que[j-1];
		}
		if(p==0){
            for(int j=num;j>=k;j--)
			    que[j]=que[j-1];
		}
	}
	return 0;
}

