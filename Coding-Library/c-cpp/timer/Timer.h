#ifndef _TIMER_H_
#define _TIMER_H_

#include <chrono>

/*-------------------------------------------------------------
Author:             Staler2019
Created Date:       2021/06/05
Last modified Date: 2021/06/05
Description:        Declare Timer at the beginning and this do effort
--------------------------------------------------------------*/
class Timer {
    std::chrono::time_point<std::chrono::high_resolution_clock> tStartTimePoint;

    void stop();

  public:
    Timer();
    ~Timer();
};

#endif // !_TIMER_H_