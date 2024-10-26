//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Battleship.
//============================================================================

#ifndef Battleship_CPP_
#define Battleship_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
using namespace std;
//----------------------------------------------------------------------
int balance=0;

int screen=0,ship=0,color=0;
int csx1=663,csy1=187,csx3=783,csy3=263,csx2=589,csy2=263,csx4=589,csy4=337,csx5=703,csy5=337,csx6=823,csy6=337,csx7=547,csy7=417,csx8=667,csy8=417,csx9=783,csy9=417,csx10=897,csy10=417;
int ax1,ay1,bx1,by1,cx1,cy1,dx1,dy1,ex1,ey1,fx1,fy1,gx1,gy1,hx1,hy1,ix1,iy1,jx1,jy1;
int ax2,bx2,cx2,dx2,ex2,fx2;
int dx=602,ex=722,fx=842,dy=442,ey=442,fy=442,ax=682,ay=602,gx=562,hx=682,ix=802,jx=922,gy=362,hy=362,iy=362,jy=362,bx=602,cx=802,by=522,cy=522;
string str;


void Grid(){
	
int x1=40,y1=240,x2=40,y2=640; // for drawline function
for(int count=1; count<=11; count++)
{
DrawLine(x1,y1,x2,y2,4, colors[BLACK]);
	x1+=40;
	x2+=40;
	}
		glutPostRedisplay();
int i1=38,j1=240,i2=442,j2=240;
for(int count=1;count<=11;count++){
DrawLine(i1,j1,i2,j2,4, colors[BLACK]);
	j1+=40;
	j2+=40;
	}
		glutPostRedisplay();

		DrawRoundRect(40,760,120,40,colors[GRAY]);
	DrawString( 60, 770, "Score=0", colors[BLACK]);
       	DrawRoundRect(900,760,100,40,colors[GRAY]);
	DrawString( 910, 770, "START", colors[BLACK]);
}


