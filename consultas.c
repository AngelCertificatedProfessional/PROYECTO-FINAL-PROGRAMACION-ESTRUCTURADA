#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "datos.h"
#include "configuracionVista.h"

void consultas()
{
	FILE *ex;
	registro n;
	int od;
	char nom[20];
	char ap2[20];
	char am2[20];
	char mat[20];
	do{
		initscr();
		clear();
		if (has_colors()) {
			start_color();
			cargarColores();
			bkgd(COLOR_PAIR(1));
			imprimirTitulo();
			attron(COLOR_PAIR(2));
			mvprintw(15,47,"Bienvenido a las consultas del examen de programacion");
			mvprintw(16,47,"Que tipo de consulta decea hacer");
			mvprintw(17,47,"1.Consulta general");
			mvprintw(18,47,"2.Consulta por Nombre completo");
			mvprintw(19,47,"3.Consulta por Matricula");
			mvprintw(20,47,"4.Regreso al menu principal");
			attroff(COLOR_PAIR(2));
			attron(COLOR_PAIR(1));
			mvprintw(21,47,"Que opcion desea acceder:");
			scanw("%i",&od);
			attroff(COLOR_PAIR(1));
			switch(od){	
				case 1:
					erase();
					if((ex=fopen("datos.dat","rb"))==NULL)
					{
						clear();
						bkgd(COLOR_PAIR(7));
						attron(COLOR_PAIR(7));
						mvprintw(15,47,"error al abrir el archivo");
						getch();
						endwin();
						attroff(COLOR_PAIR(7));												
						exit(1);
					}else{
						while(fread(&n,sizeof(registro),1,ex)>0){
							erase();
							imprimirTitulo();
							mvprintw(16,47,"Nombre del alumno:%s %s %s",n.nombre,n.ap,n.am);
							mvprintw(17,47,"Matricula del alumno:%s",n.matricula);
							mvprintw(18,47,"Calificacion del alumno:%.2f",n.ca);
							mvprintw(19,47,"Presione ENTER para consultar la proxima consulta");
							refresh();
							getch();
							endwin();
						}
						fclose(ex);
					}
				break;
				case 2:
					clear();
					if((ex=fopen("datos.dat","rb"))==NULL){
						  	clear();
							bkgd(COLOR_PAIR(7));
							attron(COLOR_PAIR(7));
							mvprintw(15,47,"Error al abrir el archivo");
							refresh();
							getch();
							attroff(COLOR_PAIR(7));
							endwin();
							exit(1);
					}else{
						erase();
						imprimirTitulo();
						mvprintw(15,47,"Cual es el nombre del alumno:");
						scanw("%s",nom);
						mvprintw(16,47,"Cual es el apeido paterno del alumno:");
						scanw("%s",ap2);
						mvprintw(17,47,"Cual es el apeido materno del alumno:");
						scanw("%s",am2);
						while(fread(&n,sizeof(registro),1,ex)>0){
							if(strcmp(nom,n.nombre)==0 && strcmp(ap2,n.ap)==0 && strcmp(am2,n.am)==0){
								imprimirTitulo();
								attroff(COLOR_PAIR(6));
								mvprintw(15,47,"Nombre del alumno:%s %s %s",n.nombre,n.ap,n.am);
								mvprintw(16,47,"Matricula del alumno:%s",n.matricula);
								mvprintw(17,47,"Calificacion del alumno:%.2f",n.ca);
								refresh();
								getch();
								endwin();
							}
						}
						fclose(ex);
					}
					break;
				case 3:
					clear();
				 	if((ex=fopen("datos.dat","rb"))==NULL){
						clear();
						bkgd(COLOR_PAIR(7));
                		attron(COLOR_PAIR(7));
						mvprintw(15,47,"error al abrir el archivo");
						attroff(COLOR_PAIR(7));
						endwin();
						exit(1);
					}else{
						erase();
					 	imprimirTitulo();
						mvprintw(15,47,"Escriba la matricula del alumno:");
						scanw("%s",mat);
				       	while(fread(&n,sizeof(registro),1,ex)>0){ 
							if(strcmp(mat,n.matricula)==0){		
								imprimirTitulo();
								mvprintw(15,47,"Nombre del alumno:%s %s %s",n.nombre,n.ap,n.am);
								mvprintw(16,47,"Matricula del alumno:%s",n.matricula);
								mvprintw(17,47,"Calificacion del alumno:%.2f",n.ca);
								refresh();
								getch();
								endwin();
							}
						}
						fclose(ex); 
					}
				break;
			}
		}
	}while(od!=4);
	endwin();
}