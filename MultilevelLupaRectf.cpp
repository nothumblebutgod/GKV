

#include <Gl/glut.h> 
#include <stdlib.h>

void Tugas1Nomor2(void){
    //membersihkan layar dan men-set dalam format warna
    glClear (GL_COLOR_BUFFER_BIT);
   // GL_QUADS
// Membuat persegi empat dengan 4 buah vertex
	glBegin(GL_QUADS);
	//Kubus 1
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.7,-0.6,0.0);
	glVertex3f(-0.5,-0.6,0.0);
	glVertex3f(-0.5,-0.3,0.0);
	glVertex3f(-0.7,-0.3,0.0);
	
	//Kubus 2
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex3f(-0.3,-0.6,0.0);
	glVertex3f(-0.1,-0.6,0.0);
	glVertex3f(-0.1,-0.3,0.0);
	glVertex3f(-0.3,-0.3,0.0);
	
	//Kubus 3
	glColor3f(0.0f,1.0f,1.0f);
	glVertex3f(0.1,-0.6,0.0);
	glVertex3f(0.3,-0.6,0.0);
	glVertex3f(0.3,-0.3,0.0);
	glVertex3f(0.1,-0.3,0.0);
	
	//Kubus 4
	glVertex3f(0.5,-0.6,0.0);
	glVertex3f(0.7,-0.6,0.0);
	glVertex3f(0.7,-0.3,0.0);
	glVertex3f(0.5,-0.3,0.0);
	
	//Kubus 5
	glColor3f(1.0f,0.0f,1.0f);
	glVertex3f(-0.6,-0.3,0.0);
	glVertex3f(0.0,-0.3,0.0);
	glVertex3f(0.0,-0.1,0.0);
	glVertex3f(-0.6,-0.1,0.0);
	
	//Kubus 6
	glColor3f(0.0f,0.0f,1.0f);
	glVertex3f(0.0,-0.3,0.0);
	glVertex3f(0.6,-0.3,0.0);
	glVertex3f(0.6,-0.1,0.0);
	glVertex3f(0.0,-0.1,0.0);
	
	//Kubus 7
	glColor3f(1.0f,0.0f,0.0f);
	glVertex3f(-0.1,-0.1,0.0);
	glVertex3f(0.1,-0.1,0.0);
	glColor3f(0.0f,1.0f,0.0f);
	glVertex3f(0.1,0.3,0.0);
	glVertex3f(-0.1,0.3,0.0);
	
	//Kubus 8
	glColor3f(1.0f,1.0f,0.0f);
	glVertex3f(-0.1,-0.1,0.0);
	glVertex3f(0.1,-0.1,0.0);
	glVertex3f(0.1,0.7,0.0);
	glVertex3f(-0.1,0.7,0.0);
	glEnd();
	glFlush();
}


int main(int argc, char*argv[])
{
 glutInit(&argc,argv);
 glutInitWindowSize(600,480);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
 glutCreateWindow("Tugas1Nomor3");
 glutDisplayFunc(Tugas1Nomor2); 
 glClearColor (0.0f,0.0f, 0.0f, 0.0f);
 glutMainLoop();
 return 0;
}
    
