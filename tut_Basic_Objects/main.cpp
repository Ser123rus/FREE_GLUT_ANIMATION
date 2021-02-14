#include "drawlib.h"

struct Figure {
	float r, g, b;
	float x, y;
	float s;
};

clock_t curTime, startTime;

void renderScene(void);

int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Lesson - Time Interactive");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animateScene, 1);
	startTime = clock();
	glutMainLoop();
	return 0;
}

void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	draw();

	glutSwapBuffers();
}
