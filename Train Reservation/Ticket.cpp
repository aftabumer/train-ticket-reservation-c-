#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>
#include <ctime>
#include <fstream>
#include <iomanip>
#include "Ticket.h"
#include "Constants.h"
#include <sstream>

int choice;
char ans;
using namespace std;

Constants c;


Reservation::Reservation()
{

}

//void selectTrain(){
//	cout << "select the train" << endl;
//	cout << "1-Allahma Iqbal Express" << endl
//		<< "2-Awami Express" << endl
//		<< "3-Green Line Express" << endl
//		<< "4-Karakoram Express" << endl
//		<< "5-Multan Express" << endl
//		<< "6-Night Coach Express" << endl
//		<< "7-Pakistan Business Express" << endl
//		<< "8-Shalimar Express" << endl
//		<< "9-Tezgam" << endl
//		<< "10-Thar Express" << endl;
//	cin >> choice;
//	system("cls");
//}

void Reservation::TicketReservation()
{

	/*do
	{*/
	//ofstream TicketData;

	//TicketData.open("TICKET.txt", ios::out);

	//ofstream TicketData;

	//TicketData.open("Reservation Data.txt", ios::app);



	
	/////////////////////////////////////////////////////
//	string HoldFile;
	
	/*while (_TicketNumber.length() != 4)
	{
		cout << endl;*/
//getline(cin, _TicketNumber);
	

		cout << "Enter the ticket number" << endl;
		cin >> _TicketNumber;

		string FinalFile;
		ofstream TicketData;

		FinalFile = "DB/" + _TicketNumber + ".txt";
		TicketData.open(FinalFile, ofstream::out);


	/*	if (_TicketNumber.length() != 4)
		{
			string FinalFile;
	ofstream TicketData;

	FinalFile = "DB/" + _TicketNumber + ".txt";
	TicketData.open(FinalFile, ofstream::out);


			cout << "Try again! make sure you have enterd 4 digit number:" << endl;
		}
	}*/
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	/*cout << "Enter the entry number of car:" << endl;
	cin>>_CarNumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getchar();*/

	//cout << "Enter the ticket number" << endl;
	//cin >> _TicketNumber;


	cout << "Enter the name of the passenger" << endl;
	cin >> _PassengerName;

	TicketData << endl;

	//MyTrain << "Car I.D N.O: " << HoldFile << endl;

	TicketData << "******************************************WELCOME TO THE RAILWAY RESERVATION******************************************" << endl;
	TicketData << endl;
	TicketData << endl;

	TicketData << "Ticket Number:" << setw(10) << _TicketNumber << endl;
	TicketData << "Paseenger Name:" << setw(10) << _PassengerName << endl;
	//TicketData << "____________________________________________________________________" << endl;

	
	/////////////////////////////////////////////////////




	/*cout << "Enter the ticket number" << endl;
	cin >> _TicketNumber;
	TicketData << "Ticket Number:" << setw(10) << _TicketNumber << endl;

	cout << "Enter the name of the passenger" << endl;
	cin >> _PassengerName;
	TicketData << "Paseenger Name:" << setw(10) << _PassengerName << endl;*/

	cout << "Enter Citizien National Identity Card (CNIC) number" << endl;
	cin >> _CNIC;
	TicketData << "CNIC Number:" << setw(10) << _CNIC << endl;

	/*selectTrain();*/
	cout << "select the train" << endl;
	cout << "1-Allahma Iqbal Express" << endl
		<< "2-Awami Express" << endl
		<< "3-Green Line Express" << endl
		<< "4-Karakoram Express" << endl
		<< "5-Multan Express" << endl
		<< "6-Night Coach Express" << endl
		<< "7-Pakistan Business Express" << endl
		<< "8-Shalimar Express" << endl
		<< "9-Tezgam" << endl
		<< "10-Thar Express" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "1-Allahma Iqbal Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO SUKKAR" << endl
			<< "3-KARACHI TO LAHORE" << endl
			<< "4-KARACHI TO SIALKOT" << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       08:30" << endl;
			cout << "your amount is: 500" << endl;
			break;
		case 2:
			cout << "2-"<< c.KTS << endl;
			TicketData << "form to: " << c.KTS << endl;

			cout << "Departure Timing is:       08:30" << endl;
			cout << "your amount is: 700" << endl;
			break;
		case 3:
			cout << "3-" << c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       08:30" << endl;
			cout << "your amount is: 1500" << endl;
			break;
		case 4:
			cout << "4-"<<c.KTSi << endl;
			TicketData << "form to: " << c.KTSi << endl;

			cout << "Departure Timing is:       08:30" << endl;
			cout << "your amount is: 1200" << endl;
			break;
		default:
			break;
		}
		break;

	case 2:
		cout << "2-Awami Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO NAWABSHAH" << endl
			<< "3-KARACHI TO GHOTKI" << endl
			<< "4-KARACHI TO DERA NAWAB SAHIB" << endl
			<< "5-KARACHI TO LAHORE " << endl
			<< "6-KARACHI TO RAWALPINDI" << endl
			<< "7-KARACHI TO PESHAWAR  " << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 450" << endl;
			break;
		case 2:
			cout << "2-" << c.KTN << endl;
			TicketData << "form to: " << c.KTN << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 650" << endl;
			break;
		case 3:
			cout << "3-" << c.KTGo << endl;
			TicketData << "form to: " << c.KTGo << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 700" << endl;
			break;
		case 4:
			cout << "4-"<<c.KTN << endl;
			TicketData << "form to: " << c.KTN << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 800" << endl;
			break;
		case 5:
			cout << "5-"<<c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 1450" << endl;
			break;
		case 6:
			cout << "6-"<<c.KTR << endl;
			TicketData << "form to: " << c.KTR << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 1500" << endl;
			break;
		case 7:
			cout << "7-" << c.KTP << endl;
			TicketData << "form to: " << c.KTP << endl;

			cout << "Departure Timing is:       18:30" << endl;
			cout << "your amount is: 1800" << endl;
			break;

		default:
			break;
		}
		break;

	case 3:
		cout << "3-Green Line Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO BAHAWALPUR" << endl
			<< "3-KARACHI TO LAHORE" << endl
			<< "4-KARACHI TO RAWALPINDI" << endl
			<< "5-KARACHI TO MARGALA" << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       21:30" << endl;
			cout << "your amount is: 1000" << endl;

			break;
		case 2:
			cout << "2-" << c.KTB << endl;
			TicketData << "form to: " << c.KTB << endl;

			cout << "Departure Timing is:       21:30" << endl;
			cout << "your amount is: 1500" << endl;
			break;
		case 3:
			cout << "3-" << c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       21:30" << endl;
			cout << "your amount is: 5000" << endl;
			break;
		case 4:
			cout << "4-" << c.KTR << endl;
			TicketData << "form to: " << c.KTR << endl;

			cout << "Departure Timing is:       21:30" << endl;
			cout << "your amount is: 5500" << endl;
			break;
		case 5:
			cout << "5-" << c.KTM << endl;
			TicketData << "form to: " << c.KTM << endl;

			cout << "Departure Timing is:       21:30" << endl;
			cout << "your amount is: 6500" << endl;
			break;

		default:

			break;
		}
		break;

	case 4:
		cout << "4-Karakoram Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO BAHAWALPUR" << endl
			<< "3-KARACHI TO LAHORE " << endl
			<< "4-KARACHI TO RAWALPINDI" << endl
			<< "5-KARACHI TO MARGALA" << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       16:00" << endl;
			cout << "your amount is: 500" << endl;
			break;
		case 2:
			cout << "2-" << c.KTB << endl;
			TicketData << "form to: " << c.KTB << endl;

			cout << "Departure Timing is:       16:00" << endl;
			cout << "your amount is: 800" << endl;
			break;
		case 3:
			cout << "3-"<<c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       16:00" << endl;
			cout << "your amount is: 1500" << endl;
			break;
		case 4:
			cout << "4-" << c.KTR << endl;
			TicketData << "form to: " << c.KTR << endl;

			cout << "Departure Timing is:       16:00" << endl;
			cout << "your amount is: 1800" << endl;
			break;
		case 5:
			cout << "5-"<<c.KTM << endl;
			TicketData << "form to: " << c.KTM << endl;

			cout << "Departure Timing is:       16:00" << endl;
			cout << "your amount is: 2200" << endl;
			break;
		default:

			break;
		}
		break;

	case 5:
		cout << "5-Multan Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO NAWABSHAH" << endl
			<< "2-KARACHI TO LAHORE " << endl
			<< "3-KARACHI TO RAIWIND " << endl
			<< "4-KARACHI TO MULTAN " << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-"<<c.KTN << endl;
			TicketData << "form to: " << c.KTN << endl;

			cout << "Departure Timing is:       22:30" << endl;
			cout << "your amount is: 800" << endl;
			break;
		case 2:
			cout << "2-"<<c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       22:30" << endl;
			cout << "your amount is: 1400" << endl;
			break;
		case 3:
			cout << "3-"<<c.KTRi << endl;
			TicketData << "form to:" << c.KTRi << endl;

			cout << "Departure Timing is:       22:30" << endl;
			cout << "your amount is: 1700" << endl;
			break;
		case 4:
			cout << "4-"<<c.KTMu << endl;
			TicketData << "form to: " << c.KTMu << endl;

			cout << "Departure Timing is:       22:30" << endl;
			cout << "your amount is: 1550" << endl;
			break;

		default:
			break;
		}
		break;

	case 6:
		cout << "6-Night Coach Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO ROHRI" << endl
			<< "3-KARACHI TO MULTAN " << endl
			<< "4-KARACHI TO FAISALABAD" << endl
			<< "5-KARACHI TO LAHORE " << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       19:30" << endl;
			cout << "your amount is: 600" << endl;
			break;
		case 2:
			cout << "2-" << c.KTRo << endl;
			TicketData << "form to: " << c.KTRo << endl;

			cout << "Departure Timing is:       19:30" << endl;
			cout << "your amount is: 750" << endl;
			break;
		case 3:
			cout << "3-" << c.KTMu << endl;
			TicketData << "form to: " << c.KTMu << endl;

			cout << "Departure Timing is:       19:30" << endl;
			cout << "your amount is: 2350" << endl;
			break;
		case 4:
			cout << "4-" << c.KTF << endl;
			TicketData << "form to: " << c.KTF << endl;

			cout << "Departure Timing is:       19:30" << endl;
			cout << "your amount is: 2500" << endl;
			break;
		case 5:
			cout << "5-" << c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       19:30" << endl;
			cout << "your amount is: 3000" << endl;
			break;

		default:
			break;
		}
		break;
	case 7:
		cout << "7-Pakistan Business Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO TANDO ADAM" << endl
			<< "3-KARACHI TO BAHAWALPUR" << endl
			<< "4-KARACHI TO FAISALABAD" << endl
			<< "5-KARACHI TO GUJRAT" << endl
			<< "6-KARACHI TO JHELUM" << endl
			<< "7-KARACHI TO GUJAR KHAN" << endl
			<< "8-KARACHI TO RAWALPINDI" << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH<< endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 600" << endl;
			break;
		case 2:
			cout << "2-" << c.KTT << endl;
			TicketData << "form to: " << c.KTT << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 750" << endl;
			break;
		case 3:
			cout << "3-"<<c.KTB << endl;
			TicketData << "form to: " << c.KTB << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 950" << endl;
			break;
		case 4:
			cout << "4-" << c.KTF << endl;
			TicketData << "form to: " << c.KTF << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 1800" << endl;
			break;
		case 5:
			cout << "5-" << c.KTG << endl;
			TicketData << "form to: " << c.KTG << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 1950" << endl;
			break;
		case 6:
			cout << "6-" << c.KTJ << endl;
			TicketData << "form to: " << c.KTJ << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 2350" << endl;
			break;
		case 7:
			cout << "7-" << c.KTGK << endl;
			TicketData << "form to: " << c.KTGK << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 2750" << endl;
			break;
		case 8:
			cout << "7-" << c.KTR << endl;
			TicketData << "form to: " << c.KTR << endl;

			cout << "Departure Timing is:       13:00" << endl;
			cout << "your amount is: 3200" << endl;
			break;

		default:
			break;
		}
		break;
	case 8:
		cout << "8-Shalimar Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO NAWABSHAH" << endl
			<< "3-KARACHI TO BAHAWALPUR" << endl
			<< "4-KARACHI TO LAHORE " << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 550" << endl;
			break;
		case 2:
			cout << "2-" << c.KTN << endl;
			TicketData << "form to: " << c.KTN << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 750" << endl;
			break;
		case 3:
			cout << "3-" << c.KTB << endl;
			TicketData << "form to: " << c.KTB << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 950" << endl;
			break;
		case 4:
			cout << "4-" << c.KTL << endl;
			TicketData << "form to: " << c.KTL << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 1800" << endl;
			break;
		default:
			break;
		}
		break;
	case 9:
		cout << "9-Tezgam" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO NAWABSHAH" << endl
			<< "3-KARACHI TO KHAIRPUR" << endl
			<< "4-KARACHI TO BAHAWALPUR" << endl
			<< "5-KARACHI TO LAHORE " << endl
			<< "6-KARACHI TO GUJRANWALA" << endl
			<< "7-KARACHI TO JHELUM" << endl
			<< "8-KARACHI TO GUJAR KHAN" << endl
			<< "9-KARACHI TO CHAK LALA" << endl
			<< "10-KARACHI TO RAWALPINDI" << endl;
		cout << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 450" << endl;
			break;
		case 2:
			cout << "2-" << c.KTN << endl;
			TicketData << "form to" << c.KTN << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 750" << endl;
			break;
		case 3:
			cout << "3-"<<c.KTKP << endl;
			TicketData << "form to: " << c.KTKP << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 950" << endl;
			break;
		case 4:
			cout << "4-" << c.KTB << endl;
			TicketData << "form to" << c.KTB << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 1150" << endl;
			break;
		case 5:
			cout << "5-" << c.KTL << endl;
			TicketData << "form to" << c.KTL << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 1800" << endl;
			break;
		case 6:
			cout << "6-"<<c.KTGW << endl;
			TicketData << "form to: " << c.KTGW << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 1950" << endl;
			break;
		case 7:
			cout << "7-" << c.KTJ << endl;
			TicketData << "form to: " << c.KTJ << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 2150" << endl;
			break;
		case 8:
			cout << "5-" << c.KTGK << endl;
			TicketData << "form to: " << c.KTGK << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 2250" << endl;
			break;
		case 9:
			cout << "6-" << c.KTCL << endl;
			TicketData << "form to: " << c.KTCL << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 2350" << endl;
			break;
		case 10:
			cout << "7-" << c.KTR << endl;
			TicketData << "form to: " << c.KTR << endl;

			cout << "Departure Timing is:       17:30" << endl;
			cout << "your amount is: 2500" << endl;
			break;

		default:
			break;
		}
		break;
	case 10:
		cout << "10-Thar Express" << endl;
		cout << endl;

		cout << "select location KARACHI to " << endl;
		cout << "1-KARACHI TO HYDARABAD" << endl
			<< "2-KARACHI TO MIRPUR KHAS " << endl
			<< "3-KARACHI TO KHOKHROPAR" << endl
			<< "4-KARACHI TO ZERO POINT" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "1-" << c.KTH << endl;
			TicketData << "form to: " << c.KTH << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 350" << endl;
			break;
		case 2:
			cout << "2-" << c.KTMK << endl;
			TicketData << "form to: " << c.KTMK << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 550" << endl;
			break;
		case 3:
			cout << "3-" << c.KTK << endl;
			TicketData << "form to: " << c.KTK << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 750" << endl;
			break;
		case 4:
			cout << "4-" << c.KTZP << endl;
			TicketData << "form to: " << c.KTZP << endl;

			cout << "Departure Timing is:       06:30" << endl;
			cout << "your amount is: 900" << endl;
			break;
		default:
			break;
		}

		break;

	default:
		break;
	}

	cout << "Enter Departure Date" << endl;
	cin >> _DepartureDay;
	cin >> _DepartureMonth;
	cin >> _DepartureYear;
	cout << "Departure Date is:       " << _DepartureDay << "/" << _DepartureMonth << "/" << _DepartureYear << endl;
	TicketData << "Departure Date is:       " << _DepartureDay << "/" << _DepartureMonth << "/" << _DepartureYear << endl;

	cout << "Enter the Coach number" << endl;
	cin >> _CoachNumber;
	TicketData << "Coach Number:" << setw(10) << _CoachNumber << endl;

	cout << "Enter the number of seat and bearth" << endl;
	cin >> _SeatNumber;
	TicketData << "Seat Number:" << setw(10) << _SeatNumber << endl;

	cout << "Reserve By" << endl;
	cin >> _ReservedBy;
	TicketData << "Reserved By:" << setw(10) << _ReservedBy << endl;
	
	cout << endl;


	/*cout << "Do you want to continue (Y/N)?\n" << endl;
	cout << "You must type a 'Y' or an 'N'.\n" << endl;
	cin >> ans;

	} while ((ans == 'Y') || (ans == 'y'));*/

	//filing process

	//ofstream TicketData;

	//TicketData.open("fuckoff.txt", ios::app);

	/*TicketData << "******************************************WELCOME TO THE RAILWAY RESERVATION******************************************" << endl;
	TicketData << endl;
	TicketData << endl;
	TicketData << "Ticket Number:" << setw(10) << _TicketNumber << endl;
	TicketData << "Paseenger Name:" << setw(10) << _PassengerName << endl;
	TicketData << "CNIC Number:" << setw(10) << _CNIC << endl;
	TicketData << "Coach Number:" << setw(10) << _CoachNumber << endl;
	TicketData << "Seat Number:" << setw(10) << _SeatNumber << endl;
	TicketData << "Reserved By:" << setw(10) <<_ReservedBy << endl;*/
	/*TicketData <<"form to"<< c.KTL << endl;
	TicketData << "form to" << c.KTP << endl;
*/
	TicketData.close();


}

