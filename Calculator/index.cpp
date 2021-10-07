#include "Header.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); //Português caracteres
	system("Color 0a"); //Cor do texto e fundo
	
	float num1, num2; //Variáveis
	char equal;

	var(&num1, &num2, &equal); //Função de recebimento de dados
	res(num1, num2, equal); //Função de calculo
}