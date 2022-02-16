#ifndef MENUBACKGROUND_H_INCLUDED
#define MENUBACKGROUND_H_INCLUDED
#include<iostream> 
#include<string> 
#include <sstream>
using namespace std;
#define screenWidth 1200
#define screenHeight 600
#define jumpLimit 250

int dx = 10;
int dy = 10;
char ubImage[62][30] = { "images\\bg\\col-1.bmp", "images\\bg\\col-2.bmp", "images\\bg\\col-3.bmp", "images\\bg\\col-4.bmp", "images\\bg\\col-5.bmp", "images\\bg\\col-6.bmp", "images\\bg\\col-7.bmp", "images\\bg\\col-8.bmp", "images\\bg\\col-9.bmp", "images\\bg\\col-10.bmp", "images\\bg\\col-11.bmp",
"images\\bg\\col-12.bmp", "images\\bg\\col-13.bmp", "images\\bg\\col-14.bmp", "images\\bg\\col-15.bmp", "images\\bg\\col-16.bmp", "images\\bg\\col-17.bmp", "images\\bg\\col-18.bmp", "images\\bg\\col-19.bmp", "images\\bg\\col-20.bmp", "images\\bg\\col-21.bmp",
"images\\bg\\col-22.bmp", "images\\bg\\col-23.bmp", "images\\bg\\col-24.bmp", "images\\bg\\col-25.bmp", "images\\bg\\col-26.bmp", "images\\bg\\col-27.bmp", "images\\bg\\col-28.bmp", "images\\bg\\col-29.bmp", "images\\bg\\col-30.bmp", "images\\bg\\col-31.bmp", "images\\bg\\col-32.bmp",
"images\\bg\\col-33.bmp", "images\\bg\\col-34.bmp", "images\\bg\\col-35.bmp", "images\\bg\\col-36.bmp", "images\\bg\\col-37.bmp", "images\\bg\\col-38.bmp", "images\\bg\\col-39.bmp", "images\\bg\\col-40.bmp", "images\\bg\\col-41.bmp", "images\\bg\\col-42.bmp", "images\\bg\\col-43.bmp",
"images\\bg\\col-44.bmp", "images\\bg\\col-45.bmp", "images\\bg\\col-46.bmp", "images\\bg\\col-47.bmp", "images\\bg\\col-48.bmp", "images\\bg\\col-49.bmp", "images\\bg\\col-50.bmp", "images\\bg\\col-51.bmp", "images\\bg\\col-52.bmp", "images\\bg\\col-53.bmp", "images\\bg\\col-54.bmp", "images\\bg\\col-55.bmp", "images\\bg\\col-56.bmp", "images\\bg\\col-57.bmp", "images\\bg\\col-58.bmp", "images\\bg\\col-59.bmp", "images\\bg\\col-60.bmp", "images\\bg\\col-61.bmp", "images\\bg\\col-62.bmp" };

