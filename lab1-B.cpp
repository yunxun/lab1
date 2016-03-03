#include<iostream>
using namespace std;
int main()
{
	int number;
	cout <<"type a number:";
	cin >> number;
	cout <<number <<" " ;
	
	while(number !=1)
	{
		if(number%2==1)
		{
			number = number*3+1;
	
		}
		else
			number = number/2;
		cout <<number <<" " ;
	}
	cout <<endl;
	return 0;
}



