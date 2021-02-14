#include "GL/freeglut.h"

void renderScene(void);

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Lesson - Basic Forms");
	glutDisplayFunc(renderScene);
	glutMainLoop();
	return 0;
}


void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	

	glBegin(GL_QUADS);
	glColor3f(.245, .14, .0);
	glVertex2f(.5,0);
	glVertex2f(0.5, -65);
	glVertex2f(-0.5, -65);
	glVertex2f(-0.5, -0);

	
	glBegin(GL_QUADS);
	glColor3f(.35, .10, .10);
	glVertex2f(.0, -.125);
	glVertex2f(.45, -.125);
	glVertex2f(.45, -.5);
	glVertex2f(-0, -.5);

	glBegin(GL_QUADS);
	glColor3f(.3, .3, .3);
	glVertex2f(-.375, -.25);
	glVertex2f(-.125, -.25);
	glVertex2f(-.125, -.65);
	glVertex2f(-.375, -.65);

	//����� (������)
	//end.
	
	// 1. �������� ��������� ������� glVertex2f
	// �������� �������� �� ��, ��� �� ���-�� �������� � ���� � ��� ���������� � ���, ��� �� �����

	// 2. �������� �������������� ������� - � ����
	// glColor3f, RGB, 0..1

	// 3. �������� ��� ���� �����������

	// 4. ������ ����� ����

	glutSwapBuffers();
}
