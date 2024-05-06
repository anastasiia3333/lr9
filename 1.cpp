#include <iostream>
#include <string>
using namespace std;

enum  WeightUnit { Pounds, Kilograms, Tons };
enum EngineType { Propeller, Jet };
enum GasType { Hydrogen, Helium };

class Airship
{
protected:
    int passengers;
    double cargo;
    WeightUnit cargoUnit;

public:
    Airship(int p, double c, WeightUnit _cargoUnit) : passengers(p), cargo(c), cargoUnit(_cargoUnit) {}

    void show() const
    {
        cout << "Passengers: " << passengers << endl;
        cout << "Cargo: " << cargo;
        switch (cargoUnit)
        {
        case WeightUnit::Pounds:
            cout << " lbs"; break;
        case WeightUnit::Kilograms:
            cout << " kg"; break;
        case WeightUnit::Tons:
            cout << " tons"; break;
        }
        cout << endl;
    }
};

class Airplane : public Airship
{
private:
    EngineType engineType;
    double range;

public:
    Airplane(int p, double c, WeightUnit _cargoUnit, EngineType e, double r)
        : Airship(p, c, _cargoUnit), engineType(e), range(r) {}

    void show() const
    {
        cout << "Airplane Information" << endl;
        Airship::show();
        cout << "Engine Type: ";
        switch (engineType)
        {
        case EngineType::Propeller:
            cout << "Propeller"; break;
        case EngineType::Jet:
            cout << "Jet"; break;
        }
        cout << endl;
        cout << "Range: " << range << " miles" << endl;
    }
};

class Balloon : public Airship
{
private:
    GasType gasType;
    double maxAltitude;

public:
    Balloon(int p, double c, WeightUnit _cargoUnit, GasType g, double mA)
        : Airship(p, c, _cargoUnit), gasType(g), maxAltitude(mA) {}

    void show() const
    {
        cout << "Balloon Information" << endl;
        Airship::show();
        cout << "Gas Type: ";
        switch (gasType)
        {
        case GasType::Hydrogen:
            cout << "Hydrogen"; break;
        case GasType::Helium:
            cout << "Helium"; break;
        }
        cout << endl;
        cout << "Max Altitude: " << maxAltitude << " feet" << endl;
    }
};

int main()
{
    Airplane plane(200, 8000, WeightUnit::Pounds, EngineType::Jet, 2000);
    Balloon balloon(2, 500, WeightUnit::Tons, GasType::Helium, 10000);
    cout << "Airplane Details:" << endl;
    plane.show();
    cout << endl;
    cout << "Balloon Details:" << endl;
    balloon.show();

    return 0;
}

