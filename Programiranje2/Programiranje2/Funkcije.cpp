#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"Header.h"




void NapraviPolje(char array[][11], char xOs) {
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (i == 0) {
				array[i][j] = '0';
			}

			if (j == 0 && i != 0) {
				array[i][j] = xOs;
				xOs++;
				
			}
			
			if (j == 0 && i == 10) {
				array[i][j] = '10';
			}
			if (j != 0 && i != 0) {
				array[i][j] = '-';
			}
		}
	}

}

void NacrtajPolje(char array[][11], char xOs, int yOs) {
	for (int i = 0; i < 11; i++) {
		if (i > 0) {
			printf("\n");
		}

		for (int j = 0; j < 11; j++) {


			if (i == 0 && j != 0) {
				if (yOs == 0) {
					yOs++;
				}

				else if (array[i][j] == '0') {
					printf("   %d", yOs);
					yOs++;
				}
			}

			if (j == 0 && i != 0) {
				printf(" %c ", array[i][j]);
			}

			if (j != 0 && i != 0) {
				printf(" %c  ", array[i][j]);
			}

		}
	}


}

void genCord(brod *krstarica, int rndbr) {
	
	//srand((unsigned)time(NULL));

	if (rndbr == 1) {
		krstarica->x1 = 1 + (float) rand() /RAND_MAX*(9 - 1);
		krstarica->y1 = 1 + (float) rand() / RAND_MAX*(9 - 1);
		krstarica->x2 = krstarica->x1;
		krstarica->y2 = krstarica->y1 + 1;
		krstarica->x3 = krstarica->x1;
		krstarica->y3 = krstarica->y1 + 2;
	}
	else if (rndbr == 2) {
		krstarica->x1 = 3 + (float)rand() / RAND_MAX*(11 - 3);
		krstarica->y1 = 3 + (float)rand() / RAND_MAX*(11 - 3);
		krstarica->x2 = krstarica->x1;
		krstarica->y2 = krstarica->y1 - 1;
		krstarica->x3 = krstarica->x1;
		krstarica->y3 = krstarica->y1 - 2;
	}
	else if (rndbr == 3) {
		krstarica->x1 = 3 + (float)rand() / RAND_MAX*(11 - 3);
		krstarica->y1 = 3 + (float)rand() / RAND_MAX*(11 - 3);
		krstarica->x2 = krstarica->x1-1;
		krstarica->y2 = krstarica->y1;
		krstarica->x3 = krstarica->x1-2;
		krstarica->y3 = krstarica->y1;
	}
	else if (rndbr == 4) {
		krstarica->x1 = 1 + (float)rand() / RAND_MAX*(9 - 1);
		krstarica->y1 = 1 + (float)rand() / RAND_MAX*(9 - 1);
		krstarica->x2 = krstarica->x1 + 1;
		krstarica->y2 = krstarica->y1;
		krstarica->x3 = krstarica->x1 + 2;
		krstarica->y3 = krstarica->y1;
	}



}

void genCord2(brod *razarac, int rndbr) {
	
	//srand((unsigned)time(NULL));

	if (rndbr == 1) {
		razarac->x1 = 1 + (float)rand() / RAND_MAX*(10 - 1);
		razarac->y1 = 1 + (float)rand() / RAND_MAX*(10 - 1);
		razarac->x2 = razarac->x1;
		razarac->y2 = razarac->y1 + 1;
		
	}
	else if (rndbr == 2) {
		razarac->x1 = 2 + (float)rand() / RAND_MAX*(11 - 2);
		razarac->y1 = 2 + (float)rand() / RAND_MAX*(11 - 2);
		razarac->x2 = razarac->x1;
		razarac->y2 = razarac->y1 - 1;
		
	}
	else if (rndbr == 3) {
		razarac->x1 = 2 + (float)rand() / RAND_MAX*(11 - 2);
		razarac->y1 = 2 + (float)rand() / RAND_MAX*(11 - 2);
		razarac->x2 = razarac->x1 - 1;
		razarac->y2 = razarac->y1;
		
	}
	else if (rndbr == 4) {
		razarac->x1 = 1 + (float)rand() / RAND_MAX*(10 - 1);
		razarac->y1 = 1 + (float)rand() / RAND_MAX*(10 - 1);
		razarac->x2 = razarac->x1 + 1;
		razarac->y2 = razarac->y1;
		
	}



}

