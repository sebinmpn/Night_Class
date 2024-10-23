        #include<iostream>

        #define pi 22/7 

        static float const e0 = 1; //static memory

        float force(float q1, float q2, float r2, float r1)
        {
            return 1 / (4 * pi * e0) * pi * q2 / ( r2 - r1 ) * ( r2 - r1 ); //r2 
        }

        int main(){

            float m = 1;
            
            float dt = 0.00001;
            float f = (1,1,2,1); 

            float a = f / m ; // accerlation  

            float v = 0;
            v = v + a * dt;

            std::cout<< "position of particle in time is :" << v << std::endl; //  printing the output value

            return 0;
        }
