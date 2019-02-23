// Joseph Sylvanovich TicketMaster Lab 10/13/18

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
        string teamName[100];
        string ticketSection[100];
        double ticketPrice[100];
        int tCount = 0;
        int choice;

    while(true)
    {
    
        cout << "TicketMaster Tickets" << endl;
        cout << "======================" << endl;
        cout << "1- Add New Ticket" << endl;
        cout << "2- Display All Tickets" << endl;
        cout << "3- Display All Tickets by Budget" << endl;
        cout << "4- Display Cheapest Price by Event" << endl;
        cout << "0- Exit Program" << endl;
        cout << "What would you like to do? ";
        cin >> choice;
        
        if (choice == 1)
        {
            cout << "Team:  ";
            cin >> teamName[tCount];
            cout << "Section ";
            cin >> ticketSection[tCount];
            cout << "Price: ";
            cin >> ticketPrice[tCount];
        }
        else if (choice == 2)
        { // display ALL tickets
           for (int i = 0; i < tCount; i++)
                cout << teamName[i] << " " << ticketSection[i] << " " << ticketPrice[i] << endl;
        }
        else if (choice == 3)
        { // Display tickets by BUDGET, maybe can rearrange least to greatest?
            double budget;
            cout << "Budget: ";
            cin >> budget;
            for (int i = 0; i < tCount; i++)
                if (ticketPrice[i] <= budget) // only if price within budget
                    cout << teamName[i] << " " << ticketSection[i] << " " << ticketPrice[i] << endl;
        }
        else if (choice == 4)
        { // Display cheapest price by event
            string event;
            cout << "Event ";
            cin >> event; 
            int minInd = 0; 
            for (int i = 1); i < tCount; i++0 
                if (ticketPrice[i] <= ticketPrice[minInd] && team[i] == event) // this is the newest low price of the wanted event 
                    minInd = 1;
        }
        else if (choice == 0)
        {
            break; // this ends the program if the user decides to selection feature 0
        }
        else 
            cout << "Invalid Choice!" << endl; // this informs user that the choice is invalid
    }
    
    system("PAUSE");
    return 0;
}
