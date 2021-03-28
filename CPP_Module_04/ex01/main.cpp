#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "MegaMutant.hpp"
#include "SuperMutant.hpp"

int main()
{
	//Character* me = new Character("me");

	//std::cout << *me;

	//Enemy* b = new RadScorpion();

	//AWeapon* pr = new PlasmaRifle();
	//AWeapon* pf = new PowerFist();

	//me->equip(pr);
	//std::cout << *me;
	//me->equip(pf);

	//me->attack(b);
	//std::cout << *me;
	//me->equip(pr);
	//std::cout << *me;
	//me->attack(b);
	//std::cout << *me;
	//me->attack(b);
	//std::cout << *me;

	//delete me;
	//if (b->getHP() != 0)
	//	delete b;
	//delete pr;
	//delete pf;

	Character *superman = new Character("SuperMan");
	std::cout << *superman;

	Enemy *first = new SuperMutant();

	superman->attack(first);

	AWeapon *plasma = new PlasmaRifle();
	superman->equip(plasma);
	std::cout << *superman << std::endl;

	for (size_t i = 0; i < 8; i++)
	{
		superman->attack(first);
		std::cout << *superman << std::endl;
	}

	superman->recoverAP();

	for (size_t i = 0; i < 2; i++)
	{
		superman->attack(first);
		std::cout << *superman << std::endl;
	}

	superman->recoverAP();
	superman->recoverAP();
	superman->recoverAP();
	superman->recoverAP();

	delete plasma;

	Enemy *second = new MegaMutant();
	AWeapon *power = new PowerFist();
	superman->equip(power);
	std::cout << *superman << std::endl;

	for (size_t i = 0; i < 4; i++)
	{
		superman->attack(second);
		std::cout << *superman << std::endl;
	}

	delete power;

	return 0;
}
