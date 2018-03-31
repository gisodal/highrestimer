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

    timer.Add();

    printf("\n");
    printf("Total hours        : %14.3lf hrs\n", timer.GetTotal<Timer::Hours>());
    printf("Total minutes      : %14.3lf min\n", timer.GetTotal<Timer::Minutes>());
    printf("Total seconds      : %14.3lf s\n",   timer.GetTotal<Timer::Seconds>());
    printf("Total milliseconds : %14.3lf ms\n",  timer.GetTotal<Timer::Milliseconds>());
    printf("Total microseconds : %14.3lf us\n",  timer.GetTotal<Timer::Microseconds>());
    printf("Total nanoseconds  : %14.3lf ns\n",  timer.GetTotal<Timer::Nanoseconds>());

    unsigned int ms = 1234;
    printf("\nAdded %u ms\n",ms);
    timer.Add<Timer::Milliseconds>(ms);

    printf("\n");
    printf("Total hours        : %14.3lf hrs\n", timer.GetTotal<Timer::Hours>());
    printf("Total minutes      : %14.3lf min\n", timer.GetTotal<Timer::Minutes>());
    printf("Total seconds      : %14.3lf s\n",   timer.GetTotal<Timer::Seconds>());
    printf("Total milliseconds : %14.3lf ms\n",  timer.GetTotal<Timer::Milliseconds>());
    printf("Total microseconds : %14.3lf us\n",  timer.GetTotal<Timer::Microseconds>());
    printf("Total nanoseconds  : %14.3lf ns\n",  timer.GetTotal<Timer::Nanoseconds>());


    printf("\nResetting\n",ms);
    timer.Reset();

    printf("\n");
    printf("Total hours        : %14.3lf hrs\n", timer.GetTotal<Timer::Hours>());
    printf("Total minutes      : %14.3lf min\n", timer.GetTotal<Timer::Minutes>());
    printf("Total seconds      : %14.3lf s\n",   timer.GetTotal<Timer::Seconds>());
    printf("Total milliseconds : %14.3lf ms\n",  timer.GetTotal<Timer::Milliseconds>());
    printf("Total microseconds : %14.3lf us\n",  timer.GetTotal<Timer::Microseconds>());
    printf("Total nanoseconds  : %14.3lf ns\n",  timer.GetTotal<Timer::Nanoseconds>());

    return 0;
}

