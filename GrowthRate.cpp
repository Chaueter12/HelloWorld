/* 
Chance Haueter
CSCI 271
Lab 4
Due Oct 14, 2014
Have the program stop when Town A has a higher population than Town B.
*/

#include <iostream>
using namespace std;

int main()
{
	/*
	The population of a town A is less than the population of town B.
However, the population of town A is growing faster than the population
of town B. Write a program that prompts the user to enter the population
and growth rate of each town. The program outputs after how many years
the population of town A will be greater than or equal to the population of
town B and the populations of both the towns at that time. (A sample input
is: Population of town A ¼ 5000, growth rate of town A ¼ 4%, population
of town B ¼ 8000, and growth rate of town B ¼ 2%.)
	*/

	//variables declared
	int townA = 0;
	int townB = 0;
	double townAgrowth = 0;
	double townBgrowth = 0;
	double years = 0;

	//tells user what program does
	cout << "This program outputs how many years it will take for" << endl;
	cout << "the population of Town A to be greater than or equal to" <<endl;
	cout << "Town B."<<endl;

	//asks for population
	cout<<endl;
	cout << "How large is the population in Town A and Town B respectively?" <<endl;
	cout << "(separated by spaces): ";
	cin >> townA >> townB;

	//confirms the populations entered
	cout<<endl;
	cout << "Town A has a population of " << townA << "." <<endl;
	cout << "Town B has a population of " << townB << "." <<endl;

	//checks to see if town a already has higher pop
	if (townA > townB)
	{
		cout<<endl;
		cout << "Town A has a larger population than B already." <<endl;
	}//end if

	else {

	growthcheck:
	//asks for growth rate
	cout<<endl;
	cout << "How large is the growth rate, in a decimal percentage, of Town A" <<endl;
	cout << "and Town B respectively? (separated by spaces)( e.g. .05 .02): ";
	cin >> townAgrowth >> townBgrowth;

	//confirms the growth rate entered
	cout<<endl;
	cout << "Town A has a growth rate of " << townAgrowth * 100 << "%." <<endl;
	cout << "Town B has a growth rate of " << townBgrowth * 100 << "%." <<endl;
	cout<<endl;

	//compares to see if A's growth rate is lower than B's 
	if (townAgrowth > townBgrowth)
		{
			while (townA < townB)
			{
			townA = (townA * townAgrowth) + townA;
			townB = (townB * townBgrowth) + townB;
			years++;
			}//end while
			cout << "Town A has the population of "<< townA <<endl;
			cout << "Town B has the population of "<< townB <<endl;
			cout << "Town A took " << years << " years to pass Town B's population." <<endl;
		}//end if
	else {
		cout << "Town A's growth is lower than Town B's. Please try again" <<endl;
	    goto growthcheck;
	     }//end else

	}//end else



	//Tells user end of program.
	cout<<endl;
	cout<<endl;
	cout<< "End of line."<<endl;
	cout<<endl;
	return 0;
}//end main
