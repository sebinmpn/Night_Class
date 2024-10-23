        #include<iostream>
        #include<fstream>

        #define pi 22/7 

        static float const e0 = 1; //static memory

        float force(float q1, float q2, float r2, float r1)
        {
            return 1 / (4 * pi * e0) * pi * q2 / ( r2 - r1 ) * ( r2 - r1 ); //r^2 
        }

        int main()
        {
            float m = 1;
            float q1 = 1 , q2 = 1;
            float r1 = 1 , r2 = 2;
            float dt = 0.00001;
            float f = force(1,1,2,1); 

            float a = f / m; // accerlation  

            float v = 0;
            v = v + a * dt; //velocity

            float s = v*dt; //distance 

            std::cout<< s <<std::endl;
            return 0;
        }
