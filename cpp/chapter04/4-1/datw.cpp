#include<iostream>

class Date {
  int year;
  int month;  // 1 부터 12 까지.
  int day;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int day)
  {
    this->year=year;
    this->month=month;
    this->day=day;
  }
  void AddDay(int inc)
  {
    
  }
  void AddMonth(int inc);
  void AddYear(int inc);

  void ShowDate()
  {
    std::cout<<year<<"년 "<<month<<"월 "<<day<<"일 "<<std::endl;
  }
};