#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap &copy);
        ScavTrap& operator = (ScavTrap& obj);
        ~ScavTrap(void);
        void guardGate();
        void attack(const std::string& target);
};
#endif