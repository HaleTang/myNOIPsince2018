#include<bits/stdc++.h>
#include<vector> 
using namespace std;
int main(){
    vector<int> v(7);//�±��0��6
    for(int i=0;i<7;i++)v[i]=i+10;
    v.pop_back();//ɾ�����һ������ 
	vector<int>::iterator t=v.begin();
	v.erase(t);//ɾ����һ������ 
	v.erase(t+2,t+4);//ɾ����ʱ����>=t+2��<t+4������ı��� 
	for(int i=0;i<v.size();i++){
    	cout<<i<<" "<<v.at(i)<<endl;
	}
	return 0;
}
//����erase(a,b)ɾ��������[a,b),Ҳ����>=a,<b������ 
