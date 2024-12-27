#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


// int maina()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

// int main()
// {
// 	maina();
// 	system("leaks Interface_recap");
// }






// int main_a() {
//     std::cout << "--- Testing MateriaSource and Character ---" << std::endl;

//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     //////test learnMateria fuction ->learnMtaeria is called and dont have any free learnedMaterias cases
//     // src->learnMateria(new Ice());
//     // src->learnMateria(new Cure());
//     // src->learnMateria(new Ice());
//     // src->learnMateria(new Ice());
//     // src->learnMateria(new Ice());

//     //////////test function learnMateria ->already have this AMateri case
//     // Ice* ice1 = new Ice();
//     // src->learnMateria(ice1);
//     // src->learnMateria(ice1);
//     // Ice* ice2 = new Ice();
//     // src->learnMateria(ice2);

//     ICharacter* me = new Character("me");

//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     // tmp = new Ice();
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ////////////////test CreateMateria fucntion
//     // tmp = src->createMateria("cure");//
//     // me->equip(tmp);//
//     // tmp = src->createMateria("ice");//
//     // me->equip(tmp);//
//     // tmp = src->createMateria("ice");//
//     // me->equip(tmp);//


//     ICharacter* bob = new Character("bob");

//     me->use(0, *bob); // Ice attack
//     me->use(1, *bob); // Cure spell

//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }

int main_a()
{
    system("leaks Interface");
	return 0;
}


int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* alice = new Character("Alice");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    alice->equip(tmp);
    tmp = src->createMateria("cure");
    alice->equip(tmp);
	 tmp = src->createMateria("cure");
    alice->equip(tmp);

    ICharacter* copy = new Character(*dynamic_cast<Character*>(alice));
    std::cout << "Testing deep copy of Character:" << std::endl;
    copy->use(0, *alice);
    copy->use(1, *alice);
    alice->use(0, *alice);
    alice->use(1, *alice);
    // std::cout << alice->getMateria(0) << " " << copy->getMateria(0) << std::endl;


    delete copy;
    delete alice;
    delete src;
	main_a();
    return 0;
}




// int main() {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());

//     ICharacter* kate = new Character("Kate");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     kate->equip(tmp);

//     std::cout << ":::Using equipped materia:" << std::endl;
//     kate->use(0, *kate);

//     std::cout << ":::Unequipping materia:" << std::endl;
//     kate->unequip(0); // Материалы остаются в памяти, но слот освобождается

//     kate->use(0, *kate); // Слот пустой, ничего не должно произойти

//     delete tmp; // Удаляем вручную, чтобы избежать утечек памяти
//     delete kate;
//     delete src;
// 	main_a();
//     return 0;
// }