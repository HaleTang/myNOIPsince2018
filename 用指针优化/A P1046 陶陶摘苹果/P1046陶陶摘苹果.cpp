#include<bits/stdc++.h>
using namespace std;
int a[12];
int main(){
    int n,sum=0;
	for(int i=1;i<=10;i++)cin>>a[i];
	cin>>n;
	//����ָ�루��10��-��11�У�
	for(int i=1;i<=10;i++)
		if(a[i]<=n+30)sum++;
	//��ָ�루��13��-��18�У� 
	int *p=NULL;
	p=new(int);
    p=&a[1];
	sum=0;
	for(int i=1;i<=10;i++){
	    if(*p<=n+30)sum++;
	    p+=1;
	} 
	//����� 
	cout<<sum;
	return 0;
}

