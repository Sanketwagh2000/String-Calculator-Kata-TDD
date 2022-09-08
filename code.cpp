#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int add(char a[])
{
	int leng=0;
	for(int i=0;a[i]!='\0';i++,leng++);
	
	if(leng==0)
		return 0;

	int ans=0,res=0;
	for(int i=0; i<leng; i++)
	{
		
		if(a[i] >= '0' && a[i] <= '9')
			ans = a[i] - '0';
		else if(a[i] >= 'a' && a[i] <= 'z')
			ans = a[i] - 'a' + 1;
		
		
		res = res + ans;	
	}
	return res;

}

int main()
{
	char a[] ={'1','2','3','a','b','c','z'};
	
	int result = add(a);
	cout<<result;
}
