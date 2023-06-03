#include "hero.h"
#include <conio.h>

using namespace std;

int main(){
	Hero hero;
	
	hero.locate(0,0);
	while(true){
		hero.draw();
		char key = getch();
		if (key == 'w') hero.move_forward();
		if (key == 'a') hero.move_left();
		if (key == 's') hero.move_backward();
		if (key == 'd') hero.move_right();
	}
	
	return 0;
}
