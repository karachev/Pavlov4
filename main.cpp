//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

int main() {
    int Keys;
    int poz_x = 10;
    int poz_y = 10;
    gotoxy(poz_x,poz_y);

    while(true) {
        Keys = getch();

        while (Keys != 60) {
            Keys = getch();
        }

        while (Keys != 59) {
          int n = 72 + (rand() % (80 - 72 + 1));
          if (n == 77 || n == 75 || n == 72 || n == 80) {
              if (n == 77) { //right
                  poz_x+=1;
                  gotoxy(poz_x,poz_y);
                  cout << char(42);
                  gotoxy(poz_x-1,poz_y);
                  cout << " ";
              }

              else if (n == 75) { // left
                  poz_x-=1;
                  gotoxy(poz_x,poz_y);
                  cout << char(42);
                  gotoxy(poz_x+1,poz_y);
                  cout << " ";
              }

              else if (n == 80 ) { //down
                  poz_y-=1;
                  gotoxy(poz_x,poz_y);
                  cout << char(42);
                  gotoxy(poz_x,poz_y+1);
                  cout << " ";
              }

              else if (n == 72 ) { //up
                  poz_y+=1;
                  gotoxy(poz_x,poz_y);
                  cout << char(42);
                  gotoxy(poz_x,poz_y-1);
                  cout << " ";
              }
              Keys = getch();
              Sleep(200);
          }
        }
        cout << "Game over";
        exit(1);
    }

    cin.get();
    return 0;
}
