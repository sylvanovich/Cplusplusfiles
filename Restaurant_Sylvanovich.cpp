// Joseph Sylvanovich

#include <iostream>
#include <string>

using namespace std;


int main()
{
        int choice;
        int tableNum;
        string name; // why is this here?

    while(true)
    {
        
        int table[20];
        for (int i = 0; i < 20; i++)
        {
            table[i] = 0;
        }
        string avail[20];
        for (int x = 0; x < 20; x++)
        {
            avail[x] = "";
        }
    
        cout << "Rolling Reservation System" << endl;
        cout << "==========================" << endl;
        cout << "1- Reserve a Table " << endl;
        cout << "2- Clear Reservation " << endl;
        cout << "3- Report " << endl;
        cout << "0 Exit Program " << endl;
        cout << "What would you like to do? ";
        cin >> choice;
        
        if (choice == 0)
            break;
        
        if (choice == 1)
        {
            cout << "Enter table number " << endl; 
            cin >> tableNum;
            if (avail[tableNum] == "")
            {
                cout << "What is the name of the party? " << endl;
                cin >> name;
                avail[tableNum] = name;
            }
            else
                cout << "The table is unavailable." << endl;

        }
        if (choice == 2)
        {
            cout << "Enter a table number: " << endl;
            cin >> tableNum;
            if (avail[tableNum] == "")
                cout << "The selected table is already available" << endl;
            else 
                avail[tableNum] = "";
        }
        if (choice == 3)
        {
            for (int y = 0; y < 20; y++)
                if (avail[y] == "")
                    cout << "Table number: " << table[y] << " is available." << endl;
                else
                    cout << "Table name: " << table[y] << " is reserved by " << avail[y] << endl;
        }
        
    }
    
    system("PAUSE");
    return 0;
}
