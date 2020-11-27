//Clase Coche.

#include <string.h>

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
    Coche(std::string license);

        //Getters y Setters:
    int getPrice(){
        return price;
    }

        //Status methods:
    bool isOk(){
        return ok;
    }

    void toggleOk(status o){
        ok = o;
    }

    bool isBroken(){
        return broken;
    }

    void toggleBroken(status b){
        broken = b;
    }

    bool isRepairing(){
        return repairing;
    }

    void toggleRepairing(status rp){
        repairing = rp;
    }

    bool isReady(){
        return ready;
    }

    void toggleReady(status rd){
        ready = rd;
    }

        //Destructor:
    virtual ~Coche(void){

    }
};