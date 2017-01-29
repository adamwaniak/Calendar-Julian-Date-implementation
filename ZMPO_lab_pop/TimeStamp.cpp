#include "stdafx.h"
#include "TimeStamp.h"
#include <cmath>
#include <sstream>


TimeStamp::TimeStamp(int day, int month, int year, int hour,int min, int sec) {
	julianDay = converseGregorianDateToJulianDay(day, month, year,hour,min,sec);
}

double TimeStamp::differenceDatesInHoures(TimeStamp & other) {
	double daysDifference = differenceDatesInDays(other);
	return daysDifference * 24;
}


double TimeStamp::differenceDatesInMinutes(TimeStamp & other) {
	double daysDifference = differenceDatesInDays(other);
	return daysDifference * 1440;
}

double TimeStamp::differenceDatesInSeconds(TimeStamp & other) {
	double daysDifference = differenceDatesInDays(other);
	return daysDifference * 86400;
}


void TimeStamp::addHoures(double houres) {
	julianDay += houres / 24;
}

void TimeStamp::substractHoures(double houres) {
	julianDay -= houres / 24;
}

std::string TimeStamp::toString() {
	int year, month, day, I, J, K;
		
	int L = julianDay + 68569;
	int N = 4 * L / 146097;
	L = L - (146097 * N + 3) / 4;
	I = 4000 * (L + 1) / 1461001;
	L = L - 1461 * I / 4 + 31;
	J = 80 * L / 2447;
	K = L - 2447 * J / 80;
	L = J / 11;
	J = J + 2 - 12 * L;
	I = 100 * (N - 49) + I + L;
		
	year = I;
	month = J;
	day = K;
	double hour = std::floor(((julianDay - std::floor(julianDay))*24));
	double min = std::round(((julianDay - std::floor(julianDay)) * 1440) - hour*60);
	double sec = std::round(((julianDay - std::floor(julianDay)) * 86400 - hour*60*60  - min*60));
	std::ostringstream ss;
	ss << day << "-" << month << "-" << year << " hour:" << hour<<" min:" << min<< " sec:" << sec;
	return ss.str();
}

TimeStamp::~TimeStamp() {
}


double TimeStamp::converseGregorianDateToJulianDay(int day, int month, int year,double hour,double min,double sec) {
	return  (1461 * (year + 4800 + (month - 14) / 12)) / 4 + (367 * (month - 2 - 12 * ((month - 14) / 12))) / 12 - (3 * ((year + 4900 + (month - 14) / 12) / 100)) / 4 + day - 32075 + hour/24 + min/1440 + sec/86400;


}

