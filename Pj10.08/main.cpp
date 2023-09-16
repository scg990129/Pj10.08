//
//  main.cpp
//  Pj10.08
//
//  Created by Jacob Yeung on 9/16/23.
//


#include <iostream>
#include <string>
#include "dayType.hpp"
// #include "dayType.h"
using namespace std;

int main(int argc, const char * argv[]) {
    dayType myDay("Wednesday");
    myDay.addDay(5);

    printf("day: %s\n", myDay.getDay().c_str());
    
    return 0;
}
