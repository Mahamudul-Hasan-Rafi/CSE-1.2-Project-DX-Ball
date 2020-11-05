#ifndef BALL_CHANGE_H_INCLUDED
#define BALL_CHANGE_H_INCLUDED
#include "dxx.h"
#include "brickk.h"



int aa = 510;  //Rectangle
int bb = 60; 

int cc = 595;  //Circle
int dd = 93;
int n =0;
int k=0;
int i = 0;
int t = 2;
int start = 0;
//int a = 5;
int b=0;
int score = 0;
int mode=1;

int theta = 60.0;

int vx = 5, vy = 7;
double dx1 = vx*cos((theta*3.1416)/180);
double dy1  = vy*sin((theta*3.1416)/180);

void ballchange()
{
	if(start==1){
	
	//k = 0;
		cc += dx1;
   dd += dy1;

   
   if(cc > 1176 || cc < 0)
	   dx1 = -dx1;

   if(dd>610)
	   dy1 = -dy1;

   if(((cc > aa) && (cc < aa+170)) && (dd < (bb+30))){
	   
	   theta = ((aa+170)-cc)+5;
	   
	   if((theta >= 75) && (theta <= 105)){
		   
		   if(theta >= 75 && theta <= 90)
		     theta = 76;
		   
		   else if(theta >= 90 && theta <= 105)
			   theta = 110;
	   }
	   
	   dx1 = vx*cos((theta*3.1416)/180);
	   dy1  = vy*sin((theta*3.1416)/180);
	   
	   //dy1 = -dy1;
	   //theta = 60;
   }

   //collision

   if(t==2){

      for(int i = 0; i<180; i++){

        if(cc>=brick[i].x && cc<=brick[i].x + brick[i].dx)

			if((dd>=brick[i].y && dd<brick[i].y+3.33) || (dd>=brick[i].y+brick[i].dy && dd<=brick[i].y+brick[i].dy+4.33)){
				dy1 = -dy1;
				
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;
			    
				score=score+2;
			}

			else if(dd>=brick[i].y && dd<=brick[i].y+brick[i].dy)

				if((cc>=brick[i].x && cc<=brick[i].x+3.33) || (cc>=brick[i].x+brick[i].dx-3.33 && cc<=brick[i].x+brick[i].dx)){

                dx1 = -dx1;
			    
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;
				
				score=score+2;
			}
			
          }
	}

   else if(t==1){

	   for(i=0; i<100; i++){

	       if(cc>=brick[i].x && cc<=brick[i].x + brick[i].dx)

			if((dd>=brick[i].y && dd<brick[i].y+4.33) || (dd>=brick[i].y+brick[i].dy-4.33 && dd<=brick[i].y+brick[i].dy)){
				dy1 = -dy1;
				
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;
			    
				score=score+3;
				
			}

			else if(dd>=brick[i].y && dd<=brick[i].y+brick[i].dy)

				if((cc>=brick[i].x && cc<=brick[i].x+4.33) || (cc>=brick[i].x+brick[i].dx-4.33 && cc<=brick[i].x+brick[i].dx)){

                dx1 = -dx1;
			    
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;
				
				score=score+3;
			}
			
          }

	   
	   }
        



   else if(t==3){
      
	   for(i=0; i<160; i++){

	       if(cc>=brick[i].x && cc<=brick[i].x + brick[i].dx)

			if((dd>=brick[i].y && dd<brick[i].y+3.33) || (dd>=brick[i].y+brick[i].dy && dd<=brick[i].y+brick[i].dy+4.33)){
				dy1 = -dy1;
				
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;
			
				score=score+2;
			}

			else if(dd>=brick[i].y && dd<=brick[i].y+brick[i].dy)

				if((cc>=brick[i].x && cc<=brick[i].x+3.33) || (cc>=brick[i].x+brick[i].dx-3.33 && cc<=brick[i].x+brick[i].dx)){

                dx1 = -dx1;
			    
				
				brick[i].x=0;
			    brick[i].y = 0;
			    brick[i].dx = 0;
			    brick[i].dy = 0;

				score=score+2;
				
			}
			
          }
    
	   
	   }

   }

   
	

  if(dd<bb-5){
	  
	  start = 0;
	  a = 9;
	  cc = 595;
	  dd = 93;
	  aa = 510;
	  bb = 60;
	  n=1;
	  

	 }

}


void screen5()
  {
	  //start = 0;
	
	  
		 iShowBMP(0,0,"pp//idx00.bmp");
	  /*iSetColor(0,255,0);
	  iText(340,500,"Enter your name: ",GLUT_BITMAP_TIMES_ROMAN_24);
	  iSetColor(255,255,255);
	  iFilledRectangle(540,487,180,40);*/

	 
	/*iSetColor(255,255,0);
	iFilledRectangle(aa,bb,170,20);
	iSetColor(192,192,192);
	iFilledCircle(cc,dd,14,1000);
	iText(930,610,"SCORE: ",GLUT_BITMAP_TIMES_ROMAN_24);*/

	  
	 
		 iSetColor(51,182,143);
	iFilledRectangle(aa,bb,170,20);
	iSetColor(192,192,192);
	iFilledCircle(cc,dd,14,1000);
	iSetColor(168,127,95);
	iFilledRectangle(0,620,1190,50);
	iSetColor(0,0,0);
	iText(930,635,"SCORE: ",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	iFilledRectangle(1030,630,120,30);

	if(t == 1){
	iSetColor(0,0,0);
	iText(30,635,"LEVEL : Easy",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if(t == 2){
		iSetColor(0,0,0);
	    iText(30,635,"LEVEL : Medium",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if(t == 3){
		iSetColor(0,0,0);
	    iText(30,635,"LEVEL : Hard",GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
	
	iSetColor(200,200,200);
	iFilledRectangle(1120,10,40,30);
	
	iSetColor(0,0,0);
	
	iLine(1134,14,1134,36);
	iLine(1135,14,1134,36);
	iLine(1136,14,1135,36);
	
	iLine(1144,14,1144,36);
	iLine(1145,14,1144,36);
	iLine(1146,14,1145,36);

	//theta = 60;
	//setBrick();
	//showBrick();

	if(dd>(bb-10))
	    ballchange();
	 }
	
  



#endif // BALL_CHANGE_H_INCLUDED
