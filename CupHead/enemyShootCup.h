#ifndef ENEMYSHOOTCUP_H_INCLUDED
#define ENEMYSHOOTCUP_H_INCLUDED
# include "menuBackground.h"
#include<iostream> 
#include<string> 
#include <sstream>
using namespace std;
#define screenWidth 1200
#define screenHeight 600
#define jumpLimit 250
bool gameEnd = false;
bool file = false;
static int file1 = 0;
int num = 0;
char strnum[20];

typedef struct Shoot Shoot;
struct Shoot{
	int x = 0, y = 0;
	bool shootOn = false;
};
Shoot s[10000];
int shootindex = 0;
int shootDx = 60, shootDy = 20;


typedef struct Enemy1 Enemy1;
struct Enemy1{
	int x = 0, y = 0;
	bool On;
};
Enemy1 e1[100];
int roundEnemyIndex = 0;
int roundEnemyDx = 50, roundEnemyDy = 50;

typedef struct Enemy2 Enemy2;
struct Enemy2{
	int x = 0, y = 0;
	bool On;
};
Enemy2 e2[100];
int turtleEnemyIndex = 0;
int turtleEnemyDx = 70, turtleEnemyDy = 60;

typedef struct Enemy3 Enemy3;
struct Enemy3{
	int x = 0, y = 0;
	bool On;
};
Enemy3 e3[100];
int ghostEnemyIndex = 0;
int ghostEnemyDx = 52, ghostEnemyDy = 64;

typedef struct Enemy4 Enemy4;
struct Enemy4{
	int x = 0, y = 0;
	bool On;
};
Enemy4 e4[100];
int rockEnemyIndex = 0;
int rockEnemyDx = 80, rockEnemyDy = 85;

typedef struct Enemy5 Enemy5;
struct Enemy5{
	int x = 0, y = 0;
	bool On;
};
Enemy5 e5[100];
int fireEnemyIndex = 0;
int fireEnemyDx = 50, fireEnemyDy = 90;

char roundEnemy[4][30] = { "images\\RoundEnemy\\1.bmp", "images\\RoundEnemy\\2.bmp", "images\\RoundEnemy\\3.bmp", "images\\RoundEnemy\\4.bmp" };
int roundEnemyPictureIndex = 0;
char ghostEnemy[16][30] = { "images\\GhostEnemy\\1.bmp", "images\\GhostEnemy\\2.bmp", "images\\GhostEnemy\\3.bmp", "images\\GhostEnemy\\4.bmp", "images\\GhostEnemy\\5.bmp", "images\\GhostEnemy\\6.bmp", "images\\GhostEnemy\\7.bmp", "images\\GhostEnemy\\8.bmp", "images\\GhostEnemy\\9.bmp", "images\\GhostEnemy\\10.bmp", "images\\GhostEnemy\\11.bmp", "images\\GhostEnemy\\12.bmp", "images\\GhostEnemy\\13.bmp", "images\\GhostEnemy\\14.bmp", "images\\GhostEnemy\\15.bmp", "images\\GhostEnemy\\16.bmp" };
int ghostEnemyPictureIndex = 0;
char turtleEnemy[13][30] = { "images\\TurtleEnemy\\1.bmp", "images\\TurtleEnemy\\2.bmp", "images\\TurtleEnemy\\3.bmp", "images\\TurtleEnemy\\4.bmp", "images\\TurtleEnemy\\5.bmp", "images\\TurtleEnemy\\6.bmp", "images\\TurtleEnemy\\7.bmp", "images\\TurtleEnemy\\8.bmp", "images\\TurtleEnemy\\9.bmp", "images\\TurtleEnemy\\10.bmp", "images\\TurtleEnemy\\11.bmp", "images\\TurtleEnemy\\12.bmp", "images\\TurtleEnemy\\13.bmp" };
int turtleEnemyPictureIndex = 0;
char rockEnemy[5][30] = { "images\\Rock\\1.bmp", "images\\Rock\\2.bmp", "images\\Rock\\3.bmp", "images\\Rock\\4.bmp", "images\\Rock\\5.bmp" };
int rockEnemyPictureIndex = 0;
char fireEnemy[4][30] = { "images\\Fire\\1.bmp", "images\\Fire\\2.bmp", "images\\Fire\\3.bmp", "images\\Fire\\4.bmp" };
int fireEnemyPictureIndex = 0;


