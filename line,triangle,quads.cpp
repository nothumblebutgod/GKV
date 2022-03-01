/*  Nama         : Ananda Rizky Pratama
    NIM          : 24060121140118
    Nama File    : Tugas1Nomor2.cpp
    Deskripsi    : membuat program dari fungsi GL_LINE_STRIP, GL_LINE_LOOP, 
				   GL_TRIANGLE_FAN, GL_TRIANGLE_STRIP, GL_QUADS, dan GL_QUAD_STRIP.
*/

#include <Gl/glut.h> 
#include <stdlib.h>

void Tugas1(void){
    //membersihkan layar dan men-set dalam format warna
    glClear (GL_COLOR_BUFFER_BIT);
    
// GL_LINE_STRIP
// membuat garis-garis yang terhubung dengan tiap vertex kecuali, vertex pertama dan yang terakhir.
	glLineWidth(15.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-0.9,0.9,0.0);
	glVertex3f(-0.9, 0.2, 0.0);
	glVertex3f(0.0, 0.8, 0.0);
	glVertex3f(0.9, 0.2, 0.0);
	glVertex3f(0.9, 0.9,0.0);
	glEnd();
	
// GL_LINE_LOOP
// Mmebuat garis-garis yang terhubung dengan tiap vertex, mulai dari vertex pertama ke yang terakhir.	
	glLineWidth(10.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, -1.0f, 1.0f);
	glVertex3f(-0.6, -0.5, 0.0);
	glVertex3f(-0.7, -0.2, 0.0);
	glVertex3f(-0.7, 0.2, 0.0);
	glVertex3f(-0.6, 0.5, 0.0);
	glVertex3f(-0.3, 0.6, 0.0);
	glVertex3f(0.3, 0.6, 0.0);
	glVertex3f(0.6, 0.5, 0.0);
	glVertex3f(0.7, 0.2, 0.0);
	glVertex3f(0.7, -0.2, 0.0);
	glVertex3f(0.6, -0.5, 0.0);
	glVertex3f(0.3, -0.6, 0.0);
	glVertex3f(-0.3, -0.6, 0.0);
	glEnd();
	
// GL_TRIANGLE_FAN
// Membuat segitiga dengan 1 vertex sebagai tumpuan
	glLineWidth(15.0f);
	glBegin(GL_TRIANGLE_FAN);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-0.4,0.1,0.0);
	glVertex3f(-0.3, 0.3, 0.0);
	glVertex3f(0.0, 0.5,0.0);
	glVertex3f(0.3,0.3,0.0);
	glVertex3f(0.4,0.1,0.0);
	glColor3f(1.1f,0.1f,0.0f);
	glVertex3f(0.0,-0.3,0.0);
	glEnd();
	
// GL_TRIANGLE STRIP
// Membuat serangkaian segitiga yang saling terhubung
	glLineWidth(15.0f);
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex3f(-1.0,-0.6,0.0);
	glVertex3f(-1.0,-0.8,0.0);
	glVertex3f(-0.8,-0.7,0.0);
	glVertex3f(-0.8,-0.9,0.0);
	glColor3f(0.1f,0.0f,1.0f);
	glVertex3f(-0.6,-0.8,0.0);
	glVertex3f(-0.6,-1.0,0.0);
	glEnd();
	
// GL_QUADS
// Membuat persegi empat dengan 4 buah vertex
	glLineWidth(15.0f);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(0.8,-1.0,0.0);
	glVertex3f(1.0,-1.0,0.0);
	glVertex3f(1.0,-0.8,0.0);
	glVertex3f(0.8,-0.8,0.0);
	glEnd();
	
// GL_QUAD_STRIP
// Membuat serangkaian persegi empat yang saling terhubung
	glLineWidth(15.0f);
	glBegin(GL_QUAD_STRIP);
	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-0.2,-0.7,0.0);
	glVertex3f(-0.2,-0.9,0.0);
	glVertex3f(0.0,-0.7,0.0);
	glVertex3f(0.0,-0.9,0.0);
	glVertex3f(0.2,-0.7,0.0);
	glVertex3f(0.2,-0.9,0.0);
	glVertex3f(0.4,-0.6,0.0);
	glVertex3f(0.4,-1.0,0.0);
	glEnd();
	glFlush();
}

    
//int main(int argc, char*argv[])
//{
// glutInit(&argc,argv);
// glutInitWindowSize(1600,1000);
// glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
// glutCreateWindow("TugasNomor2");
// glutDisplayFunc(Tugas1); 
// glClearColor (0.0f,0.0f, 0.0f, 0.0f);
// glutMainLoop();
// return 0;
//}
