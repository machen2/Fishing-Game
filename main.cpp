#include <iostream>
#include <string>
#include <cstdlib> //for random number functions rand
#include <ctime> //header file needed to use time
#include <iomanip>
using namespace std;

int main()
{
// Fish types have constant values and constant fish ASCII art
//TODO: enter types of fish here

const string GAME_TITLE = " _______  ___   _______  __   __  ___   __    _  _______ \n"
		"|       ||   | |       ||  | |  ||   | |  |  | ||       |\n"
		"|    ___||   | |  _____||  |_|  ||   | |   |_| ||    ___|\n"
		"|   |___ |   | | |_____ |       ||   | |       ||   | __ \n"
		"|    ___||   | |_____  ||       ||   | |  _    ||   ||  |\n"
		"|   |    |   |  _____| ||   _   ||   | | | |   ||   |_| |\n"
		"|___|    |___| |_______||__| |__||___| |_|  |__||_______|\n"
		"         _______  _______  __   __  _______              \n"
		"        |       ||   _   ||  |_|  ||       |             \n"
		"        |    ___||  |_|  ||       ||    ___|             \n"
		"        |   | __ |       ||       ||   |___              \n"
		"        |   ||  ||       ||       ||    ___|             \n"
		"        |   |_| ||   _   || ||_|| ||   |___              \n"
		"        |_______||__| |__||_|   |_||_______|\n";

const string FISH_1_NAME = "Guppy";
const double FISH_1_SIZE = 1.0; //length in inches
const int FISH_1_SCORE = 2;
const string FISH_1_ART = "  o\n"
"o   ,\n"
" o ( )<\n"
"    `\n";

const string JUNK_1_NAME = "Empty Can";
const double JUNK_1_SIZE = 0.0;
const int JUNK_1_SCORE = 0;
const string JUNK_1_ART = "  __\n"
" @__|\\\n";

const string JUNK_2_NAME = "An Old Boot";
const double JUNK_2_SIZE = 0.0;
const int JUNK_2_SCORE = 0;
const string JUNK_2_ART = "    __\n"
"   |  |\n"
"  /   |\n"
" C__/\\|\n";

const string FISH_2_NAME = "Angelfish";
const double FISH_2_SIZE = 2.0; //inches long
const int FISH_2_SCORE = 2;
const string FISH_2_ART = "             .\'\n"
" o        ,`/\n"
"  o    ,/ //\n"
"o     /  | |   ,\'\n"
" o  /'   | ( ,`/\n"
"   ; 0 ))|  { (\n"
"    \\    | ( `,\\\n"
"      ``\\\\ \\    `.\n"
"          ``.\n"
"             `.\n";

const string FISH_3_NAME = "Trout";
const double FISH_3_SIZE = 16.0; //inches long
const int FISH_3_SCORE = 16;
const string FISH_3_ART = " o\n"
"o      / `-,   ,,\n"
" o ,--....-------,_,-`/\n"
"  : 0 )<)         _  [\n"
"   \'-`\\\\``-\\\\-\\\\-` \'-,\\\n";

const string FISH_4_NAME = "Blue Gill";
const double FISH_4_SIZE = 12.0; //inches long
const int FISH_4_SCORE = 12;
const string FISH_4_ART = " o   ,.....,\n"
"o   /_...._/  ,\n"
" o ,`      \\_/`)\n"
"  : 0 ))<)  _|{\n"
"   `,_...._/ \\,)\n"
"     \\..\\ \\\\  \'\n";

const string FISH_5_NAME = "Salmon";
const double FISH_5_SIZE = 30.0; //inches long
const int FISH_5_SCORE = 30;
const string FISH_5_ART = "                .......      .\n"
" o            / ///// /     //\n"
"o    ,;\'``````````````````````;.    /```)\n"
" o .`        .  .  .  .  .  .  `---`// )\n"
"   >  0 ))      --------------      ||)\n"
"   `._     \\__\\                .---.\\\\ )\n"
"      `\'......................`     \\,,,)\n"
"              (\\_\\)   (\\_\\_\\_\\)\n";

const string FISH_6_NAME = "Ghoti";
const double FISH_6_SIZE = 12.0; //inches long
const int FISH_6_SCORE = 12;
const string FISH_6_ART = "    (                  )\n"
" ~.  `,  .--------.  ,` .~\n"
"   \'.  )/          \\( .\'\n"
" )   `-:  O . . O  :-`   (\n"
" \'..,~): `-------` :(~,..\'\n"
"    ,\'` \\          / `\',\n"
"   (    `.-     -.`     )\n"
"    __\\_/         \\_/__\n"
"    __ __/|     |\\__ __\n"
"      /   |     |   \\\n"
"          |  .  |\n"
"    __\\__/ /| |\\ \\__/__\n"
"    __ ___/ | | \\___ __ \n"
"      /    /| |\\    \\\n"
"           || ||\n"
"           || ||\n"
"           \\| |/\n"
"            \\ /\n"
"             `\n";

const string FISH_7_NAME = "Manta Ray";
const double FISH_7_SIZE = 120.0; //inches long
const int FISH_7_SCORE = 120;
const string FISH_7_ART = "           /\\\n"
"          /  \\\n"
"  o      /    \\\n"
" o      /      \\\n"
"  o    /        \\\n"
" o    /           ``\\\n"
"  o  /               ``\\\n"
"  ~~.                    \\\n"
"    |                    -----------\n"
"  ~~.                    /\n"
"     \\               ,,/\n"
"      \\           ,,/\n"
"       \\        /\n"
"        \\      /\n"
"         \\    /\n"
"          \\  /\n"
"           \\/\n";

const string FISH_8_NAME = "Squid";
const double FISH_8_SIZE = 7.0; //inches long
const int FISH_8_SCORE = 7; 
const string FISH_8_ART = "   o\n"
"  o\n"
"   o\n"
"    / \\\n"
"   /   \\\n"
"   -,,,-\n"
"   /   \\\n"
"   |`0`|\n"
"   ,, ,,\n"
"   (()())\n"
"  ,\\\\),))\n"
"  (|))((\\\\\n"
"  ``\'\' ``\'\'\n";

const string FISH_9_NAME = "Catfish";
const double FISH_9_SIZE = 13.0; // inches long
const int FISH_9_SCORE = 13;
const string FISH_9_ART = "          o\n"
"   /\\_/\\    o\n"
"  =(o.o)= o\n"
"    ---\n"
"   (   )\n"
"    \\ /\n"
"    /`\\\n"
"    `\'`\n";

const string FISH_10_NAME = "Whale";
const double FISH_10_SIZE = 240.0; // inches long
const int FISH_10_SCORE = 240;
const string FISH_10_ART = "          o\n"
"         o\n"
"          o\n"
"    ______ ______      | \" V \" |\n"
"  /              `,     \\     /\n"
" ,                 *,    |   /\n"
" | O                 \\___/  / \n"
" |                         /\n"
"  \\_\\_\\_\\_\\_\\_\\_\\_\\_\\_\\___/\n";

const string FISH_11_NAME = " Narwhal";
const double FISH_11_SIZE = 180.0; //inches long
const int FISH_11_SCORE = 180;
const string FISH_11_ART = "           o\n"
"            o\n"
"           o\n"
"           ,-'````````````````\'.\n"
"          ;                     `.\n"
" ---------:  O                    )\n"
"           \\                      |\n"
"            `.,____\\   \\____,,    |\n"
"                    `,_\'      \\   \\\n"
"                               |   \\\n"
"                              /,,\",,\\\n";

const string FISH_12_NAME = "Shark";
const double FISH_12_SIZE = 0;
const int FISH_12_SCORE = 0;
const string FISH_12_ART = " o\n"
"o  _______\n"
" o(..      `..   . .   .\n"
"o  \\      0   \\ /| |\\ /|\n"
" o  \\______ )) \\ | \\ \' /\n"
"   o  vvvvv\\    \\`  / |\n"
"      \\^^^^^     --   |\n"
"      /     , \\       |\n"
"     | /\\    \\ |      /\n"
"      `  \\    ``     /\n"
"          \\_________/\n";

//Variables to store total values of fish and statistics from turns
char condition = ' '; //test variable for the while loop condtion

srand(time(0));

int randomNum;
randomNum = rand() % 100 + 1;

//Counters to keep track of number of total number of turns
int totalScore = 0;


//INTRODUCTION TO THE GAME
cout << GAME_TITLE << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
cout << " Welcome to the FISHING GAME!\n\n Type in a character and press ENTER to begin fishing.\n When you want to quit, type \'Q\'." << endl;
cout << "\n Be careful of SHARKS, they are dangerous!" << endl << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

condition = cin.get();
cin.ignore(100, '\n');
condition = toupper(condition);

while (condition != 'Q')
{
	cout << endl;

	if (randomNum <= 9)
	{
		cout << endl << JUNK_1_ART << endl << endl;
		cout << "You caught an " << JUNK_1_NAME << '.' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << JUNK_1_SCORE << endl;

		totalScore += JUNK_1_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 24)
	{
		cout << endl << FISH_1_ART << endl << endl;
		cout << "You caught a " << FISH_1_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_1_SCORE << endl;

		totalScore += FISH_1_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 31)
	{
		cout << endl << FISH_2_ART << endl << endl;
		cout << "You caught an " << FISH_2_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_2_SCORE << endl;

		totalScore += FISH_2_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 41)
	{
		cout << endl << FISH_3_ART << endl << endl;
		cout << "You caught a " << FISH_3_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_3_SCORE << endl;

		totalScore += FISH_3_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 53)
	{
		cout << endl << FISH_4_ART << endl << endl;
		cout << "You caught a " << FISH_4_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_4_SCORE << endl;

		totalScore += FISH_4_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 61)
	{
		cout << endl << FISH_5_ART << endl << endl;
		cout << "You caught a " << FISH_5_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_5_SCORE << endl;

		totalScore += FISH_5_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 63)
	{
		cout << endl << FISH_6_ART << endl << endl;
		cout << "You caught a " << FISH_6_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_6_SCORE << endl;

		totalScore += FISH_6_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 70)
	{
		cout << endl << FISH_7_ART << endl << endl;
		cout << "You caught a " << FISH_7_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_7_SCORE << endl;

		totalScore += FISH_7_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 79)
	{
		cout << endl << FISH_8_ART << endl << endl;
		cout << "You caught a " << FISH_8_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_8_SCORE << endl;

		totalScore += FISH_8_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 87)
	{
		cout << endl << FISH_9_ART << endl << endl;
		cout << "You caught a " << FISH_9_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_9_SCORE << endl;

		totalScore += FISH_9_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else if (randomNum <= 92)
	{
		cout << endl << FISH_10_ART << endl << endl;
		cout << "You caught a " << FISH_10_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_10_SCORE << endl;

		totalScore += FISH_10_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}
	else
	{
		cout << endl << FISH_12_ART << endl << endl;
		cout << "You caught a " << FISH_12_NAME << '!' << endl << endl;
		cout << left << setw(26) << "Number of points earned: " << right << setw(6) << FISH_12_SCORE << endl;

		totalScore += FISH_12_SCORE;

		cout << left << setw(26) << "Total score: " << right << setw(6) << totalScore << endl << endl;
	}

	cout << "\nType in a character and press ENTER to continue fishing, or press \'Q\' to quit. ";
	condition = cin.get();
	cin.ignore(100, '\n');
	condition = toupper(condition);
	
	randomNum = rand() % 100 + 1; //reassign a new random number value to be tested in the if statemnt
}




cout << endl;

return 0;
}