
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Question 8: Greatest of three numbers
	// int a = 0, b = 0, c = 0;
    //
	// cout << "Enter value for A: ";
	// cin >> a;
    //
	// cout << "Enter value for B: ";
	// cin >> b;
    //
	// cout << "Enter value for C: ";
	// cin >> c;
    //
	// cout << endl;
    //
	// if (a > b)
	// {
	// 	if (a > c)
	// 		cout << "A is the greatest";
	// 	else
	// 		cout << "C is the greatest";
	// }
	// else if (b > c)
	// 	cout << "B is the greatest";
	// else
	// 	cout << "C is the greatest";
	

	string lblMessage = " ";
	int txtRoom = 0;
	int intRmNm = 0;

	do
	{
		cout << "Enter room number: ";
		cin >> txtRoom;
	}
	while(txtRoom < 1 and txtRoom > 513);

	switch(txtRoom)
	{
		case 100 ... 299:
			intRmNm = txtRoom;
			lblMessage = "Offices";
			cout << lblMessage << endl;
		break;
		case 300 ... 400:
			intRmNm = txtRoom;
			lblMessage = "Biological Science";
			cout << lblMessage << endl;
		break;

	}



}
