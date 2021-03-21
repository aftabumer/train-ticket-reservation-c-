#include<iostream>
#include<string>
#include<fstream>
#include <ctime.>
#include <iomanip>
#include "Ticket.h"
#include "Constants.h"


using namespace std;


int main()
{

	int choice;
//	int ans;

	Reservation Rev;
	/*ofstream ticktes("Ticket.txt", ios::out);
	ticktes.open("Ticket.txt");
	ticktes << "---------------------------------------------WELCOME TO TRAIN RESERVATION---------------------------------------------" << endl;
	ticktes.close();*/


	cout << "---------------------------------------------WELCOME TO TRAIN RESERVATION---------------------------------------------" << endl;
	cout << endl;
	cout << endl;

	do
	{


		cout << "1- Ticket Reservation" << endl
			<< "2- Display All Reservation" << endl
			<< "3- Enquiry Any Reservation" << endl
			<< "4- Cancel Any Reservation" << endl
			<< "5- Exit" << endl;
		cout << endl;
		cin >> choice;
		cout << endl;

		switch (choice)
		{

		case 1:
			Rev.TicketReservation();
			cout << endl;
			break;

		case 2:
			Rev.DisplayReservation();
			cout << endl;
			break;

		case 3:
			Rev.EnquiryReservation();
			cout << endl;
			break;

		case 4:
			Rev.CancelReservation();
			cout << endl;
			break;

		case 5:

			cout << "GoodBye!" << endl;
			break;

		default:
			cout << "Invalid input" << endl;
			break;



		}

	} while (choice != 5);
	//do
	//{

	//Rev.TicketReservation();
	//
	//cout << "Do you want to continue (Y/N)?\n" << endl;
	//cout << "You must type a 'Y' or an 'N'.\n" << endl;
	//cin >> ans;

	//} while ((ans == 'Y') || (ans == 'y'));

	return 0;
}