
#include <iostream>

using namespace std;

// Car industry
class CarIndustry {
    public:
        string CarBrend, CarModel, CarCountry, CarSellCountry;
        
        CarIndustry(string carBrend, string carModel, string carCountry) {
            CarBrend = carBrend;
            CarModel = carModel;
            CarCountry = carCountry; 
            cout << " Name : " << CarBrend << endl;
            cout << " Model : " << CarModel << endl;
            cout << " Manufacturing country : " << CarCountry << endl;
        }
        
        virtual void carMove()=0;
};

// Car feature
class CarFeature {
    public:
        void carFeatures(int topSpeed, string color, string engine, int doors, int transmission, int price) {
            cout << " Top speed : " << topSpeed << " km/h" << endl;
            cout << " Color : " << color << endl;
            cout << " Engine : " << engine << endl;
            cout << " Doors : " << doors << endl;
            cout << " Transmission : " << transmission << endl;
            cout << " Price : " << price << " $" << endl;
        }
};

// Country for sale
class Country {
    public:
        void getCountry(string name) {
            cout<< " The country where the car was sold is : " << name << endl;
            cout<< endl;
        }
};

class Bugatti: public CarIndustry, public CarFeature, public Country {
    public:
        Bugatti(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
        
};

class Ferrari: public CarIndustry, public CarFeature, public Country {
    public:
        Ferrari(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
};
class Lamborghini: public CarIndustry, public CarFeature, public Country {
    public:
        Lamborghini(string carBrend, string carModel, string carCountry): CarIndustry(carBrend, carModel, carCountry) {
        
        }
        
        void carMove() {
            cout << " " << CarBrend << " can move" << endl;
        }
};
    


int main()
{ 

Bugatti bugatti("Bugatti", "Veiron", "France");
bugatti.carFeatures(431, "Black", "8.0 L", 2, 7, 1599950);
bugatti.carMove();
bugatti.getCountry("United Arab Emirates");

Ferrari ferrari("Ferrari", "F8 spider", "Itally");
ferrari.carFeatures(340, "Red", "3.9 L", 2, 7, 274280);
ferrari.carMove();
ferrari.getCountry("USA States");

Lamborghini lamborghini("Lamborghini", "Murciélago LP 670 –4 SuperVeloce", "Itally");
lamborghini.carFeatures(342, "Orange", "6.5 L", 2, 7, 450000);
lamborghini.carMove();
lamborghini.getCountry("United Arab Emirates");


    return 0;
}
