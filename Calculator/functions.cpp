#include "Header.h"

float var(float* num1, float* num2, char* equal)
{
	std::cout << "Adicione o primeiro n�mero: ";
	std::cin >> *num1; //Primeiro N�mero
	std::cout << "Adicione o segundo n�mero: ";
	std::cin >> *num2; //Segundo N�mero
	std::cout << "Escolha uma opera��o: \n + = adi��o \n - = subtra��o \n * = multiplica��o \n / = divis�o \n r = raiz quadrada \n p = pot�ncia\n";
	std::cin >> *equal; //Escolha da equa��o

	return 0.0;
}

float res(float num1, float num2, char equal)
{
	switch (equal)
	{
	case '+':
		std::cout << "res: " << (num1 + num2) << '\n'; //Adi��o
		system("Pause");
		break;
	case '-':
		std::cout << "res: " << (num1 - num2) << '\n'; //Subtra��o
		system("Pause");
		break;
	case '*':
		std::cout << "res: " << (num1 * num2) << '\n'; //Multiplica��o
		system("Pause");
		break;
	case '/':
		std::cout << "res: " << (num1 / num2) << '\n'; //Divis�o
		system("Pause");
		break;
	case 'r':
		std::cout << "res1 " << num1 << ": " << sqrt(num1) << '\n'; //Raiz Quadrada
		std::cout << "res2 " << num2 << ": " << sqrt(num2) << '\n';
		system("Pause");
		break;
	case 'p':
		std::cout << "res1 " << num1 << ": " << pow(num1, 2) << '\n'; //Pot�ncia
		std::cout << "res2 " << num2 << ": " << pow(num2, 2) << '\n';
		system("Pause");
		break;
	default:
		exit(0);
		break;
	}

	return 0.0f;
}