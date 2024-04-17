namespace Math
{
    const static float PI =      3.14159265359;
    const static float HALF_PI = 1.570796326795;

    template<typename T>
    T pow2(T a)
    {
        return (a * a);
    }

    template<typename T>
    T pow(T a, int n)
    {
        float num = a;
        for(int i = 1; i < n; i++)
        {
            num = num * a;
        }
        return num;
    }

    template<typename T>
    T max(T a, T b)
    {
        return a > b ? a : b;
    }

    template<typename T>
    T abs(T a)
    {
        return a < 0 ? (a * -1) : (a);
    }

    double sqrt(double a)
    {
        double error = 0.00001;
        double s = a;

        while ((s - a / s) > error)
        {
            s = (s + a / s) / 2;
        }
        return s;
    }

    double toRadians(double degrees)
    {
        return degrees * 0.0174533;
    }

    double toDegrees(double radians)
    {
        return radians * 57.29578;
    }

    template<typename T>
    T factorial(T a)
    {
        T result = 0;
        while(a > 1)
        {
            result *= a;
            a -= 1;
        }
        return result;
    }

    double sin(double x)
    {
        double t = x;
        double sine = t;
        for ( int a=1; a<7; a++)
        {
            double mult = -x*x/((2*a+1)*(2*a));
            t *= mult;
            sine += t;
        }
        return sine;
    }

    double cos(double a)
    {
        return (sin(a + HALF_PI));
    }

    double tan(double a)
    {
        return (sin(a) / cos(a));
    }

    long floor(float a)
    {
        return a >= 0.0f ? long(a) : (long(a) - 1);
    }

    long ceil(float a)
    {
        return long(a);
    }

    float areaOfCircle(float r)
    {
        return (PI * pow2(r));
    }

    float radiusOfCircle(float C)
    {
        return (C / (2 * PI));
    }

    class Vec3
    {
    public:
        float x;
        float y;
        float z;

        void vecPow2()
        {
            this->x *= this->x;
            this->y *= this->y;
            this->z *= this->z;
        }

        Vec3 operator=(const Vec3& a)
        {
            this->x = a.x;
            this->y = a.y;
            this->z = a.z;
            return *this;
        }

        Vec3 operator=(float a)
        {
            this->x = a;
            this->y = a;
            this->z = a;
            return *this;
        }

        Vec3 operator+(const Vec3& a)
        {
            Vec3 temp;
            temp.x = this->x + a.x;
            temp.y = this->y + a.y;
            temp.z = this->z + a.z;
            return temp;
        }

        Vec3 operator+(float a)
        {
            Vec3 temp;
            temp.x = this->x + a;
            temp.y = this->y + a;
            temp.z = this->z + a;
            return temp;
        }

        Vec3 operator-(const Vec3& a)
        {
            Vec3 temp;
            temp.x = this->x - a.x;
            temp.y = this->y - a.y;
            temp.z = this->z - a.z;
            return temp;
        }

        Vec3 operator-(int a)
        {
            Vec3 temp;
            temp.x = this->x - a;
            temp.y = this->y - a;
            temp.z = this->z - a;
            return temp;
        }

        Vec3 operator*(const Vec3& a)
        {
            Vec3 temp;
            temp.x = this->x * a.x;
            temp.y = this->y * a.y;
            temp.z = this->z * a.z;
            return temp;
        }

        Vec3 operator*(float a)
        {
            Vec3 temp;
            temp.x = this->x * a;
            temp.y = this->y * a;
            temp.z = this->z * a;
            return temp;
        }

        Vec3 operator/(const Vec3& a)
        {
            Vec3 temp;
            temp.x = this->x / a.x;
            temp.y = this->y / a.y;
            temp.z = this->z / a.z;
            return temp;
        }

        Vec3 operator/(float a)
        {
            Vec3 temp;
            temp.x = this->x / a;
            temp.y = this->y / a;
            temp.z = this->z / a;
            return temp;
        }

        float distanceTo(Vec3 a)
        {
            float d = sqrt(pow2(this->x - a.x) + pow2(this->y - a.y) + pow2(this->z - a.z));
            return d;
        }
    };

    class Vec2
    {
    public:
        float x;
        float y;

        void vecPow2()
        {
            this->x *= this->x;
            this->y *= this->y;
        }

        Vec2 operator=(const Vec2& a)
        {
            this->x = a.x;
            this->y = a.y;
            return *this;
        }

        Vec2 operator=(float a)
        {
            this->x = a;
            this->y = a;
            return *this;
        }

        Vec2 operator-(const Vec2& a)
        {
            Vec2 temp;
            temp.x = this->x - a.x;
            temp.y = this->y - a.y;
            return temp;
        }

        Vec2 operator-(float a)
        {
            Vec2 temp;
            temp.x = this->x - a;
            temp.y = this->y - a;
            return temp;
        }

        Vec2 operator+(const Vec2& a)
        {
            Vec2 temp;
            temp.x = this->x + a.x;
            temp.y = this->y + a.y;
            return temp;
        }

        Vec2 operator+(float a)
        {
            Vec2 temp;
            temp.x = this->x + a;
            temp.y = this->y + a;
            return temp;
        }

        Vec2 operator*(const Vec2& a)
        {
            Vec2 temp;
            temp.x = this->x * a.x;
            temp.y = this->y * a.y;
            return temp;
        }


        Vec2 operator*(float a)
        {
            Vec2 temp;
            temp.y = this->y * a;
            temp.x = this->x * a;
            return temp;
        }

        Vec2 operator/(const Vec2& a)
        {
            Vec2 temp;
            temp.x = this->x / a.x;
            temp.y = this->y / a.y;
            return temp;
        }

        Vec2 operator/(float a)
        {
            Vec2 temp;
            temp.x = this->x / a;
            temp.y = this->y / a;
            return temp;
        }

        float distanceTo(Vec2 a)
        {
            float d = sqrt(pow2(this->x - a.x) + pow2(this->y - a.y));
            return d;
        }
    };

    class Matrix4x4
    {
    public:
        float mat[4][4];

        Matrix4x4 operator=(Matrix4x4 a)
        {
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    this->mat[i][j] = a.mat[i][j];
                }
            }
            return *this;
        }

        Matrix4x4 operator=(float a)
        {
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    this->mat[i][j] = a;
                }
            }
            return *this;
        }

        Matrix4x4 operator+(Matrix4x4 a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] + a.mat[i][j];
                }
            }
            return temp;
        }

        Matrix4x4 operator+(float a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] + a;
                }
            }
            return temp;
        }

        Matrix4x4 operator-(Matrix4x4 a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] - a.mat[i][j];
                }
            }
            return temp;
        }

        Matrix4x4 operator-(float a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] - a;
                }
            }
            return temp;
        }

        Matrix4x4 operator*(Matrix4x4 a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] * a.mat[i][j];
                }
            }
            return temp;
        }

        Matrix4x4 operator*(float a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] * a;
                }
            }
            return temp;
        }

        Matrix4x4 operator/(Matrix4x4 a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    if(a.mat[i][j] == 0)
                        a.mat[i][j] = 1;
                    temp.mat[i][j] = this->mat[i][j] / a.mat[i][j];
                }
            }
            return temp;
        }

        Matrix4x4 operator/(float a)
        {
            Matrix4x4 temp;
            for(int i = 0; i < 4; i++)
            {
                for(int j = 0; j < 4; j++)
                {
                    temp.mat[i][j] = this->mat[i][j] / a;
                }
            }
            return temp;
        }
    };
};

