/* ��k�@ �۳� */ 

#include <stdio.h>
#include <iostream>

using namespace std;

int main() 
{
	int n,n_Num[20],play_Num[20],play[20]={0},x,y,z=0,result_Num=0,result=0,a;
	cin >> n;
	for(x=0;x<n;x++)
		cin >> n_Num[x];
	for(x=0;x<n;x++)
	{
		a=0;
		for(y=0;y<x;y++)				/* ���ɩw x!=0 */ 
		{
			if(n_Num[x]!=n_Num[y])			/* �N�����ƪ��s��������play_Num[]�� */ 
				a++;
		}
		if(a==x)
			play_Num[z++]=n_Num[x];
	}
	for(x=0;x<z;x++)
	{
		for(y=0;y<n;y++)
		{
			if(play_Num[x]==n_Num[y])
				play[x]++;
		}
		if(play[x]>result)
		{
			result_Num=play_Num[x];
			result=play[x];
		}
	}
	cout << result_Num << " " << result;
}
