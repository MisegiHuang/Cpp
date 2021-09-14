#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main()
{
cout << "<The prime number collector>" << endl;
cout << "Input the natural number to which you want to count the prime number from 1." << endl;
int N; //The range to check the prime number 
cin >> N;
while(N<2){
	cout << "Please input the natural number again." << endl;
	cout << "You must write it bigger than 1." << endl;
	cin >> N; 
} //Warning to input an integer less than 2 
	int array[N][2]; //2D Array. At the first dimension, natural numbers come from 1. At the next dimension, boolean numbers are marked to check upside number is prime number or not. 
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<2; j++)
		{
		if(j==0){
			array[i][j]=i+1; //Natural numbers 
		}
		else{
			array[i][j]=1; //Boolean numbers to check prime number. 1 for prime number, 0 for the other numbers. 
		}	
		}	
	}
array[0][1]=0; //The preorder that 1 is not prime number.
for(int k=1; k<N; k++) //The loop to check prime number. It starts from 2. 
{
	for(int l=0; l<k; l++) //The test if the number is there able to divide without remainder from 2 to itself.
	{
		if(array[l][1]==1) //To check the dividng number is prime number. 
		{
	
		if(array[k][0]%(l+1)==0) //If the divided number does not make remainder by a prime number...
		{
			array[k][1]=0; //It will be defined the number not prime number.
		}
		}
		}
	}
cout << "These are every prime numbers between 1 and " << N << "." << endl;
for(int m=0; m<N; m++) //The printer outputs only all prime numbers 
{
	if(array[m][1]==1) //If the number is it.. 
	{
	cout << array[m][0] << " "; //The printer outputs the number and makes a space. 
	}	
	}
cout << endl;
system("Pause"); //To stop the shutdown of a command prompt
return 0;
}


