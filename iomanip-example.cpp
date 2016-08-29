// Sean Tosloskie
//Iomanip example
#include <iostream>
#include <iomanip>

using namespace std;

// Program to get output the score of last nights game

//Declare the score variables
int homeTeam = 70;
int awayTeam = 90;

int main ()
{
    //Let's output the scores!
  cout << setw(10) << "Bulls" << setw(10) << "Knicks" << endl;
  cout << setw(10) << homeTeam << setw(10) << awayTeam << endl;
  return 0;
}
