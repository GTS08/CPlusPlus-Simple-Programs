/*

//Erwthma 1

#include <stdlib.h>
#include <time.h>

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    int i;

    srand(time (0));

    cout << "vector size = " << vec.size() << endl;

    for(i=0; i<7; i++)
    {
        vec.push_back(rand()%100 + 1);
    }

    cout << "extended vector size = " << vec.size() << endl;

    vector<int>::iterator v = vec.begin();
    while(v !=vec.end())
    {
        cout << "value of v = " << *v << endl;
        v++;
    }

    vec.resize(10,5);

    cout << "reduced vector size = " << vec.size() << endl;

    return 0;
}
*/

/*

//Erwthma 2

#include <iostream>

using namespace std;

class Kouti
{
    private:
        double mikos = 2.0;
        double platos;
        double ipsos;

    public:
        void setMikos(double mik)
        {
            mikos = mik;
        };

        void setPlatos(double pla)
        {
            platos = pla;
        };

        double getPlatos()
        {
            return platos;
        };

        double getMikos()
        {
            return mikos;
        };

        void setIpsos(double ips);
        double getIpsos();
};

double Kouti::getIpsos()
{
    return ipsos;
}

void Kouti::setIpsos(double ips)
{
    ipsos = ips;
}

int main()
{
    Kouti Small;
    Kouti Big;
    double ogkos = 0.0;

    Small.setPlatos(1.0);
    Small.setIpsos(2.0);

    ogkos = Small.getPlatos() * Small.getIpsos() * Small.getMikos();
    cout << "Ogkos gia Kouti Small: " << ogkos << endl;

    Big.setMikos(12.0);
    Big.setPlatos(13.0);
    Big.setIpsos(10.0);

    ogkos = Big.getPlatos() * Big.getIpsos() * Big.getMikos();
    cout << "Ogkos gia kouti Big: " << ogkos << endl;

    return 0;
}
*/

/*

//Erwthma 3,4

#include <iostream>

using namespace std;

class Polygon
{
    protected:
        int width, height;

    public:
        void set_values (int a, int b)
        {
            width = a; height = b;
        }
};

class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

class Rectangle: public Polygon, public PaintCost
{
    public:
        int area()
        {
            return width * height;
        }
};

class Triangle
{
    private:
        int mikos, platos;
    public:

        void set_values (int a, int b)
        {
            mikos = a; platos = b;
        }

        int area()
        {
            return (mikos * platos) / 2;
        }
};

int main()
{
    Rectangle rect;
    rect.set_values(5,8);
    cout << "Emvadon orthogoniou: " << rect.area() << '\n';

    Triangle tri;
    tri.set_values(6,4);
    cout << "Emvadon trigwnou: " <<  tri.area() << endl;

    cout << "Synoliko kostos xrwmatos: " << rect.getCost(rect.area()) << " euro" << endl;

    return 0;
}
*/

//Erwthma 5

#include <iostream>

using namespace std;

class Polygon
{
    protected:
        int width, height;

    public:
        Polygon(int a= 0, int b=0)
        {
            width = a;
            height = b;
        }

        int area()
        {
            cout << "This is area as computed by the Polygon class" << endl;
        }
};

class Rectangle: public Polygon
{
    public:
        Rectangle(int a=0, int b=0):Polygon(a,b){}

        int area()
        {
            cout << "This is area as computed by the Rectangle class" <<  endl;
            return width * height;
        }
};

int main()
{
    Polygon *polygon;
    Rectangle rec(10,7);

    polygon = &rec;
    polygon->area();

    return 0;
}














