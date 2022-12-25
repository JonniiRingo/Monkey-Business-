#include <iostream>
#include <string>
#include<iomanip>
using namespace std;




int main ()


{

// Variables
int least_food = 0, most_food = 0, food_consumed = 0;
int monkey, day;
double total = 0;
// 1D & 2D arrays.
string weekdays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; 
int food_log[7][3];
int min = 0 ;
int lday = 0;
int most = 0;
int mdays = 0;
// Ui input
for (day = 0; day < 7; day++)
{
    for (monkey = 0; monkey < 3; monkey++)
    {
        cout << "Enter the food eaten by monkey #" << monkey + 1<< " on " << weekdays[day] << ": ";    
        cin >> food_log[day][monkey];
        // Catch Loop
        while (food_log[day][monkey] < 0)
        {
            cout << "invlaid (negative) food quantity -- re-enter ";
            cin >> food_log[day][monkey];
        }
            // Catch Loop
    total += food_log[day][monkey];
    // Most & least logic.
    if (day == 0)
    {
        if (food_log[0][0] < food_log [0][1])
        {
            min = food_log[0][0];
        }
        else 
            min = food_log[0][1];
        if (min < food_log[0][2])
            min = min;
        else 
            min = food_log[0][2]; 
    }
    else if (food_log[day][monkey] < min)
        {
        min = food_log[day][monkey];
        lday = day;
        least_food = monkey;
        }
    
    if (day == 0)
    {
        if (food_log[0][0] > food_log [0][1])
        {
            most = food_log[0][0];
        }
        else 
            most = food_log[0][1];
        if (most > food_log[0][2])
            most = most;
        else 
            most = food_log[0][2]; 
    }
    else if (food_log[day][monkey] > most)
        {
        most = food_log[day][monkey];
        mdays = day;
        most_food = monkey;
        }
   }

}

//final output
cout << "Average food consumed daily: " << (double)(total / 7)<< endl;
cout << "The least daily food consumed was by monkey #" << least_food + 1 << " on " << weekdays[lday] << endl;  
cout << "The most daily food consumed was by monkey #" << most_food  + 1 << " on " << weekdays[mdays] << endl;  





    return 0;
}



