#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter a number to add its Digit :- ";
	cin>>x;
	int sum=0;
	int temp=x;
	while(temp!=0)
	{
		int rem=x%10;
		sum+=rem;
		temp/=10;
	}
	cout<<"Sum of Digit :- <<sum<<endl;

	return 0;
}