int flowerHealth = 20;
int flowerHealthX, flowerHealthY;
bool flowerOn = true;
int flowerCoordinateX = 1200, flowerCoordinateY = 30;

char flowerIdeal[49][30] = { "images\\Boss\\Ideal\\1.bmp", "images\\Boss\\Ideal\\2.bmp", "images\\Boss\\Ideal\\3.bmp", "images\\Boss\\Ideal\\4.bmp", "images\\Boss\\Ideal\\5.bmp", "images\\Boss\\Ideal\\6.bmp", "images\\Boss\\Ideal\\7.bmp", "images\\Boss\\Ideal\\8.bmp", "images\\Boss\\Ideal\\9.bmp", "images\\Boss\\Ideal\\10.bmp", "images\\Boss\\Ideal\\11.bmp", "images\\Boss\\Ideal\\12.bmp", "images\\Boss\\Ideal\\13.bmp", "images\\Boss\\Ideal\\14.bmp", "images\\Boss\\Ideal\\15.bmp", "images\\Boss\\Ideal\\16.bmp", "images\\Boss\\Ideal\\17.bmp", "images\\Boss\\Ideal\\18.bmp", "images\\Boss\\Ideal\\19.bmp", "images\\Boss\\Ideal\\20.bmp", "images\\Boss\\Ideal\\21.bmp", "images\\Boss\\Ideal\\22.bmp", "images\\Boss\\Ideal\\23.bmp", "images\\Boss\\Ideal\\24.bmp", "images\\Boss\\Ideal\\25.bmp", "images\\Boss\\Ideal\\26.bmp", "images\\Boss\\Ideal\\27.bmp", "images\\Boss\\Ideal\\28.bmp", "images\\Boss\\Ideal\\29.bmp", "images\\Boss\\Ideal\\30.bmp", "images\\Boss\\Ideal\\31.bmp", "images\\Boss\\Ideal\\32.bmp", "images\\Boss\\Ideal\\33.bmp", "images\\Boss\\Ideal\\34.bmp", "images\\Boss\\Ideal\\35.bmp", "images\\Boss\\Ideal\\36.bmp", "images\\Boss\\Ideal\\37.bmp", "images\\Boss\\Ideal\\38.bmp", "images\\Boss\\Ideal\\39.bmp", "images\\Boss\\Ideal\\40.bmp", "images\\Boss\\Ideal\\41.bmp", "images\\Boss\\Ideal\\42.bmp", "images\\Boss\\Ideal\\43.bmp", "images\\Boss\\Ideal\\44.bmp", "images\\Boss\\Ideal\\45.bmp", "images\\Boss\\Ideal\\46.bmp", "images\\Boss\\Ideal\\47.bmp", "images\\Boss\\Ideal\\48.bmp", "images\\Boss\\Ideal\\49.bmp" };
int flowerIdealIndex = 0;
bool flowerIdealOn = true;
char flower1Attack[21][30] = { "images\\Boss\\1Attack\\1.bmp", "images\\Boss\\1Attack\\2.bmp", "images\\Boss\\1Attack\\3.bmp", "images\\Boss\\1Attack\\4.bmp", "images\\Boss\\1Attack\\5.bmp", "images\\Boss\\1Attack\\6.bmp", "images\\Boss\\1Attack\\7.bmp", "images\\Boss\\1Attack\\8.bmp", "images\\Boss\\1Attack\\9.bmp", "images\\Boss\\1Attack\\10.bmp", "images\\Boss\\1Attack\\11.bmp", "images\\Boss\\1Attack\\12.bmp", "images\\Boss\\1Attack\\13.bmp", "images\\Boss\\1Attack\\14.bmp", "images\\Boss\\1Attack\\15.bmp", "images\\Boss\\1Attack\\16.bmp", "images\\Boss\\1Attack\\17.bmp", "images\\Boss\\1Attack\\18.bmp", "images\\Boss\\1Attack\\19.bmp", "images\\Boss\\1Attack\\20.bmp", "images\\Boss\\1Attack\\21.bmp" };
int flower1AttackIndex = 0;
bool flower1AttackOn = false;
char flower2Attack[17][30] = { "images\\Boss\\2Attack\\1.bmp", "images\\Boss\\2Attack\\2.bmp", "images\\Boss\\2Attack\\3.bmp", "images\\Boss\\2Attack\\4.bmp", "images\\Boss\\2Attack\\5.bmp", "images\\Boss\\2Attack\\6.bmp", "images\\Boss\\2Attack\\7.bmp", "images\\Boss\\2Attack\\8.bmp", "images\\Boss\\2Attack\\9.bmp", "images\\Boss\\2Attack\\10.bmp", "images\\Boss\\2Attack\\11.bmp", "images\\Boss\\2Attack\\12.bmp", "images\\Boss\\2Attack\\13.bmp", "images\\Boss\\2Attack\\14.bmp", "images\\Boss\\2Attack\\15.bmp", "images\\Boss\\2Attack\\16.bmp", "images\\Boss\\2Attack\\17.bmp" };
int flower2AttackIndex = 0;
bool flower2AttackOn = false;
char flowerAcorn[4][40] = { "images\\Boss\\2Attack\\Acorn\\1.bmp", "images\\Boss\\2Attack\\Acorn\\2.bmp", "images\\Boss\\2Attack\\Acorn\\3.bmp", "images\\Boss\\2Attack\\Acorn\\4.bmp" };
int flowerAcornIndex = 0;
char flowerDeath[10][30] = { "images\\Boss\\Death\\1.bmp", "images\\Boss\\Death\\2.bmp", "images\\Boss\\Death\\3.bmp", "images\\Boss\\Death\\4.bmp", "images\\Boss\\Death\\5.bmp", "images\\Boss\\Death\\6.bmp", "images\\Boss\\Death\\7.bmp", "images\\Boss\\Death\\8.bmp", "images\\Boss\\Death\\9.bmp", "images\\Boss\\Death\\10.bmp" };
int flowerDeathIndex = 0;
bool flowerDeathOn = false;

