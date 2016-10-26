#ifndef __LABIRINTO_H__
#define __LABIRINTO_H__
#include <stdio.h>

class labirinto
{
	public:
	virtual bool isEmpty(const Point& ponto) = 0;
	virtual int getWidth() = 0;
	virtual int getHeight() = 0;
	virtual int getRobot() = 0;
	virtual ponto getIniPos() = 0;
	virtual void loadMaze() = 0;
};
#endif


/*  
    isEmpty: retorna true se a posição passada como parâmetro está vazia.
    getWidth, getHeight: retorna dimensões do labirinto (largura e altura).
    getRobot: retorna o tipo de robô lido do arquivo (1, 2 ou 3).
    getIniPos: retorna a posição inicial para o robô, lida do arquivo.
    loadMaze: carrega o labirinto para a memória, esse método deve terminar o programa caso não consiga ler corretamente os dados.
*/
