/*
 * =====================================================================================
 *
 *       Filename:  cube.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月30日 15时04分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <GL/freeglut.h>
#include <GL/gl.h>

void init(void)
{
	glClearColor(0.0,0.0,0.0,0.0);
	glShadeModel(GL_FLAT);

}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	glLoadIdentity();
	gluLookAt(0.0,0.0,4.0,0.0,0.0,0.0,1.0,0.0,0.0);
	glScalef(1.0,1.0,3.0);
	glutWireCube(1.0);
	glFlush();

}
void reshape(int w, int h)
{
	glViewport(0,0,(GLsizei)w,(GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0,1.0,-1.0,1.0,2.0,8.0);
	glMatrixMode(GL_MODELVIEW);	

}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow(argv[0]);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();

	return 0;
}