typedef struct fShoot fShoot;
struct fShoot{
	int x = 840;
	int y = 130;
	bool On = false;
};
fShoot fs[100];
int fsIndex = 0;

int ae;
void arriveEnemy(){
	if (gamestate == 0){
		if (!flowerOn){
			ae = rand() % 6;
			if (ae == 1){
				e1[roundEnemyIndex].On = true;
				e1[roundEnemyIndex].x = 1200;
				e1[roundEnemyIndex].y = 220;
				roundEnemyIndex++;
				if (roundEnemyIndex >= 100)roundEnemyIndex = 0;
			}
			if (ae == 2){
				e2[turtleEnemyIndex].On = true;
				e2[turtleEnemyIndex].x = 1200;
				e2[turtleEnemyIndex].y = 110;
				turtleEnemyIndex++;
				if (turtleEnemyIndex >= 100)turtleEnemyIndex = 0;
			}
			if (ae == 3){
				e3[ghostEnemyIndex].On = true;
				e3[ghostEnemyIndex].x = 1200;
				e3[ghostEnemyIndex].y = 300;
				ghostEnemyIndex++;
				if (ghostEnemyIndex >= 100)ghostEnemyIndex = 0;
			}
			if (ae == 4){
				e4[rockEnemyIndex].On = true;
				e4[rockEnemyIndex].x = 1200;
				e4[rockEnemyIndex].y = 110;
				rockEnemyIndex++;
				if (rockEnemyIndex >= 100)roundEnemyIndex = 0;
			}
			if (ae == 5){
				e5[fireEnemyIndex].On = true;
				e5[fireEnemyIndex].x = rand() % 1000;
				e5[fireEnemyIndex].y = 700;
				fireEnemyIndex++;
				if (fireEnemyIndex >= 100)fireEnemyIndex = 0;
			}
		}
	}
}

int cupHealth = 10;  //cuphealth
int cupHealthX, cupHealthY;
bool cupOn = true;
bool cupIdelOn = true;
bool cupFRunOn = false;
bool cupDuckOn = false;

