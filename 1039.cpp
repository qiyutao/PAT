#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str1[1024];
	char str2[1024];
	
	cin>>str1;
	cin>>str2;
	
	int strLen1 = strlen(str1);
	int strLen2 = strlen(str2);
	
	bool flag = true;
	bool flag1 = true;
	int total = 0; 
	for(int i=0;i<strLen2;i++)
	{
		for(int j=0;j<strLen1;j++)
		{
			if(str1[j]==str2[i])
			{
				str1[j] = 0;
				flag = false;
				break;
			}
		}
		
		if(flag)
		{
			total++;
			flag1 = false;
		} 
		flag = true;
	}
	
	if(flag1)
	{
		cout<<"Yes"<<" "<<strLen1-strLen2;
	}
	else
	{
		cout<<"No"<<" "<<total;
	}
	
	return 0;
}
