#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ft("WALLE");
	ft.rangedAttack("some target");
	ft.meleeAttack("another target");
	ft.takeDamage(40);
	ft.beRepaired(20);
	FragTrap f("anther oneeeee");
	f.vaulthunter_dot_exe("tg1");
	f.vaulthunter_dot_exe("tg2");
	f.vaulthunter_dot_exe("tg3");
	f.vaulthunter_dot_exe("tg4");
	f.vaulthunter_dot_exe("tg5");
	ScavTrap st("NOT WALLE");
	st.rangedAttack("some target");
	st.meleeAttack("another target");
	st.takeDamage(40);
	st.beRepaired(20);
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	st.challengeNewcomer();
	NinjaTrap nt("turtle");
	nt.ninjaShoebox(nt);
	nt.ninjaShoebox(st);
	nt.ninjaShoebox(f);
	SuperTrap sp("supeeeeeer");
	return (0);
}