bool cupJumpOn = false;
bool cupJumpUp = false;
int cupCordinateJump = 0;



char cupIdel[3][30] = { "images\\Idel\\1.bmp", "images\\Idel\\2.bmp", "images\\Idel\\3.bmp" };
char cupFRun[8][30] = { "images\\RunFront\\1.bmp", "images\\RunFront\\2.bmp", "images\\RunFront\\3.bmp", "images\\RunFront\\4.bmp", "images\\RunFront\\5.bmp", "images\\RunFront\\6.bmp", "images\\RunFront\\7.bmp", "images\\RunFront\\8.bmp" };
char cupBRun[8][30] = { "images\\RunBack\\1.bmp", "images\\RunBack\\2.bmp", "images\\RunBack\\3.bmp", "images\\RunBack\\4.bmp", "images\\RunBack\\5.bmp", "images\\RunBack\\6.bmp", "images\\RunBack\\7.bmp", "images\\RunBack\\8.bmp" };
char cupJump[8][30] = { "images\\Jump\\1.bmp", "images\\Jump\\2.bmp", "images\\Jump\\3.bmp", "images\\Jump\\4.bmp", "images\\Jump\\5.bmp", "images\\Jump\\6.bmp", "images\\Jump\\7.bmp", "images\\Jump\\8.bmp" };

int cupCordinateX = 50, cupCordinateY = 110; 
int cupDx = 98, cupDy = 155;
int cupIdelCounter = 0;

int cupIdelIndex = 0;
int cupFRunIndex = 0;
int cupBRunIndex = 0;
int cupJumpIndex = 0;



void enemySpeed(){
	if (gamestate == 0){
		if (!flowerOn){

			for (int i = 0; i < 100; i++){
				if (e1[i].On){
					if (i % 2 == 0){
						roundEnemyPictureIndex++;
						if (roundEnemyPictureIndex >= 4)roundEnemyPictureIndex = 0;
					}
					e1[i].x -= 15;

					static int f[100] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
					e1[i].y -= f[i] * 15;
					if (e1[i].x <= 0)e1[i].On = false;
					if (e1[i].y <= 120 || e1[i].y >= 220) f[i] = f[i] * -1;
					for (int j = 0; j<10000; j++){ //collision check
						if ((s[j].x + shootDx>e1[i].x && s[j].x < e1[i].x + ghostEnemyDx) && (s[j].y + shootDy>e1[i].y && s[j].y < e1[i].y + ghostEnemyDy)){
							num += 5;
							s[j].x = 0;
							e1[i].On = false;
							e1[i].x = 1200;
							s[j].shootOn = false;
						}
					}

				}
				if (e2[i].On){
					turtleEnemyPictureIndex++;
					if (turtleEnemyPictureIndex >= 13)turtleEnemyPictureIndex = 0;
					e2[i].x -= 8;
					if (e2[i].x <= 0)e2[i].On = false;
					for (int j = 0; j<10000; j++){ //collision check
						if ((s[j].x + shootDx>e2[i].x && s[j].x < e2[i].x + ghostEnemyDx) && (s[j].y + shootDy>e2[i].y && s[j].y < e2[i].y + ghostEnemyDy)){
							num += 7;
							s[j].x = 0;
							e2[i].On = false;
							s[j].shootOn = false;
							e2[i].x = 1200;
						}
					}

				}
				if (e3[i].On){
					ghostEnemyPictureIndex++;
					if (ghostEnemyPictureIndex >= 16)ghostEnemyPictureIndex = 0;
					e3[i].x -= 30;
					if (e3[i].x <= 0)e3[i].On = false;
					for (int j = 0; j<10000; j++){ //collision check
						if ((s[j].x + shootDx>e3[i].x && s[j].x < e3[i].x + ghostEnemyDx) && (s[j].y + shootDy>e3[i].y && s[j].y < e3[i].y + ghostEnemyDy)){
							num += 9;
							s[j].x = 0;
							e3[i].On = false;
							s[j].shootOn = false;
							e3[i].x = 1200;
						}
					}

				}

				if (e4[i].On){
					rockEnemyPictureIndex++;
					if (rockEnemyPictureIndex >= 5)rockEnemyPictureIndex = 0;
					e4[i].x -= 37;
					if (e4[i].x <= 0){
						e4[i].On = false;
						e4[i].x = 1200;
					}
					for (int j = 0; j<10000; j++){ //collision check
						if ((s[j].x + shootDx>e4[i].x && s[j].x < e4[i].x + rockEnemyDx) && (s[j].y + shootDy>e4[i].y && s[j].y < e4[i].y + rockEnemyDy)){
							s[j].x = 0;
							s[j].shootOn = false;
						}
					}

				}

				if (e5[i].On){
					fireEnemyPictureIndex++;
					if (fireEnemyPictureIndex >= 4)fireEnemyPictureIndex = 0;
					e5[i].y -= 25;
					if (e5[i].y <= 0){
						e5[i].On = false;
						e5[i].y = 1200;
					}
					for (int j = 0; j<10000; j++){ //collision check
						if ((s[j].x + shootDx>e5[i].x && s[j].x < e5[i].x + fireEnemyDx) && (s[j].y + shootDy>e5[i].y && s[j].y < e5[i].y + fireEnemyDy)){
							s[j].x = 0;
							s[j].shootOn = false;
						}
					}

				}
			}
		}
	}
}

