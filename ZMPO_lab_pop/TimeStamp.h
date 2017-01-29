#include "Date.h"
#include <string>


class TimeStamp : public Date {
public:
	
	TimeStamp(int day, int month, int year, int hour = 0, int min = 0, int sec = 0);
	double differenceDatesInHoures(TimeStamp &other);
	double differenceDatesInMinutes(TimeStamp &other);
	double differenceDatesInSeconds(TimeStamp &other);
	void addHoures(double houres);
	void substractHoures(double houres);
	std::string toString();
	~TimeStamp();
private:
	
	
	double converseGregorianDateToJulianDay(int day, int month, int year, double hour, double min, double sec);
	
};

