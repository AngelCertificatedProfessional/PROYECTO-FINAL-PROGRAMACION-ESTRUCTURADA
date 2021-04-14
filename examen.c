#include <ncurses.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h> 
#include "datos.h"
void examen()
{ 
	int hora = time(NULL);
	int numero,y,band=0,b=0; 
	char mat[20],res;
	float calificacion=0;
	FILE *ex;
	initscr();
	registro n;
	erase();
	if (has_colors()) {
		start_color();
		init_pair(1,COLOR_RED,COLOR_WHITE);
		init_pair(2,COLOR_BLUE,COLOR_WHITE);
		init_pair(3,COLOR_CYAN,COLOR_WHITE);
		init_pair(4,COLOR_MAGENTA,COLOR_WHITE);
		init_pair(5,COLOR_GREEN,COLOR_WHITE);
		init_pair(6,COLOR_BLACK,COLOR_WHITE);
		init_pair(7,COLOR_RED,COLOR_WHITE);
		bkgd(COLOR_PAIR(7));
		attron(COLOR_PAIR(1));
		mvprintw(4,2,"000000000000000\n");
		mvprintw(5,2,"00000\n");
		mvprintw(6,2,"00000\n");
		mvprintw(7,2,"00000\n");
		mvprintw(8,2,"000000000000000\n");
		mvprintw(9,2,"00000\n");
		mvprintw(10,2,"00000\n");
		mvprintw(11,2,"00000\n");
		mvprintw(12,2,"000000000000000\n");
		attroff(COLOR_PAIR(1));
		attron(COLOR_PAIR(2));
		mvprintw(4,16,"   0        0\n");
		mvprintw(5,16,"    0      0 \n");
		mvprintw(6,16,"     0    0  \n");
		mvprintw(7,16,"      0  0   \n");
		mvprintw(8,16,"       00    \n");
		mvprintw(9,16,"      0  0   \n");
		mvprintw(10,16,"     0    0  \n");
		mvprintw(11,16,"    0      0 \n");
		mvprintw(12,16,"   0        0\n");
		attroff(COLOR_PAIR(2));
		attron(COLOR_PAIR(3));
		mvprintw(4,30,"        00     \n");
		mvprintw(5,30,"       0  0    \n");
		mvprintw(6,30,"      0    0   \n");
		mvprintw(7,30,"     0      0  \n");
		mvprintw(8,30,"    0000000000 \n");
		mvprintw(9,30,"   0          0\n");
		mvprintw(10,30,"  0            0\n");
		mvprintw(11,30," 0              0\n");
		mvprintw(12,30,"0                0\n");
		attroff(COLOR_PAIR(3));
		attron(COLOR_PAIR(4));
		mvprintw(4,48,"000            000\n");
		mvprintw(5,48,"000 0        0 000\n");							
		mvprintw(6,48,"000  0      0  000\n");
		mvprintw(7,48,"000   0    0   000\n");
		mvprintw(8,48,"000    0  0    000\n");
		mvprintw(9,48,"000     00     000\n");
		mvprintw(10,48,"000            000\n");
		mvprintw(11,48,"000            000\n");
		mvprintw(12,48,"000            000\n");
		attroff(COLOR_PAIR(4));
		attron(COLOR_PAIR(5));
		mvprintw(4,67,"000000000000000\n");
		mvprintw(5,67,"00000\n");
		mvprintw(6,67,"00000\n");
		mvprintw(7,67,"00000\n");
		mvprintw(8,67,"000000000000000\n");
		mvprintw(9,67,"00000\n");
		mvprintw(10,67,"00000\n");
		mvprintw(11,67,"00000\n");
		mvprintw(12,67,"000000000000000\n");
		attroff(COLOR_PAIR(5));
		attron(COLOR_PAIR(6));
		mvprintw(4,83,"000        000\n");
		mvprintw(5,83,"000 0      000\n");
		mvprintw(6,83,"000  0     000\n");
		mvprintw(7,83,"000   0    000\n");
		mvprintw(8,83,"000    0   000\n");
		mvprintw(9,83,"000     0  000\n");
		mvprintw(10,83,"000      0 000\n");
		mvprintw(11,83,"000        000\n");
		mvprintw(12,83,"000        000\n");
		attroff(COLOR_PAIR(6));
		attron(COLOR_PAIR(1));
		if((ex=fopen("datos.dat","rb"))==NULL){
			ex=fopen("datos.dat","ab");
			mvprintw(14,34,"Escriba su matricula:");
			scanw("%s",n.matricula);
			mvprintw(15,34,"Favor de escribir su primer nombre:");
			scanw("%s",n.nombre);
			mvprintw(16,34,"Escriba su apellido Paterno:");
			scanw("%s",n.ap);
			mvprintw(17,34,"Escriba su apellido Materno:");
			scanw("%s",n.am);}
		else{
	mvprintw(14,34,"Escriba su matricula:");
	scanw("%s",mat);
	while(fread(&n,sizeof(registro),1,ex)>0)
	   if(strcmp(mat,n.matricula)==0)
	   while(strcmp(mat,n.matricula)==0){
		   clear();
		   attron(COLOR_PAIR(1));
		   mvprintw(4,2,"000000000000000\n");
		   mvprintw(5,2,"00000\n");
		   mvprintw(6,2,"00000\n");
		   mvprintw(7,2,"00000\n");
		   mvprintw(8,2,"000000000000000\n");
		   mvprintw(9,2,"00000\n");
		   mvprintw(10,2,"00000\n");
		   mvprintw(11,2,"00000\n");
		   mvprintw(12,2,"000000000000000\n");
		   attroff(COLOR_PAIR(1));
		   attron(COLOR_PAIR(2));
		   mvprintw(4,16,"   0        0\n");
		   mvprintw(5,16,"    0      0 \n");
		   mvprintw(6,16,"     0    0  \n");
		   mvprintw(7,16,"      0  0   \n");
		   mvprintw(8,16,"       00    \n");
		   mvprintw(9,16,"      0  0   \n");
		   mvprintw(10,16,"     0    0  \n");
		   mvprintw(11,16,"    0      0 \n");
		   mvprintw(12,16,"   0        0\n");
		   attroff(COLOR_PAIR(2));
		   attron(COLOR_PAIR(3));
		   mvprintw(4,30,"        00     \n");
		   mvprintw(5,30,"       0  0    \n");
		   mvprintw(6,30,"      0    0   \n");
		   mvprintw(7,30,"     0      0  \n");
		   mvprintw(8,30,"    0000000000 \n");
		   mvprintw(9,30,"   0          0\n");
		   mvprintw(10,30,"  0            0\n");
		   mvprintw(11,30," 0              0\n");
		   mvprintw(12,30,"0                0\n");
		   attroff(COLOR_PAIR(3));
		   attron(COLOR_PAIR(4));
		   mvprintw(4,48,"000            000\n");
		   mvprintw(5,48,"000 0        0 000\n");
		   mvprintw(6,48,"000  0      0  000\n");
		   mvprintw(7,48,"000   0    0   000\n");
		   mvprintw(8,48,"000    0  0    000\n");
		   mvprintw(9,48,"000     00     000\n");
		   mvprintw(10,48,"000            000\n");
		   mvprintw(11,48,"000            000\n");
		   mvprintw(12,48,"000            000\n");
		   attroff(COLOR_PAIR(4));
		   attron(COLOR_PAIR(5));
		   mvprintw(4,67,"000000000000000\n");
		   mvprintw(5,67,"00000\n");
		   mvprintw(6,67,"00000\n");
		   mvprintw(7,67,"00000\n");
		   mvprintw(8,67,"000000000000000\n");
		   mvprintw(9,67,"00000\n");
		   mvprintw(10,67,"00000\n");
		   mvprintw(11,67,"00000\n");
		   mvprintw(12,67,"000000000000000\n");
		   attroff(COLOR_PAIR(5));
		   attron(COLOR_PAIR(6));
		   mvprintw(4,83,"000        000\n");
		   mvprintw(5,83,"000 0      000\n");
		   mvprintw(6,83,"000  0     000\n");
		   mvprintw(7,83,"000   0    000\n");
		   mvprintw(8,83,"000    0   000\n");
		   mvprintw(9,83,"000     0  000\n");
		   mvprintw(10,83,"000      0 000\n");
		   mvprintw(11,83,"000        000\n");
		   mvprintw(12,83,"000        000\n");
		   attroff(COLOR_PAIR(6));
	mvprintw(14,34,"La matricula ya se a escrito favor de escribir otra matricula:");
	        scanw("%s",mat); }
		 ex=fopen("datos.dat","ab");
	strcpy(n.matricula,mat);
	mvprintw(15,34,"Favor de escribir su primer nombre:");
	scanw("%s",n.nombre);
	mvprintw(16,34,"Escriba su apellido Paterno:");
	scanw("%s",n.ap);
	mvprintw(17,34,"Escriba su apellido Materno:");
	scanw("%s",n.am);}
	attroff(COLOR_PAIR(1));
	srand(hora); 
	numero=1+rand()%(6-1);
	switch(numero)
	{
		case 1:erase();
		       attron(COLOR_PAIR(5));
		       mvprintw(14,47,"Ustede esta haciendo el examen numero 1\n");
			mvprintw(15,47,"Cual es la libreria para poder usar las funciones printf y scanf?\n");
			mvprintw(16,47,"a) ncurses.h        b)string.h              c)stdio.h                   d)math.h");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='c')
				calificacion++;
			erase();
			mvprintw(15,47,"2)En diagramas de flujo, el programa empieza y termina con la figura de:\n");
			mvprintw(16,47,"a) Ovalo b)rectangulo c)cuadrado d)rombo");
			mvprintw(17,47,"Escoja su opcion:");		
			scanw("%c",&res);
			if(res=='a')
				calificacion++;
			erase();
			mvprintw(15,47,"3)Es la funcion que une dos cadenas de caracteres\n");
			mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='c')
				calificacion++;
			erase();
			mvprintw(15,47,"4) cual de estos ciclos for esta bien escrito\n");
			mvprintw(16,47,"a)for(x=0,x<5;x++) b) for(x=0.x<6.x++) c) for(x=0;x<5;x++) d)for(x=0;x<7;x++); ");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='c')
				calificacion++;
			erase();
			mvprintw(15,47,"5)cual de estas comparaciones esta mal escrita\n");
			mvprintw(16,47,"a)if(opc==0) b)if(opc!=0); c)if(opc<=0) d)if(opc<0)");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			erase();
			mvprintw(15,47,"6)cual de estos for esta mal escrito\n");
			mvprintw(16,47,"a)for(y=0;y<5;y++) b) for(y=0;y<*p;y++) c)for(y=0;y=<7;y++) d)for(y=0;y<=n;y++)");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='c')
				calificacion++;
			erase();
			mvprintw(15,47,"7)Cual es la funcion que  aplica operaciones selectivas\n");
			mvprintw(16,47,"a)for b)do,while c)switch d)strcmp");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='c')
				calificacion++;
			erase();
			mvprintw(15,47,"8) En que linea se encuentra el error de este programa:\n");
			mvprintw(16,47,"1:#include<stdio.h>\n");
			mvprintw(17,47,"2:main()\n");
			mvprintw(18,47,"3:{\n");
			mvprintw(19,47,"4:int  opc;\n");
			mvprintw(20,47,"5:printf(\"Bienvenido al menu de pciones de la uabc, que deseas acceder:\\n\");\n");
			mvprintw(21,47,"6:printf(\"1.registro\\n2.consulta\\n3.modificaciones\\n4.salida\\n\");\n");
			mvprintw(22,47,"7:printf(\"escoja su opccio\");\n");
			mvprintw(23,47,"8:scanf(\"%%i\",&opc);\n"); 
			mvprintw(24,47,"9:switch(opc)\n");
			mvprintw(25,47,"10:{\n");
			mvprintw(26,47,"11:case 1:\n");
			mvprintw(27,47,"12:break;\n");
			mvprintw(28,47,"13:case2:\n");
			mvprintw(29,47,"14:break;\n");
			mvprintw(30,47,"15:case 3:\n");
			mvprintw(31,47,"16:break;\n");
			mvprintw(32,47,"17:case 4:\n");
			mvprintw(33,47,"18:break:\n");
			mvprintw(34,47,"19:}\n");
			mvprintw(35,47,"20:}\n");
			mvprintw(36,47," a)8  b)6 c)14 d)18\n");
			mvprintw(37,47,"Escoja su opcion:");
			scanw("%c",&res);	
			if(res=='d')
				calificacion++;
			erase();
			mvprintw(15,7,"9)En un programa se pide registrar a 15 alumnos y su calificacion, al final se mostrara el alumno con mejor calificacion, en que linea se encuentra el error en esta pagina\n");
			mvprintw(16,47,"1:#include<stdio.h>\n");
			mvprintw(17,47,"2:#include<string.h>\n");
			mvprintw(18,47,"3:main() {\n");
			mvprintw(19,47,"4:char nombre[20],nombrem[20];\n");
			mvprintw(20,47,"5:int z,ca,caf=0;\n");
			mvprintw(21,47,"6:for(z=0;z>15;z++)\n");
			mvprintw(22,47,"7:{\n");
			mvprintw(23,47,"8:printf(\"escriba el nombre del alumno\");\n");
			mvprintw(24,47,"9:scanf(\"%%s\",nombre);\n");
			mvprintw(25,47,"10:printf(\"escriba su calificacion\");\n");
			mvprintw(26,47,"11:scanf(\"%%d\",&ca);\n");
			mvprintw(27,47,"12:if(ca>caf) {\n");
			mvprintw(28,47,"13:caf=ca;\n");
			mvprintw(29,47,"14:strcpy(nombrem,nombre) }}\n");
			mvprintw(30,47,"15:printf(\"el nombre mejor fue %%s\",nombrem);\n");
			mvprintw(31,47,"16:printf(\"su calificacion fue de %%i\",caf);}\n");
		       	mvprintw(32,47," a) 12 b)14 c) 16 d)13\n");
			mvprintw(33,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			erase();
			mvprintw(15,47,"10) En que linea se encuentra el error de este programa:\n");
			mvprintw(16,47,"1:#include<stdio.h>\n");
			mvprintw(17,47,"2:main()\n");
			mvprintw(18,47,"3:{\n"); 
			mvprintw(19,47,"4:char nombre[20];\n");
			mvprintw(20,47,"5:printf(\"Escriba su nombre\");\n");
			mvprintw(21,47,"6:scanf(\"%%d\",nombre);");
			mvprintw(22,47,"7: }\n");
			mvprintw(23,47,"a)4 b)5 c)3 d)6\n");
			mvprintw(24,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='d')
				calificacion++;
			erase();
			mvprintw(15,47,"11)los algoritmos deben de tener\n");
		        mvprintw(16,47,"a)entradas procesos salidas\n");
			mvprintw(17,47,"b)entradas  salidas\n");
			mvprintw(18,47,"c)entradas declaraciones salidas\n");
			mvprintw(19,47,"d)entradas procesos\n");
			mvprintw(20,47,"Escoja su opcion");
			scanw("%c",&res);
			if(res=='a'||res=='b')
				calificacion++;
			erase();
			mvprintw(15,12,"12) es la representacion grafica de un algoritmo o proceso. Se utiliza en disciplinas como programacion,economia,procesos industriales\n");
			mvprintw(16,47,"a)algoritmo b)vector c)matriz d)diagrama de flujo");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='d')
				calificacion++;
			erase();
			mvprintw(15,47,"13)Cual de estos ciclos es controlado por un contador\n");
			mvprintw(16,47,"a)if b)for c)do, while d) while");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			erase();
			mvprintw(15,47,"14) Cual de estos printf esta bien escrito\n");
			mvprintw(16,47,"a)printf(\"%%d\",num) b)printf(\"%%d\",&num) c)printf(%%d,num) d)printf(\"%%d\",num);");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='d')
				calificacion++;
			erase();
			mvprintw(15,47,"15) Cual es la funcion para escanear datos?\n");
			mvprintw(16,47,"a)printf b)scanf c)clear d)return");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;	
	n.ca=(calificacion/15)*100;
	erase();
	mvprintw(17,47,"Gracias por su Atencion, su calificacion es de %.2f\n",n.ca);
	fwrite(&n,sizeof(registro),1,ex);
	fclose(ex);
	refresh();
	getch();
	attroff(COLOR_PAIR(5));
	break; 
		case 2:
	attroff(COLOR_PAIR(1));
	erase();
	mvprintw(15,47,"Usted esta haciendo el examen numero 2\n");
	mvprintw(16,47,"1) Quien diseno el lenguaje en c?\n");
	mvprintw(17,47,"a)Dennis Ritchie b)Steve Jobs c)Ken Thompson d)Douglas Mclroy");
	mvprintw(18,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='a')
		calificacion++;
	erase();
