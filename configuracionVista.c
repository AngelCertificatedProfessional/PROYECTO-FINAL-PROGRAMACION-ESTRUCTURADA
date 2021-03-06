#include <stdio.h>
#include <ncurses.h>

void imprimirTitulo(){
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
}

void cargarColores(){
    start_color();
    init_pair(1,COLOR_RED,COLOR_WHITE);
    init_pair(2,COLOR_BLUE,COLOR_WHITE);
    init_pair(3,COLOR_CYAN,COLOR_WHITE);
    init_pair(4,COLOR_MAGENTA,COLOR_WHITE);
    init_pair(5,COLOR_GREEN,COLOR_WHITE);
    init_pair(6,COLOR_BLACK,COLOR_WHITE);
    init_pair(7,COLOR_BLACK,COLOR_BLUE);
}