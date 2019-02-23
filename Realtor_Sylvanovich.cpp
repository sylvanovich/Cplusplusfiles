#include <iostream> 

using namespace std;

int main(){

    int propNum
    int propPrice;
    int propBeds;
    int pNum;
    int pPrice;
    int pBeds;
    int reductPrice;
    int maxPrice;
    int minBeds;
    int propCount;

    while(true){
        
        cout << "Realtor Assist v1.0" << endl;
        cout << "===================" << endl;
        cout << "1- New Property" << endl;
        cout << "2- Price Reduction" << endl;
        cout << "3- Search Property" << endl;
        cout << "4- Report" << endl;
        cout << "5 - Exit" << endl;
        cout << "What is your choice? ";
        cin >> choice;
        
        if (choice == 1){
        cout << "What is the property number? "; 
        cin >> propNum;
        cout << "What is the price of the property? ";
        cin >> propPrice; 
        cout << "How many bedrooms does the property have? ";
        cin >> propBeds;         
        
        if (propNum < 1 || propNum > 20000)
            cout << "Property invalid." << endl; 
        if (propPrice < 50000 || propPrice > 10000000)
            cout << "Property invalid." << endl; 
        if (propBeds < 1)
            cout << "Property invalid." << endl;
            break;

        }
        for (prpCount = 0; propCount < 20000; propCount++){
            propNum[propCount] ++;
            if (propNum[propCount] == pNum){
                propPrice[propCount] = pPrice;
                propBeds[propCount] = pBeds;
            }
        }
        if (choice == 2){
            cout << "Property number? ";
            cin >> pNuml
            cout << "Reduction amount? ";
            cin >> reductPrice;
            
            propPrice[pNum] = propPrice[pNum] - reductPrice;
        }
        if (choice == 3){
            cout << "Max price? ";
            cin >> maxPrice;
            cout << "Min bedrooms? ";
            cin >> minBeds;
            
            for (int i = 0; i < 20000; i++){
                if (propPrice[i] <= maxPrice || propBeds[i] >= minBeds){
                    cout << propNum[i] << "," << propPrice[i] << "," << propBeds[i]; << endl;
                }
            }
        }
        if (choice == 4){
            int avg;
            int count = 0;
        for (int = i; i < 20000; i++){
            cout << propNum[i] << "," << propPrice[i] << "," << propBeds[i] << endl;
            
            count += propPrice[i]
        }
        avg = count / 20000;
        cout << "The average home price is " << avg << endl;
        
        
        }
        if (choice == 5)
            break;
        
    }

    system("PAUSE");
    return 0; 

}
