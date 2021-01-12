#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<list>
#include<conio.h>
#include<iostream>

#define ESC 27
#define Color_Green 10
#define Color_Red 12
#define Color_Def 15
#define Color_Yellow 14
#define Color_Blue 11
#define Celeste 3
#define Lila 5
#define Azul 1
#define Rojo_oscuro 4
using namespace std;


void gotoxy(int x,int y){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}


void Inicio(){
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 42);
	gotoxy(80,9);cout<<"-- EMPRESA --";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),27);
	gotoxy(79,11);cout<<"TECNOLOGIA - YL";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),27);
	gotoxy(18,30); cout<<"YORDY LEONIDAS";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),27);
	gotoxy(83,30); cout<<"    "<<(char)146<<"    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),27);
	gotoxy(54,29); cout<<"PROGRAMACION C++";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	for(int i=3;i<98;i++){
		gotoxy(i,3);printf("%c",205);
		gotoxy(i,34);printf("%c",205);
	}
	for(int i=4;i<34;i++){
		gotoxy(2,i);printf("%c", 186);
		gotoxy(98,i);printf("%c", 186);
	}
	for(int i=33;i>28;i--){
		gotoxy(4,i);printf("%c",186);
	}
	for(int i=5;i<47;i++){
		gotoxy(i,29); printf("%c",205);
	}
	for(int i=33;i>29;i--){
		gotoxy(47,i); printf("%c",186);
	}
	for(int i=31;i<34;i++){
		gotoxy(6,i); printf("%c",186);
		gotoxy(10,i); printf("%c",186);
	}
	for(int i=31;i<34;i++){
		gotoxy(13,i); printf("%c",186);
		gotoxy(17,i); printf("%c",186);
	}
	
	for(int i=31;i<34;i++){
		gotoxy(33,i); printf("%c",186);
		gotoxy(37,i); printf("%c",186);
	}
	for(int i=31;i<34;i++){
		gotoxy(40,i); printf("%c",186);
		gotoxy(44,i); printf("%c",186);
	}
	for(int i=7;i<10;i++){
		gotoxy(i,31); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	for(int i=14;i<17;i++){
		gotoxy(i,31); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	
	for(int i=34;i<37;i++){
		gotoxy(i,31); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	for(int i=41;i<44;i++){
		gotoxy(i,31); printf("%c",205);
		gotoxy(i,33); printf("%c",205);
	}
	gotoxy(2,3);printf("%c", 201);
	gotoxy(2,34);printf("%c", 200);
	gotoxy(98,3);printf("%c", 187);
	gotoxy(98,34);printf("%c", 188);
	gotoxy(4,34); printf("%c",202);
	gotoxy(4,29); printf("%c",201);
	gotoxy(47,29); printf("%c",187);
	gotoxy(47,34); printf("%c",202);
	gotoxy(6,31); printf("%c",201);
	gotoxy(13,31); printf("%c",201);
	
	gotoxy(33,31); printf("%c",201);
	gotoxy(40,31); printf("%c",201);
	gotoxy(6,33); printf("%c",200);
	gotoxy(13,33); printf("%c",200);
	
	gotoxy(33,33); printf("%c",200);
	gotoxy(40,33); printf("%c",200);
	gotoxy(10,31); printf("%c",187);
	gotoxy(17,31); printf("%c",187);
	
	gotoxy(37,31); printf("%c",187);
	gotoxy(44,31); printf("%c",187);
	gotoxy(10,33); printf("%c",188);
	gotoxy(17,33); printf("%c",188);
	
	gotoxy(37,33); printf("%c",188);
	gotoxy(44,33); printf("%c",188);
	for(int i=33;i>4;i--){
		gotoxy(48,i); printf("%c",186);
		gotoxy(75,i); printf("%c",186);
	}
	for(int i=76;i<98;i++){
		gotoxy(i,7);printf("%c",205);
	}
	for(int i=49;i<75;i++){
		gotoxy(i,4);printf("%c",205);
		gotoxy(i,27);printf("%c",205);
	}
	gotoxy(48,34);printf("%c",202);
	gotoxy(75,34);printf("%c",202);
	gotoxy(75,7);printf("%c",204);
	gotoxy(98,7);printf("%c",185);
	gotoxy(75,4);printf("%c",187);
	gotoxy(48,4);printf("%c",201);
	gotoxy(48,27);printf("%c",204);
	gotoxy(75,27);printf("%c",185);
	for(int i=24;i<28;i++){
		gotoxy(i,33);printf("%c",219);
		gotoxy(i,32);printf("%c",219);
	}
	for(int i=61;i<64;i++){
		gotoxy(i,33);printf("%c",219);
		gotoxy(i,32);printf("%c",219);
	}
	for(int i=86;i<89;i++){
		gotoxy(i,33);printf("%c",219);
		gotoxy(i,32);printf("%c",219);
	}
	for(int i=0;i<3;i++){
		gotoxy(78+i,13); printf("%c",205);
		gotoxy(78+i,15); printf("%c",205);
		gotoxy(78+i,17); printf("%c",205);
		gotoxy(78+i,19); printf("%c",205);
		gotoxy(78+i,21); printf("%c",205);
		gotoxy(78+i,23); printf("%c",205);
		gotoxy(78+i,25); printf("%c",205);
		gotoxy(78+i,27); printf("%c",205);
		gotoxy(85+i,13); printf("%c",205);
		gotoxy(85+i,15); printf("%c",205);
		gotoxy(85+i,17); printf("%c",205);
		gotoxy(85+i,19); printf("%c",205);
		gotoxy(85+i,21); printf("%c",205);
		gotoxy(85+i,23); printf("%c",205);
		gotoxy(85+i,25); printf("%c",205);
		gotoxy(85+i,27); printf("%c",205);
		gotoxy(92+i,13); printf("%c",205);
		gotoxy(92+i,15); printf("%c",205);
		gotoxy(92+i,17); printf("%c",205);
		gotoxy(92+i,19); printf("%c",205);
		gotoxy(92+i,21); printf("%c",205);
		gotoxy(92+i,23); printf("%c",205);
		gotoxy(92+i,25); printf("%c",205);
		gotoxy(92+i,27); printf("%c",205);
	}
	for(int i=0;i<3;i++){
		gotoxy(77,13+i); printf("%c",186);
		gotoxy(81,13+i); printf("%c",186);
		gotoxy(84,13+i); printf("%c",186);
		gotoxy(88,13+i); printf("%c",186);
		gotoxy(91,13+i); printf("%c",186);
		gotoxy(95,13+i); printf("%c",186);
		gotoxy(77,17+i); printf("%c",186);
		gotoxy(81,17+i); printf("%c",186);
		gotoxy(84,17+i); printf("%c",186);
		gotoxy(88,17+i); printf("%c",186);
		gotoxy(91,17+i); printf("%c",186);
		gotoxy(95,17+i); printf("%c",186);
		gotoxy(77,21+i); printf("%c",186);
		gotoxy(81,21+i); printf("%c",186);
		gotoxy(84,21+i); printf("%c",186);
		gotoxy(88,21+i); printf("%c",186);
		gotoxy(91,21+i); printf("%c",186);
		gotoxy(95,21+i); printf("%c",186);
		gotoxy(77,25+i); printf("%c",186);
		gotoxy(81,25+i); printf("%c",186);
		gotoxy(84,25+i); printf("%c",186);
		gotoxy(88,25+i); printf("%c",186);
		gotoxy(91,25+i); printf("%c",186);
		gotoxy(95,25+i); printf("%c",186);
	}
	gotoxy(81,13); printf("%c",187);
	gotoxy(88,13); printf("%c",187);
	gotoxy(95,13); printf("%c",187);
	gotoxy(81,17); printf("%c",187);
	gotoxy(88,17); printf("%c",187);
	gotoxy(95,17); printf("%c",187);
	gotoxy(81,21); printf("%c",187);
	gotoxy(88,21); printf("%c",187);
	gotoxy(95,21); printf("%c",187);
	gotoxy(81,25); printf("%c",187);
	gotoxy(88,25); printf("%c",187);
	gotoxy(95,25); printf("%c",187);
	
	gotoxy(77,13); printf("%c",201);
	gotoxy(84,13); printf("%c",201);
	gotoxy(91,13); printf("%c",201);
	gotoxy(77,17); printf("%c",201);
	gotoxy(84,17); printf("%c",201);
	gotoxy(91,17); printf("%c",201);
	gotoxy(77,21); printf("%c",201);
	gotoxy(84,21); printf("%c",201);
	gotoxy(91,21); printf("%c",201);
	gotoxy(77,25); printf("%c",201);
	gotoxy(84,25); printf("%c",201);
	gotoxy(91,25); printf("%c",201);
	
	gotoxy(81,15); printf("%c",188);
	gotoxy(88,15); printf("%c",188);
	gotoxy(95,15); printf("%c",188);
	gotoxy(81,19); printf("%c",188);
	gotoxy(88,19); printf("%c",188);
	gotoxy(95,19); printf("%c",188);
	gotoxy(81,23); printf("%c",188);
	gotoxy(88,23); printf("%c",188);
	gotoxy(95,23); printf("%c",188);
	gotoxy(81,27); printf("%c",188);
	gotoxy(88,27); printf("%c",188);
	gotoxy(95,27); printf("%c",188);
	
	gotoxy(77,15); printf("%c",200);
	gotoxy(84,15); printf("%c",200);
	gotoxy(91,15); printf("%c",200);
	gotoxy(77,19); printf("%c",200);
	gotoxy(84,19); printf("%c",200);
	gotoxy(91,19); printf("%c",200);
	gotoxy(77,23); printf("%c",200);
	gotoxy(84,23); printf("%c",200);
	gotoxy(91,23); printf("%c",200);
	gotoxy(77,27); printf("%c",200);
	gotoxy(84,27); printf("%c",200);
	gotoxy(91,27); printf("%c",200);
}


void OcultarP(){
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO YM;
	YM.dwSize=60;
	YM.bVisible=FALSE;
	SetConsoleCursorInfo(hCon,&YM);
}


void pintar_limites(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Color_Green);
	for(int i=2;i<98;i++){
		gotoxy(i,3);printf("%c", 205);
		gotoxy(i,34);printf("%c", 205);
	}
	for(int i=3;i<34;i++){
		gotoxy(2,i);printf("%c", 186);
		gotoxy(98,i);printf("%c", 186);
	}
	gotoxy(2,3);printf("%c", 201);
	gotoxy(2,34);printf("%c", 200);
	gotoxy(98,3);printf("%c", 187);
	gotoxy(98,34);printf("%c", 188);
}



class NAVE{
	int x,y,corazones,vidas;
public:
	NAVE(int _x ,int _y,int _corazones, int _vidas){
		x=_x;
		y=_y;
		corazones=_corazones;
		vidas=_vidas;
	}
	int X(){return x;}
	int Y(){return y;}
	int VIDAS(){return vidas;}
	void COR(){corazones--;}
	void pintar();
	void mover();
	void borrar();
	void salud();
	void morir(int SALUD);
};


void NAVE::pintar(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Color_Green);
	gotoxy(x,y);   printf("  %c",190);
	gotoxy(x,y+1); printf("  %c",94);
	gotoxy(x,y+2); printf("  %c",219);
	gotoxy(x,y+3); printf("%c %c %c",60,219,62);
}


