//Clase Cliente.

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

        //Constructor:
    Cliente(string _name);

        //Getters y Setters:
    
    std::string getName();

        //Otras funciones:
    
    void addMoney(unsigned int amount);
    void expendMoney(unsigned int amount);
    unsigned int getMoneyAmount(){
        return money;
    }

        //Función searchCar():
            /*!
                \brief Busca un coche en el stock del cliente.
                @returns el coche en cuestión, NULL si no lo encuentra.

            */

    Coche searchCar(std::string licence){
        std:vector<Coche*>::iterator search_pos = _cars.begin();
        while(search_pos != _cars.end()){
            if((*search_pos)->getLicense() == license) //Si encuentra el coche.
                return &*search_pos;
                search_pos++;
            return NULL;
        }
    }

        //Función addCar():
            /*!
                \brief Añade un nuevo coche.
                @returns true si se añade correctamente, false si el coche ya
                estaba añadido.
            */

    bool addCar(Coche* car){
        if(searchCar(car->getLicense()) == NULL){
            //Si el coche no se encuentra en la lista, lo añade y devuelve true.
            _car.push_back(car);
            return true;
        }
        //Si el coche no estaba en la lista, devuelve false.
        return false;
    }
    
        //Función removeCar():
            /*!
                \brief Elimina un coche. del parque del cliente.
                @returns true si se elimina correctamente, false si no estaba en
                la lista.
            */

    bool removeCar(std::string licence){
        Coche* eliminable = NULL;
        if(eliminable = searchCar(car->getLicense()) != NULL){
            //Si el coche está en la lista, lo elimina y devuelve true.
            std::vecto<Coceh*>::iterator position = 
                std::find(_cars.begin(), _cars.end(), eliminable);
            _car.erase(position);
            return true;
        }
            //Si el coche no está en la lista, devuelve false.
            return false;
    }

        //Destructor:

    virtual ~Cliente(void){

    }
};