#include <iostream>

class Calculator
{
protected:
	double num1;
	double num2;
public:
	int equal1(int a) {
		num1 = a;
		return num1;
	}
	int equal2(int a) {
		num2 = a;
		return num2;
	}
	double add(double num1, double num2) {
		return num1 + num2;
	}
	double multiply(double num1, double num2) {
		return num1 * num2;
	}
	double subtract_1_2(double num1, double num2) {
		return num1 - num2;
	}
	double subtract_2_1(double num1, double num2) {
		return -num1 + num2;
	}
	double divide_1_2(double num1, double num2) {
		return num1 / num2;
	}
	double divide_2_1(double num1, double num2) {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return 1;
		} return 0;
	}
	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return 1;
		} return 0;
	}
};

int main()
{
	Calculator num;
	int a, b;
	for (;;) {
		std::cout << "Enter num1: ";
		std::cin >> a;
		std::cout << "Enter num2: ";
		std::cin >> b;
		if (num.set_num1(num.equal1(a)) == 0 || num.set_num2(num.equal2(b)) == 0) {
			std::cout << "Incorrect input!" << std::endl;
			continue;
		}
		std::cout << num.equal1(a) << " + " << num.equal2(b) << " = " << num.add(num.equal1(a), num.equal2(b)) << std::endl;
		std::cout << num.equal1(a) << " - " << num.equal2(b) << " = " << num.subtract_1_2(num.equal1(a), num.equal2(b)) << std::endl;
		std::cout << num.equal2(b) << " - " << num.equal1(a) << " = " << num.subtract_2_1(num.equal1(a), num.equal2(b)) << std::endl;
		std::cout << num.equal1(a) << " * " << num.equal2(b) << " = " << num.multiply(num.equal1(a), num.equal2(b)) << std::endl;
		std::cout << num.equal1(a) << " / " << num.equal2(b) << " = " << num.divide_1_2(num.equal1(a), num.equal2(b)) << std::endl;
		std::cout << num.equal2(b) << " / " << num.equal1(a) << " = " << num.divide_2_1(num.equal1(a), num.equal2(b)) << std::endl;
	}
}