void NAVE::borrar(){
	gotoxy(x,y);   printf("       ");
	gotoxy(x,y+1); printf("       ");
	gotoxy(x,y+2); printf("       ");
	gotoxy(x,y+3); printf("       ");
}


bool tecla(int t) {
	return GetKeyState(t)<0;
}


void NAVE::mover(){
	if(tecla(0x57)&&y>4){
		borrar();
		y--;
		pintar();
	}
	if(tecla(0x53) && y<30){
		borrar();
		y++;
		pintar();
	}
	if(tecla(0x41)&&x>3){
		borrar();
		x--;
		pintar();
	}
	if(tecla(0x44)&& x<91){
		borrar();
		x++;
		pintar();
	}
}


void NAVE::salud(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
	if(vidas<10){
		gotoxy(75,2); printf("VIDAS =  %d",vidas);
	}else{
		gotoxy(75,2); printf("VIDAS = %d",vidas);
	}
	if(vidas>=9999){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
		gotoxy(75,2); printf("              ");
		gotoxy(75,2); printf("-- INMORTAL --");
	}
}


void NAVE::morir(int SALUD){
	if(corazones==0){
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
		borrar();
		gotoxy(x,y);   printf(" ** ");
		gotoxy(x,y+1); printf("****");
		gotoxy(x,y+2); printf(" ** ");
		Sleep(800);
		borrar();
		gotoxy(x,y);   printf("* * *");
		gotoxy(x,y+1); printf(" *** ");
		gotoxy(x,y+2); printf("* * *");
		Sleep(800);
		borrar();
		vidas--;
		corazones=1+SALUD;
		salud();
		pintar();
	}
}