void Reservation::DisplayReservation()
{
	string line;
	string FinalFile;
	ifstream TicketData;

	/*FinalFile = "DB/" + _TicketNumber + ".txt";
	TicketData.open(FinalFile, ifstream::in);*/*/


	/*ifstream TicketData("Reservation Data.txt");*/
	
	for (int index = 0; index <= 9999; index++)
	{
		string HoldFile = to_string(index);
		FinalFile = "DB/" + _TicketNumber + ".txt";
		TicketData.open(FinalFile, ifstream::in);


		if (TicketData.is_open())
		{
			while (getline(TicketData, line))
			{
				cout << line << endl;
			}

			TicketData.close();
		}
		//else //if the file open is unsuccessful
		//{
		//	cout << "File cannot be opened." << endl;
		//}
	}
}

void Reservation::EnquiryReservation()
{
	/*string Enquiry = " ";
	int count = 0;
	string line ;

	ifstream TicketData; //read

	TicketData.open("Reservation Data.txt");

	cout << "Enter ticket number you want to enquiry" << endl;
	cin >> Enquiry;

	if (TicketData.is_open())
	{
		while (!TicketData.eof())
		{
			getline(TicketData, line);
			
			cout << Enquiry << endl;
		}

		TicketData.close();
	}
	else
	{
		cout << "Could not open file." << endl;
	}*/
}

void Reservation::CancelReservation()
{

}