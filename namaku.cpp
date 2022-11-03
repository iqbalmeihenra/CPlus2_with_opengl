#include <glut.h>
void usedraw()
{
	static int tick=0;

//I
glBegin(GL_POLYGON);
	glVertex2f(40,40);
	glVertex2f(60,40);
	glVertex2f(60,250);
	glVertex2f(40,250);
glEnd();

//Q
glBegin(GL_POLYGON);
	glVertex2f(80,60);
	glVertex2f(100,60);
	glVertex2f(100,220);
	glVertex2f(80,220);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(80,60);
	glVertex2f(150,60);
	
glEnd();

glLineWidth(8);
glBegin(GL_LINES);
	glVertex2f(80,218);
	glVertex2f(150,218);
	
glEnd();

glLineWidth(9);
glBegin(GL_LINES);
	glVertex2f(120,60);
	glVertex2f(145,20);

glEnd();

glBegin(GL_POLYGON);
	glVertex2f(150,60);
	glVertex2f(130,60);
	glVertex2f(130,220);
	glVertex2f(150,220);
glEnd();


//B
glBegin(GL_POLYGON);
	glVertex2f(170,40);
	glVertex2f(180,40);
	glVertex2f(180,250);
	glVertex2f(170,250);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(180,45);
	glVertex2f(240,45);
	
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(180,150);
	glVertex2f(270,150);
	
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(170,250);
	glVertex2f(250,250);
	
glEnd();


glBegin(GL_POLYGON);
	glVertex2f(230,250);
	glVertex2f(250,250);
	glVertex2f(250,150);
	glVertex2f(230,150);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(180,600);
	glVertex2f(300,600);
glEnd();

glBegin(GL_POLYGON);
	glVertex2f(240,40);
	glVertex2f(270,40);
	glVertex2f(270,150);
	glVertex2f(240,150);
glEnd();

//A
glBegin(GL_POLYGON);
	glVertex2f(300,40);
	glVertex2f(280,40);
	glVertex2f(280,250);
	glVertex2f(300,250);
glEnd();

glLineWidth(8);
glBegin(GL_LINES);
	glVertex2f(380,245);
	glVertex2f(280,245);
glEnd();

glLineWidth(5);
glBegin(GL_LINES);
	glVertex2f(350,160);
	glVertex2f(300,160);
	
glEnd();

glBegin(GL_POLYGON);
	glVertex2f(350,40);
	glVertex2f(380,40);
	glVertex2f(380,250);
	glVertex2f(350,250);
glEnd();

//L
glBegin(GL_POLYGON);
	glVertex2f(420,40);
	glVertex2f(400,40);
	glVertex2f(400,250);
	glVertex2f(420,250);
glEnd();

glLineWidth(25);
glBegin(GL_LINES);
	glVertex2f(500,60);
	glVertex2f(400,60);
	
glEnd();

}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
usedraw();
glutSwapBuffers();
}
int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowPosition(100,100); glutInitWindowSize(640,480);
glutCreateWindow("Program Grafikku");
glClearColor(1.0,0.0,1.0,0.0);
gluOrtho2D(0.,640.,-240.,500.); glutIdleFunc(display);
glutDisplayFunc(display); glutMainLoop();
return 0;
}