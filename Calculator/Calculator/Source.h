#pragma once
#ifndef SOURCE_H
#define SOURCE_H

#include <string>
#include <array>
#include <cmath>


class Calculator
{
public:
    Calculator();           /// Constructor
    virtual ~Calculator() = default;    /// Virtual destructor to prevent delete errors
    void add();           
    void subtract();
    void multiply();
    void divide();
    void square();
    void squareOfNum();
    void number_in_E_square();
    void cube();
    void sqrt();
    void cbrt();
    

    void setMem();          /// Functions to get and set mem
    void printMem() const;

    /// Parse input subs in number value when strings result or mem are entered
    //double parseInput(const std :: string &) const;

    /// provides data on user options, will be overloaded
    virtual void welcome() const;

    /// parse input and decide which member func to call
    virtual void parseOperation(const std::string&);


protected:
    double result;      /// data member to store result
    double mem;         /// data member to store mem
};


#endif