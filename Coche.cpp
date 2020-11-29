#include <iostream>
#include <vector>
#include "Coche.h"

//Getters y Setters:
    int getPrice(){
        return price;
    }

    std::string Coche::getLicense(){
        return _license;
    }

//Status methods:
    bool Coche::isOk(){
        return _status_ok;
    }

    void Coche::toggleOk(status o){
        _status_ok = o;
    }

    bool Coche::isBroken(){
        return _status_broken;
    }

    void Coche::toggleBroken(status b){
        _status_broken = b;
    }

    bool Coche::isRepairing(){
        return _status_repairing;
    }

    void Coche::toggleRepairing(status rp){
        _status_repairing = rp;
    }

    bool Coche::isReady(){
        return _status_ready;
    }

    void Coche::toggleReady(status rd){
        _status_ready = rd;
    }