#include <iostream>
#include <string>
using namespace std;


int solveSelection(string option) {
	if (option == "Br") return 1;
	else if (option == "Bl") return 2;
	else if (option == "Rr") return 3;
	else if (option == "Rl") return 4;
	else if (option == "Fr") return 5;
	else if (option == "Fl") return 6;
	else if (option == "Rar") return 7;
	else if (option == "Ral") return 8;
	else if (option == "Lr") return 9;
	else if (option == "Ll") return 9;
	else return -1;
}

int main() {
	string board[5][4] = {
		{"SHORE  ", "BOAT   ", "       ", "GOAL   "},
		{"Robot  ", "       ", "       ", "       "},
		{"Fox    ", "       ", "       ", "       "},
		{"Rabbit ", "       ", "       ", "       "},
		{"Lettuce", "       ", "       ", "       "}
	};
	string decoration = "---------------------------------------------";

	bool continuePlaying = true;
	string option;
	string gameStateMessage;

	/* ------------------------------ INITIAL STATE ----------------------------- */

	int boat = 1;
	int robot = 0;
	int fox = 0;
	int rabbit = 0;
	int lettuce = 0;

	system("clear");

	do {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 4; j++) cout << board[i][j] << "\t\t";
			cout << endl;
		}

		// cout << decoration << endl;
		// cout << "Boat: " << boat << endl;
		// cout << "Robot: " << robot << endl;
		// cout << "Fox: " << fox << endl;
		// cout << "Rabbit: " << rabbit << endl;
		// cout << "Lettuce: " << lettuce << endl;

		cout << decoration << endl;
		cout << "B  - Boat" << endl;
		cout << "R  - Robot" << endl;
		cout << "F  - Fox" << endl;
		cout << "Ra - Rabbit" << endl;
		cout << "L  - Lettuce" << endl;
		cout << "Write an character followed by the orientation ('l' or 'r'): "; cin >> option;

		switch (solveSelection(option)) {
			case 1:
				if (boat == 1 && robot == 1) { // The boat only moves if the robot is inside it
					// The boat is always moving, even if there is no other character inside (only the robot)
					board[0][1] = "       ";
					board[0][2] = "BOAT   ";
					board[1][1] = "       ";
					board[1][2] = "Robot  ";

					boat = 2;
					robot = 2;

					if (rabbit == 1) {
						board[3][1] = "       ";
						board[3][2] = "Rabbit ";

						rabbit = 2;
					} else if (fox == 1) {
						board[2][1] = "       ";
						board[2][2] = "Fox    ";

						fox = 2;
					} else if (lettuce == 1) {
						board[4][1] = "       ";
						board[4][2] = "Lettuce";

						lettuce = 2;
					}
				}
				continuePlaying = true;
				system("clear");
				break;
			case 2:
				if (boat == 2 && robot == 2) {
					board[0][1] = "BOAT   ";
					board[0][2] = "       ";
					board[1][1] = "Robot  ";
					board[1][2] = "       ";

					boat = 1;
					robot = 1;

					if (rabbit == 2) {
						board[3][2] = "       ";
						board[3][1] = "Rabbit ";

						rabbit = 1;
					} else if (fox == 2) {
						board[2][2] = "       ";
						board[2][1] = "Fox    ";

						fox = 1;
					} else if (lettuce == 2) {
						board[4][2] = "       ";
						board[4][1] = "Lettuce";

						lettuce = 1;
					}
				} else {
					cout << endl << "Remember that the boat does not move without the robot" << endl;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 3:
				if (robot == 0) {
					cout << "xd" << endl;
					board[1][0] = "       ";
					board[1][1] = "Robot  ";

					robot = 1;

					if (boat != 1) {
						gameStateMessage = "Game over, the robot falls into the water";
						continuePlaying = false;
						break;
					}
				} else if (robot == 1) {
					board[1][1] = "       ";
					board[1][2] = "Robot  ";

					robot = 2;

					// The robot can only access position 2 by moving the boat
					gameStateMessage = "Game over, the robot falls into the water";
					continuePlaying = false;
					break;
				}
				else if (robot == 2) {
					board[1][2] = "       ";
					board[1][3] = "Robot  ";

					robot = 3;
				}
				continuePlaying = true;
				system("clear");
				break;
			case 4:
				if (robot == 3) {
					board[1][3] = "       ";
					board[1][2] = "Robot  ";

					robot = 2;

					if (boat != 2) {
						gameStateMessage = "Game over, the robot falls into the water";
						continuePlaying = false;
						break;
					}
				} else if (robot == 2) {
					board[1][3] = "       ";
					board[1][2] = "Robot  ";

					robot = 1;

					// The robot can only access position 2 by moving the boat
					gameStateMessage = "Game over, the robot falls into the water";
					continuePlaying = false;
					break;
				} else if (robot == 1) {
					board[1][1] = "       ";
					board[1][0] = "Robot  ";

					robot = 0;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 5:
				if (fox == 0) {
					if (rabbit != 1 && lettuce != 1) { // It only moves if there is space available on the boat
						board[2][0] = "       ";
						board[2][1] = "Fox    ";

						fox = 1;

						if (boat != 1) {
							gameStateMessage = "Game over, the fox falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (fox == 1) {
					board[2][1] = "      ";
					board[2][2] = "Zorro ";

					fox = 2;

					// The fox can only access position 2 by moving the boat
					gameStateMessage = "Game over, the fox falls into the water";
					continuePlaying = false;
					break;
				} else if (fox == 2) {
					board[2][2] = "       ";
					board[2][3] = "Fox    ";

					fox = 3;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 6:
				if (fox == 3) {
					if (rabbit != 2 && lettuce != 2) { // It only moves if there is space available on the boat
						board[2][3] = "       ";
						board[2][2] = "Fox    ";

						fox = 2;

						if (boat != 2) {
							gameStateMessage = "Game over, the fox falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (fox == 2) {
					board[2][2] = "       ";
					board[2][1] = "Zorro  ";

					fox = 1;

					// The fox can only access position 1 by moving the boat
					gameStateMessage = "Game over, the fox falls into the water";
					continuePlaying = false;
					break;
				} else if (fox == 1) {
					board[2][1] = "       ";
					board[2][0] = "Zorro  ";

					fox = 0;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 7:
				if (rabbit == 0) {
					if (fox != 1 && lettuce != 1) { // It only moves if there is space available on the boat
						board[3][0] = "       ";
						board[3][1] = "Rabbit ";

						rabbit = 1;

						if (boat != 1) {
							gameStateMessage = "Game over, the rabbit falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (rabbit == 1) {
					board[3][1] = "       ";
					board[3][2] = "Rabbit ";

					rabbit = 2;

					// The rabbit can only access position 2 by moving the boat
					gameStateMessage = "Game over, the rabbit falls into the water";
					continuePlaying = false;
					break;
				} else if (rabbit == 2) {
					board[3][2] = "       ";
					board[3][3] = "Rabbit ";

					rabbit = 3;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 8:
				if (rabbit == 3) {
					if (fox != 2 && lettuce != 2) { // It only moves if there is space available on the boat
						board[3][3] = "       ";
						board[3][2] = "Rabbit ";

						rabbit = 2;

						if (boat != 2) {
							gameStateMessage = "Game over, the rabbit falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (rabbit == 2) {
					board[3][2] = "       ";
					board[3][1] = "Rabbit ";

					rabbit = 1;

					// The rabbit can only access position 1 by moving the boat
					gameStateMessage = "Game over, the rabbit falls into the water";
					continuePlaying = false;
					break;
				} else if (rabbit == 1) {
					board[3][1] = "       ";
					board[3][0] = "Rabbit ";

					rabbit = 0;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 9:
				if (lettuce == 0) {
					if (rabbit != 1 && fox != 1) { // It only moves if there is space available on the boat
						board[4][0] = "       ";
						board[4][1] = "Lettuce";

						lettuce = 1;

						if (boat != 1) {
							gameStateMessage = "Game over, the lettuce falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (lettuce == 1) {
					board[4][1] = "      ";
					board[4][2] = "Lettuce";

					lettuce = 2;

					// The lettuce can only access position 2 by moving the boat
					gameStateMessage = "Game over, the lettuce falls into the water";
					continuePlaying = false;
					break;
				} else if (lettuce == 2) {
					board[4][2] = "       ";
					board[4][3] = "Lettuce";

					lettuce = 3;
				}

				continuePlaying = true;
				system("clear");
				break;
			case 10:
				if (lettuce == 3) {
					if (fox != 2 && rabbit != 2) { // It only moves if there is space available on the boat
						board[4][3] = "       ";
						board[4][2] = "Lettuce";

						lettuce = 2;

						if (boat != 2) {
							gameStateMessage = "Game over, the lettuce falls into the water";
							continuePlaying = false;
							break;
						}
					}
				} else if (lettuce == 2) {
					board[4][2] = "       ";
					board[4][1] = "Lettuce";

					lettuce = 1;

					// The lettuce can only access position 1 by moving the boat
					gameStateMessage = "Game over, the lettuce falls into the water";
					continuePlaying = false;
					break;
				} else if (lettuce == 1) {
					board[4][1] = "       ";
					board[4][0] = "Lettuce";

					lettuce = 0;
				}

				continuePlaying = true;
				system("clear");
				break;
			default:
				continuePlaying = true;
				system("clear");
		}

		/* ----------------------------- WIN-LOSE CASES ----------------------------- */

		if (rabbit == lettuce && robot != rabbit) {
			gameStateMessage = "Game over, the rabbit ate the lettuce";
			continuePlaying = false;
			break;
		} else if (rabbit == fox && robot != rabbit) {
			gameStateMessage = "Game over, the fox ate the rabbit";
			continuePlaying = false;
			break;
		} else if (fox == 3 && rabbit == 3 && lettuce == 3) {
			gameStateMessage = "YOU WIN!";
			break;
		}

	} while (continuePlaying);

	system("clear");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) cout << board[i][j] << "\t\t";
		cout << endl;
	}

	cout << decoration << endl;
	cout << gameStateMessage << endl;
}
