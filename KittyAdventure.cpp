/*******************************************************************
** Program: KittyAdventure.cpp
** Author: Cassiopeia Beal 
** Date: 01/01/2021
** Description: A simple text command line RPG where you play a day as a cat. 
*******************************************************************/


#include <iostream>
#include <cstdlib> //rand(), srand()
#include <ctime> //time()

using namespace std;

int main (){
	cout << "Hello kitty girls! Time to start your kitty adventure uwu" << endl;
	
	cout << "You walk your kitty-self out of your house. Time to pick how you will spend your day. Do you want to cat around the neighborhood or go WILD in the forest?" << endl;
	
	cout << "	Press 0 for neighborhood" << endl;
	cout << "	Press 1 for forest" << endl ;

	int path = 5;//random choice of number that is not 1 or 0 so program will not execute without making a valid choice 
	cin >> path;
	
	if(path==0){
		cout << "You walk into the neighborhood. As you strut down the sidewalk a lady come up to you. She bends down and reaches out her hand"<< "\"here kitty kitty\""<< '\n';
		cout << "Do you hiss or rub up against her leg" << endl;
		cout << "	Press 0 to hiss" << endl;
		cout << "	Prees 1 to rub up against her leg" << endl;
		
		int lady = 5;
		cin >> lady;

		if(lady==0){
			cout << "You hiss. The lady does not like that. She calls animal control and you get locked up" << endl;
			return 0;
		}
		if(lady==1){
			cout<< "You rub up against the lady's leg" << "\"What a good kitty\"" << endl;
			cout<< "	Press 0 to purr";

			int purr = 0;
			cin >> purr;
			
			while(purr == 0){ //will loop for endless pets
				cout<< "The lady pets you"<< endl;
			}
			if(purr!= 0){
				cout<< "\"So sweet\""<< ", the lady walks away" << endl;
		return 0;
			}
		}
	}

	if(path==1){
		cout << "You strut into the forest"<< '\n';
		cout << "You spot a mouse, do you want to catch it?"<< endl;
		cout << "	Press 0 to keep walking"<< endl;
		cout << " 	Press 1 to try to catch"<< endl;

		int mouse = 5;
		cin >> mouse;

		if(mouse==0){
		return 0;
		}

		if(mouse==1){
			srand(time(NULL));
			int catchmouse = rand() % 2;
			
			if(catchmouse==0){
				cout << "You caught the mouse!! Do you want to bring it home or let go?" << endl;
				cout << "	Press 0 to bring it home" << endl;
				cout << "	Press 1 to let it go" << endl;
				
				int caughtmouse = 9;
				cin >> caughtmouse;
					if(caughtmouse==0) {
						cout << "You bring the mouse back home as a gift. You can tell your owner loves it :) " << endl;
					return 0;
					}
					if(caughtmouse==1){
						cout << "You let the mouse go. OH what a big day you've had" << endl;
					return 0;
					}
			} 
			if(catchmouse==1){		
				cout << "You didn't catch the mouse. You tried your best, but you're still a failure" << endl;
				return 0;
				}
		return 0;
		}
	return 0;

	}
}
