#include "drawlib.h"


extern float colorSky;
extern int isDay;
extern float alpha;
extern float beta;
extern float phi;

Figure Cat, House, Mush, Kotik, Flag, Car, f, bc;

void drawCar(Figure f) {
	//kuzov
	glBegin(GL_QUADS);
	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.6, -0.1);
	glVertex2f(-0.6, 0.1);
	glVertex2f(0.3, 0.1);
	glVertex2f(0.3, -0.1);

	//okna
	glBegin(GL_QUADS);
	glColor3f(0.9, 0.5, 0.0);
	glVertex2f(-0.6, 0.1);
	glVertex2f(-0.5, 0.3);
	glVertex2f(-0.1, 0.3);
	glVertex2f(0.1, 0.1);
	glEnd();

	//bamper
	glBegin(GL_TRIANGLES);
	glColor3f(0.5, 0.0, 0.0);
	glVertex2f(0.3, -0.1);
	glVertex2f(0.3, 0.1);
	glVertex2f(0.4, -0.1);
	glEnd();

	//kolesa
	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 16) {
		glColor3f(0.9, 0.9, 0.6);
		glVertex2f((cos(i) / 11) + -0.4, (sin(i) / 11) + -0.1);
	}
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 16) {
		glColor3f(0.9, 0.9, 0.6);
		glVertex2f((cos(i) / 11) + 0.2, (sin(i) / 11) + -0.1);
	}
	glEnd();
	glPopMatrix();
}

void drawHouse(Figure f) {
	//трубоход
	glBegin(GL_QUADS);
	glColor3f(.70, .30, .20);
	glVertex2f(0.340, 0.10);
	glVertex2f(0.100, 0.10);
	glVertex2f(0.100, 0.55);
	glVertex2f(0.340, 0.55);
	glEnd();

	//крыша
	glBegin(GL_TRIANGLES);
	glColor3f(0.8, 0.4, 0.0);
	glVertex2f(0.5, 0.0);
	glVertex2f(-0.5, 0.0);
	glVertex2f(0.0, 0.6);

	glColor3f(.54, .27, .228);
	glVertex2f(0.49, 0.0);
	glVertex2f(1.0, 0.0);
	glVertex2f(1.0, 0.5);
	glEnd();

	//линии на крышу
	glBegin(GL_LINES);
	glColor3f(.0, .0, .0);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.0, 0.6);

	glColor3f(.0, .0, .0);
	glVertex2f(0.1, 0.0);
	glVertex2f(0.1, 0.48);

	glColor3f(.0, .0, .0);
	glVertex2f(0.2, 0.0);
	glVertex2f(0.2, 0.35);

	glColor3f(.0, .0, .0);
	glVertex2f(0.3, 0.0);
	glVertex2f(0.3, 0.24);

	glColor3f(.0, .0, .0);
	glVertex2f(0.4, 0.0);
	glVertex2f(0.4, 0.12);

	glColor3f(.0, .0, .0);
	glVertex2f(-0.1, 0.0);
	glVertex2f(-0.1, 0.48);

	glColor3f(.0, .0, .0);
	glVertex2f(-0.2, 0.0);
	glVertex2f(-0.2, 0.35);

	glColor3f(.0, .0, .0);
	glVertex2f(-0.3, 0.0);
	glVertex2f(-0.3, 0.24);

	glColor3f(.0, .0, .0);
	glVertex2f(-0.4, 0.0);
	glVertex2f(-0.4, 0.12);

	//дым
	glBegin(GL_LINES);
	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.150, 0.60);
	glVertex2f(0.170, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.170, 0.60);
	glVertex2f(0.190, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.190, 0.60);
	glVertex2f(0.210, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.210, 0.60);
	glVertex2f(0.230, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.230, 0.60);
	glVertex2f(0.250, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.250, 0.60);
	glVertex2f(0.270, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.270, 0.60);
	glVertex2f(0.290, 0.85);

	glColor3f(0.9, 0.1, 0.1);
	glVertex2f(0.290, 0.60);
	glVertex2f(0.310, 0.85);
	glEnd();
	//детали дома
	glBegin(GL_QUADS);
	glColor3f(.320, .170, .120);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.5, -0.65);
	glVertex2f(-0.5, -0.65);
	glVertex2f(-0.5, -0.0);

	glColor3f(f.r, f.g, f.b);
	glVertex2f(0.1, -0.110);
	glVertex2f(0.40, -0.110);
	glVertex2f(0.40, -0.5);
	glVertex2f(0.1, -0.5);

	glColor3f(.45, .34, .25);
	glVertex2f(-0.350, -0.25);
	glVertex2f(-0.110, -0.25);
	glVertex2f(-0.110, -0.65);
	glVertex2f(-0.350, -0.65);
	//детали газона
	glBegin(GL_QUADS);
	glColor3f(.0, .2, .0);
	glVertex2f(0.5, -0.65);
	glVertex2f(1.0, -0.99);
	glVertex2f(-1.0, -0.99);
	glVertex2f(-0.5, -0.65);

	glColor3f(.1, .1, .1);
	glVertex2f(-0.09, -0.65);
	glVertex2f(0.5, -0.99);
	glVertex2f(-0.09, -0.99);
	glVertex2f(-0.35, -0.65);
	//гараж
	glBegin(GL_QUADS);
	glColor3f(.330, .160, .140);
	glVertex2f(0.5, 0.0);
	glVertex2f(0.5, -0.65);
	glVertex2f(1.0, -0.65);
	glVertex2f(1.0, 0.0);

	glColor3f(.330, .300, .340);
	glVertex2f(0.6, -0.2);
	glVertex2f(0.6, -0.65);
	glVertex2f(1.0, -0.65);
	glVertex2f(1.0, -0.2);
	glEnd();
	//линии гаража
	glBegin(GL_LINES);
	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.25);
	glVertex2f(0.99, -0.25);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.3);
	glVertex2f(0.99, -0.3);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.35);
	glVertex2f(0.99, -0.35);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.4);
	glVertex2f(0.99, -0.4);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.45);
	glVertex2f(0.99, -0.45);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.50);
	glVertex2f(0.99, -0.50);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.55);
	glVertex2f(0.99, -0.55);

	glColor3f(.0, .0, .1);
	glVertex2f(0.6, -0.60);
	glVertex2f(0.99, -0.60);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.1, .1, .1);
	glVertex2f(0.5, -0.65);
	glVertex2f(0.879, -0.99);
	glVertex2f(1.0, -0.99);
	glVertex2f(1.0, -0.65);
	glEnd();
}

