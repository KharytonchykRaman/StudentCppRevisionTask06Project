﻿#include "tasks.h"

/*	Task 03. Chess Pawn 2 [шахматная пешка]
*
*	Шахматная пешка - это самая слабая шахматная фигура,
*	но во время игры может превратиться в любую шахматную фигуру кроме Короля.
*	Предположим, пешка ходит только вперёд по вертикали и только на одну клетку.
*	Даны две различные клетки шахматной доски, определите,
*	может ли пешка попасть с первой клетки на вторую одним ходом 
*	и стать после этого любой фигурой.
*
*	Примечание
*	1) Чтобы увидеть решение и разработать алгоритм, нарисуйте себе шахматную доску
*	и поставьте в клетках соответствующие координаты x и y.
*	2) Помните, пешка всегда начинает свой ход со второй горизонтальной линии, т.е.
*	координата клеток по y должна быть из диапазона от 2 до 8.
*	3) Не забудьте про "защиту от дурака". Если пользователь задаёт неверные коориднаты клеток,
*	то функция должна возвратить булевское значение false.
*	4) Для решения достаточно встроенных в язык арифметических операций, операций отношения,
*	логических операций и условной операции (?:).
*
*	Формат входных данных [input]
*	Функция принимает на вход четыре целочисленных значения,
*	задающие номер столбца (при корректных данных - от 1 до 8)
*	и номер строки (при корректных данных - от 2 до 8) сначала для первой клетки (x1, y1),
*	а потом для второй клетки (x2, y2), где x - координата клетки по горизонтали,
*	а y - координата клетки по вертикали.
*
*	Формат выходных данных [output]
*	Функция должна возвратить булевское значение - результат решения.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 1 4 2
*	[output 2]: false
*
*	[ input 3]: 0 4 0 5
*	[output 3]: false
*
*	[ input 4]: 4 4 4 5
*	[output 4]: true
*/

bool task03(int x1, int y1, int x2, int y2) {	
	return x1 > 0 && x1 < 9 && y1 == 7 && x2 == x1 && y2 == 8;

}