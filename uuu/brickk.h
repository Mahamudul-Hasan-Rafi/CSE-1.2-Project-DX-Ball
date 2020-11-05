#ifndef BRICKK_H_INCLUDED
#define BRICKK_H_INCLUDED
#include "dxx.h"
#include "ball_change11.h"
int t1 =0;

struct Brick{
	int x;
	int y;
	int dx;
	int dy;
	bool show;
	int r,g,b;
}brick[100];

struct Brick1{
	int x;
	int y;
	int dx;
	int dy;
	bool show;
	int r,g,b;
}brick1[100];



void setBrick1(){
	
	
	brick[0].dx = 80;
	brick[0].dy = 25;
	brick[0].x = 90;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 100; i++)
	{
		brick[i].show = true;
		brick[i].dx = 80;
		brick[i].dy = 25;
		brick[i].x = brick[i-1].x + brick[i].dx + 2;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 13 == 0)
		{
			brick[i].x = 90;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 2;
		}
	}
	
}

void showBrick1()
{
	for (int i = 0; i < 100; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}


void setBrick2(){
	
	
	brick[0].dx = 120;
	brick[0].dy = 25;
	brick[0].x = 120;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 70; i++)
	{
		brick[i].show = true;
		brick[i].dx = 120;
		brick[i].dy = 25;
		brick[i].x = brick[i-1].x + brick[i].dx + 3;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 8 == 0)
		{
			brick[i].x = 120;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 3;
		}
	}
	
}

void showBrick2()
{
	for (int i = 0; i < 180; i++)
	{
		if (brick[i].show)
		{

			iSetColor(255,155,0);

			if((i>=20)&&(i<=40))
				iSetColor(192,0,0);

			if((i>40)&&(i<=60))

				iSetColor(0,255,125);
			
			if((i>60) && (i<=70))
				iSetColor(0,255,0);
			/*if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);*/

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}


void setBrick3(){
	
	
	brick[0].dx = 100;
	brick[0].dy = 22;
	brick[0].x = 40;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 160; i++)
	{
		brick[i].show = true;
		brick[i].dx = 100;
		brick[i].dy = 22;
		brick[i].x = brick[i-1].x + brick[i].dx + 3;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 11 == 0)
		{
			brick[i].x = 40;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 3;
		}
	}
	
}

void showBrick3()
{
	for (int i = 0; i < 160; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}

/*void setBrick000(){
	
	
	brick[0].dx = 100;
	brick[0].dy = 22;
	brick[0].x = 120;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 100; i++)
	{
		brick[i].show = true;
		brick[i].dx = 100;
		brick[i].dy = 22;
		brick[i].x = brick[i-1].x + brick[i].dx + 5;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 8 == 0)
		{
			brick[i].x = 120;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 5;
		}
	}
	
}

void showBrick000()
{
	for (int i = 0; i < 100; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}


void setBrick00(){
	
	
	brick[0].dx = 80;
	brick[0].dy = 25;
	brick[0].x = 120;
	brick[0].y = 470;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 50; i++)
	{
		brick[i].show = true;
		brick[i].dx = 80;
		brick[i].dy = 25;
		brick[i].x = brick[i-1].x + brick[i].dx + 2;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 5 == 0)
		{
			brick[i].x = 120;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 2;
		}
	}
	
}

void showBrick00()
{
	for (int i = 0; i < 50; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			/*if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}


/*void setBrick0(){
	
	
	brick1[0].dx = 80;
	brick1[0].dy = 25;
	brick1[0].x = 700;
	brick1[0].y = 470;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick1[0].show = true;
  

	for (int i = 1; i < 50; i++)
	{
		brick1[i].show = true;
		brick1[i].dx = 80;
		brick1[i].dy = 25;
		brick1[i].x = brick[i-1].x + brick[i].dx + 2;
		brick1[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 5 == 0)
		{
			brick1[i].x = 700;
			brick1[i].y = brick[i - 1].y - brick[i - 1].dy - 2;
		}
	}
	
}

void showBrick0()
{
	for (int i = 0; i < 50; i++)
	{
		if (brick1[i].show)
		{

			iSetColor(178,167,0);

			/*if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick1[i].x, brick1[i].y, brick1[i].dx, brick1[i].dy);
		}
	}
	//ballHitsBrick();
}


void setBrick3(){
	
	
	brick[0].dx = 100;
	brick[0].dy = 22;
	brick[0].x = 120;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 100; i++)
	{
		brick[i].show = true;
		brick[i].dx = 100;
		brick[i].dy = 22;
		brick[i].x = brick[i-1].x + brick[i].dx + 5;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 8 == 0)
		{
			brick[i].x = 120;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 5;
		}
	}
	
}

void showBrick3()
{
	for (int i = 0; i < 100; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}

void setBrick4(){
	
	
	brick[0].dx = 100;
	brick[0].dy = 22;
	brick[0].x = 120;
	brick[0].y = 500;
	//brick[0].r = rand() % 255;
	//brick[0].g = rand() % 255;
	//brick[0].b = rand() % 255;
	brick[0].show = true;
  

	for (int i = 1; i < 100; i++)
	{
		brick[i].show = true;
		brick[i].dx = 100;
		brick[i].dy = 22;
		brick[i].x = brick[i-1].x + brick[i].dx + 5;
		brick[i].y = brick[i-1].y;

		//brick[i].r = rand() % 255;
		//brick[i].g = rand() % 255;
		//brick[i].b = rand() % 255;
		if (i % 8 == 0)
		{
			brick[i].x = 120;
			brick[i].y = brick[i - 1].y - brick[i - 1].dy - 5;
		}
	}
	
}

void showBrick4()
{
	for (int i = 0; i < 100; i++)
	{
		if (brick[i].show)
		{

			iSetColor(178,167,0);

			if((i>=30)&&(i<=50))
				iSetColor(192,0,0);

			if((i>=50)&&(i<=70))
				iSetColor(255,255,0);

			if((i>=70)&&(i<=90))
				iSetColor(0,255,0);

			if((i>=90)&&(i<=100))
				iSetColor(125,125,125);

			//if(i>=100 && i<=130)
				//iSetColor(0,0,255);

			iFilledRectangle(brick[i].x, brick[i].y, brick[i].dx, brick[i].dy);
		}
	}
	//ballHitsBrick();
}*/

#endif // BRICKK_H_INCLUDED
