#include "iGraphics.h"
//# include "myheader.h"
//# include "chnageRec1.h"
int ball_x, ball_y;
int dx, dy,m,move=1;
int x,y,r,b,i=0,l=255,k,toy,vt,rt=0,e,f,g;
char str[10];
	void ballChange(){
		
	if(vt==1)	
	{
		if(ball_y<=10)
	{
		if(ball_x>=x&&ball_x<=(x+100))
		{
			
			   ball_x += dx;
	           ball_y += dy;

	           if(ball_x > 1000 || ball_x < 0)dx = -dx;
	           if(ball_y > 1000 || ball_y < 10)dy = -dy;
			   i++;
			   
			   if(i%3==1)
			   {
				   r=255;g=0;b=0;
			   }
			   if(i%3==2)
			   {
				   r=0;g=255;b=0;
			   }
			   if(i%3==0)
			   {
				   r=0;g=0;b=255;
			   }
			  
		}
		else
		{ 
			move=0;
			
			ball_x += dx;
	           ball_y += dy;

	           if(ball_x > 1000 || ball_x < 0)dx = -dx;
			   
	           if(ball_y > 1000 || ball_y < 10)dy = -dy;//r=0;g=255,b=255;
			   ball_x += dx;
	           ball_y += dy;

	           if(ball_x > 1000 || ball_x < 0)dx = -dx;
	           if(ball_y > 1000 || ball_y < 10)dy = -dy;
			   if((ball_x>0&&ball_x<500)&&(ball_y>0&&ball_y<500))
			   {
				   r=0;g=255,b=0;
			   }
			   else if((ball_x>0&&ball_x<500)&&(ball_y<1000&&ball_y>500))
			   {
				   r=255;g=0,b=0;
			   }
			   else if((ball_x>500&&ball_x<1000)&&(ball_y>0&&ball_y<500))
			   {
				   r=0;g=0,b=255;
			   }
			   else if((ball_x>500&&ball_x<1000)&&(ball_y<1000&&ball_y>500))
			   {
				   r=255;g=144,b=165;
			   }
		}
		
	}
	else 
	{

		       ball_x += dx;
	           ball_y += dy;

	           if(ball_x > 1000 || ball_x < 0)dx = -dx;
	           if(ball_y > 1000 || ball_y < 10)dy = -dy;
	}
	}
	
}

void rectanglechangeright()
{
	if(x<900)
	{
		x=x+100;
		//r=255;g=0;b=0;
	}

}
void rectanglechangeleft()
{
	if(x>0)
	{
		x=x-100;
		//r=0;g=255;b=0;

	}
}

/*
	function iDraw() is called again and again by the system.
*/
void starmenu()
{
   iSetColor(0,255,10);
  
	iText(400,500,"START GAME ",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(400,380,"INISTRUCTION",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(400,250,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

}
void picwithball()
{
	iShowBMP(0,0,"mo.bmp");
	
	  iSetColor(r, g, b);
	  iFilledCircle(ball_x,ball_y,7);
	
      iSetColor(r,g,b);
	  iFilledRectangle(x,y,100,10);
	  
	  iText(800,800,"SCORE:",GLUT_BITMAP_TIMES_ROMAN_24);
}
void instruc()
{
	iShowBMP(0,0,"mo.bmp");
	iSetColor(255, 255, 255);
	iText(500,800,"PRESS R TO RESUME",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(500,770,"PRESS p TO PAUSE",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 0, 0);
	iText(500,720,"BACK",GLUT_BITMAP_TIMES_ROMAN_24);

}
void exit()
{
	iSetColor(0,0,0);
	 iFilledRectangle(0,0,1000,1000);
}
void lose()
{
	iSetColor(r,g,b);
	iFilledRectangle(0,0,1000,1000);
	iSetColor(0,0,0);
	iText(500,500,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,450,"Your score is:",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(b, r, g);
	  iFilledCircle(ball_x,ball_y,10);
}
void iDraw()
{
	//place your drawing codes here
	
	iClear();
	iSetColor(120,25,32);
	
	iFilledRectangle(0,0,1000,1000);
	
	starmenu();
	if(vt==1)
	{
		picwithball();
	}
	if(vt==2)
	{
		instruc();

	}
	if(vt==3)
	{
		exit();
	}
	if(vt==4)
	{
		starmenu();
	}
	if(move==0)
	{
		lose();
	}
	//iSetColor(255, 255, 255);
	//iText(10, 10, "Press p for pause, r for resume, END for exit.");
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if((mx>=400&&mx<=600)&&(my>=500&&my<=700))
		{
			vt=1;
		}
		if((mx>=400&&mx<=600)&&(my>=380&&my<=450))
		{
			vt=2;
		}
		if((mx>=400&&mx<=600)&&(my>=250&&my<=350))
		{
			vt=3;
		}
		if((mx>=500&&mx<=600)&&(my>=720&&my<=750))
		{
			vt=4;
		}

	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here


	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if(key == 'r')
	{
		iResumeTimer(0);
	}
	
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	
	if(key == GLUT_KEY_LEFT)
	{
		rectanglechangeleft();
	}
		if(key == GLUT_KEY_RIGHT)
	{
		rectanglechangeright();
	}
		if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


int main()
{
	//place your own initialization codes here.
	iSetTimer(20,ballChange);
	//iSetTimer(20,ballChange);
	//dx = 5;
	//dy = 7;
	dx = 8;
	dy = 17;
	x=0;
	y=0;
	iInitialize(1000, 1000, "Ball Demo");
	
		
    return 0;
}