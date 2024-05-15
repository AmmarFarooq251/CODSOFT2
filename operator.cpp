#include<iostream>
using namespace std;
int main()
{
double number1,number2;
char operators;
cout<<"Enter the first number=";
cin>>number1;
cout<<"Enter the second number=";
cin>>number2;
cout<<"Enter the operator you want to perform(+,-,/,*)=";
cin>>operators;
// Doing it by switch statement
switch(operators)
{
	case'+':
	{
		int sum=number1+number2;
	cout<<"The sum is="<<sum<<endl;
	break;
	}
	case'-':
		{
			int subtraction=number1-number2;
		cout<<"the subtraction is="<<subtraction<<endl;
		break;
		}
		case'/':
			{
				int division=number1/number2;
			cout<<"The division is="<<division<<endl;
			break;
		}
			case'*':
				{
				int product=number1*number2;
				cout<<"The multiplication is="<<product<<endl;
				break;
			}
				default:
					cout<<"Invalid operator";
}
return 0;
}