void drawTree(float r, float g, float b) {

	//ствол
	glBegin(GL_QUADS);
	glColor3f(r, g, b);
	glVertex2f(-0.15, -0.4);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.15, -0.4);
	glEnd();

	//ветки
	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.6, 0.0);
	glVertex2f(-0.35, -0.1);
	glVertex2f(0.0, 0.25);
	glVertex2f(0.35, -0.1);

	glColor3f(0.0, 0.6, 0.0);
	glVertex2f(-0.25, 0.25);
	glVertex2f(0.0, 0.5);
	glVertex2f(0.25, 0.25);

	glColor3f(0.0, 0.6, 0.0);
	glVertex2f(-0.15, 0.45);
	glVertex2f(0.0, 0.7);
	glVertex2f(0.15, 0.45);
	glEnd();
}

void drawMush(Figure f) {
	glTranslatef(f.x, f.y, 1);

	glBegin(GL_QUADS);
	glColor3f(0.9, 0, 0);
	glVertex2f(-0.05, -0.2);
	glVertex2f(-0.05, 0.05);
	glVertex2f(0.05, 0.05);
	glVertex2f(0.05, -0.2);

	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.2, 0.0);
	glVertex2f(-0.15, 0.1);
	glVertex2f(0.15, 0.1);
	glVertex2f(0.2, 0.0);

	glEnd();
}

void drawCat(Figure f) {
	glTranslatef(f.x, f.y, 0);
	glBegin(GL_TRIANGLES);

	//морда
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.3, 0.5);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.0, 0.2);

	//тело
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.0, 0.2);
	glVertex2f(0.3, -0.5);
	glVertex2f(-0.3, -0.5);

	//хвост
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.6, 0.05);
	glVertex2f(0.2, -0.3);
	glVertex2f(-0.2, -0.4);

	//левый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.2, 0.45);
	glVertex2f(-0.15, 0.4);
	glVertex2f(-0.25, 0.45);

	//правый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(0.2, 0.45);
	glVertex2f(0.15, 0.4);
	glVertex2f(0.25, 0.45);

	//левое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.2, 0.5);

	//правое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.2, 0.5);

	//нос
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.03, 0.3);
	glVertex2f(0.0, 0.26);
	glVertex2f(0.03, 0.3);
	glEnd();
	glTranslatef(-f.x, -f.y, 0);
}

