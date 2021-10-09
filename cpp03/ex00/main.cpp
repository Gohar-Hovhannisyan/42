#include "FragTrap.hpp"

int main(void)
{
	FragTrap ft = FragTrap("WALLE");
	ft.rangedAttack("some target");
	ft.meleeAttack("another target");
	ft.takeDamage(40);
	ft.beRepaired(20);
	ft.vaulthunter_dot_exe("tg1");
	ft.vaulthunter_dot_exe("tg2");
	ft.vaulthunter_dot_exe("tg3");
	ft.vaulthunter_dot_exe("tg4");
	ft.vaulthunter_dot_exe("tg5");
	return (0);
}