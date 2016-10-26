#ifndef __ROBO_H__
#define __ROBO_H__
#include <stdio.h>

class robo
{
	public:

	robo(const Point& pos_inicial, Labirinto* lab, int maxSteps);
	virtual void draw() = 0;
	void move(const Point& pos) { this->pos = pos; }
	virtual void generateSteps() = 0;
	vector<Point> getSteps() { return steps; }

	protected:

	Point posIni;
	labirinto* lab;
	int maxSteps;
	vector<Point> steps;
};
#endif




