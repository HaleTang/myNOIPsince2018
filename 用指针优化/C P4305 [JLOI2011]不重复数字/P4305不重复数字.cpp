#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    	int *n=NULL;
    	bool *s=NULL;
    	n=new(int);
    	s=new bool[2147483647];
    	cin>>*n;
    	for(int j=1;j<=*n;j++){
    		int *a=NULL;
    		a=new(int);
			cin>>*a;
    		if(s[*a]==0){
    			s[*a]=1;
    			cout<<*a<<" ";
			}
			a++;
		}
		cout<<endl;
	}
	return 0;
}

