#include<iostream>
  
#define pi 22/7
  
static const float e0 = 1;
  
float force (float q1, float q2, float r1, float r2);
  
int main()
{
  float q1 = 1;
  float q2 = 1;
  float e0 = 1;
  float r1 = 1;
  float r2 = 2;
  float F12;
  float m = 1;
  float r21 = r2-r1;

  F12 = 1 / (4 * pi * e0) * q1 * q2 / (r21 * r21);
}