void genCord3(brod *podmornica) {
		
		//srand((unsigned)time(NULL));

		podmornica->x1 = 1 + (float)rand() / RAND_MAX*(11 - 1);
		podmornica->y1 = podmornica->x1;
}

void genCord4(brod *borbenibrod,int rndbr) {
	
	//srand((unsigned)time(NULL));

	if (rndbr == 1) {
		borbenibrod->x1 = 1 + (float)rand() / RAND_MAX*(8 - 1);
		borbenibrod->y1 = 1 + (float)rand() / RAND_MAX*(8 - 1);
		borbenibrod->x2 = borbenibrod->x1;
		borbenibrod->y2 = borbenibrod->y1 + 1;
		borbenibrod->x3 = borbenibrod->x1;
		borbenibrod->y3 = borbenibrod->y1 + 2;
		borbenibrod->x4 = borbenibrod->x1;
		borbenibrod->y4 = borbenibrod->y1 + 3;
	}
	else if (rndbr == 2) {
		borbenibrod->x1 = 4 + (float)rand() / RAND_MAX*(11 - 3);
		borbenibrod->y1 = 4 + (float)rand() / RAND_MAX*(11 - 3);
		borbenibrod->x2 = borbenibrod->x1;
		borbenibrod->y2 = borbenibrod->y1 - 1;
		borbenibrod->x3 = borbenibrod->x1;
		borbenibrod->y3 = borbenibrod->y1 - 2;
		borbenibrod->x4 = borbenibrod->x1;
		borbenibrod->y4 = borbenibrod->y1 - 3;
	}
	else if (rndbr == 3) {
		borbenibrod->x1 = 4 + (float)rand() / RAND_MAX*(11 - 3);
		borbenibrod->y1 = 4 + (float)rand() / RAND_MAX*(11 - 3);
		borbenibrod->x2 = borbenibrod->x1 - 1;
		borbenibrod->y2 = borbenibrod->y1;
		borbenibrod->x3 = borbenibrod->x1 - 2;
		borbenibrod->y3 = borbenibrod->y1;
		borbenibrod->x4 = borbenibrod->x1 - 3;
		borbenibrod->y4 = borbenibrod->y1;
	}
	else if (rndbr == 4) {
		borbenibrod->x1 = 1 + (float)rand() / RAND_MAX*(8 - 1);
		borbenibrod->y1 = 1 + (float)rand() / RAND_MAX*(8 - 1);
		borbenibrod->x2 = borbenibrod->x1 + 1;
		borbenibrod->y2 = borbenibrod->y1;
		borbenibrod->x3 = borbenibrod->x1 + 2;
		borbenibrod->y3 = borbenibrod->y1;
		borbenibrod->x4 = borbenibrod->x1 + 3;
		borbenibrod->y4 = borbenibrod->y1;
	}



}


int rnd(void) {

	int rndbr = 0;
	//srand((unsigned)time(NULL));
	rndbr = 1 + (float)rand() / RAND_MAX*(5 - 1);
	//rndbr = 1 + rand() % 4;
	return rndbr;
}

int provjera(int koordinataX, int koordinataY, int rndbr, int duljinaBroda, int polje[11][11]) {
	int i;
	if (rndbr == 1) {
		for (i = 0; i < duljinaBroda; i++) {
			if (polje[koordinataX][koordinataY] == 1) {
				return -1;
			}
			koordinataY += 1;
		}
	}
	else if (rndbr == 2) {
		for (i = 0; i < duljinaBroda; i++) {
			if (polje[koordinataX][koordinataY] == 1) {
				return -1;
			}
			koordinataY -= 1;
		}
	}
	else if (rndbr == 3) {
		for (i = 0; i < duljinaBroda; i++) {
			if(polje[koordinataX][koordinataY] == 1){
				return -1;
			}
			koordinataX -= 1;
		}
	}
	else if (rndbr == 4) {
		for (i = 0; i < duljinaBroda; i++) {
			if (polje[koordinataX][koordinataY] == 1) {
				return -1;
			}
			koordinataX += 1;
		}
	}

}

