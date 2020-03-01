#include <iostream>
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,i,n,s;
	cin>>n;
	while(n--)
	{
		cin>>t;
	s=0;
	vector<int>a(t);
	vector<int>b(t);
	for(i=0;i<t;i++)
		cin>>a[i];
	for(i=0;i<t;i++)
		cin>>b[i];
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	for(i=0;i<t;i++)
		s=s+min(a[i],b[i]);
	cout<<s;
	}
	return 0;
}
