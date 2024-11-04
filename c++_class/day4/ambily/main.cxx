#include<iostream>

#define pi 22/7 // for defining no semicolon and equal is needed
static const float e0 = 1; // to store in RAM

float force (float q1, float q2, float r1, float r2)

{
    return 1 / ( 4 * pi * e0 ) * q1 * q2 / ( r2 - r1) * ( r2- r1);
}


int main ()
{
    float r1 = 1, r2 = 2;
    float  q1 = 1 , q2 = 1;
    float q = 1;
    float m = 1 ;
    float dt = 0.001;
    float f = force(1,1,1,2);

    float a = f / m ; // accelaration

    float v = 0; //initial condition

    v = v + a * dt; // velocity

    float s = v * dt;

    std :: 



} 