void play()
{
	DrawRectangle(0,0,1020,840,colors[WHITE]);
	Grid();
	if(color==1){
	DrawRoundRect(ax,ay,160,40,colors[FIREBRICK]); //biggest
        DrawRoundRect( bx, by ,120 , 40, colors[FIREBRICK]); //second
	DrawRoundRect( cx, cy ,120 , 40, colors[FIREBRICK]); //second
	DrawRoundRect( dx, dy ,80 , 40, colors[FIREBRICK]); //third
	DrawRoundRect( ex, ey ,80 , 40, colors[FIREBRICK]); //third
	DrawRoundRect( fx, fy ,80 , 40, colors[FIREBRICK]); //third
	DrawRoundRect( gx, gy ,40 , 40, colors[FIREBRICK]); //4th (1)
	DrawRoundRect(hx, hy, 40, 40, colors[FIREBRICK]); //4th (2)
	DrawRoundRect(ix, iy ,40, 40, colors[FIREBRICK]); //4th (3)
	DrawRoundRect(jx, jy, 40, 40, colors[FIREBRICK]); //4th
	}
	if(color==2){
	DrawRoundRect(ax,ay,160,40,colors[BLUE]); //biggest
        DrawRoundRect( bx, by ,120 , 40, colors[BLUE]); //second
	DrawRoundRect( cx, cy ,120 , 40, colors[BLUE]); //second
	DrawRoundRect( dx, dy ,80 , 40, colors[BLUE]); //third
	DrawRoundRect( ex, ey ,80 , 40, colors[BLUE]); //third
	DrawRoundRect( fx, fy ,80 , 40, colors[BLUE]); //third
	DrawRoundRect( gx, gy ,40 , 40, colors[BLUE]); //4th (1)
	DrawRoundRect(hx, hy, 40, 40, colors[BLUE]); //4th (2)
	DrawRoundRect(ix, iy ,40, 40, colors[BLUE]); //4th (3)
	DrawRoundRect(jx, jy, 40, 40, colors[BLUE]); //4th
	}
	if(color==3){
	DrawRoundRect(ax,ay,160,40,colors[YELLOW]); //biggest
        DrawRoundRect( bx, by ,120 , 40, colors[YELLOW]); //second
	DrawRoundRect( cx, cy ,120 , 40, colors[YELLOW]); //second
	DrawRoundRect( dx, dy ,80 , 40, colors[YELLOW]); //third
	DrawRoundRect( ex, ey ,80 , 40, colors[YELLOW]); //third
	DrawRoundRect( fx, fy ,80 , 40, colors[YELLOW]); //third
	DrawRoundRect( gx, gy ,40 , 40, colors[YELLOW]); //4th (1)
	DrawRoundRect(hx, hy, 40, 40, colors[YELLOW]); //4th (2)
	DrawRoundRect(ix, iy ,40, 40, colors[YELLOW]); //4th (3)
	DrawRoundRect(jx, jy, 40, 40, colors[YELLOW]); //4th
	}
	
	glutPostRedisplay();
	glutSwapBuffers(); 
}
void gamepage()
{
     DrawRectangle(0,0,0,0,colors[BLACK]);
     DrawRoundRect( 440, 790 ,170 , 40, colors[FIREBRICK]);
     DrawString( 450, 800, "BATTLESHIP", colors[WHITE]); //middle
     DrawRoundRect( 5, 290 ,100, 40, colors[FIREBRICK]);
     DrawString( 20, 300, "PLAY", colors[WHITE]); //1
     DrawRoundRect(5, 90 ,210, 40, colors[FIREBRICK]);
     DrawString( 20, 100, "LEADERBOARD", colors[WHITE]); //3
     DrawRoundRect( 5, 190 ,150, 40, colors[FIREBRICK]);
     DrawString( 20, 200,"OPTIONS", colors[WHITE]); //2
     DrawRoundRect( 5, 5 ,150, 40, colors[FIREBRICK]);
     DrawString( 20, 15, "BALANCE", colors[WHITE]); //4
     glutPostRedisplay();
				 
}
 
 void emeny(){
 int x1=500,x2=500,y1=240,y2=640;
 for(int i=0;i<=10;i++){
 DrawLine(x1,y1,x2,y2,3,colors[RED]);
 x1+=40;
 x2+=40;
 }
 int X1=500,X2=900,Y1=240,Y2=240;
 for(int i=0;i<=10;i++){
  DrawLine(X1,Y1,X2,Y2,3,colors[RED]);
 Y1+=40;
 Y2+=40;
 }
 	DrawRoundRect(500,600,160,40,colors[BLUE]); //biggest
        DrawRoundRect( 540,280,120 , 40, colors[BLUE]); //second
	DrawRoundRect( 740,240,120 , 40, colors[BLUE]); //second
	DrawRoundRect( 700,560,80 , 40, colors[BLUE]); //third
	DrawRoundRect( 620,400,80 , 40, colors[BLUE]); //third
	DrawRoundRect( 700,440,80 , 40, colors[BLUE]); //third
	DrawRoundRect( 660,480,40 , 40, colors[BLUE]); //4th (1)
	DrawRoundRect(820,520, 40, 40, colors[BLUE]); //4th (2)
	DrawRoundRect(820,320,40, 40, colors[BLUE]); //4th (3)
	DrawRoundRect(540,440, 40, 40, colors[BLUE]); //4th
 
 }

void shipscolors(){
glClear (GL_COLOR_BUFFER_BIT);
DrawRectangle(0,0,1020,840,colors[BLACK]);
DrawString( 250, 500, "CHOOSE THE COLOR OF SHIPS", colors[RED]);
DrawRoundRect( 250, 450 ,100 , 40, colors[FIREBRICK]);
DrawRoundRect( 370, 450 ,100 , 40, colors[BLUE]);
DrawRoundRect( 490, 450 ,100 , 40, colors[YELLOW]);
glutPostRedisplay();
glutSwapBuffers();
}

