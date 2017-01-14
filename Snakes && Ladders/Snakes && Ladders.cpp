/*
Snakes && Ladders !!

United International University.
Guide By : Rizve Sir .

Developed By :
# Hasan Sonet .
# Tanvir Sifat .
# Nasrin Jahan .
*/
#include "iGraphics.h"
#include<string.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
int dx=215,dy=42,sx=226,sy=30,dice=0,show_dice=0,layer=1,count=0,count_p2=0;
int play=0,credit=0,help=0,player;
char number[10],p1p[10],p2p[10];
/*
	function iDraw() is called again and again by the system.
*/
void Sonet_Delay()
{
    int i;
    for(i=1; i<100000000; i++);
}
void iDraw()
{
    //place your drawing codes here
    iClear();
    if(play==0 && credit==0 && help==0)
    {
        iShowBMP(0,0,"front Page.bmp");
    }
    if(credit==1 && play==0 && help==0)
        iShowBMP(0,0,"Credites.bmp");
    if(play==0 && credit==0 && help==1)
        iShowBMP(0,0,"h2p.bmp");
    if(play==1)
    {
        iShowBMP(0,0,"board.bmp");
        iSetColor(0,0,255);
        iFilledCircle(dx,dy,15);
        iSetColor(0,0,0);
        iCircle(dx,dy,15);
        iSetColor(225,0,0);
        iFilledCircle(sx,sy,15);
        iSetColor(0,0,0);
        iCircle(sx,sy,15);
        iSetColor(255,255,255);
        iText(dx-3,dy-4,"1",GLUT_BITMAP_HELVETICA_18);
        iText(sx-3.5,sy-4,"2",GLUT_BITMAP_HELVETICA_18);
        sprintf(number,"%d",dice);
        sprintf(p1p,"%d",count);
        sprintf(p2p,"%d",count_p2);
        iText(20,252,"Current Dice Value : ");
        iText(200,250,number,GLUT_BITMAP_HELVETICA_18);
        iText(20,90,"1st Player's Position:");
        iText(200,88,p1p);
        iText(20,70,"2nd Palyer's Position :");
        iText(204,68,p2p);
        if(player%2==0)
        {
            iText(100,580,"Player Turn : 1",GLUT_BITMAP_HELVETICA_18);
        }
        if(player%2!=0)
        {
            iText(100,580,"Player Turn : 2",GLUT_BITMAP_HELVETICA_18);
        }
        if(show_dice==1)
        {
            if(dice==1)
                iShowBMP(95,420,"1.bmp");
            else if(dice==2)
                iShowBMP(95,420,"2.bmp");
            else if(dice==3)
                iShowBMP(95,420,"3.bmp");
            else if(dice==4)
                iShowBMP(95,420,"4.bmp");
            else if(dice==5)
                iShowBMP(95,420,"5.bmp");
            else if(dice==6)
                iShowBMP(95,420,"6.bmp");
        }
        if(count==100)
        {
            iShowBMP(0,0,"p1win.bmp");
        }
        if(count_p2==100)
            iShowBMP(0,0,"player_2_win.bmp");
    }
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
    //place your codes here

//printf("%d",mx);
}
void Dy_Move()
{
    if(count>10&&count<=20)
        dy=110;

    if(count>=21&&count<=30)
        dy=180;
    if(count>=31&&count<=40)
        dy=245;
    if(count>=41&&count<=50)
        dy=320;
    if(count>=51&&count<=60)
        dy=390;
    if(count>=61&&count<=70)
        dy=450;
    if(count>=71&&count<=80)
        dy=524;
    if(count>=81&&count<=90)
        dy=590;
    if(count>=91&&count<=100)
        dy=656;
}
void Dx_Move()
{
    if(count==1)
        dx=215+(1*100);
    if(count==2)
    {
        dx=215+(2*100);
        count=38;
        dx=1215-(7*100);
        dy=245;
    }
    if(count==3)
        dx=215+(3*100);
    if(count==4)
    {
        dx=215+(4*100);
        count=14;
        dx=1215-(3*100);
        dy=110;
    }
    if(count==5)
        dx=215+(5*100);
    if(count==6)
        dx=215+(6*100);
    if(count==7)
        dx=215+(7*100);
    if(count==8)
    {
        dx=215+(8*100);
        count=31;
        dx=1215;
        dy=245;
    }

    if(count==9)
        dx=215+(9*100);
    if(count==10)
        dx=215+(10*100);
    if(count==11)
        dx=1215;
    if(count==12)
        dx=1215-(1*100);
    if(count==13)
        dx=1215-(2*100);
    if(count==14)
        dx=1215-(3*100);
    if(count==15)
        dx=1215-(4*100);
    if(count==16)
    {
        dx=1215-(5*100);
        count=6;
        dx=215+(6*100);
    }
    if(count==17)
        dx=1215-(6*100);
    if(count==18)
        dx=1215-(7*100);
    if(count==19)
        dx=1215-(8*100);
    if(count==20)
        dx=1215-(9*100);
    if(count==21)
    {
        dx=215+(1*100);
        count=42;
        dx=215+(2*100);
        dy=320;
    }
    if(count==22)
        dx=215+(2*100);
    if(count==23)
        dx=215+(3*100);
    if(count==24)
        dx=215+(4*100);
    if(count==25)
        dx=215+(5*100);
    if(count==26)
        dx=215+(6*100);
    if(count==27)
        dx=215+(7*100);
    if(count==28)
    {
        dx=215+(8*100);
        count=84;
        dx=215+(4*100);
        dy=590;
    }
    if(count==29)
        dx=215+(9*100);
    if(count==30)
        dx=215+(10*100);
    if(count==31)
        dx=1215;
    if(count==32)
        dx=1215-(1*100);
    if(count==33)
        dx=1215-(2*100);
    if(count==34)
        dx=1215-(3*100);
    if(count==35)
        dx=1215-(4*100);
    if(count==36)
    {
        dx=1215-(5*100);
        count=44;
        dx=215+(4*100);
        dy=320;
    }
    if(count==37)
        dx=1215-(6*100);
    if(count==38)
        dx=1215-(7*100);
    if(count==39)
        dx=1215-(8*100);
    if(count==40)
        dx=1215-(9*100);
    if(count==41)
        dx=215+(1*100);
    if(count==42)
        dx=215+(2*100);
    if(count==43)
        dx=215+(3*100);
    if(count==44)
        dx=215+(4*100);
    if(count==45)
        dx=215+(5*100);
    if(count==46)
        dx=215+(6*100);
    if(count==47)
    {
        dx=215+(7*100);
        count=26;
        dx=215+(6*100);
        dy=180;
    }
    if(count==48)
        dx=215+(8*100);
    if(count==49)
    {
        dx=215+(9*100);
        count=11;
        dx=1215;
        dy=110;
    }
    if(count==50)
        dx=215+(10*100);
    if(count==51)
    {
        dx=1215;
        count=67;
        dx=215+(7*100);
        dy=450;
    }
    if(count==52)
        dx=1215-(1*100);
    if(count==53)
        dx=1215-(2*100);
    if(count==54)
        dx=1215-(3*100);
    if(count==55)
        dx=1215-(4*100);
    if(count==56)
    {
        dx=1215-(5*100);
        count=53;
        dx=1215-(2*100);
    }
    if(count==57)
        dx=1215-(6*100);
    if(count==58)
        dx=1215-(7*100);
    if(count==59)
        dx=1215-(8*100);
    if(count==60)
        dx=1215-(9*100);
    if(count==61)
        dx=215+(1*100);
    if(count==62)
    {
        dx=215+(2*100);
        count=18;
        dx=1215-(7*100);
        dy=110;
    }
    if(count==63)
        dx=215+(3*100);
    if(count==64)
    {
        dx=215+(4*100);
        count=60;
        dx=1215-(9*100);
        dy=390;
    }
    if(count==65)
        dx=215+(5*100);
    if(count==66)
        dx=215+(6*100);
    if(count==67)
        dx=215+(7*100);
    if(count==68)
        dx=215+(8*100);
    if(count==69)
        dx=215+(9*100);
    if(count==70)
        dx=215+(10*100);
    if(count==71)
    {
        dx=1215;
        count=90;
        dx=215+(10*100);
        dy=656;
    }
    if(count==72)
        dx=1215-(1*100);
    if(count==73)
        dx=1215-(2*100);
    if(count==74)
        dx=1215-(3*100);
    if(count==75)
        dx=1215-(4*100);
    if(count==76)
        dx=1215-(5*100);
    if(count==77)
        dx=1215-(6*100);
    if(count==78)
        dx=1215-(7*100);
    if(count==79)
        dx=1215-(8*100);
    if(count==80)
        dx=1215-(9*100);
    if(count==81)
        dx=215+(1*100);
    if(count==82)
        dx=215+(2*100);
    if(count==83)
        dx=215+(3*100);
    if(count==84)
        dx=215+(4*100);
    if(count==85)
        dx=215+(5*100);
    if(count==86)
        dx=215+(6*100);
    if(count==87)
    {
        dx=215+(7*100);
        count=24;
        dx=215+(4*100);
        dy=180;
    }
    if(count==88)
        dx=215+(8*100);
    if(count==89)
        dx=215+(9*100);
    if(count==90)
        dx=215+(10*100);
    if(count==91)
        dx=1215;
    if(count==92)
        dx=1215-(1*100);
    if(count==93)
    {
        dx=1215-(2*100);
        count=73;
        dx=1215-(2*100);
        dy=524;
    }
    if(count==94)
        dx=1215-(3*100);
    if(count==95)
    {
        dx=1215-(4*100);
        count=75;
        dx=1215-(4*100);
        dy=524;
    }
    if(count==96)
        dx=1215-(5*100);
    if(count==97)
        dx=1215-(6*100);
    if(count==98)
    {
        dx=1215-(7*100);
        count=78;
        dx=1215-(7*100);
        dy=524;
    }
    if(count==99)
        dx=1215-(8*100);
    if(count==100)
        dx=1215-(9*100);
    if(count>100)
        count=count-dice;
}
void Sy_Move()
{
    if(count_p2>10&&count_p2<=20)
        sy=110;
    if(count_p2>=21&&count_p2<=30)
        sy=180;
    if(count_p2>=31&&count_p2<=40)
        sy=245;
    if(count_p2>=41&&count_p2<=50)
        sy=320;
    if(count_p2>=51&&count_p2<=60)
        sy=390;
    if(count_p2>=61&&count_p2<=70)
        sy=450;
    if(count_p2>=71&&count_p2<=80)
        sy=520;
    if(count_p2>=81&&count_p2<=90)
        sy=585;
    if(count_p2>=91&&count_p2<=100)
        sy=652;
}
void Sx_Move()
{
    if(count_p2==1)
        sx=215+(1*100);
    if(count_p2==2)
    {
        sx=215+(2*100);
        count_p2=38;
        sx=1215-(7*100);
        sy=245;
    }
    if(count_p2==3)
        sx=215+(3*100);
    if(count_p2==4)
    {
        sx=215+(4*100);
        count_p2=14;
        sx=1215-(3*100);
        sy=110;
    }
    if(count_p2==5)
        sx=215+(5*100);
    if(count_p2==6)
        sx=215+(6*100);
    if(count_p2==7)
        sx=215+(7*100);
    if(count_p2==8)
    {
        sx=215+(8*100);
        count_p2=31;
        sx=1215;
        sy=245;
    }
    if(count_p2==9)
        sx=215+(9*100);
    if(count_p2==10)
        sx=215+(10*100);
    if(count_p2==11)
        sx=1215;
    if(count_p2==12)
        sx=1215-(1*100);
    if(count_p2==13)
        sx=1215-(2*100);
    if(count_p2==14)
        sx=1215-(3*100);
    if(count_p2==15)
        sx=1215-(4*100);
    if(count_p2==16)
    {
        sx=1215-(5*100);
        count_p2=6;
        sx=215+(6*100);
    }
    if(count_p2==17)
        sx=1215-(6*100);

    if(count_p2==18)
        sx=1215-(7*100);
    if(count_p2==19)
        sx=1215-(8*100);
    if(count_p2==20)
        sx=1215-(9*100);
    if(count_p2==21)
    {
        sx=215+(1*100);
        count_p2=42;
        sx=215+(2*100);
        sy=320;
    }
    if(count_p2==22)
        sx=215+(2*100);
    if(count_p2==23)
        sx=215+(3*100);
    if(count_p2==24)
        sx=215+(4*100);
    if(count_p2==25)
        sx=215+(5*100);
    if(count_p2==26)
        sx=215+(6*100);
    if(count_p2==27)
        sx=215+(7*100);
    if(count_p2==28)
    {
        sx=215+(8*100);
        count_p2=84;
        sx=215+(4*100);
        sy=590;
    }
    if(count_p2==29)
        sx=215+(9*100);
    if(count_p2==30)
        sx=215+(10*100);

    if(count_p2==31)
        sx=1215;

    if(count_p2==32)
        sx=1215-(1*100);

    if(count_p2==33)
        sx=1215-(2*100);

    if(count_p2==34)
        sx=1215-(3*100);

    if(count_p2==35)
        sx=1215-(4*100);

    if(count_p2==36)
    {
        sx=1215-(5*100);
        count_p2=44;
        sx=215+(4*100);
        sy=320;
    }

    if(count_p2==37)
        sx=1215-(6*100);

    if(count_p2==38)
        sx=1215-(7*100);

    if(count_p2==39)
        sx=1215-(8*100);

    if(count_p2==40)
        sx=1215-(9*100);

    if(count_p2==41)
        sx=215+(1*100);

    if(count_p2==42)
        sx=215+(2*100);

    if(count_p2==43)
        sx=215+(3*100);

    if(count_p2==44)
        sx=215+(4*100);

    if(count_p2==45)
        sx=215+(5*100);

    if(count_p2==46)
        sx=215+(6*100);

    if(count_p2==47)
    {
        sx=215+(7*100);
        count_p2=26;
        sx=215+(6*100);
        sy=180;
    }

    if(count_p2==48)
        sx=215+(8*100);

    if(count_p2==49)
    {
        sx=215+(9*100);
        count_p2=11;
        sx=1215;
        sy=110;;
    }

    if(count_p2==50)
        sx=215+(10*100);

    if(count_p2==51)
    {
        sx=1215;
        count_p2=67;
        sx=215+(7*100);
        sy=450;
    }

    if(count_p2==52)
        sx=1215-(1*100);

    if(count_p2==53)
        sx=1215-(2*100);

    if(count_p2==54)
        sx=1215-(3*100);

    if(count_p2==55)
        sx=1215-(4*100);

    if(count_p2==56)
    {
        sx=1215-(5*100);
        count_p2=53;
        sx=1215-(2*100);
    }

    if(count_p2==57)
        sx=1215-(6*100);

    if(count_p2==58)
        sx=1215-(7*100);

    if(count_p2==59)
        sx=1215-(8*100);

    if(count_p2==60)
        sx=1215-(9*100);

    if(count_p2==61)
        sx=215+(1*100);

    if(count_p2==62)
    {
        sx=215+(2*100);
        count_p2=18;
        sx=1215-(7*100);
        sy=110;
    }

    if(count_p2==63)
        sx=215+(3*100);

    if(count_p2==64)
    {
        sx=215+(4*100);
        count_p2=60;
        sx=1215-(9*100);
        sy=390;
    }

    if(count_p2==65)
        sx=215+(5*100);

    if(count_p2==66)
        sx=215+(6*100);

    if(count_p2==67)
        sx=215+(7*100);

    if(count_p2==68)
        sx=215+(8*100);

    if(count_p2==69)
        sx=215+(9*100);

    if(count_p2==70)
        sx=215+(10*100);

    if(count_p2==71)
    {
        sx=1215;
        count_p2=90;
        sx=215+(10*100);
        sy=656;
    }
    if(count_p2==72)
        sx=1215-(1*100);

    if(count_p2==73)
        sx=1215-(2*100);

    if(count_p2==74)
        sx=1215-(3*100);

    if(count_p2==75)
        sx=1215-(4*100);

    if(count_p2==76)
        sx=1215-(5*100);

    if(count_p2==77)
        sx=1215-(6*100);

    if(count_p2==78)
        sx=1215-(7*100);

    if(count_p2==79)
        sx=1215-(8*100);

    if(count_p2==80)
        sx=1215-(9*100);

    if(count_p2==81)
        sx=215+(1*100);

    if(count_p2==82)
        sx=215+(2*100);

    if(count_p2==83)
        sx=215+(3*100);

    if(count_p2==84)
        sx=215+(4*100);

    if(count_p2==85)
        sx=215+(5*100);

    if(count_p2==86)
        sx=215+(6*100);

    if(count_p2==87)
    {
        sx=215+(7*100);
        count_p2=24;
        sx=215+(4*100);
        sy=180;
    }

    if(count_p2==88)
        sx=215+(8*100);

    if(count_p2==89)
        sx=215+(9*100);

    if(count_p2==90)
        sx=215+(10*100);

    if(count_p2==91)
        sx=1215;

    if(count_p2==92)
        sx=1215-(1*100);

    if(count_p2==93)
    {
        sx=1215-(2*100);
        count_p2=73;
        sx=1215-(2*100);
        sy=524;
    }

    if(count_p2==94)
        sx=1215-(3*100);

    if(count_p2==95)
    {
        sx=1215-(4*100);
        count_p2=75;
        sx=1215-(4*100);
        sy=524;
    }

    if(count_p2==96)
        sx=1215-(5*100);

    if(count_p2==97)
        sx=1215-(6*100);

    if(count_p2==98)
    {
        sx=1215-(7*100);
        count_p2=78;
        sx=1215-(7*100);
        sy=524;
    }

    if(count_p2==99)
        sx=1215-(8*100);

    if(count_p2==100)
        sx=1215-(9*100);

    if(count_p2>100)
        count_p2=count_p2-dice;
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
        if(play==0 && help==0 && credit==0)
        {
            if(mx>=496 && mx<=708 && my>=214 && my<=250)
            {
                play=1;
                credit=0;
                help=0;
            }
            if(mx>= 500 && mx<=712 && my>=184 && my<=210)
            {
                credit=1;
                play=0;
                help=0;
            }
            if(mx>=504 && mx<=714 && my>=148 && my<=172)
            {
                help=1;
                play=0;
                credit=0;
            }
            if(mx>=502 && mx<=712 && my>=116 && my<=141)
            {
                exit(0);
            }
        }
        if(help==1)
        {
            if(mx>=16 && mx<=185 && my>=7 && my<=65)
            {
                play=0;
                credit=0;
                help=0;
            }
        }
        if(credit==1)
        {
            if(mx>=7 && mx<=107 && my>=4 && my<=127)
            {
                play=0;
                help=0;
                credit=0;
            }
            if(mx>=119 && mx<=222 && my>=4 && my<=127)
                exit(0);
        }
        if(play==1)
        {
            if(mx>=66 && mx<=168 && my>=325 && my<=390)
            {
                show_dice=1;
                srand (time(NULL));
                dice=rand()%6+1;
                player=player+1;
                if(player%2!=0)
                {
                    count=count+dice;
                }
                if(player%2==0)
                {
                    count_p2=count_p2+dice;
                }
                printf("%d && %d && %d\n",dice,count,count_p2);
            }
            Dx_Move();
            Dy_Move();
            Sx_Move();
            Sy_Move();
        }
    }
    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
        //place your codes here	. . .
    }
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if(key == 'q')
    {
        //do something with 'q'
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

    if(key == GLUT_KEY_END)

    {
        exit(0);
    }
    if(key == GLUT_KEY_END)
    {
        exit(0);
    }
    //place your codes for other keys here
}
void Dice_Change()
{
    if(play==1)
    {
        Sonet_Delay();
        show_dice=0;
    }
}

//Main Function .

int main()
{
    iSetTimer(2000,Dice_Change);
    iInitialize(1280,720, "Snakes and Ladders");
    return 0;
}
