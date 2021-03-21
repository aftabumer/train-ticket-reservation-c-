#pragma once
#include <string>

using namespace std;

class Reservation
{
private:
	string _TicketNumber;
	string _PassengerName;
	string _CNIC;
	//string _TrainName;
	string _DepartureDay;
	string _DepartureMonth;
	string _DepartureYear;
	//string _DepartureTime;
	//string _From;
	//string _To;
	string _CoachNumber;
	string _SeatNumber;
	//int _Amount;
	string _ReservedBy;

public:

	Reservation();

	void TicketReservation();
	void DisplayReservation();
	void CancelReservation();
	void EnquiryReservation();

};