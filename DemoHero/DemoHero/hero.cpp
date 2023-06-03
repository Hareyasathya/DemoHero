#include <iostream>
#include "hero.h"

//constructor
Hero::Hero(){
	posX = 0;
	posY = 0;
	std::cout << "Creating a Hero at " << posX << " , " << posY << "\n";	
}

//destructor
Hero::~Hero(){
	std::cout << "Deleting a Hero\n";
}

//menempatkan Hero pada lokasi x, y
void Hero::locate(int x, int y){
	posX = x;
	posY = y;
}

//menggambar Hero pada lokasi x, y
void Hero::draw(){
	std::cout << "Drawing a Hero at " << posX << " , " << posY << "\n";
}

//menggerkkan Hero ke depan/atas, sumbu Y minus
void Hero::move_forward(){
	--posY;
}

//menggerakkan Hero ke belakang, sumbu Y plus
void Hero::move_backward(){
	++posY;
}

//menggerakkan Hero ke kiri, sumbu X minus
void Hero::move_left(){
	--posX;
}

//menggerakkan Hero ke kanan, sumbu X plus
void Hero::move_right(){
	++posX;
}

