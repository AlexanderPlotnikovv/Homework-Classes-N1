#include <iostream>

class Calculator
{
public:
	double num1;
	double num2;
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
	for (;;) {
		std::cout << "Enter num1: ";
		std::cin >> num.num1;
		std::cout << "Enter num2: ";
		std::cin >> num.num2;
		if (num.set_num1(num.num1) == 0 || num.set_num2(num.num2) == 0) {
			std::cout << "Incorrect input!" << std::endl;
			continue;
		}
		std::cout << num.num1 << " + " << num.num2 << " = " << num.add(num.num1, num.num2) << std::endl;
		std::cout << num.num1 << " - " << num.num2 << " = " << num.subtract_1_2(num.num1, num.num2) << std::endl;
		std::cout << num.num2 << " - " << num.num1 << " = " << num.subtract_2_1(num.num1, num.num2) << std::endl;
		std::cout << num.num1 << " * " << num.num2 << " = " << num.multiply(num.num1, num.num2) << std::endl;
		std::cout << num.num1 << " / " << num.num2 << " = " << num.divide_1_2(num.num1, num.num2) << std::endl;
		std::cout << num.num2 << " / " << num.num1 << " = " << num.divide_2_1(num.num1, num.num2) << std::endl;
	}
}