#include <iostream>
using namespace std;
int main()
{
	int number, divisor;
	bool prime = true;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	for(divisor = 2; divisor <= number/2; ++divisor)
	if((number % divisor)==0)
	{
		prime = false;
		break;
	}
	
	if(prime)
	   cout<<"You entered a prime number";
	else
	   cout<<"You did not enter a prime number";
	   
	return 0;
}