void jumpNShootSpeedNIdeal(){
	if (gamestate == 0){
		if (cupJumpOn){ //jum,p
			cupJumpIndex++;
			if (cupJumpIndex >= 8)cupJumpIndex = 0;
		}
		if (cupJumpOn){
			if (cupJumpUp){
				cupCordinateJump += 30;			//jump speed
				if (cupCordinateJump >= jumpLimit){
					cupJumpUp = false;
				}
			}
			else{
				cupCordinateJump -= 30;			//jump speed
				if (cupCordinateJump <= 0){
					cupJumpOn = false;
					cupCordinateJump = 0;
				}
			}
		}
		for (int i = 0; i < 10000; i++){ //shoot speed

			if (s[i].shootOn)s[i].x += 30;

			if (s[i].x >= 1199){
				s[i].x = 0;
				s[i].shootOn = false; 
			}
		}

		static int ii = 0;			//ideal
		if (ii % 2 == 0){
			cupIdelIndex++;
			if (cupIdelIndex == 3)cupIdelIndex = 0;
		}
		ii++;
		for (int i = 0; i < 100; i++){				//collision check enemies and acorn
			if (!flowerOn){
				if (e1[i].On){
					if ((e1[i].x <= cupCordinateX + cupDx && e1[i].x >= cupCordinateX) && (e1[i].y + roundEnemyDy >= cupCordinateY + cupCordinateJump && e1[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
						cupHealth--;
						e1[i].On = false;
						e1[i].x = 1200;
					}
				}
				if (e2[i].On){
					if ((e2[i].x <= cupCordinateX + cupDx && e2[i].x >= cupCordinateX) && (e2[i].y + turtleEnemyDy >= cupCordinateY + cupCordinateJump && e2[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
						cupHealth--;
						e2[i].On = false;
						e2[i].x = 1200;
					}
				}
				if (e3[i].On){
					if ((e3[i].x <= cupCordinateX + cupDx && e3[i].x >= cupCordinateX) && (e3[i].y + ghostEnemyDy >= cupCordinateY + cupCordinateJump && e3[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
						cupHealth--;
						e3[i].On = false;
						e3[i].x = 1200;
					}
				}
				if (e4[i].On){
					if ((e4[i].x <= cupCordinateX + cupDx && e4[i].x + rockEnemyDx >= cupCordinateX) && (e4[i].y + rockEnemyDy >= cupCordinateY + cupCordinateJump && e4[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
						cupHealth--;
						e4[i].On = false;
						e4[i].x = 1200;
					}
				}
				if (e5[i].On){
					if ((e5[i].x <= cupCordinateX + cupDx && e5[i].x + fireEnemyDx >= cupCordinateX) && (e5[i].y + fireEnemyDy >= cupCordinateY + cupCordinateJump && e5[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
						cupHealth--;
						e5[i].On = false;
						e5[i].y = 700;
					}
				}
			}
			if (fs[i].On){
				if ((fs[i].x <= cupCordinateX + cupDx && fs[i].x >= cupCordinateX) && (fs[i].y + 135 >= cupCordinateY + cupCordinateJump && fs[i].y <= cupCordinateY + cupCordinateJump + cupDy)){
					cupHealth--;
					fs[i].On = false;
					fs[i].x = 1200;
				}
			}
			

		}
		if (flowerOn){
			if ((flowerCoordinateX <= cupCordinateX + cupDx && flowerCoordinateX >= cupCordinateX) && (flowerCoordinateY + 286 >= cupCordinateY + cupCordinateJump && flowerCoordinateY <= cupCordinateY + cupCordinateJump + cupDy)){
				cupHealth--;
				
			}
		}
		

		if (cupHealth == 0){
			cupOn = false;
			gameEnd = true;
			if (file1 == 0){
				file = true;
				file1++;
			}
		}
	}
}

static int a = rand() % 10;
int flowerDeathAnimation = 0;
void flowerBoss(){
	if (gamestate == 0){
		if (flowerOn){
			if (flowerIdealOn){				//flower ideal
				if (flowerCoordinateX > 840){
					flowerCoordinateX -= 10;
					flowerIdealIndex++;
					if (flowerIdealIndex >= 10)flowerIdealIndex = 0;
				}
				if (flowerCoordinateX <= 840){
					flowerIdealIndex++;
					if (flowerIdealIndex >= 49)flowerIdealIndex = 25;
				}
				for (int i = 0; i < 10000; i++){
					if (s[i].x + shootDx>flowerCoordinateX && flowerIdealIndex >= 25 && s[i].x + shootDx <= flowerCoordinateX + 200){		//collision Check
						num += 12;
						s[i].x = 0;
						s[i].shootOn = false;
						flowerHealth--;
					}
					if (flowerHealth == 0){
						flowerDeathOn = true;
						flowerIdealOn = false;
					}
				}
			}
			else if (flower1AttackOn){					//flower attack 1
				flower1AttackIndex++;
				if (flower1AttackIndex >= 6 && flower1AttackIndex <= 13){
					flowerCoordinateX -= 105;

				}
				if (flower1AttackIndex >= 14 && flower1AttackIndex <= 21){
					flowerCoordinateX += 105;
				}
				if (flower1AttackIndex >= 21){
					flowerIdealOn = true;
					flower1AttackOn = false;
					flower1AttackIndex = 0;
					a = rand() % 10;
				}

			}
			else if (flower2AttackOn){					//flower attack 2
				flower2AttackIndex++;
				if (flower2AttackIndex >= 17){
					flower2AttackIndex = 0;
					fs[fsIndex].On = true;
					fsIndex++;
					if (fsIndex >= 100)fsIndex = 0;
					flowerIdealOn = true;
					flower2AttackOn = false;
					a = rand() % 10;
				}
			}
			for (int i = 0; i < 100; i++){				//acorn speed
				if (fs[i].On){
					flowerAcornIndex++;
					if (flowerAcornIndex++ >= 3)flowerAcornIndex = 0;
					fs[i].x -= 10;
					if (fs[i].x <= 0){      //collision check
						fs[i].On = false;
						fs[i].x = 1200;
					}
				}
			}
			if (flowerDeathOn){				//flower death
				flowerDeathIndex++;
				if (flowerDeathIndex >= 10){
					flowerDeathIndex = 0;
					flowerDeathAnimation++;
					if (flowerDeathAnimation == 5){
						flowerOn = false;
						gameEnd = true;
						if (file1 == 0){
							file = true;
							file1++;
						}
					}
				}
			}
		}
	}
}

void fAttackStart(){
	if (gamestate == 0){
		if (flowerOn){
			flowerIdealOn = false;
			if (a % 2 == 0 && !flowerDeathOn){
				flower2AttackOn = false;
				flower1AttackOn = true;
			}
			if (a % 2 == 1 && !flowerDeathOn){
				flower2AttackOn = true;
				flower1AttackOn = false;
			}
		}
	}
}





#endif


