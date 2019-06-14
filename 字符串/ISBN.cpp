#include<bits/stdc++.h>
using namespace std;
string a;
int main()
{
    int sum=0;
	for(int i=1;i<=13;i++)cin>>a[i];
    sum+=(a[1]-48);
	for(int i=1;i<=12;i++){
    	if(a[i]=='-')continue;
		sum+=(a[i]-48)*i;
	}
	for(int i=3;i<=5;i++)sum+=(a[i]-'0')*(i-1);
	for(int i=7;i<=11;i++)sum+=(a[i]-'0')*(i-2); 
	if(sum%11==(a[13]-'0'))cout<<"Right";
    else{
		for(int i=1;i<=12;i++)cout<<a[i];
	    sum%=11;
	    if(sum==10)cout<<"X";
		else cout<<sum;
	}
	return 0;
}
