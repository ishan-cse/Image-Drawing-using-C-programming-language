#include<GL/glut.h>
#include<stdlib.h>
#include<stdio.h>


void display(void)
{

// Hill

glColor3f(0.0,1.0,0.0);
    glBegin(GL_POLYGON);
     glVertex2i(-65,54);
     glVertex2i(1000,-42);
     glVertex2i(1000,-140);
     glVertex2i(-1000,-140);
    glEnd();


// River

glColor3f(0.0,1.0,1.0);
    glBegin(GL_QUADS);
     glVertex2i(-1000,-48);
     glVertex2i(1000,-48);
     glVertex2i(1000,-140);
     glVertex2i(-1000,-140);
    glEnd();

// Road

glColor3f(0.90,0.75,0.0);
    glBegin(GL_QUADS);
     glVertex2i(-1000,-33);
     glVertex2i(1000,-33);
     glVertex2i(1000,-48);
     glVertex2i(-1000,-48);
    glEnd();


// House roof

glColor3f(1.0,1.0,0.0);
    glBegin(GL_QUADS);
     glVertex2i(6,71);
     glVertex2i(22,71);
     glVertex2i(32,57);
     glVertex2i(-4,57);
    glEnd();



// House body

glColor3f(0.0,0.0,1.0);
    glBegin(GL_QUADS);
     glVertex2i(-1,57);
     glVertex2i(29,57);
     glVertex2i(29,25);
     glVertex2i(-1,25);
    glEnd();

// House door

glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
     glVertex2i(11,47);
     glVertex2i(17,47);
     glVertex2i(17,25);
     glVertex2i(11,25);
    glEnd();

// House left window

glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
     glVertex2i(2,46);
     glVertex2i(7,46);
     glVertex2i(7,37);
     glVertex2i(2,37);
    glEnd();


// House right window

glColor3f(1.0,1.0,0.0);
    glBegin(GL_POLYGON);
     glVertex2i(21,46);
     glVertex2i(26,46);
     glVertex2i(26,37);
     glVertex2i(21,37);
    glEnd();

// Stars in the sky

glPointSize(4);
glColor3f(1.0,1.0,1.0);
    glBegin(GL_POINTS);
     glVertex2i(-100,90);
     glVertex2i(-90,80);
     glVertex2i(-80,90);
     glVertex2i(-70,80);
     glVertex2i(-60,90);
     glVertex2i(-50,80);
     glVertex2i(-40,90);
     glVertex2i(-30,80);
     glVertex2i(-20,90);
     glVertex2i(-10,80);
     glVertex2i(0,90);
     glVertex2i(10,80);
     glVertex2i(20,90);
     glVertex2i(30,80);
     glVertex2i(40,90);
     glVertex2i(50,80);
     glVertex2i(60,90);
     glVertex2i(70,80);
     glVertex2i(80,90);
     glVertex2i(90,80);
     glVertex2i(100,90);
    glEnd();


// Ship main part

glColor3f(0.0,0.0,1.0);
    glBegin(GL_POLYGON);
     glVertex2i(-83,-68);
     glVertex2i(-20,-68);
     glVertex2i(-26,-88);
     glVertex2i(-77,-88);
    glEnd();

// Ship floor part

glColor3f(1.0,1.0,1.0);
    glBegin(GL_QUADS);
     glVertex2i(-75,-53);
     glVertex2i(-28,-53);
     glVertex2i(-28,-68);
     glVertex2i(-75,-68);
    glEnd();


// Ship 1st chimney

glColor3f(1.0,0.0,0.40);
    glBegin(GL_POLYGON);
     glVertex2i(-66,-29);
     glVertex2i(-59,-29);
     glVertex2i(-59,-53);
     glVertex2i(-66,-53);
    glEnd();

// Ship 2nd chimney

glColor3f(1.0,0.0,0.40);
    glBegin(GL_POLYGON);
     glVertex2i(-53,-29);
     glVertex2i(-46,-29);
     glVertex2i(-46,-53);
     glVertex2i(-53,-53);
    glEnd();


// Ship 3rd chimney

glColor3f(1.0,0.0,0.40);
    glBegin(GL_POLYGON);
     glVertex2i(-40,-29);
     glVertex2i(-33,-29);
     glVertex2i(-33,-53);
     glVertex2i(-40,-53);
    glEnd();



    glFlush();

}

void init(void)
{

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-100,100,-100,100);

}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100,100);
    glutCreateWindow ("Computer Graphics Lab Project");
    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;

}