void drawKotik(Figure f) {
	glTranslatef(f.x, f.y, 0);
	glBegin(GL_TRIANGLES);

	//морда
	glColor3f(0.9, 0.5, 0.2);
	glVertex2f(-0.3, 0.5);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.0, 0.2);

	//тело
	glColor3f(0.9, 0.5, 0.2);
	glVertex2f(-0.0, 0.2);
	glVertex2f(0.3, -0.5);
	glVertex2f(-0.3, -0.5);

	//хвост
	glColor3f(0.9, 0.5, 0.2);
	glVertex2f(0.6, 0.05);
	glVertex2f(0.2, -0.3);
	glVertex2f(-0.2, -0.4);

	//левый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.2, 0.45);
	glVertex2f(-0.15, 0.4);
	glVertex2f(-0.25, 0.45);

	//правый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(0.2, 0.45);
	glVertex2f(0.15, 0.4);
	glVertex2f(0.25, 0.45);

	//левое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.2, 0.5);

	//правое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.2, 0.5);

	//нос
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.03, 0.3);
	glVertex2f(0.0, 0.26);
	glVertex2f(0.03, 0.3);
	glEnd();
	glTranslatef(-f.x, -f.y, 0);
}

void drawNebo(float r, float g, float b) {

	glBegin(GL_QUADS);
	glColor3f(r, g, b);
	glVertex2f(-1.0, -1.0);
	glVertex2f(-1.0, 1.0);
	glVertex2f(1.0, 1.0);
	glVertex2f(1.0, -1.0);
	glEnd();
}

void drawFlag(Figure f) {

	glBegin(GL_QUADS);
	glColor3f(0.6, 0.3, 0.0);
	glVertex2f(-0.5, 0.0);
	glVertex2f(-0.5, 0.7);
	glVertex2f(-0.4, 0.7);
	glVertex2f(-0.4, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.4, 0.7);
	glVertex2f(-0.2, 0.6);
	glVertex2f(-0.4, 0.5);
	glEnd();
}

void drawSun() {

	glBegin(GL_TRIANGLE_FAN);
	for (float i = 0; i < 2 * M_PI; i += M_PI / 16) {
		glColor3f(0.84, 0.87, 0.03);
		glVertex2f((cos(i) / 6) + 00.78, (sin(i) / 6) + 0.78);
	}
	glEnd();
}

void animateScene(int value) {

	if (colorSky <= 0)
	{
		isDay = 1;
		alpha = 150;
	}
	if (colorSky >= 0.5)
	{
		isDay = 0;
	}
	if (isDay == 1)
	{
		colorSky += 0.001;
	}
	if (isDay == 0)
	{
		colorSky -= 0.001;
	}
	alpha -= 0.375;

	glutPostRedisplay();
	glutTimerFunc(1000 / 60, animateScene, 1);
}

void drawBCat(Figure f) {
	glBegin(GL_TRIANGLES);
	//морда
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.3, 0.5);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.0, 0.2);

	//тело
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(-0.0, 0.2);
	glVertex2f(0.3, -0.5);
	glVertex2f(-0.3, -0.5);

	//хвост
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(0.6, 0.05);
	glVertex2f(0.2, -0.3);
	glVertex2f(-0.2, -0.4);

	//левый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(-0.2, 0.45);
	glVertex2f(-0.15, 0.4);
	glVertex2f(-0.25, 0.45);

	//правый глаз
	glColor3f(f.r, f.g, f.b);
	glVertex2f(0.2, 0.45);
	glVertex2f(0.15, 0.4);
	glVertex2f(0.25, 0.45);

	//левое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.3, 0.5);
	glVertex2f(-0.4, 0.6);
	glVertex2f(-0.2, 0.5);

	//правое ухо
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(0.3, 0.5);
	glVertex2f(0.4, 0.6);
	glVertex2f(0.2, 0.5);

	//нос
	glColor3f(0.8, 0.0, 0.0);
	glVertex2f(-0.03, 0.3);
	glVertex2f(0.0, 0.26);
	glVertex2f(0.03, 0.3);
	glEnd();
}

