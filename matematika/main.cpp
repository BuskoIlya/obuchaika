﻿#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
    std::setlocale(LC_ALL, "");

    const IBusko::MenuItem* current = &IBusko::MAIN;
    do {
        current = current->func(current);
    } while (true);

    return 0;
}

/*
    Задание.

    I. Разобрать программу по шагам и реализовать её на своих машинах вместе с гитом.
    Залить всё на гитхаб.

    II. Увеличить меню до 3-х уровней:
        1-ый уровень: 
                      1 - Хочу учиться математике!
                      0 - Я лучше пойду полежу...
        2-ой уровень для "1 - Хочу учиться математике!": 
                      1 - Хочу изучать алгебру!
                      2 - Хочу изучать математический анализ!
                      0 - Выйти в главное меню.
        
        3-ий уровень для "1 - Хочу изучать алгебру!":
                      1 - Хочу научиться складывать!
                      2 - Хочу научиться вычитать!
                      3 - Хочу научиться умножать!
                      4 - Хочу научиться делить!
                      0 - Вернуться к выбору предметов.

        3-ий уровень для "Хочу изучать математический анализ!":
                      1 - Хочу изучить дифференциальное исчисление!
                      2 - Хочу изучить интегральное исчисление!
                      0 - Вернуться к выбору предметов.
*/