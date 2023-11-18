#include "GitCalc.h"

double GitCalc::add(double a, double b) {
    return a + b;
}
double GitCalc::mod(int a, int b){
    return a % b;
 }
double GitCalc::sub(double a,double b)
{
	return a-b;
}
double GitCalc::mul(double a,double b)

{

	return a*b;
}

double GitCalc::divide(double a, double b)
{
	if(a == 0 || b == 0)
	{
		cout << "Error: Divison by zero\n";
		return 0;
	}
	return a / b;
}




/*
.
.
.
.
*/
