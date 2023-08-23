#include <iostream>


int sum(int num1, int num2 = 0, int num3 = 0, int num4 = 0, int num5 = 0) {
	return num1 + num2 + num3 + num4 + num5;
}

inline double mean(double num1, double num2, double num3) {
	return (num1 + num2 + num3) / 3;
}


int max(int num1, int num2, int num3) {
	std::cout << "Type int:\t";
	return (num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3));
}

short max(short num1, short num2, short num3) {
	std::cout << "Type short:\t";
	return (num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3));
}

double max(double num1, double num2, double num3) {
	std::cout << "Type double:\t";
	return (num1 > (num2 > num3 ? num2 : num3) ? num1 : (num2 > num3 ? num2 : num3));
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n;


	// Задача 1. Функция сложения с параметрами по умолчанию
	std::cout << "Задача 1.\nСложение от 1 до 5 чисел.\n";
	
	std::cout << "1 + 0 + 0 + 0 + 0 = " << sum(1) << std::endl;
	std::cout << "1 + 2 + 0 + 0 + 0 = " << sum(1,2) << std::endl;
	std::cout << "1 + 2 + 3 + 0 + 0 = " << sum(1,2,3) << std::endl;
	std::cout << "1 + 2 + 3 + 4 + 0 = " << sum(1,2,3,4) << std::endl;
	std::cout << "1 + 2 + 3 + 4 + 5 = " << sum(1,2,3,4,5) << std::endl;
	std::cout << "\n\n";

	// Задча 2. Встраиваемая функция среднего арифметического
	std::cout << "Задача 2.\nФункция расчета среднего арифметического 3х чисел.\n";

	std::cout << "Сред. арифметическое чисел 1,2,3 -> " << mean(1, 2, 3) << std::endl;
	std::cout << "Сред. арифметическое чисел 2,2,3 -> " << mean(2, 2, 3) << std::endl;
	std::cout << "Сред. арифметическое чисел 3,5,5 -> " << mean(3, 5, 5) << std::endl;

	std::cout << "\n\n";

	// Задача 3. Перегруженные функции максимума 3х чисел.
	std::cout << "Задача 3.\nПерегруженная функция максимум 3х чисел.\n";

	std::cout << "Максимум из чисел 1, 2, 3 -> " << max(3, 2, 1) << std::endl;
	std::cout << "Максимум из чисел 1.1, 1.2, 1.3 -> " << max(1.3, 1.2, 1.1) << std::endl;
	std::cout << "Максимум из чисел 5, 9, 1 -> " << max((short)5, (short)9, (short)1) << std::endl;

	return 0;
}