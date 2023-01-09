#include <iostream>


main()
{
	std::string userin = "";

	std::cout << "Введите имя: ";
	std::getline(std::cin, userin);
	std::cout << "Здравствуйте, " << userin << "!" << std::endl;

	return 0;
}
