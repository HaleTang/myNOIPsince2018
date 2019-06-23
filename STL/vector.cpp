#include<bits/stdc++.h>
#include<vector> 
using namespace std;
int main(){
    vector<int> v(7);//下标从0到6
    for(int i=0;i<7;i++)v[i]=i+10;
    v.pop_back();//删除最后一个变量 
	vector<int>::iterator t=v.begin();
	v.erase(t);//删除第一个变量 
	v.erase(t+2,t+4);//删除此时的在>=t+2并<t+4区间里的变量 
	for(int i=0;i<v.size();i++){
    	cout<<i<<" "<<v.at(i)<<endl;
	}
	return 0;
}
//附：erase(a,b)删除区间是[a,b),也就是>=a,<b的区间 
