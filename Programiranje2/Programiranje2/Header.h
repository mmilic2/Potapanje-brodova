#ifndef HEADER_H
#define HEADER_H


struct brod {
	int x1, y1, x2, y2, x3, y3, x4, y4;
};

int rnd(void);
void genCord4(brod *borbenibrod,int rndbr);
void genCord3(brod *podmornica);
void genCord2(brod *razarac, int rndbr);
void genCord(brod *krstarica, int rndbr);
void NacrtajPolje(char array[][11], char xOs, int yOs);
void NapraviPolje(char array[][11], char xOs);
bool provjera(int koordinataX, int koordinataY, int rndbr, int duljinaBroda, int polje[11][11]);

#endif 
