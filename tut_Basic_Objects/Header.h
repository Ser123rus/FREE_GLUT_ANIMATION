#pragma once
#ifndef DRAWLIB_H
#define DRAWLIB_H

#include <GL/freeglut.h>
#include <ctime>
#define _USE_MATH_DEFINES
#include <cmath>

struct Figure {
	float r, g, b;
	float x, y;
	float s;
};

extern clock_t curTime, startTime;

void animateScene(int value);
void drawTree(float r, float g, float b);
void drawHouse(Figure f);
void drawCat(Figure f);
void drawKotik(Figure f);
void drawNebo(float r, float g, float b);
void drawCar(Figure f);
void drawFlag(Figure f);
void drawSun();
void drawMush(Figure f);
void drawBCat(Figure f);
void draw();

#endif