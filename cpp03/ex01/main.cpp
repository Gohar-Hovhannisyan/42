#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap st = ScavTrap("NOT WALLE");
	st.rangedAttack("some target");
	st.meleeAttack("another target");
	st.takeDamage(40);
	st.beRepaired(20);
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	return (0);
}