#include <iostream>
#include "Cliente.h"
#include "Coche.h"
#include <vector>

    //Constructor:
    Concesionario(string name){
        this->_name_company = name;
    }
    
    //Función searchCarInGarage:
            /*!
                \brief Busca un coche en el taller.
                @returns el coche en cuestión o NULL si no lo encuentra.
            */
    Coche* Concesionario::searchCarInGarage(std::string license){
        std::vector<Coche* >::iterator search_pos = _repairing.begin();

        while(search_pos != _repairing.end()){
            if(search_pos->getLicense() == license)
                return &*search_pos;
                search_pos++;
        }
        return NULL;       
    }

    //Función searchCarInStock:
            /*!
                \brief Busca un coche en el stock.
                @returns el coche en cuestión o NULL si no lo encuentra.
            */
    Coche* Concesionario::searchCarInStock(std::string license){
        std::vector<Coche* >::iterator search_pos = _stock.begin();

        while(search_pos != _stock.end()){
            if(search_pos->getLicense() == license){
                return &*search_pos;
                search_pos++;
            }
        }
        return NULL;       
    }

        //Función addCarToStock:
            /*!
                \brief Añade un nuevo coche al inventario.
                @returns false si el coche ya estaba en el inventario o en el taller.
            */
    
    bool Concesionario::addCarToStock(Coche* car){
        if(searchCarInStock(car->getLicense()) == NULL){
            //Si el coche no está en el inventario, lo añade:
            _stock.push_back(car);
        }else((searchCarInStock(car->getLicense()) != NULL) || 
                    (searchCarInGarage(car->getLicense()) != NULL)){
            //Si el coche ya estaba en el inventario o está en el taller:
            return false;
        }
    }

        //Función sellCar:
            /*!
                \brief Vende un coche del inventario al usuario y los añade 
                a su lista de coches. Tras ejecutar esta función se quita el coche del inventario.
                @returns false si el coche no está en el inventario o el cliente no puede pagarlo.
            */
    
    bool Concesionario::sellCar(Cliente* client, std::string license){
        Coche* sellable_car = searchCarInStock(license);
        if(sellable_car != NULL){
            /*! Si el coche sí está en el inventario, lo añade a la 
            lista de coches del cliente y, a continuación, lo retira del inventario.*/
            _cars.push_back(selleable_car);

            std::vector<Coche* >::iterator position = 
                std::find(_cars.begin(), _cars.end(), sellable_car);
            _stock.erase(position);
            
        }else((sellable_car == NULL) || (sellale_car->getPrice() > client->getMoneyAmount())){
            //Si el coche no está en el inventario o el cliente no puede pagarlo:
            return false;
        }
    }

        //Función ckeckCarInGarage:
            /*!
                \brief Toma un coche averiado del cliente y lo añade al taller.
                @returns false si el cliente no tiene ese coche o el coche no 
                está averiado.
            */
    
    bool Conceseionario::checkCarInGarage(Cliente* client, std::string license){
        Coche* repairable_car = searchCarInGarage(license);
        if(repairable_car != NULL){
            //Si el cliente tiene ese coche, lo añade:
            _repairing.push_back(repairable_car);

        }else((repairable_car == NULL) || (repairable_car->isOk() == true)){
            //Si el cliente no tiene ese coche o el coche no eestá averiado:
            return false;
        }  
    }

        //Función retrieveCarFromGarage:
            /*!
                \brief Toma un coche listo del taller y se lo devuelve al cliente.
                @returns false si el coche no está en el taller y en estado de listo.
            */
    
    bool Concesionario::retrieveCarFromGarage(Cliente* client, std::string license){
        Coche* check_car = searchCarInGarage(license);
        if((checkCar != NULL) && (check_car->isReady == true)){
            //Si el coche está en el taller y está listo, lo devuelve al cliente:
            std::vector<Coche* >::iterator position = 
                std::find(_repairing.begin(), _repairing.end(), check_car);
            _repairing.erase(position);
            _cars.push_back(ckeck_car;
        }else{
            //Si el coche no está en el taller o no está listo, devuelve false:
            return false;
        }    
    }