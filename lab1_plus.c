#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
// ДЗ3_3

bool king_moves(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y) {
	if (fabs(start_pos_x - end_pos_x) <= 1 && fabs(start_pos_y - end_pos_y) <= 1) return true;
	else return false;
}

bool bishop_moves(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y) {
	if (abs(start_pos_x - end_pos_x) == fabs(start_pos_y - end_pos_y)) return true;
	else return false;
}

bool rook_moves(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y) {
	if (start_pos_x == end_pos_x || start_pos_y == end_pos_y) return true;
	else return false;
}

bool knight_moves(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y) {
	if ((fabs(start_pos_x - end_pos_x) == 2 && fabs(start_pos_y - end_pos_y) == 1) || (fabs(start_pos_x - end_pos_x) == 1 && fabs(start_pos_y - end_pos_y) == 2)) return true;
	else return false;
}

bool queen_moves(int start_pos_x, int start_pos_y, int end_pos_x, int end_pos_y) {
	if (king_moves(start_pos_x, start_pos_y, end_pos_x, end_pos_y) == true || bishop_moves(start_pos_x, start_pos_y, end_pos_x, end_pos_y) == true || rook_moves(start_pos_x, start_pos_y, end_pos_x, end_pos_y) == true) return true;
	else return false;
}

int main()
{
	int pos_x1, pos_x2, pos_y1, pos_y2, piece_type;
	printf("Выберите фигуру (1 - Король, 2 - Ферзь, 3 - Ладья, 4 - Слон, 5 - Конь):");
	scanf_s("%i", &piece_type);
	if (piece_type <= 0 || piece_type >= 6) printf("Некорректная фигура");
	else {
		printf("Введите координаты фигуры через пробел(буквенную координату замените на цифру соотвествующую её номеру в алфавите):");
		scanf_s("%i %i", &pos_x1, &pos_y1);
		printf("Введите координаты для проверки возможности перемещения через пробел(буквенную координату замените на цифру соотвествующую её номеру в алфавите):");
		scanf_s("%i %i", &pos_x2, &pos_y2);
		if (pos_x1 == pos_x2 && pos_y1 == pos_y2) {
			printf("Фигура не может вернуться на свое место, если ей необходимо сходить. \n Ход невозможен.\n Ни одна фигура не может сюда попасть.");
		}
		else if (pos_x1 <= 0 || pos_x2 <= 0 || pos_y1 <= 0 || pos_y2 <= 0 || pos_x1 > 8 || pos_x2 > 8 || pos_y1 > 8 || pos_y2 > 8) {
			printf("Введенные координаты выходят за рамки игрового поля. \n Ход невозможен. \n Ни одна фиугра не может сюда попасть.");
		}
		else {
			switch (piece_type) {
			case 1:
				if (king_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) {
					printf("Король может выполнить этот ход.");
				}
				else {
					printf("Король не может выполнить этот ход.");
					if (bishop_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ладья может выполнить этот ход.");
					if (rook_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Слон может выполнить этот ход.");
					if (knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Конь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ферзь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false && knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false) printf("Ни одна фигура не может сюда попасть.");
				}
				break;
			case 2:
				if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) {
					printf("Ферзь может выполнить этот ход.");
				}
				else {
					printf("Ферзь не может выполнить этот ход.");
					if (knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Конь может выполнить этот ход.");
					else printf("Ни одна фигура не может сюда попасть.");
				}
				break;
			case 3:
				if (bishop_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) {
					printf("Ладья может выполнить этот ход.");
				}
				else {
					printf("Ладья не может выполнить этот ход.");
					if (king_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Король может выполнить этот ход.");
					if (rook_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Слон может выполнить этот ход.");
					if (knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Конь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ферзь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false && knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false) printf("Ни одна фигура не может сюда попасть.");
				}
				break;
			case 4:
				if (rook_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) {
					printf("Слон может выполнить этот ход.");
				}
				else {
					printf("Слон не может выполнить этот ход.");
					if (bishop_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ладья может выполнить этот ход.");
					if (king_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Король может выполнить этот ход.");
					if (knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Конь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ферзь может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false && knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == false) printf("Ни одна фигура не может сюда попасть.");
				}
				break;
			case 5:
				if (knight_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) {
					printf("Конь может выполнить этот ход.");
				}
				else {
					printf("Конь не может выполнить этот ход.");
					if (bishop_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ладья может выполнить этот ход.");
					if (rook_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Слон может выполнить этот ход.");
					if (king_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Король может выполнить этот ход.");
					if (queen_moves(pos_x1, pos_y1, pos_x2, pos_y2) == true) printf("Ферзь может выполнить этот ход.");
					else printf("Ни одна фигура не может сюда попасть.");
				}
				break;
			}
		}
	}
	return 0;
}
