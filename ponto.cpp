#include "ponto.h"

ponto::ponto()
{
	x = y = 0;
}

void ponto::setx(int valor)
{
	x = valor;
}

void ponto::sety(int valor)
{
	y = valor;
}

int ponto::getx()
{
	return x;
}

int ponto::gety()
{
	return y;
}

ponto::ponto(int val1, int val2)
{
	x = val1;
	y = val2;
} 
void ponto::imprime()
{
	printf("\n dados do ponto : x= %d, y = %d\n", x , y);
}
