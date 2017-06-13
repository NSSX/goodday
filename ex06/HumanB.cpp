#include "HumanB.hpp"

void HumanB::attack(){

	if (this->mWeapon == NULL)
		return;
    std::cout << this->name << " attacks with this " << this->mWeapon->getType() << std::endl;
    return;
}

void HumanB::setWeapon(Weapon &newWeapon){
    this->mWeapon = &newWeapon;
    return;
}

HumanB::HumanB(std::string lName) : name(lName), mWeapon(NULL){

    return;
}

HumanB::~HumanB(void){

    return;
}
