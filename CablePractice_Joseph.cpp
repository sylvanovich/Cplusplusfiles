#include <iostream> 

using namespace std; 

int main()
{


    int choice;
    int rating; 
    int count = 0;
    int lowest = 5;
    int highest = 0;
    int sum = 0;
    double avg;

    while(true)
    {
        cout << "Welcome to China Border Protection" << endl; 
        cout << "===Satisfaction Survey===" << endl; 
        cout << "1- Submit Rating" << endl; 
        cout << "2- View Rating" << endl; 
        cout << "0- Exit" << endl; 
        cout << "Your choice? ";
        cin >> choice; 

        if (choice == 0)
            break; 

        if (choice == 1)
        {
            cout << "Your rating (1-4)? "; 
            cin >> rating;
            cout << "Your rating is recorded" << endl;
        if (rating > 4 || rating < 1)
        {
            cout << "Invalid Entry." << endl;
        }
        else 
        {
            sum = sum + rating;
            count++;
        if (rating < lowest)
        {
            lowest = rating;
        }
        if (rating > highest)
        {
            highest = rating;
        }
        }
        }
        if (choice == 2)
        {
        if (count == 0)

            cout << "Highest Rating: " << highest << endl;
            cout << "Lowest Rating: " << lowest << endl; 

            double avg = sum / count;
            cout << "Average Rating: " << avg << endl;

        }
        if (choice == 3)
        {
        lowest = 5;
        highest = 0;
        sum = 0; 
        count = 0; 

        }

    }

    system("PAUSE");
    return 0;    
}