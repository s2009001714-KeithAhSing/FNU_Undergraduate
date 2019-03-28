//This is a calculator program
#include<iostream>

using namespace std;

int main()
{
	float num1,num2,result;
	char key;
	
	cout<<"Enter two numbers"<<endl;
	cin>>num1 >> num2;
	
	cout<<"\n\tFunction\tKey"<<endl;
	cout<<"\t--------\t---"<<endl;
	cout<<"\tADD\t\tA"<<endl;
	cout<<"\tMINUS\t\tS"<<endl;
	cout<<"\tMULTIPLY\tP"<<endl;
	cout<<"\tDIVIDE\t\tQ"<<endl;
	
	cout<<"\nEnter the key"<<endl;	
	cin>>key;
	
	switch(key)
	{
		case 'A': //add
			result = num1 + num2;
			break;
		case 'S': //minus
			result = num1 - num2;
			break;
		case 'P': //multiply
			result = num1 * num2;
			break;
		case 'Q': //divide
			result = num1 / num2;
			break;
		default:
			result = 0;
			cout<<"\nInvalid key"<<endl;
	}
	
	cout<<"\nThe result is "<<result<<endl;
	
	
	return 0;
}
