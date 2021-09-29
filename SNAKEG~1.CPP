#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

#define UP_KEY 72
#define DOWN_KEY 80
#define LEFT_KEY 75
#define RIGHT_KEY 77
#define PRESS_0 48

//*************  START UP SCREEN*********

void startscreen()
{
    clrscr();
    int j;
 //************* Print a emoji *********
    gotoxy(10,5);
    cprintf("\t");
    gotoxy(16,5);
    cprintf("<");
    gotoxy(13,7);
    cprintf("%c",3);
    gotoxy(11,9);
    cprintf("%c",92);
    cprintf("___");
    cprintf("%c",47);
  //************ Game startup **********
    gotoxy(20,10);
    cprintf("\t\t\t\t\t Welcome to my project SNAKE GAME \t\t\t\t\t");
    gotoxy(27,13);
    cprintf("press any key to continue.....");
    getch();
    clrscr();
    gotoxy(30,5);
    cprintf("\t Game instructions \t");
    gotoxy(1,8);
    cprintf("-> Use arrow keys to move the snake.");
    gotoxy(1,10);
    cprintf("-> You will be provided random numbers at the several random coordinates of the    screen which you have to eat.");
    gotoxy(1,13);
    cprintf("-> Everytime you eat a number the value will be added to your score and thus the   level acc. to your score.");
    gotoxy(1,16);
    cprintf("-> You can pause the game in its middle by pressing any key.");
    gotoxy(1,18);
    cprintf("-> To continue the paused game press any other key once again.");
    gotoxy(1,20);
    cprintf("-> If you want to exit press 0. ");
    gotoxy(25,22);
    cprintf("  Press any key to play game...  ");
    getch();
}

//*************ENDING SCREEN************

void end()
{
   int i;
   int a=201,b=187,c=188,d=200,e=205,f=186;
   char ch;
   textbackground(0);
   clrscr();
 //************ Create an emoji on the screen *********
   gotoxy(10,5);
    cprintf("\t");
    gotoxy(16,5);
    cprintf("<");
    gotoxy(13,7);
    cprintf("%c",3);
    gotoxy(11,9);
    cprintf("%c",92);
    cprintf("___");
    cprintf("%c",47);
 //************ create border on the screen ****************
   for(i=1; i<80; i++)
    {
	textcolor(4);
	gotoxy(i,1);
	ch=e;
	cprintf("%c",ch);
	gotoxy(i,24);
	cprintf("%c",ch);
    }
    for(i=1; i<24; i++)
    {
	textcolor(4);
	ch=f;
	gotoxy(1,i);
	cprintf("%c",ch);
	gotoxy(80,i);
	cprintf("%c",ch);
    }
    gotoxy(1,1);
    ch=a;
    cprintf("%c",ch);
    gotoxy(80,1);
    ch=b;
    cprintf("%c",ch);
    gotoxy(80,24);
    ch=c;
    cprintf("%c",ch);
    gotoxy(1,24);
    ch=d;
    cprintf("%c",ch);
 //*********** Thanking Screen ***********
    for(i=20;i>=10;i--)
    {
      textcolor(3);
      gotoxy(20,i);
      cprintf(" THANKS FOR PLAYING THIS MINI GAME ");
      delay(200);

      if(i>10)
      {
	 gotoxy(20,i);
	 cout<<"\t\t\t\t\t\t";
      }
    }
    for(i=20;i>=12;i--)
    {
      textcolor(3);
      gotoxy(20,10);
      cprintf(" THANKS FOR PLAYING THIS MINI GAME ");
      textcolor(6);
      gotoxy(23,i);
      cprintf(" DEVELOPED BY - VIVEK ( IT 2ND YEAR ) ");
      delay(200);
      if(i>12)
      {
	 gotoxy(18,i);
	 cout<<"\t\t\t\t\t\t";
      }
    }
    for(i=20;i>=14;i--)
    {
      textcolor(5);
      gotoxy(20,10);
      cprintf(" THANKS FOR PLAYING THIS MINI GAME ");
      textcolor(7);
      gotoxy(23,12);
      cprintf(" DEVELOPED BY - VIVEK ( IT 2ND YEAR ) ");
      textcolor(9);
      gotoxy(20,i);
      cprintf(" GUIDED BY - MR. ASHOK BHARADWAJ");
      delay(200);
      if(i>14)
      {
	 gotoxy(20,i);
	 cout<<"\t\t\t\t\t\t";
      }
   }
   getch();
}

//************* LOADING SCREEN *************

