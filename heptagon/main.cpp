#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int xpos=0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

     glBegin(GL_LINE_STRIP);

        glVertex2f(-25, -25);
        glVertex2f(-35,0);
        glVertex2f(-25, 25);
        glVertex2f(0,35);
        glVertex2f(25,25);
        glVertex2f(35, 0);
        glVertex2f(25, -25);
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

glutInitWindowPosition(300,300);
glutInitWindowSize(700,700);
glutCreateWindow("Miraj");

glutDisplayFunc(display);
glutReshapeFunc(reshape);
customization();

glutMainLoop();

}

void reshape(int w,int h){
    glViewport(0,1 ,(GLsizei)w,(GLsizei)h);//x,y, width and height
    glMatrixMode(GL_PROJECTION);//glMatrixMode() specifies which matrix is the current matrix, i.e., which matrix stack is currently the target of all matrix operations based on the parameter, the choices being GL_MODELVIEW, GL_PROJECTION, and GL_TEXTURE
    glLoadIdentity();//resets transformations, rotations of current matrix
    gluOrtho2D(-50,50,-50,50);//left, right, bottom, top
    glMatrixMode(GL_MODELVIEW);// default for creating models of objects

}
