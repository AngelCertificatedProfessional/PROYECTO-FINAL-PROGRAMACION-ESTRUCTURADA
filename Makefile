examenes: menu1.o examen.o consultas.o  baja.o configuracionVista.o preguntas.o
	cc -o examenes menu1.o examen.o consultas.o baja.o configuracionVista.o preguntas.o -lncurses
menu1.o: menu1.c datos.h
	cc -c -g menu1.c
examen.o:examen.c examen.h
	cc -c -g examen.c
consultas.o:consultas.c consultas.h
	 cc -c -g consultas.c
baja.o:baja.c baja.h
	cc -c -g baja.c
configuracionVista.o: configuracionVista.c configuracionVista.h
	cc -c -g configuracionVista.c
preguntas.o: preguntas.c preguntas.h
	cc -c -g preguntas.c
clean:
	rm *.o*~ examenes
