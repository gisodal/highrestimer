# High resolution timer

## Synopsis

A easy to use C++ high resolution timer using chrono, all in one header file.

## Usage

Simply include the headerfile "timer.h" in you project.

## Example


    #include <unistd.h>
    #include <stdio.h>
    #include "timer.h"

    int main(){

        unsigned int microseconds = 1234567;
        printf("Sleeping for: %u microseconds\n",microseconds);

        Timer timer;
        timer.Start();
        usleep(microseconds);
        timer.Stop();

        printf("\n");
        printf("Hours        : %14.3lf hrs\n", timer.GetDuration<Timer::Hours>());
        printf("Minutes      : %14.3lf min\n", timer.GetDuration<Timer::Minutes>());
        printf("Seconds      : %14.3lf s\n",   timer.GetDuration<Timer::Seconds>());
        printf("Milliseconds : %14.3lf ms\n",  timer.GetDuration<Timer::Milliseconds>());
        printf("Microseconds : %14.3lf us\n",  timer.GetDuration<Timer::Microseconds>());
        printf("Nanoseconds  : %14.3lf ns\n",  timer.GetDuration<Timer::Nanoseconds>());
    }


output:

    Hours        :          0.000 hrs
    Minutes      :          0.021 min
    Seconds      :          1.235 s
    Milliseconds :       1234.733 ms
    Microseconds :    1234733.181 us
    Nanoseconds  : 1234733181.000 ns

