#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	vector<int>temp;
	int b;
	for(int i=0;i<T;i++)
	{
		cin>>b;
		temp.push_back(b);
	}
	vector<string>res;
	string n;
	for(int i=0;i<T;i++)
	{
		if(temp[i]<10&&temp[i]>=0)
		{
			res.push_back(to_string(temp[i]));
		}
		else
		{
			while(temp[i]>0)
			{
				if(temp[i]>0&&temp[i]<10)
				{
				    n+=to_string(temp[i]);
				    temp[i]-=temp[i];
				}
				else if(temp[i]>9)
				{
				    n+=to_string(9);
				    temp[i]-=9;
				}
			}
			reverse(n.begin(),n.end());
			res.push_back(n);	
		}		
	}
	for(int i=0;i<T;i++)
	{
		cout<<res[i]<<endl;
	}


	return 0;
 } 
