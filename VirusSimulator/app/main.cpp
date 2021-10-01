#include <ctime>
#include <string>

#include "app.h"

int main()
{
	std::cout << blue << "-- Virus Simulator --" << std::endl;
	std::cout << "\n";

	std::cout << blue << "Enter Virus Name" << std::endl;
	std::cin >> App::VirusName;

	std::cout << blue << "Type 0 for real time, Type 1 for quick time" << std::endl;
	std::cin >> App::TimeOption;
	
	std::cout << "\n";
	std::cout << ".";
	Sleep(200);
	std::cout << ".";
	Sleep(200);
	std::cout << ".";
	Sleep(200);
	system("cls");

	std::cout << blue << "Virus Name: " + App::VirusName << std::endl;
	
	srand(time(0));
	int RandNum;

	while (true)
	{
		RandNum = rand() % 100 + 1;
		int InfectProbability = 1;

		if (App::InfectedNumber >= 10)
		{
			InfectProbability = 5;
		}

		if (App::InfectedNumber >= 100)
		{
			InfectProbability = 10;
		}

		if (App::InfectedNumber >= 1000)
		{
			InfectProbability = 15;
		}

		if (App::InfectedNumber >= 10000)
		{
			InfectProbability = 20;
		}

		if (App::InfectedNumber >= 100000)
		{
			InfectProbability = 30;
		}

		if (App::InfectedNumber >= 1000000)
		{
			InfectProbability = 35;
		}

		if (App::InfectedNumber >= 10000000)
		{
			InfectProbability = 40;
		}

		if (App::InfectedNumber >= 100000000)
		{
			InfectProbability = 50;
		}
		
		if (App::InfectedNumber >= 1000000000)
		{
			InfectProbability = 60;
		}
		
		if (RandNum <= InfectProbability)
		{
			App::InfectedNumber++;
			std::cout << red << "Someone has been infected" << std::endl;
			std::cout << red << "Infected: " + std::to_string(App::InfectedNumber) << std::endl;
		}

		switch (App::TimeOption)
		{
		case 0:
			Sleep(1000);
			break;
		case 1:
			Sleep(100);
			break;
		default:
			Sleep(1000);
				break;
		}
		
	}
	
	return 0;
}