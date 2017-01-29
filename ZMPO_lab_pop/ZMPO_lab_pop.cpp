

#include "stdafx.h"
#include <iostream>
#include "Date.h"
#include "TimeStamp.h"

void dateTest() {
	Date date1;
	Date date2;

	date1.addDay(5);
	date2.addDay(2);

	std::cout << date1.differenceDatesInDays(date2) << std::endl;	//3
	std::cout << date2.differenceDatesInDays(date1) << std::endl;	//3

	std::cout << (date1 > date2) << std::endl;	//true
	std::cout << (date1 >= date2) << std::endl; //true
	std::cout << (date1 < date2) << std::endl;	//false
	std::cout << (date1 <= date2) << std::endl;	//false
	std::cout << (date1 == date2) << std::endl;	//false

}

void timeStampTest1() {
	TimeStamp time1(1, 1, 1972,23,0,0);
	std::cout << time1.toString() << std::endl;
	time1.addHoures(23);
	std::cout << time1.toString() << std::endl;
	time1.substractHoures(1);
	std::cout << time1.toString() << std::endl;
}
void yearLeapTest() {
	TimeStamp time1(1, 1, 1996, 0, 0, 0);
	std::cout << time1.toString() << std::endl;
	TimeStamp time2(1, 1, 1997, 0, 0, 0);
	std::cout << time2.toString() << std::endl;

	std::cout << "difference in days " << time1.differenceDatesInDays(time2) << std::endl;
	std::cout << "difference in houres " << time1.differenceDatesInHoures(time2) << std::endl;
	std::cout << "difference in minutes " << time1.differenceDatesInMinutes(time2) << std::endl;
	std::cout << "difference in seconds " << time1.differenceDatesInSeconds(time2) << std::endl;
}

void timeDifferenceTest() {
	TimeStamp time1(1, 1, 2000, 12, 0, 0);
	std::cout << time1.toString() << std::endl;
	TimeStamp time2(5, 1, 2000, 0, 0, 0);
	std::cout << time2.toString() << std::endl;

	std::cout << time1.differenceDatesInDays(time2) << std::endl;
	std::cout << time1.differenceDatesInMinutes(time2) << std::endl;
	
}
void timeDifferenceTest1() {
	TimeStamp time1(1, 1, 1, 0, 30, 0);
	std::cout << time1.toString() << std::endl;
	TimeStamp time2(2, 1, 1, 1, 31, 0);
	std::cout << time2.toString() << std::endl;

	std::cout << "difference in days " << time1.differenceDatesInDays(time2) << std::endl;
	std::cout << "difference in houres " << time1.differenceDatesInHoures(time2) << std::endl;
	std::cout << "difference in minutes " << time1.differenceDatesInMinutes(time2) << std::endl;
	std::cout << "difference in seconds " << time1.differenceDatesInSeconds(time2) << std::endl;
}
void timeDifferenceTest2() {
	TimeStamp time1(29, 12, 1999, 0, 30, 0);
	std::cout << time1.toString() << std::endl;
	TimeStamp time2(2, 1, 2000, 1, 31, 0);
	std::cout << time2.toString() << std::endl;

	std::cout << "difference in days " << time1.differenceDatesInDays(time2) << std::endl;
	std::cout << "difference in houres " << time1.differenceDatesInHoures(time2) << std::endl;
	std::cout << "difference in minutes " << time1.differenceDatesInMinutes(time2) << std::endl;
	std::cout << "difference in seconds " << time1.differenceDatesInSeconds(time2) << std::endl;
}

int main()
{
	
	yearLeapTest();
	timeDifferenceTest2();
}

