#include<iostream>
using namespace std;
int main()
{
	
		int a,b;
		cin>>a>>b;
		int r,d;
		r=a%10;
		d=a/10;
		int m,n;
			m=b%10;
		n=b/10;
		int swap3,swap4,sum1=0;
	
		swap3=(r*10)+m;
		swap4=(d*10)+n;
		sum1=swap3+swap4;
		cout<<sum1<<endl;
	return 0;
}
