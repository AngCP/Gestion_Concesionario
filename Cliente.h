//Clase Cliente.

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string.h>
#include <vector>
#include "Coche.h"

class Cliente{

    //Atributos:

    private:
        std::string _name;
        std::vector<Coche*> _cars;
        unsigned int _money;

    //Funciones:

    public:
        //Constructor:
    Cliente(string _name){
        this->_name = _name;
    }

        //Getters y Setters:
    
    std::string getName();
    unsigned int getMoneyAmount();
    void addMoney(unsigned int amount);
    void expendMoney(unsigned int amount);

        //Otras funciones:
    
    Coche searchCar(std::string licence);
    bool addCar(Coche* car);
    bool removeCar(std::string licence);

        //Destructor:

    virtual ~Cliente(void){
        
    }
};

#endif