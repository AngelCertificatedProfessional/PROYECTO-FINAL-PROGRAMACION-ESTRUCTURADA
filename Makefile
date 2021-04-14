examenes: menu1.o examen.o consultas.o  baja.o
	cc -o examenes menu1.o examen.o consultas.o baja.o -lncurses
menu1.o: menu1.c datos.h
	cc -c -g menu1.c
examen.o:examen.c examen.h
	cc -c -g examen.c
consultas.o:consultas.c consultas.h
	 cc -c -g consultas.c
baja.o:baja.c baja.h
	cc -c -g baja.c
clean:
	rm *.o*~ examenes
