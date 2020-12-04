//Clase Coche.

#ifndef COCHE_H
#define COCHE_H
#include <string.h>
#include <vector>
#include "Cliente.h"

class Coche{

    /*! Posibles eatados del coche.*/

    enum status{
        _status_ok, /*!<Situación normal.*/
        _status_broken, /*!<El coche debe ir al taller.*/
        _status_repairing, /*!<El coche está siendo reparado en el taller.*/
        _status_ready, /*!<El coche ha sido reparado y el dueño puede recogerlo.*/
    };

    //Atributos:

    private:
        std::string _license;
        status _status;
        unsigned int price;
    
    //Funciones:

    public:

        //Constructor:
    Coche(std::string license){
        this->_license = license;
    }

        //Getters y Setters:
    int getPrice();
    std::string getLicense();

        //Status methods:
    bool isOk(); 
    void toggleOk(status o);
    bool isBroken();
    void toggleBroken(status b);
    bool isRepairing();
    void toggleRepairing(status rp);
    bool isReady();
    void toggleReady(status rd);


        //Destructor:
    virtual ~Coche(void){

    }
};

#endif