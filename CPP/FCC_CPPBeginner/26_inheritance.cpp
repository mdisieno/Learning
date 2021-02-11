#include <iostream>
using namespace std;

//super class as it is being inherited from
class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes bbq pork" << endl;
        }
};

// :public Chef  = inherits all of upper chef
// sub class as it is the one to inherit
class italianChef:public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "the chef makes linguine" << endl;
        }
    
};

int main(){
	
    Chef chef;
    chef.makeSpecialDish();

    italianChef italianChef;
    italianChef.makeSpecialDish();

	return 0;
}


