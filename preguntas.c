#include <ncurses.h>
#include <stdio.h>

char* pregunta1(){
    mvprintw(15,47,"Cual es la libreria para poder usar las funciones printf y scanf?");
    mvprintw(16,47,"a) ncurses.h        b)string.h              c)stdio.h                   d)math.h");
    return "c";
}

char* pregunta2(){
    mvprintw(15,47,"En diagramas de flujo, el programa empieza y termina con la figura de:");
    mvprintw(16,47,"a) Ovalo b)rectangulo c)cuadrado d)rombo");
    return "a";
}

char* pregunta3(){
    mvprintw(15,47,"Es la funcion que une dos cadenas de caracteres");
    mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
    return "c";
}

char* pregunta4(){
    mvprintw(15,47,"Cual de estos ciclos for esta bien escrito");
    mvprintw(16,47,"a)for(x=0,x<5;x++) b) for(x=0.x<6.x++) c) for(x=0;x<5;x++) d)for(x=0;x<7;x++); ");
    return "c";
}

char* pregunta5(){
    mvprintw(15,47,"Cual de estas comparaciones esta mal escrita");
    mvprintw(16,47,"a)if(opc==0) b)if(opc!=0); c)if(opc<=0) d)if(opc<0)");
    return "b";
}

char* pregunta6(){
    mvprintw(15,47,"Cual de estas comparaciones esta mal escrita");
    mvprintw(16,47,"a)if(opc==0) b)if(opc!=0); c)if(opc<=0) d)if(opc<0)");
    return "b";
}

char* pregunta7(){
    mvprintw(15,47,"Cual de estos for esta mal escrito");
    mvprintw(16,47,"a)for(y=0;y<5;y++) b) for(y=0;y<*p;y++) c)for(y=0;y=<7;y++) d)for(y=0;y<=n;y++)");
    return "c";
}

char* pregunta8(){
    mvprintw(15,47,"Cual es la funcion que  aplica operaciones selectivas");
    mvprintw(16,47,"a)for b)do,while c)switch d)strcmp");
    return "c";
}

char* pregunta9(){
    mvprintw(15,47,"En que linea se encuentra el error de este programa:");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:main()");
    mvprintw(18,47,"3:{");
    mvprintw(19,47,"4:int  opc;");
    mvprintw(20,47,"5:printf(\"Bienvenido al menu de pciones de la uabc, que deseas acceder:\");");
    mvprintw(21,47,"6:printf(\"1.registro\2.consulta\3.modificaciones\4.salida\");");
    mvprintw(22,47,"7:printf(\"escoja su opccio\");");
    mvprintw(23,47,"8:scanf(\"%%i\",&opc);"); 
    mvprintw(24,47,"9:switch(opc)");
    mvprintw(25,47,"10:{");
    mvprintw(26,47,"11:case 1:");
    mvprintw(27,47,"12:break;");
    mvprintw(28,47,"13:case2:");
    mvprintw(29,47,"14:break;");
    mvprintw(30,47,"15:case 3:");
    mvprintw(31,47,"16:break;");
    mvprintw(32,47,"17:case 4:");
    mvprintw(33,47,"18:break:");
    mvprintw(34,47,"19:}");
    mvprintw(35,47,"20:}");
    mvprintw(36,47," a)8  b)6 c)14 d)18");
    return "d";
}

char* pregunta10(){
    mvprintw(15,7,"En un programa se pide registrar a 15 alumnos y su calificacion, al final se mostrara el alumno con mejor calificacion, en que linea se encuentra el error en esta pagina");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:#include<string.h>");
    mvprintw(18,47,"3:main() {");
    mvprintw(19,47,"4:char nombre[20],nombrem[20];");
    mvprintw(20,47,"5:int z,ca,caf=0;");
    mvprintw(21,47,"6:for(z=0;z>15;z++)");
    mvprintw(22,47,"7:{");
    mvprintw(23,47,"8:printf(\"escriba el nombre del alumno\");");
    mvprintw(24,47,"9:scanf(\"%%s\",nombre);");
    mvprintw(25,47,"10:printf(\"escriba su calificacion\");");
    mvprintw(26,47,"11:scanf(\"%%d\",&ca);");
    mvprintw(27,47,"12:if(ca>caf) {");
    mvprintw(28,47,"13:caf=ca;");
    mvprintw(29,47,"14:strcpy(nombrem,nombre) }}");
    mvprintw(30,47,"15:printf(\"el nombre mejor fue %%s\",nombrem);");
    mvprintw(31,47,"16:printf(\"su calificacion fue de %%i\",caf);}");
    mvprintw(32,47," a) 12 b)14 c) 16 d)13");
    return "b";
}

char* pregunta11(){
    mvprintw(15,47,"En que linea se encuentra el error de este programa:");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:main()");
    mvprintw(18,47,"3:{"); 
    mvprintw(19,47,"4:char nombre[20];");
    mvprintw(20,47,"5:printf(\"Escriba su nombre\");");
    mvprintw(21,47,"6:scanf(\"%%d\",nombre);");
    mvprintw(22,47,"7: }");
    mvprintw(23,47,"a)4 b)5 c)3 d)6");
    return "d";
}

char* pregunta12(){
    mvprintw(15,12,"Es la representacion grafica de un algoritmo o proceso. Se utiliza en disciplinas como programacion,economia,procesos industriales");
    mvprintw(16,47,"a)algoritmo b)vector c)matriz d)diagrama de flujo");
    return "d";
}

char* pregunta13(){
    mvprintw(15,47,"Cual de estos ciclos es controlado por un contador");
    mvprintw(16,47,"a)if b)for c)do, while d) while");
    return "b";
}

