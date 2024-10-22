#include <iostream>

static const float  e0 = 1;
#define PI  22/7

float force (float q1, float q2, float r1, float r2)
{
    return 1 / (4 * PI * e0) * q1 * q2 / (r2 - r1) * (r2 - r1);
}

int main()
{

    float m = 1;
    float q1, q2 = 1;
    float r1 = 1, r2 = 2;
    float dt = 0.00001;
    float f =  force (1,1,1,2);

    float a  = f / m;

    float v = 0;

    v = v + a * dt;
     

    return 0;
}