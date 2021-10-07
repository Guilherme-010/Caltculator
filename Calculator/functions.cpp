#include "Header.h"

float var(float* num1, float* num2, char* equal)
{
	std::cout << "Adicione o primeiro número: ";
	std::cin >> *num1; //Primeiro Número
	std::cout << "Adicione o segundo número: ";
	std::cin >> *num2; //Segundo Número
	std::cout << "Escolha uma operação: \n + = adição \n - = subtração \n * = multiplicação \n / = divisão \n r = raiz quadrada \n p = potência\n";
	std::cin >> *equal; //Escolha da equação

	return 0.0;
}

float res(float num1, float num2, char equal)
{
	switch (equal)
	{
	case '+':
		std::cout << "res: " << (num1 + num2) << '\n'; //Adição
		system("Pause");
		break;
	case '-':
		std::cout << "res: " << (num1 - num2) << '\n'; //Subtração
		system("Pause");
		break;
	case '*':
		std::cout << "res: " << (num1 * num2) << '\n'; //Multiplicação
		system("Pause");
		break;
	case '/':
		std::cout << "res: " << (num1 / num2) << '\n'; //Divisão
		system("Pause");
		break;
	case 'r':
		std::cout << "res1 " << num1 << ": " << sqrt(num1) << '\n'; //Raiz Quadrada
		std::cout << "res2 " << num2 << ": " << sqrt(num2) << '\n';
		system("Pause");
		break;
	case 'p':
		std::cout << "res1 " << num1 << ": " << pow(num1, 2) << '\n'; //Potência
		std::cout << "res2 " << num2 << ": " << pow(num2, 2) << '\n';
		system("Pause");
		break;
	default:
		exit(0);
		break;
	}

	return 0.0f;
}