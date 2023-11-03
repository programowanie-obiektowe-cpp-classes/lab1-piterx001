class Wektor2D
{
    public:

    int populacja(){return num_wek;};

    Wektor2D(int wspx, int wspy)
    {
    ++num_wek;
    setX(wspx);
    setY(wspy);
    std::cout <<"Utworzono wektor o x ="<<x<<"; y = "<<y<<std::endl;
    }

    Wektor2D() {setX(0); setY(0);}

    static Wektor2D kart(double x, double y)
    {
        return Wektor2D(x, y);
    }
   
    static Wektor2D bieg(double r, double alfa)
    {   
        int x, y;
        x = r*cos(alfa);
        y = r*sin(alfa);
        return Wektor2D(x, y);
    } 

    void norm()
    {
        double norma;
        norma = sqrt(x*x+y*y);
        std::cout <<"Norma wynosi "<<norma<<std::endl;
    }
    void print()
    {
        std::cout<<"Wspołrzędne wektora to x = "<<x<<"; y = "<<y<<std::endl;
    } 
    
    ~Wektor2D()
    {
        //--num_wek;
        std::cout<<"Usunięto wektor o x ="<<x<<"; y = "<<y<<std::endl;
    }
    //Informer cd;

  
    void setY(int wspy){y = wspy;};
    void setX(int wspx){x = wspx;};
    int getX(){return x;};
    int getY(){return y;};

    private:
    int x;
    int y;
    static int num_wek;
};

