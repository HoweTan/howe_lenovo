#include<iostream>
#include<vector>
using namespace std;
void sort(vector<double>&vt)
{
	for(int i=0;i<vt.size()-1;i++)
	{
		for(int j=vt.size()-1;j>i;j--)
		{
			if(vt[j]<vt[j-1])
			{
				double tmp=vt[j];
				vt[j]=vt[j-1];
				vt[j-1]=tmp;
			}
		}
	}
 } 
 int main()
 {
 	double ans=0;
 	double b;
 	vector<double>vt;
 	for(int i=0;i<10;i++)
 	{
 		cin>>b;
 		vt.push_back(b);
	 }
	 sort(vt);
	 for(int i=0;i<10;i++)
	 {
	 	cout<<vt[i]<<" ";
	 }
	 for(int i=1;i<9;i++)
	 {
	 	ans+=vt[i];
	 }
	 ans=ans/8;
	 cout<<ans<<endl;
 	return 0;
 }
