// Interactive Fun.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <sstream>

using namespace std;

string GetTextFromUser() {
	string a;
	getline(cin, a);
	return a;
}

int GetNumberFromUser() {
	int a;
	cin >> a;
	return a;
}


int main() {
	// Varable to store inputs from player
	int Input;
	int SecondInput;
	// Using Enums to have locations and keep track
	enum Places { home, forest, cave, dead, win };
	//varable for where the player is
	int PlayerLocation = home;
	// Currency counter for the player
	int Gems = 0;

	//setting up bools to check for end condtions
	bool FoundBook = false;

	// The Title output
	cout << "Welcome to the game of Forgotten Tomes" << endl;
	cout << "What do the call thyself: ";
	//storing the name for future reference
	string Name = GetTextFromUser();

	cout << "\nYou Startle awake, to the sound of a door slamming..." << endl;
	cout << "But wait, you were alone when you went to bed..." << endl;

	while (true) {
		switch (PlayerLocation) {
			// player starts off in home

		case home:
			//Story for the home
			cout << "You are inside of your studio in1 your home, filled with books about every subject." << endl;
			cout << "There is a single door to the outside on your left." << endl;
			cout << "What will You do? " << endl;

			// The options
			cout << endl;
			cout << "1. Look around Your studio" << endl;
			cout << "2. Leave Through the door" << endl;
			// Accepting input from the player
			Input = GetNumberFromUser();
			switch (Input) {
			case 1:
				if (!FoundBook) {
					// story for the book
					cout << "As you look around your studio you discover a particular book that happens to...";
					cout << "Speak Out to you inside your Mind" << endl;
					cout << "You are a being of particular intrest, pick me UP, READ ME, and you will see the world in a new way" << endl;
					cout << "Should i pick up the strange speaking book?" << endl;

					// The choices for the book
					cout << "1. Pick UP THE Book" << endl;
					cout << "2. Try to walk away from the strange book..." << endl;
					SecondInput = GetNumberFromUser();
					switch (SecondInput) {
					case 1:
						cout << "As you pick up the book, you feel a strange energy flow though and you can see the aura's that surround the life in the world, as you fall to the ground stunned!" << endl;
						cout << "......." << endl;
						cout << "You wake with a pounding in your head, and you come to the realization that the world around you is sharply contrasted aganst the aura's" << endl;
						cout << endl;
						cout << " You Have Become a litch of the undead Kin, Ruler of the undead, You are compeled to seek out and make the world in your own." << endl;
						PlayerLocation = win;
						break;
					case 2:
						cout << " As you flee your own home you come to the relization that something is coming, and it seeks to destroy the entirety of creation and to devour your soul!!" << endl;
						cout << "You Run and Run until nothing is in your sights and you can only see the pitch black of a... Cave that you find yourself in." << endl;
						PlayerLocation = cave;
						break;
					default:
						cout << "Incorrect Choice " << Name << ", Dont fail me Again!" << endl;
					}
				}
				break;
			case 2:
				cout << "As you walk out the door, you step into a deep forest that surrounds you cozy little home in the woods" << endl;
				PlayerLocation = forest;
				break;
			default:
				cout << "Incorrect Choice " << Name << ", Dont fail me Again!" << endl;
				break;
			}

			//Get Out Of case 1 just in case
			break;
		case forest:
			if (!FoundBook) {
				cout << "You start to walk down the well known forest path that you travel down everyday, until a chill runs down your spine and you start to speed up" << endl;
				cout << "As your walking down the path you happen upon a dead deer, and a skelleton eating its corpse." << endl;
				cout << endl;
				cout << "1. Run away afraid" << endl;
				cout << "2. Keep walking down the path" << endl;
				switch (Input) {
				case 1:
					cout << "As you run away, you end up trying to hide inside of the nearby cave that you know" << endl;
					break;
				case 2:
					cout << "As you walk past the skelleton it rears up and attacks you and it kills you" << endl;
					PlayerLocation = dead;

					{
				default:
					cout << "Incorrect Choice " << Name << ", Dont fail me Again!" << endl;
					break;
					}
				}
			}
			break;
		case cave:
			if (!FoundBook) {
				cout << "As you cower in fear of what is to come, a floating skull of pure hatrid and fire, He stabs you through the heart and has hazed you as one of his own minions" << endl;
			}
			break;
		case dead:
			cout << endl;
			cout << "As your soul floats away into the aether you look back at your life and reailize that you had an alright life.." << endl;
			cout << endl;
			cout << "You Startle awake, to the sound of a door slamming..." << endl;
			cout << "But wait, you were alone when you went to bed..." << endl;
			PlayerLocation = home;
			break;
		case win:
			cout << "As the king of the undead you rule life with an iron thumb, and a stonger rule of the dead, people worship you and realize that you are another god decended to the mortal plane" << endl;
			break;

		}
		break;
	}
	system("pause");
	return 0;
}

