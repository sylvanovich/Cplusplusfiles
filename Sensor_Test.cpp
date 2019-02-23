#include <iostream> 

using namespace std;

int main()
{
	cout << "Welcome to Sensor Monitor 1.5!" << endl;
	cout << "1- Submit Temperature Report" << endl;
	cout << "2- Temperature Report" << endl;
	cout << "0- Exit" << endl;

	double temp = 0;
	int total = 0;
	cout << "Enter 525 to stop." << endl;
	int count = 0;

	int ext;
	int num;
	int min = -200;
	int max = 200;

	cout << "What do you want to do?" << endl;
	cin >> num;

	while (true)
	{
		cout << "Temp " << ": ";

		if (num == 0)
		{
			break;
		}
		if (num == 1)
		{
			double numtemp;
			cout << "What is the temperature?" << endl;
			cin >> numtemp;
		}
		if (num == 2)
		{
			cout << "The lowest temp is: " << endl;
			cout << "The highest temp is: " << endl;
			cout << "The average temp is: " << endl;
		}
		if (num == 0)
		{
			cout << "Goodbye." << endl;
		}
		if (-200 >= temp && temp >= 200)
		{
			cout << "Temp. out of range [-200 <= temp <= 200]";
		}
		if (temp >= -200 && temp <= 200)
		{
			cout << "The temperature is: " << endl;
		}

	}
	system("PAUSE");
	return 0;
}