#include "Header.h"

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); //Portugu�s caracteres
	system("Color 0a"); //Cor do texto e fundo
	
	float num1, num2; //Vari�veis
	char equal;

	var(&num1, &num2, &equal); //Fun��o de recebimento de dados
	res(num1, num2, equal); //Fun��o de calculo
}