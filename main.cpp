#include <iostream>
#include "powerup.h"

using namespace std;
bool flag = false;
char x;
int count;
int main(){	
	Pow powerup;
	while(flag == false){		
			cout << "Your life total is " << powerup.power << endl;
			cout << "press enter to pickup a powerup!" << endl;
			cin.ignore();
			powerup.pick();
			count++; 
			if(powerup.power < 0){
				cout << "Your Dead game over" << endl;
				cout << "you lived for " << count << " turns" << endl;
				flag = true;	
			}
	}
}
