/*

//Erwthma 3

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "Please give the dimensions of the table." << endl;
    int N, M;
    cin >> N >> M;
    const int K = N, L = M;
    cout << "First set of numbers: " << endl;
    int first[K][L], second [K][L];
    int i, j;
    for (i=0; i<K; i++)
    {
        cout << "Enter two integers: " << i+1 << endl;
        for(j=0; j<L; j++)
            cin >> first[i][j];
    }

    cout << "\n\n\nSecond set of numbers: " << endl;
    for (i=0; i<K; i++)
    {
        cout << "Enter two more integers: " << i+1 << endl;
        for(j=0; j<L; j++)
        {
            cin >> second[i][j];
        }
    }

    for(i=0; i<K; i++)
    {
        for(j=0; j<L; j++)
            first[i][j] = first[i][j] + second [i][j];
    }

    for(i=0; i<K; i++)
    {
        cout << endl;
        for(j=0; j<L; j++)
            cout << first[i][j] << " ";
    }

    for(i=0; i<K; i++)
    {
        cout << endl;
        for(j=0; j<L; j++)
            cout << second[i][j] << " ";
    }

    return 0;
}
*/

#include <iostream>

using namespace std;

class Kouti
{
    public:

        Kouti(){}

        Kouti(double x, double y, double z)
        :length(x),
         breadth(y),
         height(z)
        {

        }

        double calculateOgkos()
        {

            return length * breadth * height;
        }

       Kouti operator+(const Kouti& b)
        {
            Kouti kouti;
            kouti.length = this->length + b.length;
            kouti.breadth = this->breadth + b.breadth;
            kouti.height = this->height + b.height;
            return kouti;
        }

        void setMikos(double m)
        {
            length = m;
        }

        void setPlatos(double p)
        {
            breadth = p;
        }

        void setYpsos(double y)
        {
            height = y;
        }

    private:
        double length;
        double breadth;
        double height;
};

int main()
{
    Kouti KoutiA(2.0, 3.2, 6.0);
    Kouti KoutiB(2.5, 4.0, 5.0);

    Kouti KoutiC;

    KoutiC = KoutiA + KoutiB;

    cout << "O ogkos gia to Kouti A einai : "
         << KoutiA.calculateOgkos()
         << endl;

    cout << "O ogkos gia to Kouti B einai : "
         << KoutiB.calculateOgkos()
         << endl;

    cout << "O ogkos gia to Kouti C einai : "
         << KoutiC.calculateOgkos()
         << endl;

    return 0;
}

























