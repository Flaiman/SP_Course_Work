#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
int Calculator::Del(double a, double b)
{
    return a / b;
}
int Calculator::Mul10(double a, double b)
{
    return a * b*10;
}