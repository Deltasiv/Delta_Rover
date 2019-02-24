#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

struct error
{
	public:
		
		enum errors
		{

			ERRORNO1 = 7, // Internal error
			ERRORNO2 = 2, // External error
			ERRORNO3 = 5 // Other error

		};

};

std::string ERRORgen = {"ERROR "};
std::string admin = {"Delta Siv"};

int start_func(void)
{

	error fehler;

	std::ostringstream(s1);
	s1 << ERRORgen << fehler.ERRORNO1;
	std::string s2error = s1.str();

	auto num = 0;
	auto limit = 3;

	std::string pass;
	std::string pepper;

	std::cout << "Welcome..." << std::endl;
      	std::cout << "\n\nPlease enter the password: " << std::endl;

	std::ifstream sauce("INSERT FILE PATH HERE");
	std::getline(sauce, pepper);

	do
	{

		std::cout << "\n\nPlease enter password: ";
		std::cin >> pass;

		if (pass == pepper)
		{

			std::cout << "\n\nLogged in as, " << admin << std::endl;
			break;

		}

		else if (pass != pepper)
		{

			std::cerr << "\n\n" << s2error << std::endl; 

		}

		else
		{

			std::cerr << "\n\nFile not found" << s2error << std::endl;

		}

		num++;
	
	}
	while(num < limit);

	return (0); 

} 

int main(void)
{

	start_func();	

	std::cin.get();
    	std::cin.ignore();

	return (0);

}
