//main.cpp main file for execution

#include "main.h"

//This array contains button presses which are allowed to be asynchronous.
//Yes, there are other ways to do this, but this is cleaner IMO.
//*If you actually want the shift/ctr-l/etc buttons then you're going
//to have to use Asyncronous button handeling.  I can't spell good... 
char keyarr['z'];

void display () {

	//set background color
	glClearColor(0,0,0,0);

	//clear the window and draw the new background
	glClear(GL_COLOR_BUFFER_BIT);

	/*
	Put any glDrawing Routines Here!
	*/

	//Flush out the drawing routines to the main window
	glFlush();
}

//put any cleanup code here i.e. make sure to not have any memory leaks!
void cleanup () {
	std::cout<<"Cleaning up!"<<std::endl;
}

//idle code.  This is executed when nothing else can be.
void idle () {
	glutPostRedisplay();
}

//Set the key value to 1 when pressed, zero when released!
void keydown (unsigned char key, int x, int y) {
	keyarr[key] = 1;
}

void keyup (unsigned char key, int x, int y) {
	keyarr[key] = 0;
}

int main ( int argc, char * argv[] ) {

	// start up the GLUT engine
	glutInit(&argc,argv);

	// setup the size, position, and display mode for new windows
	glutInitWindowSize(WIN_WIDTH,WIN_HEIGHT);
	glutInitWindowPosition(0,0);
	glutInitDisplayMode(GLUT_RGB);

	// make the window
	glutCreateWindow("Learning 2D OpenGL!");
	glutDisplayFunc(display);
	glutKeyboardFunc(keydown);
	glutKeyboardUpFunc(keyup);
	glutIdleFunc(idle);
	
	glutMainLoop();
}
