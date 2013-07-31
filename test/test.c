/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月30日 10时22分57秒
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

void init();
void display();


int main(int argc, char* argv[])
{

   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
   glutInitWindowPosition(0, 0); 
   glutInitWindowSize(300, 300);
   glutCreateWindow("OpenGL 3D View"); 
   init(); 					 
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;


}


void init()
{

       glClearColor(0.0, 0.0, 0.0, 0.0);
       glMatrixMode(GL_PROJECTION);
       glOrtho(-5, 5, -5, 5, 5, 15);
       glMatrixMode(GL_MODELVIEW);
       gluLookAt(0, 0, 6, 0, 5, 0, 0, 150, 0);
}


void display()
{
      glClear(GL_COLOR_BUFFER_BIT);
      glColor3f(1.0, 0, 0);
      glutWireTeapot(3);
      glFlush();
}