class ASTEROIDE{
	int x,y;
public:
	ASTEROIDE(int _x,int _y){
		x=_x;
		y=_y;}
	int X(){return x;}
	int Y(){return y;}
	void pintar();
	void mover();
	void choque(NAVE &YORDY);
};


void ASTEROIDE::pintar(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Color_Def);
	gotoxy(x,y);printf("%c",219);
}


void ASTEROIDE::mover(){
	gotoxy(x,y);printf(" ");
	y++;
	if(y>33){
		x=rand()%93+3;
		y=4;
	}
	pintar();
}
void ASTEROIDE::choque(NAVE &YORDY){
	if(x>=YORDY.X() && x<YORDY.X()+5&&
	   y>=YORDY.Y() && y<YORDY.Y()+4){
		YORDY.COR();
		YORDY.borrar();
		YORDY.pintar();
		x=rand()%93+3;
		y=4;
	}
	
}

class METEORITOS{
	int x,y;
public:
	METEORITOS(int _x,int _y){
		x=_x;
		y=_y;}
	int X(){return x;}
	int Y(){return y;}
	void pintar();
	void mover();
	void choque(NAVE &YORDY);
};





class BALA{
	int x,y;
public:
	BALA(int _x, int _y):x(_x),y(_y){}
	int X(){return x;}
	int Y(){return y;}
	void mover();
	bool fuera();
};


