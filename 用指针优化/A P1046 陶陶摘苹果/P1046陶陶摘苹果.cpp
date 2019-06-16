#include<bits/stdc++.h>
using namespace std;
int a[12];
int main(){
    int n,sum=0;
	for(int i=1;i<=10;i++)cin>>a[i];
	cin>>n;
	//不用指针（第10行-第11行）
	for(int i=1;i<=10;i++)
		if(a[i]<=n+30)sum++;
	//用指针（第13行-第18行） 
	int *p=NULL;
	p=new(int);
    p=&a[1];
	sum=0;
	for(int i=1;i<=10;i++){
	    if(*p<=n+30)sum++;
	    p+=1;
	} 
	//输出： 
	cout<<sum;
	return 0;
}

