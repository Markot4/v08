#pragma once
#include<string>
#include<iostream>

namespace vsite::oop::v8
{
	class base_exception {
	public:
		virtual std::string what() const = 0;
		virtual ~base_exception() = default;
	};

	class not_number : public base_exception {
	public:
		std::string what() const override { return "not a number"; }
	};

	class divide_zero : public base_exception { // Promijenjeno u public
	public:
		std::string what() const override { return "divided by zero"; }
	};

	class not_operator : public base_exception { // Promijenjeno u public
	public:
		std::string what() const override { return "invalid operation"; }
	};

	int input_num(std::istream& is);

	char input_op(std::istream& is);

	double calc(int a, char op, int b);
}
