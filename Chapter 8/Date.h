#ifndef DATE_H
#define DATE_H

class Date
{
    int m_nDay;
    int m_nMonth;
    int m_nYear;

    Date() { }; //private default constructor

public:

    static int m_nHour;

    //Date(int m_nHour);
    Date(int nDay, int nMonth, int nYear);
    void SetDate(int nDay, int nMonth, int nYear);
    void PrintDate();

    int GetDay() const {return m_nDay;}
    int GetMonth() const {return m_nMonth;}
    int GetYear() const {return m_nYear;}

};

#endif // DATE_H
