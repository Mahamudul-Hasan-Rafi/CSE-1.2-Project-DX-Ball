#ifndef DXX_H_INCLUDED
#define DXX_H_INCLUDED
#include "file.h"


//int aa = 510;
//int bb = 60;
//int cc = 595;
//int dd = 93;
//int x11 = 0;
//int y11 = 0;
int a = 0;
int ga = 255;
int bc = 255;
int rd = 255;
//int t = 1;




   void screen0()

    {
      
	  
		  iShowBMP(0,0,"pp//im2.bmp");
	iShowBMP(343,370,"pp//in1.bmp");
	
	iSetColor(255,255,255);
	iText(455,175,"Press",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(rd,ga,bc);
	iText(530,175,"ENTER",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	iText(630,175,"to continue",GLUT_BITMAP_TIMES_ROMAN_24);
	  }

	void screen1()
	  {
		
		iShowBMP(0,0,"pp//ii111.bmp");
		
		iSetColor(64,64,64);
	 iFilledRectangle(550,550,119,40);
	iSetColor(192,192,192);
	iText(584,560,"Play",GLUT_BITMAP_TIMES_ROMAN_24);


	iSetColor(64,64,64);
	iFilledRectangle(635,480,119,40);
	iSetColor(192,192,192);
	iText(654,490,"Settings",GLUT_BITMAP_TIMES_ROMAN_24);


	iSetColor(64,64,64);
	iFilledRectangle(470,420,119,40);
	iSetColor(192,192,192);
	iText(478,430,"Highscore",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(64,64,64);
	iFilledRectangle(630,360,130,40);
	iSetColor(192,192,192);
	iText(636,370,"Instructions",GLUT_BITMAP_TIMES_ROMAN_24);


	iSetColor(64,64,64);
	iFilledRectangle(470,300,119,40);
	iSetColor(192,192,192);
	iText(500,310,"Credit",GLUT_BITMAP_TIMES_ROMAN_24);


	iSetColor(64,64,64);
	iFilledRectangle(635,240,119,40);
	iSetColor(192,192,192);
	iText(675,250,"Exit",GLUT_BITMAP_TIMES_ROMAN_24);


  }

	void screen2()
	{
		iShowBMP(0,0,"pp//imn11.bmp");

		iSetColor(255,255,255);
		/*iText(320,540,"Name",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,0,0);
		iLine(320,535,380,535);

		iSetColor(255,255,255);
		iText(770,540,"Score",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(255,0,0);
		iLine(770,535,830,535);
		
		iSetColor(255,255,255);
		iText(320,470,"Sayem",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,470,"100",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(255,255,255);
		iText(320,420,"Rafi",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,420,"80",GLUT_BITMAP_TIMES_ROMAN_24);
	
		iSetColor(255,255,255);
		iText(320,370,"Noman",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,370,"50",GLUT_BITMAP_TIMES_ROMAN_24);
	
		iSetColor(255,255,255);
		iText(320,320,"Omio",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,320,"20",GLUT_BITMAP_TIMES_ROMAN_24);
	
		iSetColor(255,255,255);
		iText(320,270,"Rony",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(780,270,"10",GLUT_BITMAP_TIMES_ROMAN_24);*/

		iSetColor(255,255,255);
		iFilledRectangle(980,80,100,30);
		iSetColor(0,0,0);
		iText(1000,85,"Back",GLUT_BITMAP_TIMES_ROMAN_24);
		
	   highScoreShow();
		
	}

	
  void screen3()
  {
	  iShowBMP(0,0,"pp//indexx6.bmp");
	
	iSetColor(255,255,102);
	iText(240,500,"Select  your  Difficulties :",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(500,450,110,40);
	iSetColor(0,0,0);
	iText(525,460,"Easy",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(500,390,110,40);
	iSetColor(0,0,0);
	iText(515,400,"Medium",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(500,330,110,40);
	iSetColor(0,0,0);
	iText(525,340,"Hard",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(255,255,102);
	iText(400,270,"Music :",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(500,220,80,40);
	iSetColor(0,0,0);
	iText(520,230,"ON",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(500,160,80,40);
	iSetColor(0,0,0);
	iText(516,170,"OFF",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(255,255,102);
	iText(720,270,"Sound :",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(815,220,80,40);
	iSetColor(0,0,0);
	iText(835,230,"ON",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(192,192,192);
	iFilledRectangle(815,160,80,40);
	iSetColor(0,0,0);
	iText(831,170,"OFF",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(255,255,255);
	iFilledRectangle(980,80,100,30);
	iSetColor(0,0,0);
	iText(1000,85,"Back",GLUT_BITMAP_TIMES_ROMAN_24);
  }
  
  void screen4()
  {
	 iShowBMP(0,0,"pp//indexx7.bmp");
	iSetColor(222,184,135);
	iText(245,570,"Designed by :",GLUT_BITMAP_TIMES_ROMAN_24);
	iLine(245,562,370,562);
	iText(450,520,"* Mahamudul Hasan Rafi",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,480,"* Tanvir Hasan",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,440,"* Mushfiqul Alam",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(245,340,"Instructed by :",GLUT_BITMAP_TIMES_ROMAN_24);
	iLine(245,330,380,330);
	iText(450,300,"* Sir Mir Imtiaz Mostafiz",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(530,270,"Lecturer (Dept. of CSE, AUST)",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(530,225,"&",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(450,180,"* Sir Mr. Mohammad Imrul Jubair",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(530,150,"Assistant Professor (Dept. of CSE, AUST)",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(255,255,255);
	iFilledRectangle(980,80,100,30);
	iSetColor(0,0,0);
	iText(1000,85,"Back",GLUT_BITMAP_TIMES_ROMAN_24);
  }



  void screen6()
  {
	  iShowBMP(0,0,"pp/idx00.bmp");

	iSetColor(192,192,192);

	iFilledRectangle(300,260,130,40);
	iSetColor(0,0,0);
	iText(315,270,"RESUME",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iSetColor(192,192,192);
	iFilledRectangle(525,330,130,40);
	iSetColor(0,0,0);
	iText(550,340,"MENU",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(192,192,192);
	iFilledRectangle(740,260,130,40);
	iSetColor(0,0,0);
	iText(774,270,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

  }

  void screen8()
  {
	  iShowBMP(0,0,"pp//inss1.bmp");
	iSetColor(246,190,4);
	iText(100,520,"Rules :",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,0,0);
	iLine(97,515,161,515);
	iSetColor(222,222,222);
	iText(250,480,"1. Press  'Left Arrow Key'  to move the jumper left.",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,420,"2. Press  'Right Arrow Key'  to move the jumper right.",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,360,"3. Press  'Space'  to start moving the ball.",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,300,"4. This game has total 3 levels with different bricks ",GLUT_BITMAP_TIMES_ROMAN_24);
	
	iText(250,240,"5. Each level contain many bricks and you have to break all",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(270,212,"bricks of each level to go to next level.",GLUT_BITMAP_TIMES_ROMAN_24);
	iText(250,152,"6. The more you break the bricks, the more score you will gain",GLUT_BITMAP_TIMES_ROMAN_24);

	iSetColor(255,255,255);
	iFilledRectangle(980,80,100,30);
	iSetColor(0,0,0);
	iText(1000,85,"Back",GLUT_BITMAP_TIMES_ROMAN_24);
  }

  void screen9()
  {
	  iShowBMP(0,0,"pp//ik00.bmp");
	  iSetColor(0,255,0);
	  //iSetTextStyle(BOLD_FONT,HORIZ_DIR,8);
	  iText(505,450,"GAME OVER  !!!",GLUT_BITMAP_TIMES_ROMAN_24);
	  iSetColor(255,178,102);
	  iText(495,340,"Your score is: ",GLUT_BITMAP_TIMES_ROMAN_24);
	  
	  iSetColor(0,204,102);
	  iFilledRectangle(340,200,110,40);
	  iSetColor(32,32,32);
	  iText(360,215,"Menu",GLUT_BITMAP_TIMES_ROMAN_24);
	 
	  iSetColor(0,204,102);
	  iFilledRectangle(525,200,130,40);
	  iSetColor(32,32,32);
	  iText(533,215,"Play Again",GLUT_BITMAP_TIMES_ROMAN_24);

	  iSetColor(0,204,102);
	  iFilledRectangle(730,200,110,40);
      iSetColor(32,32,32);
	  iText(760,215,"Exit",GLUT_BITMAP_TIMES_ROMAN_24);

		
	
  }

  void screen10(){
	 
	  iShowBMP(0,0,"pp//idx00.bmp");
	  
	  iSetColor(0,255,0);
	  iText(340,350,"Enter your name: ",GLUT_BITMAP_TIMES_ROMAN_24);
	  iSetColor(255,255,255);
	  iFilledRectangle(540,337,180,40);
  }


#endif // DXX_H_INCLUDED
