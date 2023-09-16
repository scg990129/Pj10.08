//
//  dayType.hpp
//  Pj10.08
//
//  Created by Jacob Yeung on 9/16/23.
//

#ifndef dayType_hpp
#define dayType_hpp

#include <stdio.h>
#include <string>
using namespace std;

class dayType{
private:
    std::string weekDay;
public:
    static std::string weekDays[7];
    void print() const;
    std::string nextDay() const;
    std::string prevDay() const;
    void addDay(int nDays);

    void setDay(std::string d);
    std::string getDay() const;

    dayType();
    dayType(std::string d);
};

#endif /* dayType_hpp */
