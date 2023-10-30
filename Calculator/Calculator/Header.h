#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <string>
#include <array>
#include <cmath>
#include "Source.h"

class Scientific : public Calculator
{
public :
	Scientific();
	virtual ~Scientific() = default;
	virtual void welcome() const override;
	virtual void parseOperation(const std::string& input) override;

	void sin();
	void cos();
	void tan();
	void cot();
	void ln();
	void log();
	void abs();

	void sign();
	void arsech();
	void arcoth();
	void artanh();
	void arcosh();
	void arsinh();
	void csc_h();
	void sec_h();
	void cot_h();
	void tgh();
	void cos_h();
	void sin_h();
	void log_2();
	void log_10();
	void arcsin();
	void arccos();
	void arctg();
	void arccot();
};

#endif // 
