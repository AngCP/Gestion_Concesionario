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

    //Métodos:

        //Método constructor:
    Cliente(string _name);

        //Getters y Setters:
    
    std::string getName();

        //Otros métodos:
    
    void addMoney(unsigned int amount);
    void expendMoney(unsigned int amount);
    unsigned int getMoneyAmount(){
        return money;
    }

        //Método searchCar():
            /*!
                \brief Busca un coche en el parque del cliente.
                @returns el coche en cuestión, NULL si no lo encuentra.

            */

    Coche searchCar(std::string licence);

        //Método addCar():
            /*!
                \brief Añade un nuevo coche.
                @returns true si se añade correctamente, false si el coche ya
                estaba añadido.
            */

    bool addCar(Coche* car);
    
        //Método removeCar():
            /*!
                \brief Elimina un coche. del parque del cliente.
                @returns true si se elimina correctamente, false si no estaba en
                la lista.
            */

    bool removeCar(std::string licence);

        //Método destructor:

    virtual ~Cliente(void){

    }
};