void namepage(){
glClear (GL_COLOR_BUFFER_BIT);
DrawRoundRect( 340, 450 ,170 , 40, colors[FIREBRICK]);
DrawString( 350,460, "Player Name", colors[WHITE]);
DrawLine( 350,400,550,400,5,colors[RED]);
DrawString(355,410,str,colors[WHITE]);
DrawRoundRect(350,300,150,40);
DrawString( 380, 310, "START", colors[WHITE]);
glutPostRedisplay();
glutSwapBuffers();
}


// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */

void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}





int xI = 400, yI = 400;

void drawObject() {
	glutPostRedisplay();
}
bool flag = true;
void moveObject() {
	
	if (xI > 10 && flag) {
		xI -= 10;
		cout << "going left";
		if(xI < 100)
			
			flag = false;

	}
	else if (xI < 1010 && !flag) {
		cout << "go right";
		xI += 10;
		if (xI > 900)
			flag = true;
	}
}

/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/{



	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim red and 1 means pure red and so on.

	glClearColor(1/*Red Component*/, 1,	//148.0/255/*Green Component*/,
			1/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	//glClear (GL_COLOR_BUFFER_BIT); //Update the colors
	//Red Square
	//DrawSquare(400, 20, 40, colors[RED]);
	gamepage();
	//emeny();
	//shipscolors();
	//namepage(); 
	//Green Square
	//DrawSquare( 250 , 250 ,20,colors[GREEN]); 
	
	//Display Score
	//DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	
	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)
	//DrawTriangle( 300, 450 , 340, 450 , 320 , 490, colors[MISTY_ROSE] ); 
	


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float *color)
	//DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	//DrawCircle(50,670,10,colors[RED]);
	//DrawCircle(70,670,10,colors[RED]);
	//DrawCircle(90,670,10,colors[RED]);
	//DrawRoundRect(500,200,50,100,colors[DARK_SEA_GREEN],70);
	//DrawRoundRect(100,200,100,50,colors[DARK_OLIVE_GREEN],20);	
	//DrawRoundRect(100,100,50,100,colors[DARK_OLIVE_GREEN],30);
	//DrawRectangle(200,100,100,50,colors[BLUE],40);
	//DrawRoundRect(350,100,100,50,colors[LIME_GREEN],20);
	
	//drawObject();
        glutDisplayFunc(gamepage);
	
	glutSwapBuffers(); // do not modify this line..


}


/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */


