/*
	Killian Callaghan
	Metal Gear Quiz
	
*/


#include <iostream>
#include <fstream>
using namespace std;
//using namespace ios;

int highscore = 0, score;


//Function Prototypes
void game();
void currentScore();





int main(void)
{
	
	int loop = 0;
	int select;
	
	//Checking Highscore
	
	/*
	ifstream fpr;
	
	
	if(fp.open("highscore.txt") == NULL)
	{
		cout <<" No High Score file available \n"<< endl;
		highscore = 0;
	}
	else
	{
		fp >> highscore;
	}
	
	fpr.close();
	*/
	
	while(loop != 1)
	{
		
		
		// Title
		
		
		cout << " _________________________\n|                         |\n|  METAL GEAR SOLID QUIZ  |\n|_________________________|\n"<<endl;
		
		
		
		cout << " Menu:\n Select an option: \n (1) Start the game. \n (2) Quit the game. \n\n Highscore: " << highscore << endl;
		cin >> select;
		
		switch(select)
		{
			
			case 1:
					game();
					break;
					
			case 2:
					loop = 1;
					break;
					
			default:
					cout<<"Enter a valid option"<<endl;
					break;
		}
		
		/*
		// Comparing score to the highscore
		ofstream fpw;
		
		if(highscore < score)
		{
			fpw.open("highscore.txt");
			
			highscore = score;
			fpw << score << endl;
			
			fpw.close();
		}
		
		
		*/
	}
	
	return 0;
}



