﻿#include <iostream>
#include <windows.h>
using namespace std;

//Сколько нужно портратить часов к 100 уровню 
const int time_to_level_100 = 10000;
//Всего потрачено времени && Уровень 
int Totaltime(0),Level(0);

void information(int hours, int minutes) {

    system("cls");

    cout << "Информация об пользователе " << endl
        << "Имя пользователся : " << "Кармазин Алексей " << endl <<
        "Уровень : " << Level << endl <<
        "Всего времени потрачено : " << ::Totaltime << endl <<endl<<
        "Сегодня потрачено времени " <<endl<< "Часов : " << hours << endl <<
        "Минут : " << minutes;

}

void level_information() {

    if (::Totaltime == 100) {
        ::Level = 1;
    };

}

int main()
{
    setlocale(LC_ALL, "rus");

    int time(0), hours(0), minutes(0), second(0);

    information(hours,minutes);

        for (int i = 0;; i++) {

           second = i;

           if (second >= 60) {

               second = 0;
               i = 0;
               minutes += 1;

               information(hours, minutes);
               level_information();
               continue;

           }else if (minutes >= 60) {

               i = 0;
               minutes = 0;
               hours += 1;
               continue;
           }
           ::Totaltime = hours;
            Sleep(0);

        }

       
    
}

