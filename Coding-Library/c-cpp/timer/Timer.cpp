// _TIMER_H_
#include "./Timer.h"

#include <chrono>
#include <iostream>

void Timer::stop()
{
    auto tEndTimePoint = std::chrono::high_resolution_clock::now();

    const auto start = std::chrono::time_point_cast<std::chrono::microseconds>(tStartTimePoint).time_since_epoch();
    const auto end = std::chrono::time_point_cast<std::chrono::microseconds>(tEndTimePoint).time_since_epoch();

    auto duration = (end - start).count();
    double ms = duration * 10e-4;
    std::cout << "time elapsed: " << ms << " ms" << std::endl;
}

Timer::Timer()
{
    tStartTimePoint = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
    stop();
}

// !_TIMER_H_