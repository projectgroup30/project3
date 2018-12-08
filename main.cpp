#include <iostream>
#include <GL\glut.h>
#include "parking.h"
#include "figures.h"
#include "vehicles.h"
int time=0;
void renderScene(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    point p={1,1};
    glTranslatef(0.01,0,0);
    cars a1(4,1,3,p,0.4,0.3,0.2);
    a1.draw();
    glTranslatef(-0.02,0,0);
    glutSwapBuffers();glFlush();
}
void reshape(GLsizei w,GLsizei h)
{
    GLfloat ratio=(GLfloat)w/(GLfloat)h;
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        gluOrtho2D(-15.0,15.0,-15.0/ratio,15.0/ratio);
    else
        gluOrtho2D(-15.0*ratio,15.0*ratio,-15.0,15.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
int main(int argc,char *argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Parking lot");
    glClearColor(1.0, 1.0, 1.0, 0.0);
    //make the background white
    glutReshapeFunc(reshape);
    glutDisplayFunc(renderScene);
    //let the figure keep apparent.
    glutIdleFunc(renderScene);
    glutMainLoop();
}
