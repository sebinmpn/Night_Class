        #include<iostream>

        #define pi 22/7 

        static float const e0 = 1; //static memory

        float force(float q1, float q2, float r2, float r1)
        {
            return 1 / (4 * pi * e0) * pi * q2 / ( r2 - r1 ) * ( r2 - r1 ); //r2 
        }

        int main(){
            float m = 1;
            float q1 , q2 = 1;
            float r1 = 1 , r2 = 2;
            float dt = 0.00001;
            

        }
