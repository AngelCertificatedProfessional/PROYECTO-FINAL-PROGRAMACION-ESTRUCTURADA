#include <stdlib.h>
#include <ncurses.h>
#include <string.h> 
#include "datos.h"
#include "examen.h"
#include "consultas.h"
#include "baja.h"
#include "configuracionVista.h"

int main() {
	int opc;
	initscr();
	do{ 
		clear();
		if (has_colors()) {
			cargarColores();
			bkgd(COLOR_PAIR(1));
			//En esta seccion se imprime el titulo
			imprimirTitulo();
			attron(COLOR_PAIR(1));
			mvprintw(16,22,"Bienvenid@ al menu de opciones del examen de Introduccion a la Programacion de la UABC");
			mvprintw(17,22,"1.Examen");
			mvprintw(18,22,"2.Consulta");
			mvprintw(19,22,"3.Bajas"); 
			mvprintw(20,22,"4.Salida");
			attroff(COLOR_PAIR(1));
			attron(COLOR_PAIR(2));
			mvprintw(21,22,"A que desea acceder usted:");
			scanw("%i",&opc);
			attroff(COLOR_PAIR(2));
			switch(opc) {
				case 1:
					examen();
					break;
				case 2:
					consultas();
					break;
				case 3:
					baja();
					break;
				case 4:
					erase();
					mvprintw(1,1,"Que le vaya bien");
					refresh();
					getch();
					break;
				default:
					erase();
					bkgd(COLOR_PAIR(7));
					attron(COLOR_PAIR(7));
					mvprintw(23,22,"Error 411, La opcion que a introducido es incorrecta");
					attroff(COLOR_PAIR(7));
					refresh();
					getch();
					break; 
			}
		}
	}while(opc!=4);
	endwin();
	return 0;
}
