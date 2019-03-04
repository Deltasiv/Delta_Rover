#include <iostream>
#include <fstream>
#include <ctime> 
#include <chrono> 
#include <thread>
#include <string>
#include <sstream>

class error
{

    public:

		std::string ERRORgen = {"ERROR "};

        struct gres
        { 
			public:
		
	        	enum errors
	        	{

		        	ERRORNO1 = 7, // Internal error 
		        	ERRORNO2 = 2, // External error
		        	ERRORNO3 = 5 // Other error

	        	}; 

				enum clear_code
				{

					// This will be filled later 

				};

        };

		gres fehler; 

    	// For ERRORNO1  

		void error1(void)
		{

			gres fehler;

			std::ostringstream(s1);
			s1 << ERRORgen << fehler.ERRORNO1;
			std::string s2error = s1.str();    

			std::cerr << ("\n") << s2error;

		}

		// For ERRORNO2

		void error2(void)
		{

			gres fehler;

			std::ostringstream(s3);
			s3 << ERRORgen << fehler.ERRORNO2;
			std::string s4error = s3.str(); 

			std::cerr << ("\n") << s4error;

		}
		

		// For ERRORNO3

		void error3(void)
		{

			gres fehler;

			std::ostringstream(s5);
			s5 << ERRORgen << fehler.ERRORNO3;
			std::string s6error = s5.str(); 

			std::cerr << ("\n") << s6error;

		}

};

std::string admin = {"Delta Siv"};
std::string foobar = {"\033c"};

int start_func(void)
{

	error errors;

	auto num = 0;
	auto limit = 3;

	std::string pass;
	std::string pepper;

	std::cout << (foobar);
	std::cout << ("Welcome...") << std::endl;

	// This is used for time variables 

	time_t now = time(0); 
	char* dt = ctime(&now);
	tm *gmtm = gmtime(&now);  
	dt = asctime(gmtm);

	// This is used for time variables 

	std::cout << ("\nThe UTC time is: ") << dt << std::endl; 

	std::ifstream sauce("INSERT FILE NAME");
	std::getline(sauce, pepper);

	do
	{

		std::cout << ("Please enter a password: ");
		std::cin >> pass;

		if (pass == pepper)
		{

			std::cout << ("\nLogged in as, ") << (admin) << std::endl;
			std::cout << ("\n\nPress any key to continue to the application"); 
			std::cin.ignore(); 
			std::cin.get(); 

			// Include the embedded file here for controls 
			
			break;

		}

		else if (pass != pepper)
		{errors.error1();}

		else
		{errors.error1();}

		num++;

		std::this_thread::sleep_for(std::chrono::seconds(2));

		std::cout << (foobar);
	
	}
	while(num < limit);  

	return (0); 

} 

int main(void)
{

	start_func(); 

	std::cout << ("Press any key to exit the application");
	std::cin.ignore(); 
	std::cin.get(); 

	std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << (foobar);

	return (0);

}
