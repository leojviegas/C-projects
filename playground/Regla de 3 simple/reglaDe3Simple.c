#include <stdio.h>
#include <math.h>
// Regla de 3 compuesta
int main()
{
    double x;
    double a = 59272.0;     double b = 59267.0;          double c = 59271.0;
    double d;               double e = 3.14159265353;   double f = 3.141592653538;


    x = 1.0/44100.0;
    //printf("%.30f", x);

    return 0;

double angularFrequency = 2764.601535159017928;
double time = 0.000022675736961451248;
double sin =(double)angularFrequency * time;
printf("\n%.50f", sin);
}