void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...
		xI -= 10;

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {
		xI += 10;
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {
		yI += 10;
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {
		yI -= 10;
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}
/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
 
 

void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 27/* Escape key ASCII*/) {
		glutDisplayFunc(gamepage); // exit the program when escape key is pressed.
	}
if (key == 8/* delete key ASCII*/) {
		exit(0); // exit the program when escape key is pressed.
	}
	if (key == 'b' || key == 'B') //Key for placing the bomb
			{
		//do something if b is pressed
		cout << "b pressed" << endl;

	}
	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
 
 
void Timer(int m) {

	// implement your functionality here
	moveObject();

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(100, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */

void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	cout << x << " " << y << endl;
	
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
		{


		
if((x>5)&&(x<105)&&(y>510)&&(y<550))
		{
		glutDisplayFunc(namepage);
		screen=1;	
		}
if((x>350)&&(x<500)&&(y>500)&&(y<540)&&(screen==1)){
                glutDisplayFunc(shipscolors);
		screen=2;
}
if((x>250)&&(x<350)&&(y>350)&&(y<390)&&(screen==2)){
                screen=3;
		color=1;
                glutDisplayFunc(play);
		
}
if((x>370)&&(x<470)&&(y>350)&&(y<390)&&(screen==2)){
                screen=3;
		color=2;
                glutDisplayFunc(play);
		
}
if((x>470)&&(x<590)&&(y>350)&&(y<390)&&(screen==2)){
                screen=3;
		color=3;
                glutDisplayFunc(play);
		
}
if((x>900)&&(x<1000)&&(y>40)&&(y<80)&&(screen==3))
		{
		glutDisplayFunc(emeny);
		screen=4;	
		}
if((x>0)&&(x<1080)&&(y>0)&&(y<820))
{
if(screen==3)
{
if((x>csx1)&&(x<csx1+163)&&(y>csy1)&&(y<csy1+43)){
		ship=4;

}
if((x>csx3)&&(x<csx3+123)&&(y>csy3)&&(y<csy3+43)){
		ship=32;
		
}
if((x>csx2)&&(x<csx2+123)&&(y>csy2)&&(y<csy2+43)){
		ship=31;

}
if((x>csx4)&&(x<csx4+83)&&(y>csy4)&&(y<csy4+43)){
		ship=21;

}
if((x>csx5)&&(x<csx5+83)&&(y>csy5)&&(y<csy5+43)){
		ship=22;

}
if((x>csx6)&&(x<csx6+83)&&(y>csy6)&&(y<csy6+43)){
		ship=23;
}
if((x>csx7)&&(x<csx7+43)&&(y>csy7)&&(y<csy7+43)){
		ship=11;

}
if((x>csx8)&&(x<csx8+43)&&(y>csy8)&&(y<csy8+43)){
		ship=12;

}
if((x>csx9)&&(x<csx9+43)&&(y>csy9)&&(y<csy9+43)){
		ship=13;
		
}
if((x>csx10)&&(x<csx10+43)&&(y>csy10)&&(y<csy10+43)){
		ship=14;

}
}
}
if((x>40)&&(x<440)&&(y>200)&&(y<600))
{
if(ship==4){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
ax2=x+80;
}
ax1=(x-120+ax2)/40;
ax=(ax1*40);
ay1=(840-y)/40;
ay=ay1*40;

	glutDisplayFunc(play);
}
if(ship==31){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
bx2=x+40;
}
bx1=(x-80+bx2)/40;
bx=(bx1*40);
by1=(840-y)/40;
by=by1*40;


	glutDisplayFunc(play);
}
if(ship==32){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
cx2=x+40;
}
cx1=(x-80+cx2)/40;
cx=(cx1*40);
cy1=(840-y)/40;
cy=cy1*40;

	glutDisplayFunc(play);
}
if(ship==21){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
dx2=x;
}
dx1=(x-40+dx2)/40;
dx=dx1*40;
dy1=(840-y)/40;
dy=dy1*40;

	glutDisplayFunc(play);
}
if(ship==22){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
ex2=x;
}
ex1=(x-40+ex2)/40;
ex=ex1*40;
ey1=(840-y)/40;
ey=ey1*40;


	glutDisplayFunc(play);
}
if(ship==23){
if((x>40)&&(x<80)&&(y>200)&&(y<600))
{
fx2=x;
}
fx1=(x-40+fx2)/40;
fx=fx1*40;

fy1=(840-y)/40;
fy=fy1*40;


	glutDisplayFunc(play);
}
if(ship==11){
gx1=x/40;
gx=gx1*40;
gy1=(840-y)/40;
gy=gy1*40;

	glutDisplayFunc(play);
}
if(ship==12){
hx1=x/40;
hx=hx1*40;
hy1=(840-y)/40;
hy=hy1*40;

	glutDisplayFunc(play);
}
if(ship==13){
ix1=x/40;
ix=ix1*40;
iy1=(840-y)/40;
iy=iy1*40;

	glutDisplayFunc(play);
}
if(ship==14){
jx1=x/40;
jx=jx1*40;
jy1=(840-y)/40;
jy=jy1*40;
glutDisplayFunc(play);
}

}
glutSwapBuffers();	
}
 else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{




	}
	glutPostRedisplay();

}


/*
 * our gateway main function
 * */
 
 
int main(int argc, char*argv[]) {

	int width = 1020, height = 840; // i have set my window size to be 800 x 600

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Battleship Game"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;

//--------------------------------------------------------------------
}




#endif /* Battleship_CPP_ */