char lbImage[62][30] = { "images\\bg\\row-1.bmp", "images\\bg\\row-2.bmp", "images\\bg\\row-3.bmp", "images\\bg\\row-4.bmp", "images\\bg\\row-5.bmp", "images\\bg\\row-6.bmp", "images\\bg\\row-7.bmp", "images\\bg\\row-8.bmp", "images\\bg\\row-9.bmp", "images\\bg\\row-10.bmp",
"images\\bg\\row-11.bmp", "images\\bg\\row-12.bmp", "images\\bg\\row-13.bmp", "images\\bg\\row-14.bmp", "images\\bg\\row-15.bmp", "images\\bg\\row-16.bmp", "images\\bg\\row-17.bmp", "images\\bg\\row-18.bmp", "images\\bg\\row-19.bmp", "images\\bg\\row-20.bmp",
"images\\bg\\row-21.bmp", "images\\bg\\row-22.bmp", "images\\bg\\row-23.bmp", "images\\bg\\row-24.bmp", "images\\bg\\row-25.bmp", "images\\bg\\row-1.bmp", "images\\bg\\row-2.bmp", "images\\bg\\row-3.bmp", "images\\bg\\row-4.bmp", "images\\bg\\row-5.bmp",
"images\\bg\\row-6.bmp", "images\\bg\\row-7.bmp", "images\\bg\\row-8.bmp", "images\\bg\\row-9.bmp", "images\\bg\\row-10.bmp", "images\\bg\\row-11.bmp", "images\\bg\\row-12.bmp", "images\\bg\\row-13.bmp", "images\\bg\\row-14.bmp", "images\\bg\\row-15.bmp", "images\\bg\\row-16.bmp",
"images\\bg\\row-17.bmp", "images\\bg\\row-18.bmp", "images\\bg\\row-19.bmp", "images\\bg\\row-20.bmp", "images\\bg\\row-21.bmp", "images\\bg\\row-22.bmp", "images\\bg\\row-23.bmp", "images\\bg\\row-24.bmp", "images\\bg\\row-25.bmp", "images\\bg\\row-1.bmp", "images\\bg\\row-2.bmp", "images\\bg\\row-3.bmp", "images\\bg\\row-4.bmp", "images\\bg\\row-5.bmp", "images\\bg\\row-6.bmp", "images\\bg\\row-7.bmp", "images\\bg\\row-8.bmp", "images\\bg\\row-9.bmp", "images\\bg\\row-10.bmp", "images\\bg\\row-11.bmp", "images\\bg\\row-12.bmp" };

struct background
{

	int x;
	int y;

}upperBackground[62], lowerBackground[62];
//abir
struct buttoncoordinate{
	int x, y;


}bcoordinate[6];

char button1[6][30] = { "images\\bc\\start3.bmp", "images\\bc\\highscore2.bmp", "images\\bc\\instruction.bmp", "images\\bc\\about.bmp", "images\\bc\\quit.bmp", "images\\bc\\start4.bmp" };
char homemenu[30] = { "images\\bc\\homemenu.bmp" };
char score[25] = { "images\\bc\\high_score.bmp" };
char underbatton[26] = { "images\\bg\\underbatton.bmp" };
char underscore[30] = { "images\\bg\\underscore.bmp" };
char border[22] = { "images\\bg\\border1.bmp" };
char about[22] = { "images\\bc\\about.bmp" };
char instruction[26] = { "images\\bc\\instruction.bmp" };
char yellow[22] = { "images\\bc\\yellow.bmp" };
char forward1[30] = { "images\\bc\\forward.bmp" };
char forwardmovement[31] = { "images\\bc\\forwardmovement.bmp" };
char backward[23] = { "images\\bc\\backward.bmp" };
char backwardmovement[31] = { "images\\bc\\backwardmovement.bmp" };
char flying[22] = { "images\\bc\\jump.bmp" };
char flyingmovement[27] = { "images\\bc\\jumpmovement.bmp" };
char duck[22] = { "images\\bc\\duck.bmp" };
char duckmovement[27] = { "images\\bc\\duckmovement.bmp" };
char hujaifa[22] = { "images\\bc\\hujaifa.bmp" };
char suzana[22] = { "images\\bc\\suzana.bmp" };
char abir[22] = { "images\\bc\\abir.bmp" };
char sky[22] = { "images\\bc\\sky.bmp" };
char menu[22] = { "images\\bc\\menu.bmp" };
char story1[30] = { "images\\story\\story1.bmp" };
char story2[30] = { "images\\story\\story2.bmp" };
char story3[30] = { "images\\story\\story3.bmp" };
char next1[30] = { "images\\story\\next1.bmp" };
char next2[30] = { "images\\story\\next2.bmp" };
char next3[30] = { "images\\story\\next3.bmp" };




int gamestate = -1; //-1 for menu 0 for game
bool newGame = true;

//hujaifa
bool musicon = true;

void setAll(){

	int sum = 0;
	for (int i = 0; i < 62; i++){

		upperBackground[i].y = 120;
		lowerBackground[i].y = 0;
		upperBackground[i].x = sum;
		lowerBackground[i].x = sum;
		sum += 20;
	}

}


#endif