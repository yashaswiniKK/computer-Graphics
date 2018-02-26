#include<stdio.h>
#include<time.h>
#include<math.h>
#include<GL/glut.h>
void display();
void draw_text(int x,int y,char *s)
{
	char *p;
	glRasterPos2f(x,y);
	for(p=s;*p;++p)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,*p);
	glFlush();
} 

void conical1()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(177.5,100);
	glVertex2f(97.5,100);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(177.5,100);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(97.5,100);
	glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
}
void conical2()
{ 
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
      glEnd();
	glFlush();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
}
	void pipette(int x,int y)
	{
		glClear(GL_COLOR_BUFFER_BIT);
		conical1();
		conical2();
		int i,j;
		if(x!=0&&y==0)
		{
			i=x;
			j=0;
		}
		else if(x==0&&y!=0)
		{
			i=0;
			j=y;
		}
		else if(x!=0&&y!=0)
		{
			i=x;
			j=y;
		}
		else
		{
			i=0;
			j=0;
		}
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(137.5+i,100+j);
	glVertex2f(142.5+i,107.5+j);
	glVertex2f(142.5+i,132.5+j);
	glVertex2f(147.5+i,145+j);
	glVertex2f(147.5+i,182.5+j);
	glVertex2f(142.5+i,195+j);
	glVertex2f(142.5+i,232.5+j);
	glVertex2f(135+i,232.5+j);
	glVertex2f(135+i,195+j);
	glVertex2f(130+i,182.5+j);
	glVertex2f(130+i,145+j);
	glVertex2f(135+i,132.5+j);
	glVertex2f(135+i,107.5+j);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2f(142.5+i,232.5+j);
	glVertex2f(142.5+i,257.5+j);
	glVertex2f(135+i,257.5+j);
	glVertex2f(135+i,232.5+j);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(133.5+i,157.5+j,"P");
	glFlush();
	
}
void display0()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(137.5,100);
	glVertex2f(142.5,107.5);
	glVertex2f(142.5,132.5);
	glVertex2f(147.5,145);
	glVertex2f(147.5,182.5);
	glVertex2f(142.5,195);
	glVertex2f(142.5,232.5);
	glVertex2f(135,232.5);
	glVertex2f(135,195);
	glVertex2f(130,182.5);
	glVertex2f(130,145);
	glVertex2f(135,132.5);
	glVertex2f(135,107.5);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(137.5,100);
	glVertex2f(142.5,107.5);
	glVertex2f(135,107.5);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
    glVertex2f(135,107.5);
	glVertex2f(142.5,107.5);
	glVertex2f(142.5,132.5);
	glVertex2f(135,132.5);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(142.5,132.5);
	glVertex2f(147.5,145);
    glVertex2f(147.5,182.5);
	glVertex2f(142.5,195);
	glVertex2f(135,195);
	glVertex2f(130,182.5);
	glVertex2f(130,145);
	glVertex2f(135,132.5);
	glEnd();
    glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(135,195);
    glVertex2f(142.5,195);
	glVertex2f(142.5,232.5);
	glVertex2f(135,232.5);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2f(142.5,232.5);
	glVertex2f(142.5,257.5);
	glVertex2f(135,257.5);
	glVertex2f(135,232.5);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(133.5,157.5,"P");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glFlush();
}
void display1()
{
	int i,j;
	for(j=0;j<150;j++)
	{
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(137.5,100+j);
	glVertex2f(142.5,107.5+j);
	glVertex2f(142.5,132.5+j);
	glVertex2f(147.5,145+j);
	glVertex2f(147.5,182.5+j);
	glVertex2f(142.5,195+j);
	glVertex2f(142.5,232.5+j);
	glVertex2f(135,232.5+j);
	glVertex2f(135,195+j);
	glVertex2f(130,182.5+j);
	glVertex2f(130,145+j);
	glVertex2f(135,132.5+j);
	glVertex2f(135,107.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(137.5,100+j);
	glVertex2f(142.5,107.5+j);
	glVertex2f(135,107.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
    glVertex2f(135,107.5+j);
	glVertex2f(142.5,107.5+j);
	glVertex2f(142.5,132.5+j);
	glVertex2f(135,132.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(142.5,132.5+j);
	glVertex2f(147.5,145+j);
    glVertex2f(147.5,182.5+j);
	glVertex2f(142.5,195+j);
	glVertex2f(135,195+j);
	glVertex2f(130,182.5+j);
	glVertex2f(130,145+j);
	glVertex2f(135,132.5+j);
	glEnd();
    glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(135,195+j);
    glVertex2f(142.5,195+j);
	glVertex2f(142.5,232.5+j);
	glVertex2f(135,232.5+j);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2f(142.5,232.5+j);
	glVertex2f(142.5,257.5+j);
	glVertex2f(135,257.5+j);
	glVertex2f(135,232.5+j);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(133.5,157.5+j,"P");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	}
	for(i=0;i<200;i++)
	{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(137.5+i,100+j);
	glVertex2f(142.5+i,107.5+j);
	glVertex2f(142.5+i,132.5+j);
	glVertex2f(147.5+i,145+j);
	glVertex2f(147.5+i,182.5+j);
	glVertex2f(142.5+i,195+j);
	glVertex2f(142.5+i,232.5+j);
	glVertex2f(135+i,232.5+j);
	glVertex2f(135+i,195+j);
	glVertex2f(130+i,182.5+j);
	glVertex2f(130+i,145+j);
	glVertex2f(135+i,132.5+j);
	glVertex2f(135+i,107.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(137.5+i,100+j);
	glVertex2f(142.5+i,107.5+j);
	glVertex2f(135+i,107.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
    glVertex2f(135+i,107.5+j);
	glVertex2f(142.5+i,107.5+j);
	glVertex2f(142.5+i,132.5+j);
	glVertex2f(135+i,132.5+j);
	glEnd();
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(142.5+i,132.5+j);
	glVertex2f(147.5+i,145+j);
    glVertex2f(147.5+i,182.5+j);
	glVertex2f(142.5+i,195+j);
	glVertex2f(135+i,195+j);
	glVertex2f(130+i,182.5+j);
	glVertex2f(130+i,145+j);
	glVertex2f(135+i,132.5+j);
	glEnd();
    glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(135+i,195+j);
    glVertex2f(142.5+i,195+j);
	glVertex2f(142.5+i,232.5+j);
	glVertex2f(135+i,232.5+j);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
    glVertex2f(142.5+i,232.5+j);
	glVertex2f(142.5+i,257.5+j);
	glVertex2f(135+i,257.5+j);
	glVertex2f(135+i,232.5+j);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(133.5+i,157.5+j,"P");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glFlush();
	}
}
void display2()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glVertex2f(335,237.5);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,200);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(335,237.5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,237.5);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,312.5);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(342.5,350);
	glVertex2f(342.5,375);
	glVertex2f(335,375);
	glVertex2f(335,350);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(333.9,265,"P");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_LINES);
	glVertex2f(337.5,187.5);
	glVertex2f(337.5,175);
	glVertex2f(337.5,170);
	glVertex2f(337.5,160);
	glVertex2f(337.5,155);
	glVertex2f(337.5,142.5);
	glVertex2f(337.5,135);
	glVertex2f(337.5,125);
	glVertex2f(337.5,117.5);
	glVertex2f(337.5,105);
	glEnd();
	glFlush();
}
void displaya()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(377.5,100);
	glVertex2f(297.5,100);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(377.5,100);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(297.5,100);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glVertex2f(335,237.5);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,200);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(335,237.5);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,237.5);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(342.5,350);
	glVertex2f(342.5,375);
	glVertex2f(335,375);
	glVertex2f(335,350);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(333.9,265,"P");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_LINES);
	glVertex2f(337.5,187.5);
	glVertex2f(337.5,175);
	glVertex2f(337.5,170);
	glVertex2f(337.5,160);
	glVertex2f(337.5,155);
	glVertex2f(337.5,142.5);
	glVertex2f(337.5,135);
	glVertex2f(337.5,125);
	glVertex2f(337.5,117.5);
	glVertex2f(337.5,105);
	glEnd();
	glFlush();
}
void displayb()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(372.5,112.5);
	glVertex2f(302.5,112.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(372.5,112.5);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(302.5,112.5);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glVertex2f(335,237.5);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(335,200);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(335,237.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(342.5,350);
	glVertex2f(342.5,375);
	glVertex2f(335,375);
	glVertex2f(335,350);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(333.9,265,"P");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_LINES);
	glVertex2f(337.5,187.5);
	glVertex2f(337.5,175);
	glVertex2f(337.5,170);
	glVertex2f(337.5,160);
	glVertex2f(337.5,155);
	glVertex2f(337.5,142.5);
	glVertex2f(337.5,135);
	glVertex2f(337.5,125);
	glEnd();
	glFlush();
}
void displayc()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glColor3f(1.0,0.3,0.4);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(367.5,137.5);
	glVertex2f(310,137.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(367.5,137.5);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(310,137.5);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(320,55,"Acid");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glVertex2f(335,237.5);
	glVertex2f(335,200);
	glEnd();
	 glBegin(GL_POLYGON);
	glColor3f(0.3,0.4,1.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(342.5,350);
	glVertex2f(342.5,375);
	glVertex2f(335,375);
	glVertex2f(335,350);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(333.9,265,"P");
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_LINES);
	glVertex2f(337.5,187.5);
	glVertex2f(337.5,175);
	glVertex2f(337.5,170);
	glVertex2f(337.5,160);
	glVertex2f(337.5,155);
	glVertex2f(337.5,142.5);
	glEnd();
	glFlush();
}
void display3()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.3,0.4,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(70,25);
	glVertex2f(200,25);
	glVertex2f(185,75);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(185,75);
	glVertex2f(162.5,150);
	glVertex2f(162.5,200);
	glVertex2f(112.5,200);
	glVertex2f(112.5,150);
	glVertex2f(90,75);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(117.5,55,"Base");
	glColor3f(1.0,0.0,0.0);
	draw_text(40,95,"Level1");
	glColor3f(1.0,0.0,0.0);
	draw_text(30,65,"Level2");
	glColor3f(0.9,456.0,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(275,25);
	glVertex2f(400,25);
	glVertex2f(367.5,137.5);
	glVertex2f(310,137.5);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0,0.0,1.0);
	glVertex2f(367.5,137.5);
	glVertex2f(362.5,150);
	glVertex2f(362.5,200);
	glVertex2f(312.5,200);
	glVertex2f(312.5,150);
	glVertex2f(310,137.5);
    glEnd();
	glColor3f(0.0,0.0,0.0);
	draw_text(293.5,55,"Neutralized");
	glColor3f(1.0,0.0,0.0);
	draw_text(270,90,"L1");
	glColor3f(1.0,0.0,0.0);
	draw_text(275,110,"L2");
	glColor3f(1.0,0.0,0.0);
	draw_text(280,135,"L3");
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0,0.0,0.0);
	glVertex2f(337.5,192.5);
	glVertex2f(342.5,200);
	glVertex2f(342.5,237.5);
	glVertex2f(347.5,250);
    glVertex2f(347.5,300);
	glVertex2f(342.5,312.5);
	glVertex2f(342.5,350);
	glVertex2f(335,350);
	glVertex2f(335,312.5);
	glVertex2f(330,300);
	glVertex2f(330,250);
	glVertex2f(335,237.5);
	glVertex2f(335,200);
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3f(1.0,0.0,0.0);
	glVertex2f(342.5,350);
	glVertex2f(342.5,375);
	glVertex2f(335,375);
	glVertex2f(335,350);
	glEnd();
	glColor3f(1.0,0.0,0.0);
	draw_text(333.9,265,"P");
	glFlush();
}
void demo_menu(int id)
{
	switch(id)
	{
	case 1:exit(0);
	       break;
	}
}
	void keys(unsigned char key,int x,int y)
	{
		if(key=='p') display0();
		if(key=='m') display1();
		if(key=='d') display2();
		if(key=='1') displaya();
		if(key=='2') displayb();
		if(key=='3') displayc();
		if(key=='r') display3();
	}
	void display()
	{
		glClear(GL_COLOR_BUFFER_BIT);
		conical1();
		conical2();
		pipette(0,0);
		glFlush();
	}


void myinit()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,499.0,0.0,499.0);
}
void main(int argc,char**argv)
{       glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("chemical Reaction");
	glutDisplayFunc(display);
    glutCreateMenu(demo_menu);
	glutAddMenuEntry("Quit",1);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutKeyboardFunc(keys);
	myinit();
	glutMainLoop();
}
