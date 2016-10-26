#ifndef   __PONTO_H__  
#define   __PONTO_H__  
#include <stdio.h>

class ponto
{
	private:
	int x, y;
	public:
	ponto();
	ponto(int val1, int val2);
	void setx(int valor);
	void sety(int valor);
	int getx();
	int gety();
	void imprime();
	
};

#endif	
