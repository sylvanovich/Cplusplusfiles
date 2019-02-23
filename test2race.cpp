#include <iostream>

using namespace std;

void WinnerReport(double carOne[], double carTwo[], int count)
void CarReport(double carOne[], double carTwo[], int count)
void CarAverage(double carOne[], double carTwo[], int count)

int carone[100];
int caretwo[100];
int count = 0;

int main()
{
    while(true) // this window will be presented each time so that the user can select the appropriate option
    {
        cout << "Car Race Analysis" << endl; 
        cout << "1- Enter Race Results" << endl; 
        cout << "2- Winner Report" << endl; 
        cout << "3- Car Report" << endl; 
        cout << "0- Exit" << endl;
        int choice; 
        cout << "Choice: ";
        cin >> choice; 

        if (choice == 1) // this is the first feature
        {
            WinnerReport(carOne, carTwo, count);
        }
        else if (choice == 2) // this is the second feature
        {
            CarReport(carOne, carTwo, count); 
        }
        else if  choice == 3) // this is the third feature
        {
            CarAverage(carOne, carTwo, count);
        }
        else if (choice == 0) // this quits the program with the chosen choice of zero
        {
            break;
        }
    }


return 0; 
}

void WinnerReport(double carOne[], double carTwo[], int count)
{
    double carOneResult; // this asks for the result of car one
    cout << "Race Result Car 1: ";
    cin >> carOneResult;

    double carTwoResult; // this asks for the result of car two 
    cout << "Race Result Car 2: ";
    cin >> carTwoResult;

    carOne[count] = carOneResult;
    carTwo[count] = carTwoResult;
    count++; //incrementing the count to go to the next line 

}

// functions
void CarReport(double carOne[], double carTwo[], int count)
{
    double total = 0; // this is for the total to receive the number of total races 
    int carOneWonRaces = 0; // this is for car one winning race
    int carTwoWonRaces = 0; // this is for car two winning race 
    int carOneAndTwoTie = 0; // this indicates a tie for both cars
    double carOneFastestSeconds = 0; // this is the fastest seconds for car one
    double carTwoFastestSeconds = 0; //this is the fastest seconds for car two 

    for (int i = 0; i < count; i++)
    {
        if (carOne[i] > 0 && carTwo[i] > 0) // this is saying if the cars race (because their times are obviously more than zero), then there will be a total # of times the cars raced 
        {
            total += carOne[i] + carTwo[i];
        }
        if (carOne[i] < carTwo[i]) // this is saying if carOne is less than carTwo for any of the seconds then carOne won, since the smaller seconds wins the race 
        {
            carOneWonRaces++;
        }
        if (carOne[i] > carTwo[i]) // this is saying if carOne is greater than carTwo for any of the seconds then carOne lost, since the bigger seconds loses the race
        {
            carTwoWonRaces++;
        }
        if (carOne[i] = carTwo[i]) // this is saying if both cars equal one another, then they have a tie 
        {
            carOneAndTwoTie++;
        }
        if (carOne[i] < carTwo[i]) // this is saying that if car one has a lower time then that was car one's quickest time racing car 2
        {
            carOne[i] = carOneFastest;
        }
        if (carOne[i] > carTwo[i]) // this is saying that if car two has a lower time then that was car one's quickest time racing car 1
        {
            carTwo[i] = carTwoFastest;
        }        
        else 
        cout << "There are no races in the system." << endl; // if there are no races then the user will be informed that there are no races in the system 

    }
// this is the output for what the user will see on the screen 
    cout << "Cars raced " << total << "times." << endl;
    cout << "Car 1 won " << carOneWon << "times." << endl;
    cout << "Car 2 won " << CarTwoWon << "time." << endl; 
    cout << "Race was a tie " << carOneAndTwoTie << "times." << endl;
    cout << "Car 1 fastest time " << carOneFastestSeconds << "seconds." << endl;
    cout << "Car 2 fastest time " << carTwoFastestSeconds << "seconds." << endl;
}
void CarAverage(double carOne[], double carTwo[], int count)
{
    double sumCarOneTime = 0; 
    double sumCarTwoTime = 0;

    for (int i = 0; i < count; i++)
    {
        sumCarOneTime += carOne[i]; // this is adding each race up in seconds to develop the average seconds raced for car one
        sumCarTwoTime += carTwo[i]; // this is adding each race up in seconds to develop the average seconds raced for car two 
    }
    // this is the output that the user will see on the screen
    cout << "Car 1 Avg. Time: " << sumCarOneTime / count << "." << endl;
    cout << "Car 2 Avg. Time: " << sumCarTwoTime / count << "." << endl;

    // if there are no races then the user will be informed that there are no races in the system 
    if (count == 0)
    {
    cout << "There are no races in the system." << endl;
    }

}