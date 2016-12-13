//#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}

int main()
{
    int Keys;
    int poz_x = 10;
    int poz_y = 10;
    gotoxy(poz_x,poz_y);

    while(true)
    {
        Keys = getch();
        if (Keys == 77)
        {

                poz_x+=1;
                gotoxy(poz_x,poz_y);
                cout << char(42);
                gotoxy(poz_x-1,poz_y);
                cout << " ";

        }
        else if (Keys == 75)
        {

            poz_x-=1;
            gotoxy(poz_x,poz_y); //72 vniz 80 verh
            cout << char(42);
            gotoxy(poz_x+1,poz_y);
            cout << " ";


                    }
        else if (Keys == 72 )
        {
            poz_y-=1;
                    gotoxy(poz_x,poz_y); //72 vniz 80 verh
                    cout << char(42);
                    gotoxy(poz_x,poz_y+1);
                    cout << " ";
        }

        else if (Keys == 80 )
        {
            poz_y+=1;
                    gotoxy(poz_x,poz_y); //72 vniz 80 verh
                    cout << char(42);
                    gotoxy(poz_x,poz_y-1);
                    cout << " ";
        }

    }

    cin.get();
    return 0;
}
