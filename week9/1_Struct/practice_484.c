#include <stdio.h>
void SwapPoint(Point *ptr1, Point *ptr2);

typedef struct point {
	int xpos;
	int ypos;
} Point;


int main() {
	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };
	Point* ptr;

	SwapPoint(&pos1, &pos2);

}


void SwapPoint(Point *ptr1, Point *ptr2) {
	int 
}