mvprintw(15,4,"2)es la representacion grafica del algoritmo o proceso.Se utiliza en disciplinas como programacion,economia, procesos industriales y psicologia cognitiva.\n");
	mvprintw(16,47,"a)algoritmo b)vector c)matriz d)diagrama de flujo");
	mvprintw(17,47,"Escoja su opcion:");
	
	scanw("%c",&res);
	if(res=='d')
		calificacion++;
	erase();
	mvprintw(15,47,"3)En diagramas de flujo,el programa hace un proceso con la figura\n");
	mvprintw(16,47,"a) Ovalo b)rectangulo c)rombo d)cuadrado");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	erase();
	mvprintw(15,47,"4)es la funcion de asignacion de un dato\n");
	mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	erase();
	mvprintw(15,47,"5)es la funcion que compara cadenas de caracteres\n");
	mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='d')
		calificacion++;
	erase();
	mvprintw(15,47,"6)Cual de estos ciclos es controlado por un contador\n");
	mvprintw(16,47,"a)if b)for c)do, while d) while");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	erase();
	mvprintw(15,47,"7)cual de estos ciclos while esta bien escrito\n");
	mvprintw(16,47,"a)while(opc==5) b)while(opc=5) c)while(opc==5);  d)while(opc!=5);");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='a')
		calificacion++;
	erase();
	mvprintw(15,47,"8)cual de estos casos esta bien escrito\n");
	mvprintw(16,32,"a)case 1: aop=1;  break;  b)case 1; aop=1; break;  c) case 1: aop=1; break:  d) case 1: aop==1; break;");
	mvprintw(17,47,"Escoja su opcion");
	scanw("%c",&res);
	if(res=='c')
		calificacion++;
	erase();
	mvprintw(15,47,"9)Cual de estos printf esta mal escrito\n");
	mvprintw(16,47,"a)printf(\"%%s\",nom); b)Printf (\"%%d\",num); c)printf(\"%%f\",precio); d)printf(\"%%i\",oso);");
	mvprintw(17,47,"Escoja su opcion");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	erase();
	mvprintw(15,47,"10) En que linea se encuentra el error de este programa:\n");
	mvprintw(16,47,"1:#include<stdio.h>\n");
	mvprintw(17,47,"2:main()\n");
	mvprintw(18,47,"3:{\n"); 	
	mvprintw(19,47,"4:int soda,sodaf;\n");
	mvprintw(20,47,"5:printf(\"cuanto cuesta la soda\");\n");
	mvprintw(21,47,"6:scanf(\"%%i\",&soda);\n");	
	mvprintw(22,47,"7:if(soda>15);\n");
       	mvprintw(23,47,"8:sodaf=soda;\n");
	mvprintw(24,47,"9:}\n");
	mvprintw(25,47,"a)7  b)6 c)5 d)3");
	mvprintw(26,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='a')
		calificacion++;
	erase();
	mvprintw(15,12,"11) el siguiente programa muestra un juego de acertacion de un numero, pero en alguna linea se encuentra un  error, puede saber cual es?\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n");
		mvprintw(19,47,"4:int numero;\n");
		mvprintw(20,47,"5:do{\n");
		mvprintw(21,47,"6:printf(\"estoy pensando en un numero del 1 al 10 cual es:\");\n");
		mvprintw(22,47,"7:scanf(\"%%i\",&opc);\n");
		mvprintw(23,47,"8:if(opc==5)");
		mvprintw(24,47,"9:printf(\"estas bien baby\");\n");
		mvprintw(25,47,"10:else: \n");
		mvprintw(26,47,"11: printf(\"te equivocastes de numero\");}\n");
		mvprintw(27,47,"12: while(opc!=5);}\n");
		mvprintw(28,47,"a)7 b)12 c)10 d)5");
		mvprintw(29,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"12)En este programa pide un numero aleatorio por 15 veces seguidas, donde se encuentra el error\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n");
		mvprintw(19,49,"4:int z,m;\n");
		mvprintw(20,47,"5:for(z=0;z>15;z++);\n");
		mvprintw(21,47,"6:{\n");
		mvprintw(22,47,"7:printf(\"escriba un numero\");\n");
		mvprintw(23,47,"8:scanf(\"%%d\",&numero);\n");
		mvprintw(24,47,"9:}}");
		mvprintw(25,47," a)2 b)4 c)5 d)8");
		mvprintw(26,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"13)en el siguiente programa se requiere que pida 15 nombres , se mostrara cuantas veces se repetira el nombre Liliana\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:#include<string.h>\n");
		mvprintw(18,47,"3:main (){\n");
		mvprintw(19,47,"4:char nombre[20];\n");
		mvprintw(20,47,"5:int y=0,l;\n");
		mvprintw(21,47,"6:for(l=0;l<15;l++) {\n");
		mvprintw(22,47,"7:printf(\"escriba su nombre:\");\n");
		mvprintw(23,47,"8:scanf(\"%%s\",nombre);\n");
		mvprintw(24,47,"9:if(strcmp(nombre, \'liliana\')==0)\n");
		mvprintw(25,47,"10:y++;");
		mvprintw(26,47,"11:}}\n");
		mvprintw(27,47,"12:printf(\"el nombre Liliana se repitio\",y);}\n");
		mvprintw(28,47,"a)10 b)9 c)6 d)8");
		mvprintw(29,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
	mvprintw(15,5,"14)En el siguiente problema se utiliza un if para saber si la siguiente estructura de caracteres dice ana, cual de estos, if esta bien escrito\n");
	mvprintw(16,14,"a)if(strcmp(nombre, \"ana\")>=0) b)if(strcmp(nombre, \"ana\")==0) c) if(strcmp(nombre,\'ana\')!=0) d)if(strcmp(nombre,\"ana\")!=0);");
	mvprintw(17,14,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	erase();
	mvprintw(15,47,"15)Cual de estos scanf esta mal escrito\n");
	mvprintw(16,32,"a)scanf(\"%%s\",nom); b)scanf(\"%%d\",&nom); c)scanf(\"%%i\",&nom); d)scanf(\"%%f\",precio);\n");
	mvprintw(17,32,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='d')
		calificacion++;
	  n.ca=(calificacion/15)*100;
	  erase();
        mvprintw(16,47,"Gracias por su Atencion, su calificacion es de %.2f\n",n.ca);	      
	fwrite(&n,sizeof(registro),1,ex);
	fclose(ex);
	refresh();
	getch();
attroff(COLOR_PAIR(1));
       	break;
	case 3:
	attron(COLOR_PAIR(3));
		 erase();
		 mvprintw(15,47,"Usted esta haciendo el examen numero 3\n");
		 mvprintw(16,47,"1)Cual es la construccion de la programacion correcta?\n");
		mvprintw(17,47,"a) 1secuencia  2seleccion  3 repeticion \n");
		mvprintw(18,47," B) 1secuencia  2Modulada 3repeticion");
		mvprintw(19,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"2)Cual de estas funciones se utiliza para comparar?\n");
		mvprintw(16,47,"a)for b)if c)while d)scanf");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
		mvprintw(15,47,"3) En diagramas de flujo, la figura que representa una seleccion es el:\n");
		mvprintw(16,47,"a) Ovalo b)rectangulo c)rombo d)cuadrado");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"4)es la funcion que mide la longitud de una cadena\n");
		mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"5)Es la biblioteca donde puedes manipular las cadenas de caracteres\n");
		mvprintw(16,47,"a)stdio.h b)math.h c)ncurses.h d)string.h");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,21,"6)Dentro de donde se utiliza la llave principal, donde se guarda el codigo de programa y las variable locales\n");
		mvprintw(16,23,"a)main() b)#include<libreria> c)variables globales d)return 0;");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"7)cual de estas declaraciones esta bien escrita\n");
		mvprintw(16,47,"a)int n,f,s,u,e; b)int e,rt,y,re,i     c)int d.r.t.y.e.f;     d)int=d,r,t,y,w,d;");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"8) cual de estas comparaciones esta mal escrita\n");
		mvprintw(16,47,"a)if(opc==0) b)if(opc!=0); c)if(opc<=0) d)if(opc<0)");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
		mvprintw(15,47,"9)Cual de estos scanf esta mal escrito\n");
		mvprintw(16,23,"a)scanf(\"%%s\",nom); b)scanf(\"%%d\",&nom); c)scanf(\"%%i\",&nom); d)scanf(\"%%f\",precio);");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,47,"10)En que linea se encuentra el error de este programa:\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n"); 
		mvprintw(19,47,"4:char nombre[20];\n");
		mvprintw(20,47,"5:printf(\"Escriba su nombre\");\n");
		mvprintw(21,47,"6:scanf(\"%%d\",nombre);\n"); 
		mvprintw(22,47,"7: }\n");
		mvprintw(23,47,"a)4 b)5 c)3 d)6");
		mvprintw(24,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,47,"11)En que linea se encuentra el error de este programa:\n");
		mvprintw(16,47,"1:#include<stdio>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n"); 
		mvprintw(19,47,"4:char pastel[20];\n");
		mvprintw(20,47,"5:printf(\"Escriba el nombre del pastel\");\n");
		mvprintw(21,47,"6:scanf(\"%%s\",paste;);\n");
		mvprintw(22,47,"7: }\n");
		mvprintw(23,47,"a)1 b)5 c)6 d)2");
		mvprintw(24,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,27,"12) En este programa se hace preguntas para saber se el alumno conoce de historia, encuentre el error del programa\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:#include<string.h>\n");
		mvprintw(18,47,"3:main() {\n");
		mvprintw(19,47,"4:char cq[15],ph[20];\n");
		mvprintw(20,47,"5:printf(\"quien due la corregidora de queretaro\");\n");
		mvprintw(21,47,"6:scanf(\"%%s\",cq);\n");
		mvprintw(22,47,"7:printf(\"quien dio el grito de la independiencia\");\n");
		mvprintw(23,47,"8:scanf(\"%%s\",ph);\n");
		mvprintw(24,47,"9:if(strcmp(cq,\"josefa\")==0)  {\n");
		mvprintw(25,47,"10:if(strcmp(ph, \'hidalgo\')==0)\n");
     		mvprintw(26,47,"11:printf(\"acertastes las dos preguntas bien hecho\");\n");
		mvprintw(27,47,"12:else\n");
     		mvprintw(28,48,"13:printf(\"acertastes una bien,sigue estudiando\");}\n");
		mvprintw(29,47,"14:else\n");
		mvprintw(30,47,"15:printf(\"estudia mas historia\");\n");
		mvprintw(31,47,"16:}\n");
		mvprintw(32,47,"a)6 b)12 c)10 d)7");
		mvprintw(33,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"13)es la funcion que une dos cadenas de caracteres\n");
		mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp\n");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"14)Cual de estas funciones es utilizada para los ciclos\n");
		mvprintw(16,47,"1:for 2:do, while  3:while 4:switch\n");
		mvprintw(17,47,"a)4          b)1,2         c)4,3        d)1,2,3");
		mvprintw(18,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,47,"15)Posicion en memoria donde guardas una declaracion de caracteres\n");
		mvprintw(16,47,"a)int b)float c)char d)double");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		         n.ca=(calificacion/15)*100;
		         erase();
			 mvprintw(15,47,"Gracias por su Atencion, su calificacion es de %.2f\n",n.ca);
			 fwrite(&n,sizeof(registro),1,ex);
			  fclose(ex);
		refresh();
       getch();		
			 attroff(COLOR_PAIR(2));
		         break;
	case 4:
			 attron(COLOR_PAIR(3));
			 erase();
			mvprintw(15,47,"Usted esta haciendo el examen numero 4\n");
	mvprintw(16,47,"1)Cual de estas libreria aplica funciones matematicas?\n");
		mvprintw(17,47,"a)stdio.h b) math.h c)string.h d)ncurses.h");
		mvprintw(18,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
		printw("%f",calificacion);
		mvprintw(15,47,"2)Cual de estas funciones es utilizada para los ciclos\n");
		mvprintw(16,47,"1:for 2:do, while  3:while 4:switch\n");
		mvprintw(17,47,"a)4          b)1,2         c)4,3        d)1,2,3");
		mvprintw(18,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,23,"3)Posision en memoria donde guardas una declaracion solamente entera\n");
		mvprintw(16,47,"a)int b)float c)char d)double");
		mvprintw(17,47,"Escojas su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"4) los algoritmos deben de tener\n");
		mvprintw(16,47,"a)entradas procesos salidas\n");
		mvprintw(17,47,"b)entradas salidas\n");
		mvprintw(18,47,"c)entradas declaraciones salidas \n");
		mvprintw(19,47,"d)entradas procesos");
		mvprintw(20,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a'||res=='b')
			calificacion++;
		erase();
		mvprintw(15,47,"5)cual es la funcion para escanear datos?\n");
		mvprintw(16,47,"a)printf b)scanf c)clear d)return");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
		mvprintw(15,47,"6)cual es la libreria donde puedes trabajar de manera grafica con los programas\n");
		mvprintw(16,47,"a)stdio.h b)math.h c)ncurses.h d)string.h");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"7)cual de estos scanf esta bien escrito\n");
		mvprintw(16,27,"a)scanf(\"%%d\",num); b)scanf(\"%%d\",&num) c)scanf(\"%%d\",&num); d)scanf(\"%%d\",num)\n");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"8) Cual de estas operaciones selectivas esta bien escrita:\n");
		mvprintw(16,47,"a)switch(opc); b)switch(opc) c)switch(%%opc) d)switch(&opc)");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
	mvprintw(15,7,"9) En el siguiente problema se utiliza un if para saber si la siguiente estructura de caracteres dice ana, cual de estos if esta bien escrito\n");
		mvprintw(16,8,"a)if(strcmp(nombre, \"ana\")>=0) b)if(strcmp(nombre, \"ana\")==0) c) if(strcmp(nombre, \'ana\')!=0) d)if(strcmp(nombre, \"ana\")!=0);");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
                if(res=='b')
			calificacion++;
		erase();
		mvprintw(16,47,"10)En que linea se encuentra el error de este programa:\n");
		mvprintw(17,47,"1:#include<stdio.h>\n");
		mvprintw(18,47,"2:main()\n");
		mvprintw(19,47,"3:{\n");
		mvprintw(20,47,"4:char nombre[20];\n");
		mvprintw(21,47,"5:printf(\"Escriba su nombre\");\n");
		mvprintw(22,47,"6:Scanf(\"%%s\",nombre);\n");
		mvprintw(23,47,"7: }\n");
		mvprintw(24,47,"a)4 b)5 c)3 d)6");
		mvprintw(25,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(16,47,"11)En que linea se encuentra el error de este programa:\n");
		mvprintw(17,47,"1:#include<stdio.h>\n");
		mvprintw(18,47,"2:main()\n");
		mvprintw(19,47,"3:{\n");
		mvprintw(20,47,"4:char famoso[20];\n");
		mvprintw(21,47,"5:printf(\"Escriba el nombre del famoso:\");\n");
		mvprintw(22,47,"6:scanf(\"%%d\",&famoso);\n");
		mvprintw(23,47,"7: }\n");
		mvprintw(24,47,"a)2 b)4 c)7 d)5");
		mvprintw(25,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
		mvprintw(16,15,"12) En este programa pide un numero aleatorio por 15 veces seguidas, donde se encuentra el error\n");
		mvprintw(17,47,"1:#include<stdio.h>\n");
		mvprintw(18,47,"2:main()\n");
		mvprintw(19,47,"3:{\n");
		mvprintw(20,47,"4:int z,m;\n");
		mvprintw(21,47,"5:for(z=0;z>15;z++);\n");
		mvprintw(22,47,"6:{\n");
		mvprintw(23,47,"7:printf(\"escriba un numero\");\n");
		mvprintw(24,47,"8:scanf(\"%%d\",&numero);\n");
		mvprintw(25,47,"9:}}\n");
		mvprintw(26,47,"a)2 b)4 c)5 d)8");
		mvprintw(27,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(16,12,"13)en el siguiente programa se requiere que pida 15 nombres , se mostrara cuantas veces se repitio el nombre Liliana");
		mvprintw(17,47,"1:#include<stdio.h>\n");
		mvprintw(18,47,"2:#include<string.h>\n");
		mvprintw(19,47,"3:main (){\n");
		mvprintw(20,47,"4:char nombre[20];\n");
		mvprintw(21,47,"5:int y=0;\n");
		mvprintw(22,47,"6:for(l=0;l<15;l++) {\n");
		mvprintw(23,47,"7:printf(\"escriba su nombre:\");\n");
		mvprintw(24,47,"8:scanf(\"%%s\",nombre);\n");
		mvprintw(25,47,"9:if(strcmp(nombre,\'liliana\')==0)\n");
	       	mvprintw(26,47,"10:y++;\n");
		mvprintw(27,47,"11:}\n");
		mvprintw(28,47,"12:printf(\"el nombre Liliana se repitio\",y); }\n");
		mvprintw(29,47,"a)10 b)9 c)6 d)8");
		mvprintw(30,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='b')
			calificacion++;
		erase();
	mvprintw(15,47,"14)Cual es la funcion que aplica operaciones selectivas\n");
	mvprintw(16,47,"a)for b)do,while c)switch d)strcmp");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='c')
		calificacion++;
	erase();
	mvprintw(15,47,"15)es la funcion de  asignacion a un dato\n");
	mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
	mvprintw(17,47,"Escoja su opcion:");
	scanw("%c",&res);
	if(res=='b')
		calificacion++;
	        n.ca=(calificacion/15)*100;
		erase();
	        mvprintw(15,47,"Gracias por su Atencion, su calificacion es de %.2f\n",n.ca);
		fwrite(&n,sizeof(registro),1,ex);
		fclose(ex);
		refresh();
		getch();
		 attroff(COLOR_PAIR(3));
	break;
	case 5:
	 attron(COLOR_PAIR(4));
	erase();
	mvprintw(15,47,"Usted esta haciendo el examen numero 5\n");
		mvprintw(16,47,"1)cual es la funcion para imprimir datos?\n");
		mvprintw(17,47,"a)printf b)scanf c)clear d)return");
		mvprintw(18,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,47,"2)Posicion de memoria donde guardas una declaracion de caracteres\n");
		mvprintw(16,47,"a)int b)float c)char d)double");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"3)Cual es la funcion que aplica operaciones selectivas\n");
		mvprintw(16,47,"a)for b)do,while c)switch d)strcmp");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"4)Cual de estos printf esta bien escrito\n");
		mvprintw(16,47,"a)printf(\"%%d\",num) b)printf(\"%%d\",&num) c)printf(%%d,num) d)printf(\"%%d\",num);");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,47,"5) En que linea  se encuentra el error de este programa:\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n"); 
		mvprintw(19,47,"4:int soda;\n");
		mvprintw(20,47,"5:Printf(\"cuanto cuesta la soda\n");
		mvprintw(21,47,"6:scanf(\"%%i\",&soda);\n");
		mvprintw(22,47,"7: }\n");
		mvprintw(23,47,"a)4  b)6 c)5 d)3");
		mvprintw(24,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,10,"6) en el siguiente programa el contador S aumenta 1, y el contador= K disminuye 1, donde se encuentra el error en este programa\n");
		mvprintw(16,47,"1:#include<stdio.h>\n");
		mvprintw(17,47,"2:main()\n");
		mvprintw(18,47,"3:{\n");
		mvprintw(19,47,"4:int S,K;\n");
		mvprintw(20,47,"5:for(S=1,K=10;K>0;S--,K--)\n");
		mvprintw(21,47,"6:printf(\"el contador S aumenta %%d y el contador K disminuye %%d\\n\",S,K);\n");
		mvprintw(22,47,"7:}\n");
		mvprintw(23,47,"a)5 b)3 c)6 D)4");
		mvprintw(24,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
		mvprintw(15,23,"7)Es un conjunto de instrucciones bien definido, ordenado y finito que permite realizar una actividad especifica\n");
		mvprintw(16,47,"a)vector b)diagrama de flujo c)matriz d)algoritmo");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='d')
			calificacion++;
		erase();
		mvprintw(15,47,"8) cual es la libreria donde puedes trabajar de manera grafica con los programas\n");
		mvprintw(16,47,"a)stdio.h b)math.h c)ncurses.h d)string.h");
		mvprintw(17,47,"Escoja su opcion:");
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"9)En diagramas de flujo, la figura que representa una seleccion es el:\n");
		mvprintw(16,47,"a) Ovalo b)rectangulo c)rombo d)cuadrado");
		mvprintw(17,47,"Escoja su opcion:");
		
		scanw("%c",&res);
		if(res=='c')
			calificacion++;
		erase();
		mvprintw(15,47,"10) Quien diseno lenguaje en c?\n");
		mvprintw(16,47,"a)Dennis Ritchie b)Steve Jobs c)Ken Thompson d)Douglas Mclroy");
		mvprintw(17,47,"Escoja su opcion:");
		
		scanw("%c",&res);
		if(res=='a')
			calificacion++;
		erase();
