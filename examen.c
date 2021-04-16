#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h> 
#include "datos.h"
#include "configuracionVista.h"
#include "preguntas.h"

void examen()
{ 
	char mat[20];
	int calificacion=0;
	FILE *ex;
	initscr();
	registro n;
	erase();
	int validaNoRepetidos[10];
	if (has_colors()) {
		cargarColores();
		bkgd(COLOR_PAIR(1));
		imprimirTitulo();
		attron(COLOR_PAIR(1));
		mvprintw(14,34,"Escriba su matricula:");
		if((ex=fopen("datos.dat","rb"))==NULL){
			ex=fopen("datos.dat","ab");
			scanw("%s",n.matricula);
		}
		else{
			scanw("%s",mat);
			while(fread(&n,sizeof(registro),1,ex)>0){
				while(strcmp(mat,n.matricula)==0){
					clear();
					imprimirTitulo();
					mvprintw(14,34,"La matricula ya se a escrito favor de escribir otra matricula:");
					scanw("%s",mat); 
				}
			}
			ex=fopen("datos.dat","ab");
			strcpy(n.matricula,mat);
		}
		mvprintw(15,34,"Favor de escribir su primer nombre:");
		scanw("%s",n.nombre);
		mvprintw(16,34,"Escriba su apellido Paterno:");
		scanw("%s",n.ap);
		mvprintw(17,34,"Escriba su apellido Materno:");
		scanw("%s",n.am);
		attron(COLOR_PAIR(5));
		srand(time(NULL));
		for(int x=0;x<10;x++){
			clear();
			char respuesta[1];
			char res;
			int nPosicion = 17;
			int nBandera = 0;
			int nPregunta = 1+rand()%(26);
			while(nBandera == 0 && x > 0){
				nBandera = 1;
				//esta seccion es para validar si ya se utilizo las preguntas anteriores
				for(int y=0;y<x;y++){
					if(nPregunta == validaNoRepetidos[y]){
						nBandera = 0;
						nPregunta = 1+rand()%(26);
						break;
					}
				}
			}
			imprimirTitulo();
			validaNoRepetidos[x] = nPregunta;
			switch(nPregunta){
				case 1:
					strcpy(respuesta, pregunta1());
				break;
				case 2:
					strcpy(respuesta, pregunta2());
				break;
				case 3:
					strcpy(respuesta, pregunta3());
				break;
				case 4:
					strcpy(respuesta, pregunta4());
				break;
				case 5:
					strcpy(respuesta, pregunta5());
				break;
				case 6:
					strcpy(respuesta, pregunta6());
				break;
				case 7:
					strcpy(respuesta, pregunta7());
				break;
				case 8:
					strcpy(respuesta, pregunta8());
				break;
				case 9:
					strcpy(respuesta, pregunta9());
					nPosicion = 37;
				break;
				case 10:
					strcpy(respuesta, pregunta10());
					nPosicion = 33;
				break;
				case 11:
					strcpy(respuesta, pregunta11());
					nPosicion = 24;
				break;
				case 12:
					strcpy(respuesta, pregunta12());
				break;
				case 13:
					strcpy(respuesta, pregunta13());
				break;
				case 14:
					strcpy(respuesta, pregunta14());
				break;
				case 15:
					strcpy(respuesta, pregunta15());
				break;
				case 16:
					strcpy(respuesta, pregunta16());
				break;
				case 17:
					strcpy(respuesta, pregunta17());
				break;
				case 18:
					strcpy(respuesta, pregunta18());
				break;
				case 19:
					strcpy(respuesta, pregunta19());
				break;
				case 20:
					strcpy(respuesta, pregunta20());
					nPosicion = 26;
				break;
				case 21:
					strcpy(respuesta, pregunta21());
				break;
				case 22:
					strcpy(respuesta, pregunta22());
					nPosicion = 29;
				break;
				case 23:
					strcpy(respuesta, pregunta23());
    				nPosicion = 26;
				break;
				case 24:
					strcpy(respuesta, pregunta24());
					nPosicion = 29;
				break;
				case 25:
					strcpy(respuesta, pregunta25());
				break;
				case 26:
					strcpy(respuesta, pregunta26());
				break;
			}
			mvprintw(nPosicion,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res==respuesta[0]){
				calificacion++;
			}
		}
		n.ca=((float) calificacion/10)*100;
		erase();
		mvprintw(15,47,"Gracias por su Atencion, su calificacion es de %2.f",n.ca);
		fwrite(&n,sizeof(registro),1,ex);
		fclose(ex);
		refresh();
		getch();
		attroff(COLOR_PAIR(1));
		endwin();
	}
}