char* pregunta14(){    
    mvprintw(15,47,"Cual de estos printf esta bien escrito");
    mvprintw(16,47,"a)printf(\"%%d\",num) b)printf(\"%%d\",&num) c)printf(%%d,num) d)printf(\"%%d\",num);");
    return "d";
}

char* pregunta15(){
    mvprintw(15,47,"Quien diseno el lenguaje en c?");
    mvprintw(16,47,"a)Dennis Ritchie b)Steve Jobs c)Ken Thompson d)Douglas Mclroy");
    return "a";
}

char* pregunta16(){
    mvprintw(15,4,"Es la representacion grafica del algoritmo o proceso.Se utiliza en disciplinas como programacion,economia, procesos industriales y psicologia cognitiva.");
    mvprintw(16,47,"a)algoritmo b)vector c)matriz d)diagrama de flujo");
    return "d";
}

char* pregunta17(){
    mvprintw(15,47,"En diagramas de flujo,el programa hace un proceso con la figura");
    mvprintw(16,47,"a) Ovalo b)rectangulo c)rombo d)cuadrado");
    return "b";
}

char* pregunta18(){
    mvprintw(15,47,"Es la funcion de asignacion de un dato");
    mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
    return "b";
}

char* pregunta19(){
    mvprintw(15,47,"Es la funcion que compara cadenas de caracteres");
    mvprintw(16,47,"a)strlen b)strcpy c)strcat d)strcmp");
    return "d";
}

char* pregunta20(){
    mvprintw(15,47,"En que linea se encuentra el error de este programa:");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:main()");
    mvprintw(18,47,"3:{"); 	
    mvprintw(19,47,"4:int soda,sodaf;");
    mvprintw(20,47,"5:printf(\"cuanto cuesta la soda\");");
    mvprintw(21,47,"6:scanf(\"%%i\",&soda);");	
    mvprintw(22,47,"7:if(soda>15);");
    mvprintw(23,47,"8:sodaf=soda;");
    mvprintw(24,47,"9:}");
    mvprintw(25,47,"a)7  b)6 c)5 d)3");
    return "a";
}

char* pregunta21(){
    mvprintw(15,47,"Cual de estos printf esta mal escrito");
    mvprintw(16,47,"a)printf(\"%%s\",nom); b)Printf (\"%%d\",num); c)printf(\"%%f\",precio); d)printf(\"%%i\",oso);");
    return "b";
}

char* pregunta22(){
    mvprintw(15,12,"El siguiente programa muestra un juego de acertacion de un numero, pero en alguna linea se encuentra un  error, puede saber cual es?");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:main()");
    mvprintw(18,47,"3:{");
    mvprintw(19,47,"4:int numero;");
    mvprintw(20,47,"5:do{");
    mvprintw(21,47,"6:printf(\"estoy pensando en un numero del 1 al 10 cual es:\");");
    mvprintw(22,47,"7:scanf(\"%%i\",&opc);");
    mvprintw(23,47,"8:if(opc==5)");
    mvprintw(24,47,"9:printf(\"estas bien baby\");");
    mvprintw(25,47,"10:else: ");
    mvprintw(26,47,"11: printf(\"te equivocastes de numero\");}");
    mvprintw(27,47,"12: while(opc!=5);}");
    mvprintw(28,47,"a)7 b)12 c)10 d)5");
    return "c";
}

char* pregunta23(){
    mvprintw(15,47,"En este programa pide un numero aleatorio por 15 veces seguidas, donde se encuentra el error");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:main()");
    mvprintw(18,47,"3:{");
    mvprintw(19,49,"4:int z,m;");
    mvprintw(20,47,"5:for(z=0;z>15;z++);");
    mvprintw(21,47,"6:{");
    mvprintw(22,47,"7:printf(\"escriba un numero\");");
    mvprintw(23,47,"8:scanf(\"%%d\",&numero);");
    mvprintw(24,47,"9:}}");
    mvprintw(25,47," a)2 b)4 c)5 d)8");
    return "c";
}

char* pregunta24(){
    mvprintw(15,47,"En el siguiente programa se requiere que pida 15 nombres , se mostrara cuantas veces se repetira el nombre Liliana");
    mvprintw(16,47,"1:#include<stdio.h>");
    mvprintw(17,47,"2:#include<string.h>");
    mvprintw(18,47,"3:main (){");
    mvprintw(19,47,"4:char nombre[20];");
    mvprintw(20,47,"5:int y=0,l;");
    mvprintw(21,47,"6:for(l=0;l<15;l++) {");
    mvprintw(22,47,"7:printf(\"escriba su nombre:\");");
    mvprintw(23,47,"8:scanf(\"%%s\",nombre);");
    mvprintw(24,47,"9:if(strcmp(nombre, \"liliana\")==0)");
    mvprintw(25,47,"10:y++;");
    mvprintw(26,47,"11:}}");
    mvprintw(27,47,"12:printf(\"el nombre Liliana se repitio\",y);}");
    mvprintw(28,47,"a)10 b)9 c)6 d)8");
    return "b";
}

char* pregunta25(){
    mvprintw(15,5,"En el siguiente problema se utiliza un if para saber si la siguiente estructura de caracteres dice ana, cual de estos, if esta bien escrito");
    mvprintw(16,14,"a)if(strcmp(nombre, \"ana\")>=0) b)if(strcmp(nombre, \"ana\")==0) c) if(strcmp(nombre,\"ana\")!=0) d)if(strcmp(nombre,\"ana\")!=0);");
    return "b";
}

char* pregunta26(){
    mvprintw(15,47,"Cual es la funcion para escanear datos?");
    mvprintw(16,47,"a)printf b)scanf c)clear d)return");
    return "b";
}