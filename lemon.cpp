#include <iostream>
#include <fstream>
#include <ctime> 
#include <chrono> 
#include <thread>
#include <string>
#include <sstream>
#include "client.hpp"
#include "server.hpp"

/*
************************
*					   *
*	MAKE A FILE LOG    *
*					   *
************************ 					   
*/ 

class error
{

	public:

		int P_C_CNO1 = 1; // Code for Pass

		std::string admin = {"Delta Siv"}; // General string 
		std::string foobar = {"\033c"}; // Linux code to clear screen 
		std::string ERRORgen = {"ERROR "}; // For ERRORNO use 
		std::string PASSgen = {"PASS CODE "}; // For P_C_CNO use  

		struct gres // Struct for storing ERRORNO variables  
      	{ 
					
			public:
		
	        	enum errors
	       		{

		        	ERRORNO1 = 7, // Program Internal error 
		        	ERRORNO2 = 2, // Program External error
		        	ERRORNO3 = 5 // Program Other error

	      		}; 

      	}; 

}; 

class start : public error
{

	public: 

		// For P_C_CNO1 

		void pass1(void)
		{

			std::ostringstream(s7);
			s7 << PASSgen << P_C_CNO1;
			std::string s9pass = s7.str();    

			std::cerr << ("\n") << s9pass; // This is being used 

		}

    	// For ERRORNO1  

		void error1(void)
		{

			gres fehler;

			std::ostringstream(s1);
			s1 << ERRORgen << fehler.ERRORNO1;
			std::string s2error = s1.str();    

			std::cerr << ("\n") << s2error; // This is being used 

		}

		// For ERRORNO2

		void error2(void)
		{

			gres fehler;

			std::ostringstream(s3);
			s3 << ERRORgen << fehler.ERRORNO2;
			std::string s4error = s3.str(); 

			std::cerr << ("\n") << s4error; // Fill out later 

		}
		

		// For ERRORNO3

		void error3(void)
		{

			gres fehler;

			std::ostringstream(s5);
			s5 << ERRORgen << fehler.ERRORNO3;
			std::string s6error = s5.str(); 

			std::cerr << ("\n") << s6error; // Fill out later 

		}

};

int start_func(void)
{

	start errors; // starting class 

	auto num = 0;
	auto limit = 3;

	std::string pepper, pass;

	std::cout << (errors.foobar); // Clears screen 
	std::cout << ("Welcome...") << std::endl;

	// This is used for time variables 

	time_t now = time(0); 
	char* dt = ctime(&now);
	tm *gmtm = gmtime(&now);  
	dt = asctime(gmtm);

	std::cout << ("\nThe UTC time is: ") << dt << std::endl; 

	std::ifstream sauce("/home/chappie/Desktop/wulf/rover/Menu/pass.txt");
	std::getline(sauce, pepper);

	do
	{

		std::cout << ("Please enter a password: ");
		std::cin >> pass;

		if (pass == pepper)
		{

			std::cout << ("\nLogged in as, ") << (errors.admin) << std::endl;
			errors.pass1(); 
			std::cout << ("\n\nPress any key to continue to the application..."); 
			
			std::cin.ignore();

			break; // To break out of loop 

			// Link the server file function here 

		}

		else if (pass != pepper)
		{
			
			errors.error1();

			if (num < limit)
			{std::cout << ("Press any key to exit the application...");}
			
		}

		else
		{
			
			errors.error1(); 

			if (num < limit)
			{std::cout << ("Press any key to exit the application...");}
			
		}

		num++;

		std::this_thread::sleep_for(std::chrono::seconds(2));

		std::cout << (errors.foobar);
	
	}
	while(num < limit);  

	return (0); 

} 

int main(void)
{

	start errors; // starting class 

	start_func(); 

	std::cin.ignore();  

	std::this_thread::sleep_for(std::chrono::seconds(3));

	std::cout << (errors.foobar); // Clears screen 

	return (0);

}