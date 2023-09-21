#include <stdio.h>

/*
    2.17 (Final Velocity) Write a program that asks the user to enter the initial velocity
    and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the
    final velocity, v, and distance traversed, s, using the following equations.
    a) v = u + at
    b) s = ut + at^2 * 1/2
 */


int main() {
    double v, u, a, t, s;
    printf("%s", "\nType initial velocity, acceleration and time elapsed:\n");
    scanf("%lf %lf %lf", &u, &a, &t);

    v = u + a*t;
    s = u*t + a*t*t/2;

    printf("Final velocity is: %lf\n", v);
    printf("Distance traversed is: %lf\n", s);


    return 0;
}
