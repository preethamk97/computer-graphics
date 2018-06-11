
#include<GL/glut.h>
#include <stdio.h>
#include <math.h>
#include<cmath>
#include<stdlib.h>
#include<string.h>
char name3[]="PROJECT:  TITANIC SHIP";

void ice();
void display1();
void display2();
void display3();
void ship();
void water();

GLint a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 500, h = 600, x = 0, i = 0;
GLfloat theta = 0.0;
int increaseclouds=0;
float increase=0;
int increase2=0;

void plot(int x,int y,int X1,int Y1,float r,float g,float b,float alpha){
    glColor4f(r,g,b,alpha);
    glBegin(GL_POINTS);
    glVertex2i(x+X1,y+Y1);
    glEnd();
}


void midpointcircle(int X1,int Y1,int r,float ra, float g, float b,float xtra){

    int x=0;
    int y=r;
    int decision=1-r;
    plot(x,y,X1,Y1,ra,g,b,xtra);
    plot(-y,x,X1,Y1,ra,g,b,xtra);
    plot(-x,-y,X1,Y1,ra,g,b,xtra);
    plot(y,-x,X1,Y1,ra,g,b,xtra);
    while(y>x){
        if(decision<0){
            x++;
            decision+=2*x+1;
        }
        else{
            y--;
            x++;
            decision+=2*(x-y)+1;
        }
        plot(x,y,X1,Y1,ra,g,b,xtra);
        plot(x,-y,X1,Y1,ra,g,b,xtra);
        plot(-x, y,X1,Y1,ra,g,b,xtra);
		plot(-x, -y,X1,Y1,ra,g,b,xtra);
		plot(y, x,X1,Y1,ra,g,b,xtra);
		plot(-y, x,X1,Y1,ra,g,b,xtra);
		plot(y, -x,X1,Y1,ra,g,b,xtra);
		plot(-y, -x,X1,Y1,ra,g,b,xtra);
    }
}

