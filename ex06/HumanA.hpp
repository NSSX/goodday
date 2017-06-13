#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{

public:

    std::string name;
    Weapon &mWeapon;

    void attack();

    HumanA(std::string lName, Weapon &lWeapon);
    ~HumanA(void);

};
#endif
