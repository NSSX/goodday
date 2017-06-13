#include "Weapon.hpp"

void Weapon::setType(std::string nType){
   this->type = nType;
}

const std::string &Weapon::getType() {
    return(this->type);
}

Weapon::Weapon(std::string lType) : type(lType){

    return;
}

Weapon::~Weapon(void){

    return;
}
