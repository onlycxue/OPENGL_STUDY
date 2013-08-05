/*
 * =====================================================================================
 *
 *       Filename:  line.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/31/2013 11:14:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <GL/gl.h>
#include <GL/freeglut.h>

#define drawOneLine(x1,y1,x2,y2) glBegin(GL_LINES); \
glVertex2f((x1),(y1)); glVertex2f((x2),(y2)); glEnd();

void init();
void display();
void reshape(int w,int h);

int main(int argc,char* argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(300,300);
	glutCreateWindow("opengl line ");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}

void init()
{
	glClearColor(0.0,0.0,0.0,0.0);
//	glMatrixMode(GL_PROJECTION);
//	glOrtho(-5,5,-5,5,5,15);
//	glMatrixMode(GL_MODELVIEW);
//	gluLookAt(0,0,6,0,5,0,0,150,0);
	glShadeModel(GL_FLAT);
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
        glColor3f(1.0,1.0,1.0);
	glEnable(GL_LINE_STIPPLE);
	
	glLineStipple(1,0x0101);
	drawOneLine(50.0,125.0,150.0,125.0);
	glDisable(GL_LINE_STIPPLE);
	glFlush();
}
void reshape(int w,int h)
{
	glViewport(0,0,(GLsizei) w,(GLsizei) h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,(GLdouble) w, 0.0,(GLdouble) h);

}
