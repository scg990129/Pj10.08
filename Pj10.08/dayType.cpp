//
//  dayType.cpp
//  Pj10.08
//
//  Created by Jacob Yeung on 9/16/23.
//

#include "dayType.hpp"
//#include "dayType.h"
#include <string>
#include <iostream>
#include <ctime>
#include<array>

using namespace std;

string dayType::weekDays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

dayType::dayType(){
  std::time_t currentTime = std::time(nullptr);
  std::tm* timeInfo = std::localtime(&currentTime);
  this->setDay(this->weekDays[timeInfo->tm_wday]);
}

dayType::dayType(string d){
  this->setDay(d);
}

string dayType::nextDay() const{
  bool isOut = false;

  for(auto i: weekDays){
    if (isOut)
      return i;
    isOut = (i == this->getDay());
  }

  return weekDays[0];
}

string dayType::prevDay() const{
  string out = weekDays[6];

  for(auto i: weekDays){
    if (i == this->getDay()){
      return out;
    } else{
      out = i;
    }
  }

  return out;
}

void dayType::addDay(int nDays){
  for(int i = 0; i < abs(nDays); i++){
    this->setDay(nDays > 0? this->nextDay(): this->prevDay());
  }
}

void dayType::print() const {
    std::cout << weekDay;
}

void dayType::setDay(string d){
  this->weekDay = d;
}

string dayType::getDay() const{
  return this->weekDay;
}


