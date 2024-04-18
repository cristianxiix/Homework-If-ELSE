// Tema: Folosing "scheletul" functie VerificareParola creati o functie VerificareUtilizator si sa
// verificati daca user_name-ul este correct

#include <iostream>
bool VerificaParola(const std::string& username, const std::string& parola);
bool VerificaUsername(const std::string& username);


int main()
{
	const std::string usernameCorect = "monkey123";
	const std::string passwordCorect = "pitaCuPateu";
	//VerificaParola(usernameCorect, passwordCorect);
	VerificaUsername(usernameCorect);
}
bool VerificaParola(const std::string& username, const std::string& parola)
{
	std::string testUser;
	std::string password;
	std::cout << "Introduceti username ul\n";
	std::cin >> testUser;
	std::cout << "Introduceti parola\n";
	std::cin >> password;
	if (username == testUser && parola == password)
	{
		std::cout << "AUTHENTICATION SUCCESSFULL." << std::endl;
		return true;
	}
	return false;
}
bool VerificaUsername(const std::string& username)
{
	std::string testUsername;
	std::cout << "Introduceti username ul\n";
	std::cin >> testUsername;
	
	if (username == testUsername)
	{
		std::cout << "USERNAME FOUND and IS CORRECT" << std::endl;
		return true;
	}
	else
	{
		std::cout << "WRONG USERNAME." << std::endl;
		return false;

	}
	
}