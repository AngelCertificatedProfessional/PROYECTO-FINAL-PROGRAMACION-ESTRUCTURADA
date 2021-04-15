#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "datos.h"
#include "configuracionVista.h"

void baja()
{
	int y,band=0,on;
	char mat[20];
	FILE *ex,*temp;
	registro n;
	initscr();
	cargarColores();
	if((ex=fopen("datos.dat","rb"))==NULL)
	{
		clear();
		bkgd(COLOR_PAIR(7));
	   	attron(COLOR_PAIR(7));
		mvprintw(15,47,"ERROR AL ABRIR EL ARCHIVO");	
		refresh();
		getch();
		attron(COLOR_PAIR(7));
		endwin();
		exit(1);
	}
	else{
		erase();
	 	if (has_colors()) {
			start_color();
	    	attron(COLOR_PAIR(1));
			imprimirTitulo();
			mvprintw(15,47,"Escriba la matricula del alumno que desea borrar:");
			scanw("%s",mat);
			temp=fopen("temp.dat","wb");
			while(fread(&n,sizeof(registro),1,ex)>0){
				if(strcmp(mat,n.matricula)!=0){
					fwrite(&n,sizeof(registro),1,temp);
					band=1;
				}
			}
			fclose(ex);
			fclose(temp);
			remove("datos.dat");
			system("mv temp.dat datos.dat");
			if(band==0){
				clear();
				bkgd(COLOR_PAIR(7));
		 		attron(COLOR_PAIR(7));
				mvprintw(15,47,"no se encontro el dato pedido");
				attroff(COLOR_PAIR(7));
				refresh();
				getch();
				endwin();
			}
		}
		endwin();
	}
}