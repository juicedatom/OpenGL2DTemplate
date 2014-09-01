//main.cpp main file for execution

#include "main.h"

char keyarr['z'];

void display () {

	/* set background color */
	glClearColor(0,1,0,0);

	/* clear window */
	glClear(GL_COLOR_BUFFER_BIT);

	/* draw scene */
	glEnd();

	/* flush drawing routines to the window */
	glFlush();
}

void cleanup () {
	std::cout<<"Cleaning up!"<<std::endl;
}

void idle () {
	glutPostRedisplay();
}

void keydown (unsigned char key, int x, int y) {
	keyarr[key] = 1;
}

void keyup (unsigned char key, int x, int y) {
	keyarr[key] = 0;
}

int main ( int argc, char * argv[] ) {

	/* initialize GLUT, using any commandline parameters passed to the 
	   program */
	glutInit(&argc,argv);

	/* setup the size, position, and display mode for new windows */
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_RGB);

	/* create and set up a window */
	glutCreateWindow("Learning OpenGL w/ Pong!");
	glutDisplayFunc(display);
	glutKeyboardFunc(keydown);
	glutKeyboardUpFunc(keyup);
	glutIdleFunc(idle);
	/* tell GLUT to wait for events */
	
	glutMainLoop();
}
