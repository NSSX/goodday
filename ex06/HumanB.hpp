#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{

public:
    std::string name;
    Weapon *mWeapon;

    void attack();
    void setWeapon(Weapon &newWeapon);
    HumanB(std::string lName);
    ~HumanB(void);
};
#endif
