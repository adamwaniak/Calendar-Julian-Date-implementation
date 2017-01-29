#pragma once
class Date {
public:
	Date();
	void addDay(int days);
	double differenceDatesInDays(Date &other);
	bool operator>(Date &other);
	bool operator>=(Date &other);
	bool operator<(Date &other);
	bool operator<=(Date &other);
	bool operator==(Date &other);
	~Date();
	
protected:
	//Data juliañska, dni juliañskie – liczba dni, która up³ynê³a od 1 stycznia roku 4713 p.n.e., The Julian Period is a chronological interval of 7980 years; year 1 of the Julian Period was 4713 BC.
	double julianDay;


	
};

