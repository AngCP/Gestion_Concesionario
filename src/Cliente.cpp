#include <iostream>
#include "Cliente.h"
#include <vector>

    //Constructor:
    Cliente(string _name){
        this->_name = _name;
    }
    
    //Getters y Setters:
    
    std::string Cliente::getName(){
        return _name;
    }
    unsigned int Cliente::getMoneyAmount(){
        return _money;
    }
    void Cliente::addMoney(unsigned int amount){
        _money += amount;
    }
    void Cliente::expendMoney(unsigned int amount){
        _money -= amount;
    }

    //Función searchCar():
            /*!
                \brief Busca un coche en el stock del cliente.
                @returns el coche en cuestión, NULL si no lo encuentra.

            */

    Coche Cliente::searchCar(std::string licence){
        std::vector<Coche*>::iterator search_pos = _cars.begin();
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

    bool Cliente::addCar(Coche* car){
        if(searchCar(car->getLicense()) == NULL){
            //Si el coche no se encuentra en la lista, lo añade y devuelve true.
            _cars.push_back(car);
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

    bool Cliente::removeCar(std::string licence){
        Coche* eliminable = searchCar(car->getLicense();
        if(eliminable != NULL)){
            //Si el coche está en la lista, lo elimina y devuelve true.
            std::vector<Coche*>::iterator position = 
                std::find(_cars.begin(), _cars.end(), eliminable);
            _cars.erase(position);
            return true;
        }
            //Si el coche no está en la lista, devuelve false.
            return false;
    }