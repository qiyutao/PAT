#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char p[80];
	char a[80];
	int gall[3],sick[3],kunt[3];
	
	cin>>p>>a;
	
	char tok[] = ".";
	
	char *result = NULL;
	result = strtok(p,tok);
	gall[0] = atoi(result);
	result = strtok(NULL,tok);
	sick[0] = atoi(result);
	result = strtok(NULL,tok);
	kunt[0] = atoi(result);
	
	result = strtok(a,tok);
	gall[1] = atoi(result);
	result = strtok(NULL,tok);
	sick[1] = atoi(result);
	result = strtok(NULL,tok);
	kunt[1] = atoi(result);
	
	bool flag = true;
	if((gall[0]*10000+sick[0]*100+kunt[0])>
		(gall[1]*10000+sick[1]*100+kunt[1]))
	{
		flag = false;
		if(kunt[0]<kunt[1])
		{
			sick[0]--;
			kunt[0] += 29;
		}
		kunt[2] = kunt[0] - kunt[1];
		if(sick[0]<sick[1])
		{
			gall[0]--;
			sick[0] += 17;
		}
		sick[2] = sick[0] - sick[1];
		gall[2] = gall[0] - gall[1];
	}
	else
	{
		if(kunt[1]<kunt[0])
		{
			sick[1]--;
			kunt[1] += 29;
		}
		kunt[2] = kunt[1] - kunt[0];
		if(sick[1]<sick[0])
		{
			gall[1]--;
			sick[1] += 17;
		}
		sick[2] = sick[1] - sick[0];
		gall[2] = gall[1] - gall[0];
	}
	if(!flag)
	cout<<"-";
	cout<<gall[2]<<"."<<sick[2]<<"."<<kunt[2];
	
	return 0;
}
