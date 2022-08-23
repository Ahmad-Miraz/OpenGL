#include<windows.h>
#include<GL/glut.h>

void display(){



    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2f(0.5,0.5);
    glColor3f(0,1,0);
    glVertex2f(-0.5,-0.5);

    glColor3f(1,0,0);
    glVertex2f(-0.5,0.5);
    glColor3f(0,1,0);
    glVertex2f(0.5,-0.5);

    glColor3f(1,0,0);
    glVertex2f(-0.5,0.0);
    glColor3f(0,1,1);
    glVertex2f(0.5,-0.0);
    glEnd();


    glFlush();


 }

int main(int argc, char **argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(700,700);
    glutInitWindowPosition(300,300);
    glutCreateWindow("rashik");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

 }
