#include <iostream>
using namespace std;
int main ()
{
	char op;
	double num1, num2, result;
	
	cout << "enter the operator (+, -, *, /): ";
	cin >> op; 
	cout <<"Enter two numbers: "; 
	cin >> num1 >> num2;
	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
			
		case '-':
			result = num1 - num2;
			break;
		
		case '*':
			result = num1 * num2;
			break;
		
		case '/':
			if (num2 !=0)
			{
				result = num1 / num2 ;
			}
			else 
			{
				cout << "error: division by zero is not allowed"; 
				return 1; 	
			}
			break;
			
		default:
			cout << "error ! operator is not correct"; 
			return 1;
	}
	
	 cout << "result:" << result << endl; 
	 return 0 ;
	 
}
