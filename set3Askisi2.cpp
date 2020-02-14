/*

//Erwthma a.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name = "";
    int km = 1;
    double fuel = 1;

    bool more = true;

    while(more)
    {
        string name2;
        int km2;
        double fuel2;

        cout << "Please enter model and plate: ";
        getline(cin, name2);
        cout << "Please enter km traveled: ";
        cin >> km2;
        cout << "Please enter fuel consumed: ";
        cin >> fuel2;
        string remainder; // read remainder of line
        getline(cin, remainder);


        if (fuel2*100 / km2 < fuel*100 / km)
        {
            fuel = fuel2;
            km = km2;
            name = name2;
        }

        cout << "More data? (y/n)";
        string answear;
        getline(cin, answear);
        if (answear != "y")
            more = false;
    }

    cout << "The most economical car is: " << name
         << " (km: " << km
         << " fuel: " << fuel << ")\n";
    system("pause");
    return 0;
}

*/

#include <iostream>
#include <string>

using namespace std;

class Car
{
    private:
        string name;
        int km;
        double fuel;

    public:
        void read()
        {
            cout << "Please enter model and plate: ";
            getline(cin, name);
            cout << "Please enter km traveled: ";
            cin >> km;
            cout << "Please enter fuel consumed: ";
            cin >> fuel;
            string remainder;
            getline(cin, remainder);
        }

        /*

        //Erwthma g.

        void print() const
        {
            cout << name
                 << " (km: " << km
                 << " fuel: " << fuel << ")\n";
        }

        */

        friend void print(Car &car);

        /*

        //Erwthma b.

        bool is_better_than(Car &car)
        {
            if (fuel*100 / km < car.fuel*100 / car.km)
                return true;
            else
                return false;
        }

        */

        Car operator>(Car car)
        {
            Car newCar;
            if (fuel*100 / km < car.fuel*100 / car.km)
                newCar.fuel = fuel;
                newCar.km = km;
                newCar.name = name;
                return newCar;
        }

};

void print(Car &car)
{
    cout << car.name
         << " (km: " << car.km
         << " fuel: " << car.fuel << ")\n";
}

int main()
{
    Car car1;
    car1.read();

    bool more = true;

    while (more)
    {
        Car car2;
        car2.read();

        /*

        //Erwthma b.

        if (car2.is_better_than(car1))
            car1 = car2;

        */

        car1 = car1 > car2;

        cout << "More data? (y/n) ";
        string answear;
        getline(cin, answear);
        if (answear != "y")
            more = false;
    }

    cout << "The most economical car is: ";
    print(car1);

    return 0;
}
