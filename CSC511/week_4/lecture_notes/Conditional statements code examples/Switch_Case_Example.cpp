//This is a calculator program
#include<iostream>

using namespace std;

int main()
{
	float num1,num2,result;
	int key;
	
	cout<<"Enter two numbers"<<endl;
	cin>>num1 >> num2;
	
	cout<<"\n\tFunction\tKey"<<endl;
	cout<<"\t--------\t---"<<endl;
	cout<<"\tADD\t\t1"<<endl;
	cout<<"\tMINUS\t\t2"<<endl;
	cout<<"\tMULTIPLY\t3"<<endl;
	cout<<"\tDIVIDE\t\t4"<<endl;
	cout<<"\nEnter the key"<<endl;
	cin>>key;
	
	switch(key)
	{
		case 1: //add
			result = num1 + num2;
			break;
		case 2: //minus
			result = num1 - num2;
			break;
		case 3: //multiply
			result = num1 * num2;
			break;
		case 4: //divide
			result = num1 / num2;
			break;
		default:
			result = 0;
			cout<<"\nInvalid key"<<endl;
			break;
	}
	
	cout<<"\nThe result is "<<result<<endl;
	
	
	return 0;
}
