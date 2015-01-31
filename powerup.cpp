#include <iostream>
#include <cstdlib>
#include "powerup.h"

using namespace std;

Pow::Pow(){}

void Pow::pick(){
	int choice = rand() % 10 + 1;
	if(choice <= 4) powerup();
	else if(choice >4 && choice < 8) powerdown();	
	else powerdh();	
}

void Pow::powerup(){
	power += rand() % 10 + 1;
	cout << "you got a power up!" << endl;
}

void Pow::powerdown(){
	power -= rand() % 10 + 1;
	cout << "you got a power down :( " << endl;
}

void Pow::powerdh(){
	int choice = rand() % 2 + 1;
	if(choice == 1){
		 power = power * 2;
			cout << "Your power got doubled! Now your OVER 9000!!!" << endl;
	}
	else{
			power = power/2;
			cout << "you got your power cut in half! Looks like your no longer over 9000" << endl;
	}
}