void drawcloud(){
    if(800+increaseclouds>1024)
        increaseclouds=0;
    int i,j;
    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
            midpointcircle(150+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(190+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(110+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(140+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(140+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(160+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(160+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
        }
    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
            midpointcircle(50+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(90+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(10+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(40+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(40+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(60+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(60+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
        }

    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
            midpointcircle(550+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(590+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(510+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(540+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(540+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(560+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(560+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
        }

    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
            midpointcircle(650+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(690+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(610+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(640+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(640+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(660+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(660+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
        }


    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
           midpointcircle(850+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(890+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(810+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(840+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(840+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(860+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(860+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
    }
    for(j=0;j<2;j++)
        for(i=50;i>=0;i--){
           midpointcircle(950+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(990+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(910+j+increaseclouds,800,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(940+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(940+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(960+j+increaseclouds,820,i,0.852941 ,0.852941 ,0.852941,1.0);
            midpointcircle(960+j+increaseclouds,780,i,0.852941 ,0.852941 ,0.852941,1.0);
    }
}

void drawsun(){
    int i,j;
    for(j=0;j<2;j++)
        for(i=70;i>=0;i--)
            midpointcircle(450+j,850,i,1.0,1.0,0.2,1.0);
}
void drawmoon(){
    int i,j;
    for(j=0;j<2;j++)
        for(i=70;i>=0;i--)
            midpointcircle(450+j,850,i,1.0,1.0,1.0,1.0);
}

void update(int value)
{
	a += 20.0;
	glutPostRedisplay();
	//glutTimerFunc(1000, update, 0);
}

void display()
{
	glutTimerFunc(150, update, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	glShadeModel(GL_SMOOTH);	
	increase+=2.0;
    	increase2+=5;
    	increaseclouds+=2;
   	display1();
	
	if (a>950)

	{
		b += 20;
		display2();
	}
	
	if (b>250)
	{

		c += 10;
		display3();

	}
	glFlush();
	glutSwapBuffers();
}
void mykey(unsigned char key,int x,int y)
{
	if(key=='1') glutDisplayFunc(display);;
	if(key=='0') exit(0);
	
	glutPostRedisplay();

}



void display1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	drawcloud();
	drawsun();
	glPushMatrix();
	glTranslated(a, 75, 0.0);
	ship();
	glPopMatrix();
	water();
}

void display2()
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.2,0.2,0.2,0.3);
	drawcloud();
	drawmoon();
	ice();
	glPushMatrix();
	glTranslated(b, 75, 0.0);
	ship();
	glPopMatrix();
	water();

}

void display3()
{
	
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.2,0.2,0.2,0.3);
	drawcloud();
	drawmoon();	
	x -= 1;
	ice();
	glPushMatrix();
	glTranslated(c, 100 + x * 5, 0.0);
	glRotated(-20, 0, 0, 1);
	ship();
	glPopMatrix();
	water();


}


void water()
{

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0, 0);
	glVertex2f(1000, 0);
	glVertex2f(1000, 220);
	glVertex2f(0, 220);
	glEnd();
}

void ship()
{


			/*base*/

		glBegin(GL_POLYGON);
		glColor3f(0.30f,0.06f,0.42f);	
		glVertex2f(20,238);
		glColor3f(0.30f,0.06f,0.42f);		
		glVertex2f(20,220);
				glColor3f(.0f,0.0f,0.0f);	
		glVertex2f(82,140);
					glColor3f(0.0f,0.0f,0.0f);	
		glVertex2f(438,84);
						
			glColor3f(0.32f,0.06f,0.42f);	
		glVertex2f(584,196);
			glColor3f(0.30f,0.06f,0.42f);	
		glVertex2f(600,220);
		glEnd();
		
	/*p1*/
	
	glColor3f(0.70,0.0,0.0);
	glBegin(GL_POLYGON);
	
		glVertex2f(70,236);
		glVertex2f(70,256);
		glVertex2f(478,262);
		glVertex2f(478,222);
		glVertex2f(70,238);
		glEnd();
	

	

/*p2*/
		glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	//	glBegin(GL_LINE_LOOP);
		glVertex2f(90,258);
		glVertex2f(90,280);
		glVertex2f(466,298);
		glVertex2f(466,262);
		//glVertex2f(90+x,258+y);
		glEnd();


	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
		
		glVertex2f(90,258);
		glVertex2f(90,280);
		glVertex2f(466,298);
		glVertex2f(466,262);
		glVertex2f(90,258);
		glEnd();


	
/*p3*/

		glColor3f(0.30,0.30,0.30);
	glBegin(GL_POLYGON);
	
		glVertex2f(102,304);
		glVertex2f(102,280);
		glVertex2f(442,298);
		glVertex2f(442,330);
		glVertex2f(102,302);
	
	glEnd();






	
/*p4*/
	glColor3f(1.0,0.50,0.00);
	glBegin(GL_POLYGON);
	
		glVertex2f(128,304);
		glVertex2f(128,388);
		glColor3f(0.3,0.3,0.0);
		glVertex2f(158,388);
		glVertex2f(158,304);
	
	glEnd();

	
	

glBegin(GL_POLYGON);
	glColor3f(0.4,0.4,0.4);
		glVertex2f(442,328);
		glVertex2f(442,298);
		glVertex2f(494,294);
		glVertex2f(494,324);
		//glVertex2f(318+x,322+y);
		glEnd();

	
	glBegin(GL_POLYGON);
	glColor3f(0.80,0.80,0.80);
		glVertex2f(466,298);
		glVertex2f(466,262);
		glVertex2f(508,256);
		glVertex2f(508,290);
		//glVertex2f(318+x,322+y);
		glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.50,0.0,0.0);
		glVertex2f(478,262);
		glVertex2f(478,222);
		glVertex2f(514,220);
		glVertex2f(514,254);
		//glVertex2f(318+x,322+y);
		glEnd();

	
	glColor3f(1.0,0.50,0.0);
		glBegin(GL_POLYGON);
	
		glVertex2f(224,312);
		glVertex2f(224,396);
		glColor3f(0.3,0.3,0.0);
		glVertex2f(254,396);
		glVertex2f(254,315);
	glEnd();

	glColor3f(1.0,0.50,0.0);
		glBegin(GL_POLYGON);
//	glColor3f(0.5,0.5,0.2);
		glVertex2f(318,322);
//		glColor3f(0.3,0.1,0.0);
		glVertex2f(318,406);
			glColor3f(0.5,0.5,0.2);
		glVertex2f(358,406);
//		glColor3f(0.5,0.2,0.0);
		glVertex2f(358,320);
	//	glColor3f(0.3,0.3,0.0);
	
		glEnd();
	//}
}


/* TO DRAW ICEBERG */
void ice()
{
	glPushMatrix();
	glTranslated(650, 50, 0.0);
	glScaled(12.5, 12.5, 0);
	glColor3f(0.0, 1.0, 1.0);
	if (c>0)
	{
		glPushMatrix();
		glTranslated(0, x, 0);
		glPushMatrix();
		glTranslated(7, 2, 0.0);
		glRotated(-x, 0, 0, 1);
		glTranslated(-7, -2, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f(7, 2);
		glVertex2f(8, 3);
		glVertex2f(11, 38);
		glVertex2f(12, 39);
		glVertex2f(12, 3);
		glEnd();
		glPopMatrix();
		glPushMatrix();

		glTranslated(12, 3, 0.0);
		glRotated(x, 0, 0, 1);
		glTranslated(-12, -3, 0.0);
		glBegin(GL_POLYGON);
		glVertex2f(12, 3);
		glVertex2f(12, 29);
		glVertex2f(17, 28);
		glVertex2f(18, 3);
		glVertex2f(19, 3);
		glEnd();
		glPopMatrix();
		glPopMatrix();
	}
	else
	{
		glBegin(GL_POLYGON);
		glVertex2f(7, 2);
		glVertex2f(8, 3);
		glVertex2f(11, 38);
		glVertex2f(12, 39);
		glVertex2f(12, 3);
		glEnd();
		glBegin(GL_POLYGON);
		glVertex2f(12, 3);
		glVertex2f(12, 29);
		glVertex2f(17, 28);
		glVertex2f(18, 3);
		glVertex2f(19, 3);
		glEnd();
	}


	glPopMatrix();

}


void myinit()
{
	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClearColor( 0.8,1.0,1.0,1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glLineWidth(3.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 999.0, 0.0, 999.0);
}
void display_string(int x, int y, char *string, int font)
{
    int len,i;
	glColor3f(0.8,0.52,1.0);
	glRasterPos2f(x, y);
    len = (int) strlen(string);
    for (i = 0; i < len; i++) {
    if(font==1)
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[i]);
	if(font==2)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,string[i]);
	if(font==3)
	        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,string[i]);
	if(font==4)
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10,string[i]);
	}

}
void display0(void)
{

	
	display_string(180,540,"RNSIT",1);
	
	display_string(215,500,name3,1);
	display_string(10,370,"KEYBOARD",1);
	display_string(10,340,"Press 1 to start",1);
	display_string(10,310,"Press 0 to abort",1);
	
	
	glutPostRedisplay();
	glutSwapBuffers();

}


int main(int argc, char* argv[])

{
	int key = 0;
	
	
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1024.0, 1024.0);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("titanic ship");


	glutDisplayFunc(display0);
	glutKeyboardFunc(mykey);
	myinit();
	
	glutMainLoop();
	return 0;
}
