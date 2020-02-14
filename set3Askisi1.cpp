#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Vehicle
{
    public:
        int wheels;
        int max_speed;
        string model;

        virtual ~Vehicle(){}

        virtual void print_info()
        {
            cout << "This is function print_info() in Vehicle (parent class)" << endl;
        }
};

class Car: public Vehicle
{
    public:
        int doors;
        int passengers;

        void print_info()
        {
            cout << "This is function print_info() in Car (child class)" << endl;
        }
};

class Bike: public Vehicle
{
    public:
        string owner;
        bool hasLights;

        void print_info()
        {
            cout << "This is function print_info() in Bike (child class)" << endl;
        }
};

class Truck: public Vehicle
{
    public:
        float cargo_weight;
        int allowed_speed;

        void print_info()
        {
            cout << "This is function print_info() in Truck (child class)" << endl;
        }
};

int main()
{
    /*

    //st.

    Vehicle *v1[4];

    v1[0] = new Vehicle;
    v1[1] = new Car;
    v1[2] = new Bike;
    v1[3] = new Truck;

    for(int i=0; i<4; i++)
    {
        v1[i]->print_info();
    }

    delete v1;

    system("pause");

    return 0;

    */

    vector<Vehicle*> v1;
    v1.push_back(new Vehicle);
    v1.push_back(new Car);
    v1.push_back(new Bike);
    v1.push_back(new Truck);

    for(unsigned int i=0; i<v1.size(); i++)
    {
        v1.at(i)->print_info();
    }

    v1.clear();

    vector<Vehicle*> ::iterator it = v1.begin();
    while(it!=v1.end())
    {
        delete *it;
        int v;
        v++;
    }

    system("pause");

    return 0;
}
