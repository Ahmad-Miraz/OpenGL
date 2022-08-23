#include <GL/gl.h>
#include <GL/glu.h>

#include <GL/glut.h>
int xpos=0;
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


     glBegin(GL_LINE_STRIP);

        glVertex2f(-25, -25);

        glVertex2f(0,50);

        glVertex2f(25,-25);

        glVertex2f(-25,25);

        glVertex2f(25,25);

        glVertex2f(-25, -25);

        glEnd();
    glFlush();
}

void customization(){
     glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int,int);


int main(int argc, char ** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB);

glutInitWindowPosition(100,50);

glutInitWindowSize(500,500);

glutCreateWindow("Miraj");

glutDisplayFunc(display);
glutReshapeFunc(reshape);
customization();

glutMainLoop();

}

void reshape(int w,int h){
    glViewport(0,1 ,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    gluOrtho2D(-50,50,-50,50);
    glMatrixMode(GL_MODELVIEW);
}
