#include "stdafx.h"
#include "Date.h"
#include <math.h>
#include <iostream>



Date::Date() {
	julianDay = 0;
}

void Date::addDay(int days) {
	julianDay += days;
}

double Date::differenceDatesInDays(Date & other) {
	return std::abs(julianDay - other.julianDay);
}

bool Date::operator>(Date & other) {
	return julianDay>other.julianDay;
}

bool Date::operator>=(Date & other) {
	return julianDay>=other.julianDay;
}

bool Date::operator<(Date & other) {
	return julianDay<other.julianDay;
}

bool Date::operator<=(Date & other) {
	return julianDay<=other.julianDay;
}

bool Date::operator==(Date & other) {
	return julianDay==other.julianDay;
}

Date::~Date() {
}
