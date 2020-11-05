#include "iGraphics.h"
#include "bitmap_loader.h"
#include "ball_change11.h"
#include "dxx.h"
#include "brickk.h"
#include <stdlib.h>
#include "file.h"
#include <stdio.h>


//int x = 300, y = 300, r = 20;
int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
int xx = 560, yy = 320;
//int x11 = 0;
//int y11 = 0;
//void ballchange();

char str3[100];
int index = 0;
bool music = true;
//struct Brick br[13];
//void setBrick();
//void showBrick();
void showScore();


//int dx = 8, dy = 6;
/*
 function iDraw() is called again and again by the system.

 */
void drawRoadLines(int offset)
{
	int len = 10;
	int width = 5;
	int gap = 10;
	int midx = 0, midy = win_l / 2;
	for (int i = 0; i < win_b / (len + gap); i++)
		iFilledRectangle((i * (len + gap) + offset) % win_b, midy, len, width);
}
//int k = 0;
void iDraw()
{
	//place your drawing codes here

	if(a == 0)
		screen0();
	
	else if(a == 1)
		screen1();
	
	else if(a == 2)
		screen2();
	
	else if(a == 3)
		screen3();
	
	else if(a == 4)
	    screen4();

	else if(a == 5){
		
		iClear();
		screen5();
		
	}

    else if(a == 6)
	     screen6();

	else if(a == 8)
		screen8();
	
	else if(a == 9){
		screen9();
		showScore();
		
	}

	else if(a==10){
		screen10();
		iSetColor(0,0,0);
		iText(576,350,str3,GLUT_BITMAP_TIMES_ROMAN_24);
	}

	
	
		//setBrick();
		//showBrick();
		//screen5();
	
	/*if(a == 5){
	iClear();
	
	screen5();
	}*/
	
	if((a==5) && (t==1)){
		
		
		showBrick1();
		showScore();
		
	}

	if((a == 5)&&(t==2)){
	    
		
		showBrick2();
		showScore();
		
	}

	if((a==5) && (t==3)){
		
		showBrick3();
		showScore();
	}
	
	/*if((a == 5) && (t==2)){
		medum1();
	}*/
	
		
	/*
	 iSetColor(20, 200, 200);
	 iFilledCircle(x, y, r);
	 //iFilledRectangle(10, 30, 20, 20);
	 iSetColor(20, 200, 0);
	 iText(40, 40, "Hi, I am iGraphics");*/

	/*iSetColor(0, 0, 200);
	iFilledRectangle(win_b / 2, win_l / 2, 30, 10);
	iSetColor(20, 200, 0);
	drawRoadLines(k++);
	iDelayMS(500);
	//iShowBMPAlternative(100, 100, "smurf.bmp");*/

	/*if((a == 5) && (t==1)){
	   defin();
       defin1();
       defin2();
	}
	
	if((a == 5) && (t==2)){
		medum1();
	}*/
	

}





/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	//printf("x = %d, y= %d\n", mx, my);
	//place your codes here

	/*if((a==5) && (start==0)){
		cc = mx;
		dd = my;
	}*/
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	/*if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
	}*/

		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		/*//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		xx = mx-38;
		yy = my-48;*/

		if((mx >= 635 && mx <= 754) && (my >= 240 && my<= 280) && (a==1))
			exit(0);

		if((mx >= 470 && mx <= 589) && (my >= 420 && my <= 460) && (a==1)){
			a = 2;
			readHighScore();
		}

		if((mx >= 980 && mx <= 1080) && (my >= 80 && my <= 110) && (a==2)){
			a = 1;
			//n=1;
		}

		 if((mx >= 650 && mx <= 769) && (my >= 480 && my <= 520) && (a==1))
			a = 3;
		   
		if((mx >= 980 && mx <= 1080) && (my >= 80 && my <= 110) && (a==3) )
			a = 1;

		if((mx >= 470 && mx <= 589) && (my >= 300 && my <= 340) && (a==1))
			a = 4;

		if((mx >= 550 && mx <= 669) && (my >= 550 && my <= 590) &&(a==1)){
			a = 10;
			start = 0;
			score=0;
			
			if(t==1)
				  setBrick1();
				
			if(t==2)
			     setBrick2();
			
			if(t==3)
				  setBrick3();
			
			cc = 595;
	        dd = 93;
	        aa = 510;
	        bb = 60;

		}

		if((mx >= 1120 && mx <= 1160) && (my >= 10 && my <= 40) && (a==5)){			
			a = 6;
			iPauseTimer(0);
		}

		if((mx >= 300 && mx <= 430) && (my >= 260 && my <= 300) && (a==6)){
			a = 5;
			iResumeTimer(0);
		}

	    if((mx >= 525 && mx <= 655) && (my >= 330 && my <= 370) && (a==6))
			 a = 1;
		
		if((mx >= 630 && mx <= 790) && (my >= 360 && my <= 400))
			a = 8;
		
		if((mx >= 980 && mx <= 1080) && (my >= 80 && my <= 110) && (a==8))
			a = 1;

		if((mx >= 980 && mx <= 1080) && (my >= 80 && my <= 110) && (a==4))
			a = 1;


		if((mx >= 500 && mx <= 610) && (my >= 450 && my <= 490))
			t = 1;

		if( (mx >= 500 && mx <= 610) && (my >= 390 && my <= 430)){
			t = 2;
			//a = 3;
		}

		if( (mx >= 500 && mx <= 610) && (my >= 330 && my <= 370)){
			t = 3;
		}
		
		if(a == 9){
		   
			AppendHighScore(str3, score);
			readHighScore();

			if((mx >= 340 && mx <= 450) && (my >= 200 && my <= 240))
				a = 1;

		else if((mx >= 525 && mx <= 655) && (my >= 200 && my <= 240)){
				a = 5;
				//t = 1;
				aa = 510;
	            bb = 60;
				cc = 595;
	            dd = 93;
				dx1 =  vx*cos((60*3.1416)/180);
				dy1 =  vx*sin((60*3.1416)/180);
				start = 0;
				score = 0;
				//n=1;
				
				if(t==1)
				   setBrick1();
				
				if(t==2)
				   setBrick2();
				
				if(t==3)
				   setBrick3();
		   }
		}

		if((mx >= 500 && mx <= 580) && (my >= 220 && my <= 260) && (a==3)){
			music = true;
			
			if(music == true)
			{
              PlaySound("Music//gull.wav",NULL, SND_ASYNC | SND_LOOP);
			}
		}
		
		if( (mx >= 500 && mx <= 580) && (my >= 160 && my <= 200)&&(a==3)){
			
			music = true;
			
			if(music == true)
			{
				PlaySound(0,0,0);
			}
			else
			{
               PlaySound("Music//gull.wav",NULL, SND_ASYNC | SND_LOOP);
			}
		}


		if((mx >= 740 && mx <= 870) && (my >= 240 && my <= 280) && (a==6))
			    exit(0);
		

		    
	     if((mx >= 730 && mx <= 840) && (my >= 200 && my <= 240) && (a == 9))
				exit(0);
	}
	

	}
	