void draw() {

	curTime = clock() - startTime;

	Cat.r = 0;
	Cat.g = sin(curTime * 0.00025);
	Cat.b = 0;

	Kotik.r = 0;
	Kotik.g = sin(curTime * 0.00025);
	Kotik.b = 0;

	House.r = sin(curTime * 0.0005);
	House.g = sin(curTime * 0.0005);
	House.b = 0.5;

	Mush.r = 0.5;
	Mush.g = sin(curTime * 0.0025);
	Mush.b = sin(curTime * 0.035);

	Flag.r = 0.3;
	Flag.g = 0.6;
	Flag.b = 0.4;

	Car.r = 0.1;
	Car.g = 0.3;
	Car.b = 0.5;

	glPushMatrix();

	curTime = clock() - startTime;

	Kotik.x = 0;
	Kotik.y = 0;

	Mush.x = 0;
	Mush.y = 0;

	if (curTime < 2800)
	{
		Kotik.y = curTime * -0.001;
	}
	else
	{
		if (curTime > 5000)
		{
			Kotik.r = 0.5;
			Kotik.g = sin(curTime * 0.0025);
			Kotik.b = sin(curTime * 0.035);
			Mush.x = 5;
			if (curTime > 9900)
			{
				Kotik.x = -2345678.4;
				Kotik.r = 0.5;
				Kotik.g = sin(curTime * 0.0025);
				Kotik.b = sin(curTime * 0.035);
				House.r = sin((curTime - 9000) * 0.045);
				House.g = sin((curTime - 9000) * 0.055);
				House.b = sin((curTime - 9000) * 0.03);
			}
			if ((curTime > 7700) & (curTime < 9900))
			{
				Kotik.x = -(curTime - 7700) * 0.001;
				Kotik.r = 0.5;
				Kotik.g = sin(curTime * 0.0025);
				Kotik.b = sin(curTime * 0.035);
			}
			else
			{

				if (curTime > 9900)
				{
					Kotik.x = -2345678.4;
					Kotik.r = 0.5;
					Kotik.g = sin(curTime * 0.0025);
					Kotik.b = sin(curTime * 0.035);
					House.r = sin((curTime - 9000) * 0.045);
					House.g = sin((curTime - 9000) * 0.055);
					House.b = sin((curTime - 9000) * 0.03);
				}
				if (curTime > 12000)
				{
					Cat.y = -0;
					Cat.x = -0;
				}
				if (curTime > 16000)
				{
					Kotik.x = -2.5;
					Kotik.y = -2;
					House.r = 0;
					House.g = 0;
					House.b = 0;
				}
				if (curTime > 19000)
				{
					Cat.x = -2.5;
					Cat.y = -2;
					Kotik.x = -22222222.52;
					Kotik.y = -22222222;
				}
				if (curTime > 22000)
				{
					Cat.x = -2.5;
					Cat.y = ((curTime - 22000) * 0.0006);
				}
			}
			if (curTime > 7500)
			{
				Kotik.y = -2;
				Kotik.r = 0.5;
				Kotik.g = sin(curTime * 0.0025);
				Kotik.b = sin(curTime * 0.035);
			}
			if ((curTime > 6000) & (curTime < 7500))
			{
				Kotik.y = -(curTime - 6000) * 0.0014;
			}
		}
		else
		{
			if (curTime < 5000)
			{
				Kotik.y = (curTime - 5000) * 0.001;
				Kotik.r = 0.5;
				Kotik.g = sin(curTime * 0.0025);
				Kotik.b = sin(curTime * 0.035);
				Mush.x = 5;
			}
		}
	}

	//nebo
	drawNebo(0.1, 0.0, colorSky);

	//solnce
	glPushMatrix();
	glRotatef(alpha, 0, 0, 1);
	drawSun();
	glPopMatrix();

	//flag
	glPushMatrix();
	glRotatef(alpha, 1, 0, 0);
	drawFlag(Flag);
	glPopMatrix();

	//dom
	drawHouse(House);

	//elki
	glTranslatef(-0.83, -0.87, 0.0);
	glScalef(0.33, 0.33, 0.0);
	glTranslatef(-0.25, 0.0, 0.0);
	for (int i = 0; i < 3; i++)
	{
		drawTree(0.4, 0.1, 0.2);
		glTranslatef(0.70, 0.0, 0.0);
	}

	//cats
	glPushMatrix();
	glTranslatef(2.3, 3.15, 0.0);
	drawKotik(Kotik);
	drawCat(Cat);

	glPopMatrix();

	//MASCHINE
	glTranslatef(3.9, 0.6, 0.0);
	drawCar(Car);
	glTranslatef(0.3, -0.3, 0.0);
	glPopMatrix();

	//mush
	glPushMatrix();
	glTranslatef(.6, -.8, 0);
	glScalef(0.5, 0.5, 1);
	drawMush(Mush);
	glPopMatrix();
}