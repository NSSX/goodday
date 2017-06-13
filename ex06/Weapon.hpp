#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{

public:
    std::string type;
    void setType(std::string nType);
    const std::string	&getType() ;

    Weapon(std::string lType);
    ~Weapon(void);
};
#endif