void load()
{
    textbackground(0);
    clrscr();
    int i,j;
  //********* Border *********
    for(i=10; i<71; i++)
    {
	gotoxy(i,10);
	cprintf("!");
	gotoxy(i,20);
	cprintf("!");
    }
    for(i=10; i<20; i++)
    {
	gotoxy(10,i);
	cprintf("!");
	gotoxy(70,i);
	cprintf("!");
    }
    gotoxy(36,14);
    cprintf("loading...");
    for(i=1; i<3; i++)
    {
      gotoxy(30,15);
      for(j=1;j<=20;j++)
      {
	delay(50); //to display the character slowly
	cprintf("%c",177);
      }
      gotoxy(30,15);
      cprintf("                                  ");

    }
    getch();
}

//************LEVEL COMPLETE SCREEN ***********

void lc()
{
   clrscr();
   textbackground(0);
   clrscr();
   textcolor(15);
   int i;
   int x,y;
   textbackground(0);
    clrscr();
    textcolor(4);
    //********* Level ***********
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(10,y);
       cprintf("%c",30);
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(20,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("%c",30);
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("%c",30);
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("%c",30);
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(42,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(52,y);
       cprintf("%c",30);
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //*********** Complete **********
    //C            y= 14->20
    for(x=16;x>=12;x--)
    {
       textcolor(4);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(4);
       gotoxy(12,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=12;x<=16;x++)
    {
       textcolor(4);
       gotoxy(x,20);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //O
    for(x=20;x<=24;x++)
    {
       textcolor(15);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(15);
       gotoxy(24,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=24;x>=20;x--)
    {
       textcolor(15);
       gotoxy(x,20);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=20;y>=14;y--)
    {
       textcolor(15);
       gotoxy(20,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //M   x=28->34
    for(y=20;y>=14;y--)
    {
       textcolor(4);
       gotoxy(28,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=28,y=14;x<=31,y<=17;x++,y++)
    {
       textcolor(4);
       gotoxy(x,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=31,y=17;x<=34,y>=14;x++,y--)
    {
       textcolor(4);
       gotoxy(x,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(4);
       gotoxy(34,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //P x=38->42
    for(y=20;y>=14;y--)
    {
       textcolor(15);
       gotoxy(38,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=38;x<=42;x++)
    {
       textcolor(15);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=17;y++)
    {
       textcolor(15);
       gotoxy(42,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x>=38;x--)
    {
       textcolor(15);
       gotoxy(x,17);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //L  x= 46->50
    for(y=14;y<=20;y++)
    {
       textcolor(4);
       gotoxy(46,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=46;x<=50;x++)
    {
       textcolor(4);
       gotoxy(x,20);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //E x=54->58
    for(y=20;y>=14;y--)
    {
       textcolor(15);
       gotoxy(54,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=54;x<=58;x++)
    {
       textcolor(15);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=54;x<=56;x++)
    {
       textcolor(15);
       gotoxy(x,17);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=54;x<=58;x++)
    {
       textcolor(15);
       gotoxy(x,20);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    // T x=62->66
    for(x=62;x<=66;x++)
    {
       textcolor(4);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(4);
       gotoxy(64,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    //E  x=70->74
    for(y=20;y>=14;y--)
    {
       textcolor(15);
       gotoxy(70,y);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=70;x<=74;x++)
    {
       textcolor(15);
       gotoxy(x,14);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=70;x<=72;x++)
    {
       textcolor(15);
       gotoxy(x,17);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=70;x<=74;x++)
    {
       textcolor(15);
       gotoxy(x,20);
       cprintf("%c",30);
      // sound(500);
       delay(50);
       nosound();
    }
    getch();
}

//************** LEVEL 1 CODE ************

void level1(int &x1,int &y1,int &m)
{
	int upper=10,lower=1;
	textcolor(15);
	randomize();
	x1=(rand()%78)+2;
	y1=(rand()%19)+4;
	m=rand()%(upper-lower)+lower;
	gotoxy(x1,y1);
	cprintf("%d",m);

}

//********** LEVEL 2 CODE ************

void level2(int &x1,int &y1,int &m)
{
      int upper=10,lower=1,x2,y2;
      char ch;
      textcolor(15);
      randomize();
      x1=(rand()%78)+2;
      y1=(rand()%19)+4;
      m=rand()%(upper-lower)+lower;
      gotoxy(x1,y1);
      cprintf("%d",m);
  //******** Creating Hurdels ************
      for(x2=15,y2=4;y2<=10;y2++)
      {
		  textcolor(4);
		  gotoxy(x2,y2);
		  ch=1;
		  cprintf("%c",ch);
      }
      for(x2=40,y2=23;y2>=15;y2--)
      {
		   textcolor(4);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      textcolor(15);
  //***** If random no.on level 2 hurdels generate another random no.*****
	while(1)
	{
	   if((x1==15 && y1<11) || (x1==40 && y1>14))
	   {
		      textcolor(15);
		      x1=(rand()%78)+2;
		      y1=(rand()%19)+4;
		      m=rand()%(upper-lower)+lower;
		      gotoxy(x1,y1);
		      cprintf("%d",m);
	   }
	   else
	   {
	      break;
	   }
	}
}

// ************ LEVEL 3 CODE **************

void level3(int &x1,int &y1,int &m)
{
      int upper=10,lower=1,x2,y2;
      char ch;
      textcolor(15);
      randomize();
      x1=(rand()%78)+2;
      y1=(rand()%19)+4;
      m=rand()%(upper-lower)+lower;
      gotoxy(x1,y1);
      cprintf("%d",m);
   //******** Creating hurdels *********
      for(x2=15,y2=4;y2<=10;y2++)
      {
		  textcolor(4);
		  gotoxy(x2,y2);
		  ch=1;
		  cprintf("%c",ch);
      }
      for(x2=40,y2=23;y2>=15;y2--)
      {
		   textcolor(4);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=30,y2=4;y2<=13;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=50,y2=4;y2<=15;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
     //***** If random no.on level 3 hurdels generate another random no.*****
	while(1)
	{
	   if((x1==15 && y1<11) || (x1==40 && y1>14) || (x1==30 && y1<14) || (x1==50 && y1<16))
	   {
		      textcolor(15);
		      x1=(rand()%78)+2;
		      y1=(rand()%19)+4;
		      m=rand()%(upper-lower)+lower;
		      gotoxy(x1,y1);
		      cprintf("%d",m);
	   }
	   else
	   {
	      break;
	   }
	}
}

// ************* LEVEL 4 CODE ************

void level4(int &x1,int &y1,int &m)
{
      int upper=10,lower=1,x2,y2;
      char ch;
      textcolor(15);
      randomize();
      x1=(rand()%78)+2;
      y1=(rand()%19)+4;
      m=rand()%(upper-lower)+lower;
      gotoxy(x1,y1);
      cprintf("%d",m);
  //********** Creating hurdels ************
      for(x2=15,y2=4;y2<=10;y2++)
      {
		  textcolor(4);
		  gotoxy(x2,y2);
		  ch=1;
		  cprintf("%c",ch);
      }
      for(x2=40,y2=23;y2>=15;y2--)
      {
		   textcolor(4);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=30,y2=4;y2<=13;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=50,y2=4;y2<=15;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
			   cprintf("%c",ch);
      }
      for(x2=60,y2=23;y2>=15;y2--)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=10,y2=16;y2<=23;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
    /*  for(x2=40,y2=16;y2>=3;y2--)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      } */
     //***** If random no.on level 4 hurdels generate another random no.*****
	while(1)
	{
	   if((x1==15 && y1<11) || (x1==40 && y1>14) || (x1==30 && y1<14) || (x1==50 && y1<16) || (x1==60 && y1>14) || (x1==10 && y1>15))
	   {
		      textcolor(15);
		      x1=(rand()%78)+2;
		      y1=(rand()%19)+4;
		      m=rand()%(upper-lower)+lower;
		      gotoxy(x1,y1);
		      cprintf("%d",m);
	   }
	   else
	   {
	      break;
	   }
	}
}

//*************** LEVEL 5 CODE ************

void level5(int &x1,int &y1,int &m)
{
      int upper=10,lower=1,x2,y2;
      char ch;
      textcolor(15);
      randomize();
      x1=(rand()%78)+2;
      y1=(rand()%19)+4;
      m=rand()%(upper-lower)+lower;
      gotoxy(x1,y1);
      cprintf("%d",m);
  // ********* Creating hurdels *********
      for(x2=15,y2=4;y2<=10;y2++)
      {
		  textcolor(4);
		  gotoxy(x2,y2);
		  ch=1;
		  cprintf("%c",ch);
      }
      for(x2=40,y2=23;y2>=15;y2--)
      {
		   textcolor(4);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=30,y2=4;y2<=13;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=50,y2=4;y2<=15;y2++)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=60,y2=23;y2>=15;y2--)
      {
		   textcolor(12);
		   gotoxy(x2,y2);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=10,y2=16;y2<=23;y2++)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=37,y2=17;y2<=23;y2++)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=58,y2=17;y2<=23;y2++)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=65,y2=15;y2>=3;y2--)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=55,y2=10;y2>=3;y2--)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
      for(x2=70,y2=17;y2>=3;y2--)
      {
		   gotoxy(x2,y2);
		   textcolor(12);
		   ch=1;
		   cprintf("%c",ch);
      }
    //***** If random no.on level 5 hurdels generate another random no.*****
	while(1)
	{
	   if((x1==15 && y1<11) || (x1==40 && y1>14) || (x1==30 && y1<14) || (x1==50 && y1<16) || (x1==60 && y1>14) || (x1==10 && y1>15) || (x1==37 && y1>16) || (x1==58 && y1>16) || (x1==65 && y1<16) || (x1==55 && y1<11) || (x1==70 && y1<18))
	   {
		      textcolor(15);
		      x1=(rand()%78)+2;
		      y1=(rand()%19)+4;
		      m=rand()%(upper-lower)+lower;
		      gotoxy(x1,y1);
		      cprintf("%d",m);
	   }
	   else
	   {
	      break;
	   }
	}
}

// *************** BOX SCREEN **************

void box()
{
   int a=201,b=187,c=188,d=200,e=205,f=186,g=185,h=204,row=1,col=1,i;
   char ch;
   textbackground(9);
   textcolor(15);
   for(;col<=80;col++)
   {
      gotoxy(col,1);
      ch=e;
      cprintf("%c",ch);
   }
   for(;row<=24;row++)
   {
      gotoxy(80,row);
      ch=f;
      cprintf("%c",ch);
   }
   for(col=80;col>=1;col--)
   {
      gotoxy(col,24);
      ch=e;
      cprintf("%c",ch);
   }
   for(row=24;row>=1;row--)
   {
      gotoxy(1,row);
      ch=f;
      cprintf("%c",ch);
   }
   for(col=1;col<=80;col++)
   {
      gotoxy(col,3);
      ch=e;
      cprintf("%c",ch);
   }
   gotoxy(1,1);
   ch=a;
   cprintf("%c",ch);
   gotoxy(80,1);
   ch=b;
   cprintf("%c",ch);
   gotoxy(80,24);
   ch=c;
   cprintf("%c",ch);
   gotoxy(1,24);
   ch=d;
   cprintf("%c",ch);
   gotoxy(80,3);
   ch=g;
   cprintf("%c",ch);
   gotoxy(1,3);
   ch=h;
   cprintf("%c",ch);
   gotoxy(68,2);
   cprintf("SCORE:-");
   gotoxy(2,2);
   cprintf("LEVEL:-");
   getch();
}

//************** WELCOME TO SNAKE GAME SCREEN *****************

void welcome()
{
    clrscr();
    int a=155,b=123,c=246,x=0,y;
    char ch;
    textbackground(14);
    textcolor(15);
    clrscr();
    // snake
    textcolor(4);
    gotoxy(30,3);
    cprintf("W E L C O M E     T O");
    for(x=15;x<=60;x++)
    {
	textcolor(15);
	gotoxy(x,5);
	ch=a;
	cprintf("%c",ch);
	if(x==60)
	{
	  cprintf("=");
	  ch=b;
	  cprintf("%c",ch);
	  ch=c;
	  cprintf("%c",ch);
	}
	sound(500);
	delay(20);
	sound(600);
	delay(20);
	nosound();
    }
    //printing s
    for(x=20;x>=15;x--)
    {
	textcolor(4);
	gotoxy(x,7);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=7;y<=10;y++)
    {
	  gotoxy(15,y);
	  textcolor(4);
	  cprintf("!");
	  sound(200);
	  delay(20);
	  sound(450);
	  delay(20);
	  nosound();
    }
    for(x=15;x<=20;x++)
    {
	textcolor(4);
	gotoxy(x,10);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=10;y<=13;y++)
    {
	gotoxy(20,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=20;x>=15;x--)
    {
	textcolor(4);
	gotoxy(x,13);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    // printing N
    for(y=13;y>=7;y--)
    {
	gotoxy(25,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=25,y=7;x<=31,y<=13;x++,y++)
    {
	gotoxy(x,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }

    for(y=13;y>=7;y--)
    {
	gotoxy(31,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    // printing A
    for(y=13;y>=7;y--)
    {
	gotoxy(36,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=36;x<=40;x++)
    {
	gotoxy(x,7);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=7;y<=13;y++)
    {
	gotoxy(40,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=36;x<=40;x++)
    {
	gotoxy(x,10);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    // printing K
    for(y=7;y<=13;y++)
    {
	gotoxy(45,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    gotoxy(45,10);
    cprintf("!");
    delay(20);
    for(x=46,y=10;x<=50,y>=7;x++,y--)
    {
	gotoxy(x,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=46,y=10;x<=50,y<=13;x++,y++)
    {
	gotoxy(x,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    // printing E
    for(y=7;y<=13;y++)
    {
	gotoxy(55,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=55;x<=60;x++)
    {
	gotoxy(x,7);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=55;x<=58;x++)
    {
	gotoxy(x,10);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=55;x<=60;x++)
    {
	gotoxy(x,13);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    // printing GAME
    //printing G
    for(x=28;x>=20;x--)
    {
	gotoxy(x,15);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=15;y<=21;y++)
    {
	gotoxy(20,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=20;x<=24;x++)
    {
	gotoxy(x,21);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=21;y>=18;y--)
    {
	gotoxy(24,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=24;x<=28;x++)
    {
	gotoxy(x,18);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=18;y<=21;y++)
    {
	gotoxy(28,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    //printing A
    for(y=21;y>=15;y--)
    {
	gotoxy(31,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=31;x<=36;x++)
    {
	gotoxy(x,15);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=15;y<=21;y++)
    {
	gotoxy(36,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=31;x<=36;x++)
    {
	gotoxy(x,18);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    //printing M
    for(y=21;y>=15;y--)
    {
	gotoxy(39,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=39,y=15;x<=43,y<=19;x++,y++)
    {
	gotoxy(x,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=43,y=19;x<=47,y>=15;x++,y--)
    {
	gotoxy(x,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(y=15;y<=21;y++)
    {
	gotoxy(47,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    //printing E
    for(y=15;y<=21;y++)
    {
	gotoxy(50,y);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=50;x<=56;x++)
    {
	gotoxy(x,15);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=50;x<=54;x++)
    {
	gotoxy(x,18);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=50;x<=56;x++)
    {
	gotoxy(x,21);
	textcolor(4);
	cprintf("!");
	sound(200);
	delay(20);
	sound(450);
	delay(20);
	nosound();
    }
    for(x=15;x<=60;x++)
    {
	textcolor(15);
	gotoxy(x,23);
	ch=a;
	cprintf("%c",ch);
	if(x==60)
	{
	  cprintf("=");
	  ch=b;
	  cprintf("%c",ch);
	  ch=c;
	  cprintf("%c",ch);
	}
	sound(500);
	delay(50);
	sound(600);
	delay(50);
	nosound();
    }
    getch();
}

// ************ LEVEL 1 SCREEN *************

void l1()
{
    clrscr();
    int x,y;
    textcolor(15);
    //********* Level *************
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(10,y);
       cprintf("!");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("!");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(20,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(15);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       textcolor(15);
       gotoxy(x,7);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       textcolor(4);
       gotoxy(x,y);
       cprintf("!");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       textcolor(4);
       gotoxy(x,y);
       cprintf("!");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(42,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(15);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       textcolor(15);
       gotoxy(x,7);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(52,y);
       cprintf("!");
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("!");
      // sound(500);
       delay(50);
       nosound();
    }
    //********* 1 ***********
    for(x=40,y=16;x<=42,y>=14;x++,y--)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(15);
       gotoxy(42,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=38;x<=46;x++)
    {
       textcolor(15);
       gotoxy(x,20);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    getch();
}

//************** LEVEL 2 SCREEN **************

void l2()
{
    textbackground(0);
    clrscr();
    int x,y;
    textcolor(4);
    //*********** Level *************
    //L
    for(y=4;y<=10;y++)
    {
       gotoxy(10,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       gotoxy(20,y);
       cout<<"&";
       //cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       gotoxy(x,4);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       gotoxy(x,7);
       cout<<"&";
      // cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       gotoxy(x,10);
       cout<<"&";
      // cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       gotoxy(x,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       gotoxy(x,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       gotoxy(42,y);
       cout<<"&";
       //cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       gotoxy(x,4);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       gotoxy(x,7);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       gotoxy(x,10);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       gotoxy(52,y);
       cprintf("&");
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //*********** 2 *****************
    for(x=40;x<=46;x++)
    {
       gotoxy(x,14);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=17;y++)
    {
       gotoxy(46,y);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=46;x>=40;x--)
    {
       gotoxy(x,17);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=17;y<=20;y++)
    {
	gotoxy(40,y);
	cout<<"&";
       //	cprintf("&");
	delay(50);
    }
    for(x=40;x<=46;x++)
    {
       gotoxy(x,20);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    textcolor(15);
    textbackground(9);
    getch();
    clrscr();
}

//************** LEVEL 3 SCREEN ****************

void l3()
{
    textbackground(0);
    clrscr();
    int x,y;
    textcolor(4);
    //*********** Level ******************
    //L
    for(y=4;y<=10;y++)
    {
       gotoxy(10,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       gotoxy(20,y);
       cout<<"&";
       //cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       gotoxy(x,4);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       gotoxy(x,7);
       cout<<"&";
      // cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       gotoxy(x,10);
       cout<<"&";
      // cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       gotoxy(x,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       gotoxy(x,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       gotoxy(42,y);
       cout<<"&";
       //cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       gotoxy(x,4);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       gotoxy(x,7);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       gotoxy(x,10);
       cout<<"&";
      // cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       gotoxy(52,y);
       cprintf("&");
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //********** 3 ***************
    // row=14->20 col=40->46
    for(x=40;x<=46;x++)
    {
       gotoxy(x,14);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=17;y++)
    {
       gotoxy(46,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=46;x>=42;x--)
    {
       gotoxy(x,17);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=17;y<=20;y++)
    {
       gotoxy(46,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=46;x>=40;x--)
    {
       gotoxy(x,20);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    textcolor(15);
    textbackground(9);
    getch();
    clrscr();
}

//************** LEVEL 4 SCREEN *****************

void l4()
{
    textbackground(0);
    clrscr();
    int x,y;
    textcolor(4);
    //************ Level ********************
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(10,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(20,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(42,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(52,y);
       cprintf("&");
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //************* 4 ************
    for(y=14;y<=17;y++)
    {
       textcolor(4);
       gotoxy(50,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=50;x<=56;x++)
    {
       textcolor(4);
       gotoxy(x,17);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=20;y++)
    {
       textcolor(4);
       gotoxy(56,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    textcolor(15);
    textbackground(9);
    getch();
    clrscr();
}

//************** LEVEL 5 SCREEN **************

void l5()
{
    textbackground(0);
    clrscr();
    int x,y;
    textcolor(4);
    //********* Level ************
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(10,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=10;x<=16;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(20,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=24;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=20;x<=26;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    //V
    for(x=28,y=4;x<=34,y<=10;x++,y++)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("&");
     //  sound(500);
       delay(50);
       nosound();
    }
    for(x=34,y=10;x<=40,y>=4;x++,y--)
    {
       textcolor(15);
       gotoxy(x,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //E
    for(y=4;y<=10;y++)
    {
       textcolor(4);
       gotoxy(42,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,4);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=46;x++)
    {
       textcolor(4);
       gotoxy(x,7);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=42;x<=48;x++)
    {
       textcolor(4);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //L
    for(y=4;y<=10;y++)
    {
       textcolor(15);
       gotoxy(52,y);
       cprintf("&");
      // sound(600);
       delay(50);
       nosound();
    }
    for(x=52;x<=58;x++)
    {
       textcolor(15);
       gotoxy(x,10);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    //*********** 5 **************
    for(x=55;x>=50;x--)
    {
       textcolor(4);
       gotoxy(x,14);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=14;y<=17;y++)
    {
       textcolor(4);
       gotoxy(50,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=50;x<=55;x++)
    {
       textcolor(4);
       gotoxy(x,17);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(y=17;y<=20;y++)
    {
       textcolor(4);
       gotoxy(55,y);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    for(x=55;x>=50;x--)
    {
       textcolor(4);
       gotoxy(x,20);
       cprintf("&");
      // sound(500);
       delay(50);
       nosound();
    }
    textcolor(15);
    textbackground(9);
    getch();
    clrscr();
}

//********* GAME OVER SCREEN ****************

void gameover()
{
   clrscr();
   int x,y,i;
   char ch;
   int a=201,b=187,c=188,d=200,e=205,f=186,row=1,col=1;
   textbackground(0);
   clrscr();
 //*********** creating border ************
   for(col=1;col<=80;col++)
   {
       gotoxy(col,1);
       ch=e;
       cout<<ch;
   }
   for(row=1;row<=24;row++)
   {
       gotoxy(80,row);
       ch=f;
       cout<<ch;
   }
   for(col=80;col>=1;col--)
   {
       gotoxy(col,24);
       ch=e;
       cout<<ch;
   }
   for(row=24;row>=1;row--)
   {
       gotoxy(1,row);
       ch=f;
       cout<<ch;
   }
   gotoxy(1,1);
   ch=a;
   cout<<ch;
   gotoxy(80,1);
   ch=b;
   cout<<ch;
   gotoxy(80,24);
   ch=c;
   cout<<ch;
   gotoxy(1,24);
   ch=d;
   cout<<ch;
 //*********** Game over ***************
   //G
   for(x=22;x>=15;x--)
   {
       textcolor(4);
       gotoxy(x,5);
       cprintf("$");
       delay(50);
   }
   for(y=5;y<=11;y++)
   {
	     textcolor(4);
	     gotoxy(15,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=15;x<=18;x++)
   {
	     textcolor(4);
	     gotoxy(x,11);
	     cprintf("$");
	     delay(50);
   }
   for(y=11;y>=8;y--)
   {
	     textcolor(4);
	     gotoxy(18,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=18;x<=22;x++)
   {
	     textcolor(4);
	     gotoxy(x,8);
	     cprintf("$");
	     delay(50);
   }
   for(y=8;y<=11;y++)
   {
	     textcolor(4);
	     gotoxy(22,y);
	     cprintf("$");
	     delay(50);
   }
   //A
   for(y=11;y>=5;y--)
   {
	     gotoxy(25,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=25;x<=30;x++)
   {
	     gotoxy(x,5);
	     cout<<"$";
	     delay(50);
   }
   for(y=5;y<=11;y++)
   {
	     gotoxy(30,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=25;x<=30;x++)
   {
	     gotoxy(x,8);
	     cout<<"$";
	     delay(50);
   }
   //M
   for(y=11;y>=5;y--)
   {
	     textcolor(4);
	     gotoxy(33,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=33,y=5;x<=36,y<=8;x++,y++)
   {
	     textcolor(4);
	     gotoxy(x,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=36,y=8;x<=39,y>=5;x++,y--)
   {
	     textcolor(4);
	     gotoxy(x,y);
	     cprintf("$");
	     delay(50);
   }
   for(y=5;y<=11;y++)
   {
	     textcolor(4);
	     gotoxy(39,y);
	     cprintf("$");
	     delay(50);
   }
   //E
   for(y=11;y>=5;y--)
   {
	     gotoxy(42,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=42;x<=48;x++)
   {
	     gotoxy(x,5);
	     cout<<"$";
	     delay(50);
   }
   for(x=42;x<=45;x++)
   {
	     gotoxy(x,8);
	     cout<<"$";
	     delay(50);
   }
   for(x=42;x<=48;x++)
   {
	     gotoxy(x,11);
	     cout<<"$";
	     delay(50);
   }
   //************* over ***************
   //O
   for(y=21;y>=15;y--)
   {
	     textcolor(4);
	     gotoxy(35,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=35;x<=40;x++)
   {
	     textcolor(4);
	     gotoxy(x,15);
	     cprintf("$");
	     delay(50);
   }
   for(y=15;y<=21;y++)
   {
	     textcolor(4);
	     gotoxy(40,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=40;x>=35;x--)
   {
	     textcolor(4);
	     gotoxy(x,21);
	     cprintf("$");
	     delay(50);
   }
   //V
   for(x=43,y=15;x<=49,y<=21;x++,y++)
   {
	     gotoxy(x,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=49,y=21;x<=55,y>=15;x++,y--)
   {
	     gotoxy(x,y);
	     cout<<"$";
	     delay(50);
   }
   //E
   for(y=21;y>=15;y--)
   {
	     textcolor(4);
	     gotoxy(58,y);
	     cprintf("$");
	     delay(50);
   }
   for(x=58;x<=64;x++)
   {
	     textcolor(4);
	     gotoxy(x,15);
	     cprintf("$");
	     delay(50);
   }
   for(x=58;x<=61;x++)
   {
	     textcolor(4);
	     gotoxy(x,18);
	     cprintf("$");
	     delay(50);
   }
   for(x=58;x<=64;x++)
   {
	     textcolor(4);
	     gotoxy(x,21);
	     cprintf("$");
	     delay(50);
   }
   //R
   for(y=21;y>=15;y--)
   {
	     gotoxy(68,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=68;x<=74;x++)
   {
	     gotoxy(x,15);
	     cout<<"$";
	     delay(50);
   }
   for(y=15;y<=18;y++)
   {
	     gotoxy(74,y);
	     cout<<"$";
	     delay(50);
   }
   for(x=74;x>=68;x--)
   {
	     gotoxy(x,18);
	     cout<<"$";
	     delay(50);
   }
   for(x=69,y=18;x<=72,y<=21;x++,y++)
   {
	     gotoxy(x,y);
	     cout<<"$";
	     delay(50);
   }
   getch();
}
void main()
{
    clrscr();
    int x,y,a=219,upper=10,lower=1,n,b,sum=0,count,x1,y1,x2,y2,count1,level=1;
    char c=RIGHT_KEY,ch,ch1;
 // ******** Welcome **********
    welcome();
 // ******** Instructions *********
    startscreen();
 // ******** Loading **********
    load();
 // ******** Level 1 *********
    l1();
 // ******** Box border *******
    box();
    textbackground(9);

    clrscr();
    gotoxy(75,2);
    cprintf("%d",sum);
    randomize();
 // ***** Generating random no. with random coordinates **********
    x1=(rand()%78)+2;
    y1=(rand()%19)+4;
    n=rand()%(upper-lower)+lower;
    gotoxy(x1,y1);
    cprintf("%d",n);
    sum+=n;
    level=1;
    gotoxy(10,2);
    cprintf("%d",level);
    x=40;
    y=12;
    box();
    do
    {
	box();
	ch=a;
	gotoxy(x,y);
	cout<<ch;
	if(level==1)
	{
	    delay(200);
	}
	else if(level==2)
	{
	    delay(150);
	}
	else if(level==3)
	{
	    delay(100);
	}
	else if(level==4)
	{
	    delay(80);
	}
	else if(level==5)
	{
	    delay(60);
	}

    //************* WELCOME TO LEVEL 1*************

	if(level==1 && x==x1 && y==y1)
	{
	  textcolor(15);
	  level=1;
	  gotoxy(10,2);
	  cprintf("%d",level);
	  if(sum<=10)
	  {
	    level1(x1,y1,n);
	    gotoxy(75,2);
	    cprintf("%d",sum);
	    sum+=n;
	  }
	  else
	  {
	     lc();
	     load();
	     l2();
	     level=2;
	  }

	}

    //*********** WELCOME TO LEVEL 2*************

	if(level==2 && x==x1 && y==y1)
	{
	   textcolor(15);
	   level=2;
	   gotoxy(10,2);
	   cprintf("%d",level);
	   gotoxy(75,2);
	   cprintf("%d",sum);
	   if(sum>=10 && sum<=20)
	   {
	      level2(x1,y1,n);
	      textcolor(15);
	      gotoxy(75,2);
	      cprintf("%d",sum);
	      sum+=n;
	   }
	   else
	   {
	      lc();
	      load();
	      l3();
	      level=3;
	   }
	}

    //******** WELCOME TO LEVEL 3*************

	if(level==3 && x==x1 && y==y1)
	{
	   textcolor(15);
	   level=3;
	   gotoxy(10,2);
	   cprintf("%d",level);
	   gotoxy(75,2);
	   cprintf("%d",sum);
	   if(sum>=20 && sum<=30)
	   {
	      level3(x1,y1,n);
	      textcolor(15);
	      gotoxy(75,2);
	      cprintf("%d",sum);
	      sum+=n;
	   }
	   else
	   {
	      lc();
	      load();
	      l4();
	      level=4;
	   }
	}

    //************** WELCOME TO LEVEL 4 ************

	if(level==4 && x==x1 && y==y1)
	{
	   textcolor(15);
	   level=4;
	   gotoxy(10,2);
	   cprintf("%d",level);
	   gotoxy(75,2);
	   cprintf("%d",sum);
	   if(sum>=30 && sum<=40)
	   {
	      level4(x1,y1,n);
	      textcolor(15);
	      gotoxy(75,2);
	      cprintf("%d",sum);
	      sum+=n;
	   }
	   else
	   {
	      lc();
	      load();
	      l5();
	      level=5;
	   }
	}

    //************ WELCOME TO LEVEL 5*************

	if(level==5 && x==x1 && y==y1)
	{
	   textcolor(15);
	   level=5;
	   gotoxy(10,2);
	   cprintf("%d",level);
	   gotoxy(75,2);
	   cprintf("%d",sum);
	   if(sum>=40)
	   {
	      level5(x1,y1,n);
	      textcolor(15);
	      gotoxy(75,2);
	      cprintf("%d",sum);
	      sum+=n;
	   }

	 /*  else
	   {
	      level=6;
	   } */
	}

    //************ Exit after strikes to level 2 hurdels ********

	if(((x==15 && y<11) || (x==40 && y>14)) && level==2)
	{
	      break;
	}

    //************ Exit after strikes to level 3 hurdels ***************

	if(((x==15 && y<11) || (x==40 && y>14) || (x==30 && y<14) || (x==50 && y<16)) && level==3)
	{
	    break;
	}

    //************ Exit after strikes to level 4 hurdels ***********

	if(((x==15 && y<11) || (x==40 && y>14) || (x==30 && y<14) || (x==50 && y<16) || (x==60 && y>14) || (x==10 && y>15)) && level==4)
	{
	    break;
	}

    // ********** Exit after strikes to level 5 hurdels **********

	if(((x==15 && y<11) || (x==40 && y>14) || (x==30 && y<14) || (x==50 && y<16) || (x==60 && y>14) || (x==10 && y>15) || (x==37 && y>16) || (x==58 && y>16) || (x==65 && y<16) || (x==55 && y<11) || (x==70 && y<18)) && level==5)
	{
	    break;
	}
	if(kbhit())
	{
	    c=getch();
	}
	textbackground(9);
	switch(c)
	{
	   case UP_KEY:
			gotoxy(x,y);
			cprintf(" ");
			y--;
			if(y==3)
			{
			   y=23;
			}
			break;

	   case DOWN_KEY:
			 gotoxy(x,y);
			 cprintf(" ");
			 y++;
			 if(y==24)
			 {
			    y=4;
			 }
			 break;
	   case LEFT_KEY:
			 gotoxy(x,y);
			 cprintf(" ");
			 x--;
			 if(x==1)
			 {
			    x=79;
			 }
			 break;
	   case RIGHT_KEY:
			 gotoxy(x,y);
			 cprintf(" ");
			 x++;
			 if(x==80)
			 {
			     x=2;
			 }
			 break;
	   case PRESS_0:
			   break;

	}
      }while(c!=PRESS_0);
      gameover();
      end();
}