#include <iostream>

int sum(int variable1 , int variable2)
{
    int result= variable1 + variable2;
    return result;
}

int diff(int variable1 , int variable2)
{
    int result=variable1 - variable2;
    return result;
}

int multiplication( int variable1 ,int variable2)
{
    int result = variable1 * variable2;
    return result;
}

double division(double variable1, double variable2)
{
    double result= variable1 / variable2;
    return result;
}

int main(int argc, char** argv)
{
	int a = 5, b = 10;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	return 0;
}