#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << this->name << " attacks with this " << this->mWeapon.getType() << std::endl;
    return;
}

HumanA::HumanA(std::string lName, Weapon &lWeapon) : name(lName), mWeapon(lWeapon){

    return;
}

HumanA::~HumanA(void){

    return;
}
