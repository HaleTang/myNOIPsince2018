#include<bits/stdc++.h>
using namespace std;
string a[6];
int num[6];
int main(){
	for(int i=1;i<=6;i++){
    	cin>>a[i];
    	if(a[i]=='one')num[i]=1;
    	if(a[i]=='two')num[i]=2;
    	if(a[i]=='three')num[i]=3;
    	if(a[i]=='four')num[i]=4;
    	if(a[i]=='five')num[i]=5;
    	if(a[i]=='six')num[i]=6;
    	if(a[i]=='seven')num[i]=7;
    	if(a[i]=='eight')num[i]=8;
    	if(a[i]=='nine')num[i]=9;
    	if(a[i]=='ten')num[i]=10;
    	if(a[i]=='eleven')num[i]=11;
    	if(a[i]=='twelve')num[i]=12;
    	if(a[i]=='thirteen')num[i]=13;
    	if(a[i]=='fourteen')num[i]=14;
    	if(a[i]=='fifteen')num[i]=15;
    	if(a[i]=='sixteen')num[i]=16;
    	if(a[i]=='seventeen')num[i]=17;
    	if(a[i]=='eighteen')num[i]=18;
    	if(a[i]=='nineteen')num[i]=19;
    	if(a[i]=='twenty')num[i]=20;
    	else num[i]=0;
	}
	for(int i=1;i<=6;i++){
		if(num[i]!=0){
			num[i]=num[i]*num[i]%100;
		}
	}
	return 0;
}