mvprintw(14,2,"11)En un programa se pide registrar a 15 alumnos y su calificacion al final se mostrara el alumno con mejor calificacion,en que linea se encuentra el error\n");
			mvprintw(15,47,"1:#include<stdio.h>\n");
			mvprintw(16,47,"2:#include<string.h>\n");
			mvprintw(17,47,"3:main(){\n");
			mvprintw(18,47,"4:char nombre[20],nombrem[20];\n");
			mvprintw(19,47,"5:int z,ca,caf=0;\n");
			mvprintw(20,47,"6:for(z=0;z>15;z++)\n");
		       	mvprintw(21,47,"7:{\n");
			mvprintw(22,47,"8:printf(\"escriba el nombre del alumno\");\n");
			mvprintw(23,47,"9:scanf(\"%%s\",nombre);\n");
			mvprintw(24,47,"10:printf(\"escriba su calificacion\");\n");
			mvprintw(25,47,"11:scanf(\"%%d\"&ca);\n");
			mvprintw(26,47,"12:if(ca>caf) {\n");
			mvprintw(27,47,"13:caf=ca;\n");
			mvprintw(28,47,"14:strcpy(nombrem,nombre) }}\n");
			mvprintw(29,47,"15:printf(\"el nombre mejor fue %%s\",nombrem);\n");
			mvprintw(30,47,"16:printf(\"su calificacion es de %%i\",caf);}\n");
			mvprintw(31,47,"a) 12 b)14 c) 16 d)13");
			mvprintw(32,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			erase();
			mvprintw(15,47,"12)Cual de estas operaciones selectivas esta bien escrita:\n");
			mvprintw(16,47,"a)switch(opc); b)switch(opc) c)switch(%%opc) d)switch(&opc)");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			erase();
			mvprintw(15,47,"13)Cual de estas funciones es utilizada para los ciclos\n");
			mvprintw(16,47,"1:for 2:do, while  3:while 4:switch\n");
			mvprintw(17,47,"a)4          b)1,2         c)4,3        d)1,2,3");
			mvprintw(18,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='d')
				calificacion++;
			erase();
			mvprintw(15,47,"14) Cual es la construccion de la programacion correcta?\n");
			mvprintw(16,47,"a) 1secuencia 2seleccion 3repeticion \n");
			mvprintw(17,47,"B)1 secuencia 2Modulada 3repeticion\n");
			mvprintw(18,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='a')
				calificacion++;
			erase();
			mvprintw(15,47,"15) En diagramas de flujo, el programa hace un proceso con la figura\n");
			mvprintw(16,47,"a) Ovalo b)rectangulo c)rombo d)cuadrado");
			mvprintw(17,47,"Escoja su opcion:");
			scanw("%c",&res);
			if(res=='b')
				calificacion++;
			        n.ca=(calificacion/15)*100;
				erase();	
				mvprintw(15,47,"Gracias por su Atencion, su calificacion es de %2.f\n",n.ca);
				fwrite(&n,sizeof(registro),1,ex);
				fclose(ex);
		refresh();
		getch();		
				 attroff(COLOR_PAIR(4));
					        break;}
endwin();}}