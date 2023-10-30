#include <iostream>
#include <iomanip>
#include "Source.h"

/// Initilize data members to 0 doubles
Calculator::Calculator() : result(0.0), mem(0.0) {};

void Calculator::add()
{
	double a, b;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	std::cout << "Enter the second num : ";
	std::cin >> b;
	result = a + b;
	std::cout << "Result is = " << result;
}

void Calculator::subtract()
{
	double a, b;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	std::cout << "Enter the second num : ";
	std::cin >> b;
	result = a - b;
	std::cout << "Result is = " << result;
}

void Calculator::multiply()
{
	double a, b;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	std::cout << "Enter the second num : ";
	std::cin >> b;
	result = a * b;
	std::cout << "Result is = " << result;
}

void Calculator::divide()
{
	double a, b;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	std::cout << "Enter the second num : ";
	std::cin >> b;
	result = a / b;
	std::cout << "Result is = " << result;
}

void Calculator::square()
{
	double a;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	result = a * a;
	std::cout << "Result is = " << result;
}

void Calculator::cube()
{
	double a;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	result = std :: pow (a , 3);
	std::cout << "Result is = " << result;
}

void Calculator::squareOfNum()
{
	double a , b;
	std::cout << "Enter the base : ";
	std::cin >> a;
	std::cout << "Enter the value : ";
	std::cin >> b;
	result = std :: pow(a , b);
	std::cout << "Result is = " << result;
}

void Calculator::number_in_E_square()
{
	double a;
	std::cout << "Enter the number : ";
	std::cin >> a;
	result = exp(a);
	std::cout << "Result is = " << result;
}

void Calculator::sqrt()
{
	double a;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	result = std::sqrt(a);
	std::cout << "Result is = " << result;
}

void Calculator::cbrt() 
{
	double a;
	std::cout << "Enter the first num : ";
	std::cin >> a;
	result = std::cbrt(a);
	std::cout << "Result is = " << result;
}

void Calculator::setMem()
{
	double a;
	std::cout << "Enter a number : ";
	std::cin >> a;
	mem = a;
	std::cout << "The mem is " << mem;
}

void Calculator::printMem() const 
{
	std::cout << "The mem is " << mem;
}


/*
* double Calculator::parseInput(const std :: string& input) const
{
	if (input == "result")
	{
		return result;
	}
	else if (input == "mem")
	{
		return mem;
	}
	else 
	{
		return std::stod(input);
	}
}

*/

void Calculator::welcome() const
{
	std :: cout << "\n\nEnter an operation (+, -, /, *, sqrt , cbrt, square, squareOfNum , num^3 , e^num , change, setmem, printmem) or exit\n";
}

void Calculator::parseOperation(const std::string& input)
{
	if (input == "+" || input == "add" || input == "addition" || input == "sum")
	{
		add();
	}
	else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus")
	{
		subtract();
	}
	else if (input == "/" || input == "divide" || input == "div")
	{
		divide();
	}
	else if (input == "*" || input == "mul" || input == "multiply" || input == "times")
	{
		multiply();
	}
	else if (input == "sqrt")
	{
		sqrt();
	}
	else if (input == "square")
	{
		square();
	}
	else if (input == "squareOfNum")
	{
		squareOfNum();
	}
	else if (input == "num^3")
	{
		cube();
	}
	else if (input ==  "e^num")
	{
		number_in_E_square();
	}
	else if (input == "cbrt")
	{
		cbrt();
	}
	else if (input == "setmem")
	{
		setMem();
	}
	else if (input == "printmem")
	{
		printMem();
	}
}



