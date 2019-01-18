/* Armstrong numbers are those numbers whose sum of cubes of digits equals to the number itself*/

#include<iostream>
using namespace std;

int main()
{
	char ch;
	unsigned int a,b,t,r,s,c;
	do
	{       c=0;
		cout<<"Enter the lower limit:";
		cin>>a;
		cout<<"Enter the upper limit:";
		cin>>b;
		cout<<"\nArmstrong no.s:\n";

		for(int i=a;i<=b;++i)
		{
			s=0;
			t=i;
			do
			{
				r=t%10;
				s+=r*r*r;
				t=t/10;

			}while(t!=0);
			if(s==i)
			{
				cout<<"\t\t"<<i<<endl;
				c++;
			}
		}

		cout<<"\nTotal no of Armstrong no.s betn "<<a<<" & "<<b<<" :"<<c;
		cout<<"\nWant to try again? (y/n) ";
		cin>>ch;

	}while(ch=='y'||ch=='Y');
	return 0;
}
