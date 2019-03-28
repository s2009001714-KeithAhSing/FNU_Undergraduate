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
	
	if(key == 1)
		result = num1 + num2;
		else if(key == 2)
			result = num1 - num2;
			else if(key == 3)
				result = num1 * num2;
				else if(key == 4)
					result = num1 / num2;
					else
						{
							result = 0;
							cout<<"\nInvalid key"<<endl;	
						}
	
	cout<<"\nThe result is "<<result<<endl;
	
	
	return 0;
}
