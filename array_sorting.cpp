#include <iostream>
#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main(){
	int n,i,j,min;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(j=0;j<n;j++)
	{
		min=a[j];
		for(i=j;i<n;i++)
		{
			if(min>=a[i])
			{
				min=a[i];
				a[i]=a[j];
				a[j]=min;
			}


		}
		cout<<a[j]<<endl;
	}	

	//cout<<min;


	return 0;
}