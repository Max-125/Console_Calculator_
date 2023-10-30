#include <iostream>
#include "Header.h"

/// Constructor
Scientific::Scientific() : Calculator() {}

/// welcome message to show scientific options
void Scientific::welcome() const
{
    std::cout << "\n\nEnter one of:\n"
        << "sin, cos, log, tan, cot, ln, abs , arcsin , arccos , arctg , arccot , log_10^a , \nlog_2^a , sinh , cosh , tanh , coth , sech , csch , sec , arsinh , arcosh ,\nartanh , arcoth , arsech , sign \n"
        << "or exit\n";
}

void Scientific::parseOperation(const std::string& input)
{
    Calculator::parseOperation(input);

    if (input == "sin")
    {
        sin();
    }
    else if (input == "cos")
    {
        cos();
    }
    else if (input == "tan")
    {
        tan();
    }
    else if (input == "cot")
    {
        cot();
    }
    else if (input == "log")
    {
        log();
    }
    else if (input == "abs")
    {
        abs();
    }
    else if (input == "ln")
    {
        ln();
    }
    else if (input == "arcsin")
    {
        arcsin();
    }
    else if (input == "arccos")
    {
        arccos();
    }
    else if (input == "arctg")
    {
        arctg();
    }
    else if (input == "arccot")
    {
        arccot();
    }
    else if (input == "log_10^a")
    {
        log_10();
    }
    else if (input == "log_2^a")
    {
        log_2();
    }
    else if (input == "sinh")
    {
        sin_h();
    }
    else if (input == "cosh")
    {
        cos_h();
    }
    else if (input == "tanh")
    {
        tgh();
    }
    else if (input == "coth")
    {
        cot_h();
    }
    else if (input == "sech")
    {
        sec_h();
    }
    else if (input == "csch")
    {
        csc_h();
    }
    else if (input == "arsinh")
    {
        arsinh();
    }
    else if (input == "arcosh")
    {
        arcosh();
    }
    else if (input ==  "artanh")
    {
        artanh();
    }
    else if (input == "arcoth")
    {
        arcoth();
    }
    else if (input == "arsech")
    {
        arsech();
    }
    else if (input == "sign")
    {
        sign();
    }
}

void Scientific::sign()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::signbit(a);
    std :: cout << "The result is = " << result;
}

void Scientific::arsech() 
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std :: log(std :: sqrt(1 / (a * a) - 1) + 1 / a);
    std::cout << "The result is = " << result;
}

void Scientific::arcoth()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = 0.5 * std :: log((a + 1) / (a - 1));
    std::cout << "The result is = " << result;
}

void Scientific::artanh()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::atanh(a);
    std::cout << "The result is = " << result;
}

void Scientific::arcosh()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::acosh(a);
    std::cout << "The result is = " << result;
}

void Scientific::arsinh()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::asinh(a);
    std::cout << "The result is = " << result;
}

void Scientific::csc_h()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = 1 / std::sinh(a);
    std::cout << "The result is = " << result;
}

void Scientific::sec_h()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = 1 / std::cosh(a);
    std::cout << "The result is = " << result;
}

void Scientific::cot_h()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = 1 / std::tanh(a);
    std::cout << "The result is = " << result;
}

void Scientific::tgh()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::tanh(a);
    std::cout << "The result is = " << result;
}

void Scientific::cos_h()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::cosh(a);
    std::cout << "The result is = " << result;
}

void Scientific ::sin_h()
{
    double a;
    std::cout << "Enter value : ";
    std::cin >> a;
    result = std::sinh(a);
    std::cout << "The result is = " << result;
}

void Scientific::log_2()
{
    double a;
    std::cout << "Enter value of logarithm : ";
    std::cin >> a;
    result = std::log(a) / std::log(2);
    std::cout << "The result is = " << result;
}

void Scientific::log_10()
{
    double a;
    std::cout << "Enter value of logarithm : ";
    std::cin >> a;
    result = std::log(a) / std::log(10);
    std::cout << "The result is = " << result;
}

void Scientific::arccot()
{
    double a;
    std::cout << "Enter number is radians : ";
    std::cin >> a;
    result = 3.14159 / 2 - std :: atan(a);
    std::cout << "The result is = " << result;
}

void Scientific::arctg()
{
    double a;
    std::cout << "Enter number in radians : ";
    std::cin >> a;
    result = std::atan(a);
    std::cout << "The result is = " << result;
}

void Scientific::arccos()
{
    double a;
    std::cout << "Enter a number in radians : ";
    std::cin >> a;
    result = std::acos(a);
    std::cout << "The result is = " << result;
}

void Scientific:: arcsin()
{
    double a;
    std::cout << "Enter a number in radians : ";
    std::cin >> a;
    result = std::asin(a);
    std::cout << "The result is = " << result;
}

void Scientific::sin()
{
    double a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    result = std::sin(a);
    std::cout << "The result is = " << result;
}

void Scientific::cos()
{
    double a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    result = std::cos(a);
    std::cout << "The result is = " << result;
}

void Scientific::tan()
{
    double a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    result = std::tan(a);
    std::cout << "The result is = " << result;
}

void Scientific::cot()
{
    double a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    result = 1.0 / std::tan(a); 
    std::cout << "The result is = " << result;
}

void Scientific::ln()
{
    double a;
    std::cout << "Enter a number : ";
    std::cin >> a;
    result = std::log(a);
    std::cout << "The result is = " << result;
}

void Scientific::log()
{
    double a ,b ;
    std::cout << "Enter a base : ";
    std::cin >> a;
    std :: cout << "Enter a number : ";
    std::cin >> b;
    result = std::log(b) / std::log(a);
    std::cout << "The result is = " << result;
}

void Scientific::abs()
{
    double a, b;
    std::cout << "Enter a base : ";
    std::cin >> a;
    result = std::abs(a);
    std::cout << "The result is = " << result;
}