void BALA::mover(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),Color_Yellow);
	gotoxy(x,y); printf(" ");
	
	if(y>4) y--;
	gotoxy(x,y); printf("%c",169);
}


bool BALA::fuera(){
	if(y==4) return true;
	return false;
}

int main()
{
	string user,password;
	int SALUD=0;
	int MONEDAS=0;
	bool ingresa=false;
	int opcion,opcionNAVE,opcionTIENDA,opcionVEL,opcionPREGUNTAS,opcionJUGARPREGUNTAS;
	int VELOCIDAD[5];
	int METEORITO=1;
	int FOR=1;
	int PUNTOSPREGUNTAS=0;
	
	VELOCIDAD[0]=50;
	VELOCIDAD[1]=40;
	VELOCIDAD[2]=30;
	VELOCIDAD[3]=20;
	VELOCIDAD[4]=10;
	
	
	
	do{
		system("cls");
		Inicio();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Rojo_oscuro);
		gotoxy(12,7);cout<<"**********************";
		gotoxy(12,8);cout<<" MIS PROYECTOS EN C++ ";
		gotoxy(12,9);cout<<"**********************";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
		gotoxy(15,11);cout<<"INGRESAR DATOS";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
		gotoxy(12,14);cout<<"+ USUARIO = ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
		gotoxy(24,14);getline(cin,user);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
		gotoxy(12,16);cout<<"+ PASSWORD = ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Def);
		gotoxy(25,16);
		
		char tecla;
		tecla=getch();
		password="";
		while(tecla!=13){
			password.push_back(tecla);
			cout<<"*";
			tecla=getch();
		}
		if(user=="YORDY" && password=="LEONIDAS"){
			ingresa=true;
		}else{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
			gotoxy(12,19);cout<<"-- DATOS INCORRECTOS --";
			getch();
		}
		
	}while(!ingresa);
	
	
	int COMPRA=0;
	system("cls");
	do{
		
		Inicio();
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Rojo_oscuro);
		gotoxy(12,7);cout<<"**********************";
		gotoxy(12,8);cout<<" MIS PROYECTOS EN C++ ";
		gotoxy(12,9);cout<<"**********************";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
		gotoxy(12,11); cout<<"(1) JUEGO - Naves";
		gotoxy(12,12); cout<<"(2) SALIR";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		gotoxy(12,14); cout<<"INGRESE OPCION = ";
		gotoxy(29,14); cin>>opcion;
		
		system("cls");
		
		if(opcion==1){
			do{
				int PUNTOS=0;
				Inicio();
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Rojo_oscuro);
				gotoxy(12,7);cout<<"**********************";
				gotoxy(12,8);cout<<"  JUEGO DE LAS NAVES  ";
				gotoxy(12,9);cout<<"**********************";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
				gotoxy(12,11); cout<<"(1) JUGAR";
				gotoxy(12,12); cout<<"(2) TIENDA";
				gotoxy(12,13); cout<<"(3) CONFIGURACION";
				gotoxy(12,14); cout<<"(4) REGRESAR AL MENU PRINCIPAL";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
				gotoxy(12,16); cout<<"INGRESE OPCION = ";
				gotoxy(29,16); cin>>opcionNAVE;
				if(opcionNAVE==1){
					system("cls");
					OcultarP();
					pintar_limites();
					NAVE YORDY(48,30,1+SALUD,3+COMPRA);
					YORDY.pintar();
					YORDY.salud();
					list<BALA*> B;
					list<BALA*> ::iterator YL;
					list<ASTEROIDE*> ELVIS;
					list<ASTEROIDE*>::iterator EL;
					
					
					
					for(int i=0;i<4+METEORITO;i++){
						ELVIS.push_back(new ASTEROIDE(rand()%93+3, rand()%5+4));
						
					}
					
					bool game_over = false;
					while(game_over!=true){
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
						gotoxy(4,2);printf("PUNTOS = %d",PUNTOS);
						
						
						if(kbhit()){
							char tecla=getch();
							if(tecla=='j'||tecla=='J')
								B.push_back(new BALA(YORDY.X()+2, YORDY.Y()-1));
						}
						
						
						for(YL=B.begin(); YL!=B.end();YL++){
							(*YL)->mover();
							if((*YL)->fuera()){
								gotoxy((*YL)->X(),(*YL)->Y());printf(" ");
								delete(*YL);
								YL=B.erase(YL);
							}
						}
						
						
						for(EL=ELVIS.begin();EL!=ELVIS.end();EL++){
							(*EL)->mover();
							(*EL)->choque(YORDY);
						}
						
						
						
						for(EL=ELVIS.begin();EL!=ELVIS.end();EL++) {
							for(YL=B.begin(); YL!=B.end();YL++){
								if((*YL)->X() == (*EL)->X() && ((*YL)->Y()+1 == (*EL)->Y()||(*YL)->Y() == (*EL)->Y())){
									gotoxy((*YL)->X(),(*YL)->Y()); printf(" ");
									delete(*YL);
									YL=B.erase(YL);
									ELVIS.push_back(new ASTEROIDE(rand()%93+3,4));
									gotoxy((*EL)->X(),(*EL)->Y()); printf(" ");
									delete(*EL);
									EL=ELVIS.erase(EL);
									PUNTOS=PUNTOS+10;
									MONEDAS+=rand()%7+1;
								}
							}
						}
						
						
						if(YORDY.VIDAS()==0)game_over=true;
						if(PUNTOS==2000)game_over=true;
						YORDY.morir(SALUD);
						YORDY.mover();
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
						if(PUNTOS>=900){
							
							gotoxy(42,2);printf("LEVEL LEGENDARIO");
							
						}
						else if(PUNTOS>=600){
							
							Sleep(VELOCIDAD[4]);gotoxy(47,2);printf("LEVEL 5");
							
						}
						else if(PUNTOS>=400){
							
							Sleep(VELOCIDAD[3]);gotoxy(47,2);printf("LEVEL 4");
							
						}
						else if(PUNTOS>=300){
							
							Sleep(VELOCIDAD[2]);gotoxy(47,2);printf("LEVEL 3");
							
						}
						else if(PUNTOS>=100){
							
							Sleep(VELOCIDAD[1]);gotoxy(47,2);printf("LEVEL 2");
							
						}else{
							
							Sleep(VELOCIDAD[0]);gotoxy(47,2);printf("LEVEL 1");
							
						}
					}
					system("cls");
					getch();
					if(YORDY.VIDAS()==0){
						pintar_limites();
						gotoxy(47,17);
						printf("GAME OVER");
						gotoxy(44,19);
						printf("PUNTUACION FINAL = %d",PUNTOS);
						gotoxy(45,21);
						printf("TUS MONEDAS = %d", MONEDAS);
						gotoxy(52,34);
					}
					if(PUNTOS==2000){
						MONEDAS+=1000;
						pintar_limites();
						gotoxy(34,17);
						printf("FELICITACIONES, HAS GANADO 1000 MONEDAS EXTRAS");
						gotoxy(45,19);
						printf("TUS MONEDAS = %d", MONEDAS);
						gotoxy(52,34);}
					getch();
					system("cls");
				}
				if(opcionNAVE==2){
					do{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
						
						if(MONEDAS>=1000){
							gotoxy(50,5); cout<<"TUS MONEDAS = "<<MONEDAS;}
						else if(MONEDAS>=100){
							gotoxy(50,5); cout<<"TUS MONEDAS = "<<MONEDAS<<" ";}
						else if(MONEDAS>=10){
							gotoxy(50,5); cout<<"TUS MONEDAS = "<<MONEDAS<<"  ";}
						else {gotoxy(50,5); cout<<"TUS MONEDAS = "<<MONEDAS<<"   ";}
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
						gotoxy(50,8);cout<<"************************";
						gotoxy(50,9);cout<<"          TIENDA         ";
						gotoxy(50,10);cout<<"************************";
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
						gotoxy(50,12); printf("(1) 1 VIDA - 130 M");
						gotoxy(50,13); printf("(2) 3 VIDAS - 265 M");
						gotoxy(50,14); printf("(3) 5 VIDAS - 395 M");
						gotoxy(50,15); printf("(4) INMORTALIDAD - 1995 M");
						gotoxy(50,16); cout<<"(5) FORTACELER - "<<FOR*25<<" M";
						gotoxy(50,17); cout<<"(6) +1 METEORITOS - "<<METEORITO*65<<" M";
						gotoxy(50,18); printf("(7) SALIR");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
						gotoxy(50,20); printf("INGRESE OPCION = ");
						gotoxy(68,20); cin>>opcionTIENDA;
						
						
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
						
						if(opcionTIENDA==1 && MONEDAS<130){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						if(opcionTIENDA==2 && MONEDAS<265){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						if(opcionTIENDA==3 && MONEDAS<395){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						if(opcionTIENDA==4 && MONEDAS<1995){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						if(opcionTIENDA==5 && MONEDAS<FOR*25){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						if(opcionTIENDA==6 && MONEDAS<METEORITO*65){
							gotoxy(52,23); cout<<"MONEDAS INSUFICIENTES";
							getch();
						}
						gotoxy(52,23); cout<<"                     ";
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
						
						
						if(opcionTIENDA==1 && MONEDAS>=130){
							MONEDAS=MONEDAS-130;
							COMPRA+=1;
						}
						if(opcionTIENDA==2 && MONEDAS>=265){
							MONEDAS=MONEDAS-265;
							COMPRA+=3;
						}
						if(opcionTIENDA==3 && MONEDAS>=395){
							MONEDAS=MONEDAS-395;
							COMPRA+=5;
						}
						if(opcionTIENDA==4 && MONEDAS>=1995){
							MONEDAS=MONEDAS-1995;
							COMPRA=9999;
							SALUD=9999;
						}
						if(opcionTIENDA==5 && MONEDAS>=FOR*25){
							MONEDAS=MONEDAS-FOR*25;
							SALUD+=1;
							FOR++;
						}
						if(opcionTIENDA==6 && MONEDAS>=METEORITO*65){
							MONEDAS=MONEDAS-METEORITO*65;
							METEORITO+=1;
						}
						
					}while(opcionTIENDA!=7);
					
					if(opcionTIENDA==7){
						
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
						gotoxy(52,23); cout<<"GRACIAS POR VISITAR ";
						getch();}
					system("cls");
				}
				
				
				if(opcionNAVE==3){
					do{
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Red);
						gotoxy(50,6);cout<<"************************";
						gotoxy(50,7);cout<<"      CONFIGURACION      ";
						gotoxy(50,8);cout<<"************************";
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Green);
						gotoxy(50,10); printf("(1) VELOCIDAD NIVEL 1");
						gotoxy(50,11); printf("(2) VELOCIDAD NIVEL 2");
						gotoxy(50,12); printf("(3) VELOCIDAD NIVEL 3");
						gotoxy(50,13); printf("(4) VELOCIDAD NIVEL 4");
						gotoxy(50,14); printf("(5) VELOCIDAD NIVEL 5");
						gotoxy(50,15); printf("(6) SALIR");
						SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
						gotoxy(50,17); printf("INGRESE OPCION = ");
						gotoxy(68,17); cin>>opcionVEL;
						
						
						
						
						if(opcionVEL==1){
							do{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
								
								gotoxy(50,19); cout<<"************************";
								gotoxy(59,20); cout<<"NIVEL 1";
								gotoxy(50,21); cout<<"************************";
								gotoxy(50,23);
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
								printf("VELOCIDAD = ");
								gotoxy(62,23);
								cin>>VELOCIDAD[0];
								gotoxy(62,23);
								printf("           ");
								
							}while(VELOCIDAD[0]<0);
							
						}
						
						
						
						
						if(opcionVEL==2){
							do{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
								
								gotoxy(50,19); cout<<"************************";
								gotoxy(59,20); cout<<"NIVEL 2";
								gotoxy(50,21); cout<<"************************";
								gotoxy(50,23);
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
								printf("VELOCIDAD = ");
								gotoxy(62,23);
								cin>>VELOCIDAD[1];
								gotoxy(62,23);
								printf("           ");
							}while(VELOCIDAD[1]<0);
							
						}
						
						
						
						
						
						if(opcionVEL==3){
							do{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
								
								gotoxy(50,19); cout<<"************************";
								gotoxy(59,20); cout<<"NIVEL 3";
								gotoxy(50,21); cout<<"************************";
								gotoxy(50,23);
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
								printf("VELOCIDAD = ");
								gotoxy(62,23);
								cin>>VELOCIDAD[2];
								gotoxy(62,23);
								printf("           ");
							}while(VELOCIDAD[2]<0);
							
						}
						
						
						
						
						if(opcionVEL==4){
							do{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
								
								gotoxy(50,19); cout<<"************************";
								gotoxy(59,20); cout<<"NIVEL 4";
								gotoxy(50,21); cout<<"************************";
								gotoxy(50,23);
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
								printf("VELOCIDAD = ");
								gotoxy(62,23);
								cin>>VELOCIDAD[3];
								gotoxy(62,23);
								printf("           ");
							}while(VELOCIDAD[3]<0);
							
						}
						
						if(opcionVEL==5){
							do{
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
								
								gotoxy(50,19); cout<<"************************";
								gotoxy(59,20); cout<<"NIVEL 5";
								gotoxy(50,21); cout<<"************************";
								gotoxy(50,23);
								SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color_Yellow);
								printf("VELOCIDAD = ");
								gotoxy(62,23);
								cin>>VELOCIDAD[4];
								gotoxy(62,23);
								printf("           ");
							}while(VELOCIDAD[4]<0);
							
						}
						gotoxy(50,19); printf("                        ");
						gotoxy(50,20); printf("                        ");
						gotoxy(50,21); printf("                        ");
						gotoxy(50,23); printf("                        ");
					}while(opcionVEL!=6);
					system("cls");
					
				}
				
			}while(opcionNAVE!=4);
			system("cls");
			
		}
		
	}while(opcion!=2);
	
	
	pintar_limites();
	gotoxy(45,17);
	cout<<"GRACIAS POR JUGAR";
	getch();
	return 0;
}


