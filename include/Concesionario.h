//Clase Concesionario.

#include <string.h>
#include <vector>
#include "Coche.h"
#include "Cliente.h"

class Concesionario{

    //Atributos:

    private:
        std::string _name_company;
        std::vector<Coche*>_stock;
        std::vector<Coche*>_repairing;

    //Funciones:

    public:

        //Constructor:
    Concesionario(string name);

        //Destructor:
    virtual ~Concesionario(string _name_company){

    }

        //Funciones:
    Coche* searchCarInGarage(std::string license);
    Coche* searchCarInStock(std::string license);
    bool addCarToStock(Coche* car);
    bool sellCar(Cliente* client, std::string license);
    bool checkCarInGarage(Cliente* client, std::string license);
    bool retrieveCarFromGarage(Cliente* client, std::string license);
};