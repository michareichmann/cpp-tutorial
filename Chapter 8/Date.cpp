#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int nDay, int nMonth, int nYear)
    {
        SetDate(nDay, nMonth, nYear);
    }
void Date::SetDate(int nDay, int nMonth, int nYear)
{
    m_nDay = nDay;
    m_nMonth = nMonth;
    m_nYear = nYear;
}

void Date::PrintDate()
{
    if ((GetMonth() < 10) && (GetDay() < 10))
    cout << "0" << GetMonth() << "/0" << GetDay() << "/" << GetYear() << endl;
    else if ((GetMonth() < 10))
    cout << "0" << GetMonth() << "/" << GetDay() << "/" << GetYear() << endl;
    else if ((GetDay() < 10))
    cout << GetMonth() << "/0" << GetDay() << "/" << GetYear() << endl;
}

//Date::Date(int nHour) { m_nHour = nHour; }
