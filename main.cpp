#include <ncurses.h>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;
int main(){
	initscr();			
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();

	return 0;
}