void game()
{
	
	char ans;
	
	
	// Question 1
	cout<<"Question 1: \n What is Snake's iconic catchphrase used in the Metal Gear Solid series?"<<endl;
	cout<<" A. It's showtime! \n B. You're pretty good. \n C. Kept you waiting huh? \n D. Metal Gear?! \n E. Psycho Mantis?"<<endl;
	cin>>ans;
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout<<"Please enter a valid input"<<endl;
			cin>>ans;
	}
	
	if(ans == 'C' || ans == 'c')
	{
		cout<<"\n Correct! You're pretty good.\n"<<endl;
		score++;
	}
	else
	{
		cout<<"\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	
	// Question 2
	cout<<"Question 2:\n\n In the game Super Smash Bros. Brawl and Super Smash Bros. Ultimate, Snake is wearing a sneaking suit.\n Which Metal Gear Solid game does this sneaking suit originally appear in?\n"<<endl;
	cout<<" A. Metal Gear Solid 1 \n B. Metal Gear Solid 2 \n C. Metal Gear Solid 3 \n D. Metal Gear Solid: Peace Walker \n E. Metal Gear Solid 4"<<endl;
	cin>>ans;
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout<<"Please enter a valid input"<<endl;
			cin>>ans;
	}
	
	if(ans == 'B' || ans == 'b')
	{
		cout<<"\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout<<"\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 3
	cout<<"Question 3: \n\n In the Metal Gear Solid series, how many different Snakes are there? \n\n" <<endl;
	cout<<" A. 1 \n B. 2 \n C. 3 \n D. 4 \n E. 5"<<endl;
	cin>>ans;
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'E' || ans == 'e')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	
	// Question 4
	cout << "Question 4:\n\n Which Metal Gear Solid game did NOT feature an operational Metal Gear? \n \n"<<endl;
	cout << " A. Metal Gear Solid 1 \n B. Metal Gear Solid 2 \n C. Metal Gear Solid 3 \n D. Metal Gear Solid 4 \n E. Metal Gear Solid V: The Phantom Pain" << endl;
	cin >> ans;
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout<<"Please enter a valid input"<<endl;
			cin>>ans;
	}
	
	if(ans == 'C' || ans == 'c')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 5
	cout << "Question 5: \n\n Which of the following Snakes is not a clone of Big Boss? \n" << endl;
	cout << " A. Solid Snake \n B. Liqid Snake \n C. Solidus Snake \n D. Venom Snake" << endl;
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'D' || ans == 'd')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 6
	cout << "Question 6: \n\n In Metal Gear Solid V: The Phantom Pain, what is the name of Snake's private army? \n" << endl;
	cout << " A. Diamound Dogs \n B. FOX Unit \n C. Foxhound \n D. Militaires Sans Frontières \n E. Outer Heaven \n" << endl;
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'A' || ans == 'a')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 7
	cout << "Question 7 \n\n Which of the following Snakes has the title 'Big Boss'? \n" << endl;
	cout << " A. Solid Snake \n B. Liquid Snake \n C. Naked Snake \n D. Solidus Snake \n E. Gas Snake \n" << endl;
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'C' || ans == 'c')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 8
	cout << "Question 8: \n\n What weapon or equipment does Snake always have at the start of the every Metal Gear Solid game? \n" << endl;
	cout << " A. A Cardboard Box \n B. A Silenced Pistol \n C. A Pack of Cigarettes or Cigars \n D. A Tranquilizer Pistol \n E. None of the above" << endl;
	
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'C' || ans == 'c')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	// Question 9
	
	cout << "Question 9: \n\n In the Metal Gear Solid timeline, who is the first Snake to die in the story? \n" << endl;
	cout << " A. Solid Snake \n B. Liquid Snake \n C. Naked Snake \n D. Venom Snake \n E. Solidus Snake" << endl;
	
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'D' || ans == 'd')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	currentScore();
	
	
	// Question 10
	
	cout << "Final Question \n Question 10: \n\n In the Metal Gear Solid series, there is a running gag of a character who constantly runs into diarrhea problems in the game. What is the name of this character? \n" << endl;
	cout << " A. Jim \n B. Joe \n C. Jack \n D. John \n E. Johnny" << endl;
	
	cin >> ans;
	
	while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e')
	{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
	}
	
	if(ans == 'E' || ans == 'e')
	{
		cout << "\n Correct! You're pretty good. \n"<<endl;
		score++;
	}
	else
	{
		cout << "\n Incorrect. Mission Failed Boss!\n"<<endl;
	}
	
	
	currentScore();
	
	// Bonus Question
	if(score == 10)
	{
		cout << "It seems you have answered every question correctly, you have proven your knowledge of the video game series. You have shown yourself to be worthy of the bonus question!\n" << endl;
		cout << "Bonus Question!: Which is the best Metal Gear game?" << endl;
		cout << " A. Metal Gear \n B. Metal Gear 2: Solid Snake \n C. Metal Gear Solid 1 \n D. Metal Gear Solid 2: Sons of Liberty \n E. Metal Gear Solid 3: Snake Eater \n F. Metal Gear Solid 4: Guns of the Patriots \n G. Metal Gear Solid: Peace Walker \n H. Metal Gear Solid: Portable Ops \n I. Metal Gear Acid 1 & 2 \n J. Metal Gear Solid V: Ground Zeros \n K. Metal Gear Solid V: The Phantom Pain" << endl;
		
		cin >> ans;
		
		while(ans != 'A' && ans != 'a' && ans != 'B' && ans != 'b' && ans != 'C' && ans != 'c' && ans != 'D' && ans != 'd' && ans != 'E' && ans != 'e' && ans != 'F' && ans != 'f' && ans != 'G' && ans != 'g' && ans != 'H' && ans != 'h' && ans != 'I' && ans != 'i' && ans != 'J' && ans != 'j' && ans != 'K' && ans != 'k')
			{
			cout << "Please enter a valid input"<<endl;
			cin >> ans;
			}
	
		if(ans == 'K' || ans == 'k')
		{
			cout << "\n Correct! You have good taste in games. \n"<<endl;
			score++;
		}
		else
		{
			cout << "\n Incorrect. You're opinion is wrong!\n"<<endl;
		}
		
	}
	else
	{
		cout << "No bonus question! \nYou must get a perfect score to be worthy of the bonus question!" << endl;
	}
	
	cout << "Final Result: " << score << endl;
	
	// Comparing current score to highscore
	if(score > highscore)
	{
		cout << "New Highscore!" << endl;
		highscore = score;
	}
	
}


void currentScore()
{
	cout << "Current Score: " << score << endl;
}