/*
 function iKeyboard() is called whenever the user hits a key in keyboard.
 key- holds the ASCII value of the key pressed.
 */
void iKeyboard(unsigned char key)
{
	
	if ((key == '\r') && (a == 0))
	{
		//screen2();
		a = 1;

	}

	
	if ((key == '\r') && (a == 10))
	{
		//screen2();
		a=5;

	}

	if((key != '\b') && (a==10))
	{
		str3[index]=key;
		index++;
		//str3[index]='\0';
	}

	else
	{
		if(index<=0)
			index=0;
		else
			index--;
		
		str3[index]='\0';
	}

	
	if((key == ' ') && (a == 5))
	{
		start = 1;
		//mode = 2;
	}

	if((key == 'p') && (a == 5)){
		start = 0;
		k =1;
	}
	
	if((key == 'r') && (a==5)){
		start = 1;
		k=0;
	}
	
	/*if (key == 'q')
	{
		exit(0);
	}
	else if (key == 'a' && speed < 5)
		speed += 1;
	else if (key == 's' && speed > 0)
		speed -= 1;*/
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

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

	
	if(key == GLUT_KEY_LEFT)
	{
		
		if(aa == 10)
		{
			aa -= 0;
			if((start == 0) && (k==0))
			   cc -= 0;
		}

		else{ 
			aa -= 100;
		    
			if((start == 0) && (k==0))
			  cc -= 100;
		}
	}

	if(key == GLUT_KEY_RIGHT)
	{
		
		if(aa == 1010)
		{
			aa += 0;
		
		if((start == 0) && (k==0))
			cc += 0;
		}

		else{ 
			aa += 100;
		   
		if((start == 0) && (k==0))
			cc += 100;
		}

		
	}
	//place your codes for other keys here
}

/*void txt()
{
	rd = rand()%255;
	ga = rand()%255;
	bc = rand()%255;
}
*/


void txt()
{
	rd = rand()%255;
	ga = rand()%255;
	bc = rand()%255;
}

void showScore()
{
   char str1[20];
	
   itoa(score,str1,10);

   if(a==5){
      iSetColor(0,0,0);
      iText(1075,635,str1,GLUT_BITMAP_TIMES_ROMAN_24);
   }

   if(a==9){
	   iSetColor(192,192,192);
      iText(665,340,str1,GLUT_BITMAP_TIMES_ROMAN_24);
   }
}


int main()
{
	//place your own initialization codes here.
	start = 0;

	index = strlen(str3)-1;
	//setBrick();
	//showBrick();

	//setBrick1();
	
	
	
	  
	
	if(t==1)
		setBrick1();

	if(t==2)
	  setBrick2();

	if(t==3)
	    setBrick3();
	
	//setBrick00();
	//setBrick0();

	iSetTimer(500,txt);
	
	if(a == 5)
	   iSetTimer(1500,ballchange);

	
	if(!music)
	{
		PlaySound("Music//gull.wav",NULL, SND_ASYNC | SND_LOOP);
	}
	
	iInitialize(1190, 670, "Dx ball");

	
	return 0;
}
