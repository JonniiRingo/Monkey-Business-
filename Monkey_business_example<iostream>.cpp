#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Create a two-dimensional 3x7 array.
	const int mkys = 3;
	const int days = 7;
	int food[mkys][days];
	double pounds, least, most, sum = 0;
	

	// Ask user to input data for each monkey
	cout << "Input how many pounds of food each monkey ate each day.\n";
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			do
			{

				cout << "Monkey #" << (row + 1) << " on day #" << (col + 1)
					 << " ate: ";
				cin  >> pounds;

				if (pounds < 0)
				{
					cout << "Error! Number of pounds must be greater than 0.\n";
				}

			} while (pounds < 0);

			food[row][col] = pounds;


			// Get total food eaten per day by the whole family of monkeys.
			sum += pounds;
		}
		cout << endl;							// make blank space
	}

	// Get least and greatest amount of food eaten by any one monkey.
	least = most = food[0][0];
	for (int row = 0; row < mkys; row++)
	{
		for (int col = 0; col < days; col++)
		{
			
			if (food[row][col] < least)
			{ 
				least = food[row][col];
			}
			if (food[row][col] > most)
			{ 
				most = food[row][col];
			}
		}
	}

	cout << "\n             Monkey Weekly Food Report\n"
		 << "             by the whole family of monkeys\n"
		 << "----------------------------------------------------\n";
	cout << fixed << showpoint << setprecision(1);
	cout << "Average amount of food eaten per day : "
		 << sum / 21.0 << " pounds.\n";
	cout << "Least amount of food eaten: " << least << " pounds.\n";
	cout << "Greatest amount of food eaten: " << most << " pounds.\n";

	return 0;