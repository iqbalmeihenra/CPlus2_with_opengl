#include <glut.h>
void userdraw()
{
static int tick=0;
/*program grafik ditulis disini*/
}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
userdraw();
glutSwapBuffers();
}
int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
glutInitWindowPosition(100,100); glutInitWindowSize(640,480);
glutCreateWindow("Program Grafikku");
glClearColor(1.0,1.0,1.0,0.0);
gluOrtho2D(0.,640.,-240.,500.); glutIdleFunc(display);
glutDisplayFunc(display); glutMainLoop();
return 0;
}