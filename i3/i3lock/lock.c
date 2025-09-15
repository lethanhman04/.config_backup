### Chat GPT With Love <3 <3 <3 ###

#include <ncurses.h>
#include <stdlib.h>
#include <string.h>

int main() {
    initscr();            
    noecho();             
    curs_set(FALSE);      
    keypad(stdscr, TRUE); 

    int max_y, max_x;
    getmaxyx(stdscr, max_y, max_x);

    char *text = "Dang khoa man hinh";
    int text_len = strlen(text);
    int text_x = (max_x - text_len) / 2;
    int text_y = max_y / 2;

    clear();

    mvprintw(text_y, text_x, "%s", text);

    refresh();

    getch();

    endwin();
    return 0;
}
