// C/ ConsoleApplication1.cpp : This file contains the "main" function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{

	int validShift = 0;
	bool shiftState = false;
	int newIndex = 0;
	bool end = false;
	int choice;
	std::string encryptedMessage = " ";
	std::string decryptedMessage = " ";

	std::string letters = "ABCDEFGHIJKLMNOP1RSTUVWXYZ0123456789 ";


	std::string message = " ";
	do {
		std::cout << "Encrypt (1) or Decrypt (2) End (3)?" << std::endl;
		std::cin >> choice;
		if (choice == 1) {
			std::cout << "Encrypt Text" << std::endl << "------------" << std::endl << "Please enter text to encrypt: " << std::endl;
			std::cin.ignore();
			std::getline(std::cin, message);
			for (int i = 0; i < message.length(); i++) {

				message[i] = (char)toupper(message[i]);
				if ((letters.contains(message[i]))) {
					while (shiftState == false) {
						std::cout << "Enter a valid shift, 1 - 36" << std::endl;
						std::cin >> validShift;
						if (validShift >= 1 && validShift <= 36) {

							shiftState = true;



						}
						else {
							std::cout << "Invalid range" << std::endl;
							std::cin.clear();
							std::cin.ignore();
							shiftState = false;
						}
					}
					newIndex = (letters.find(message[i]) + validShift) % 37;
					encryptedMessage += letters[newIndex];
				}

				else {
					std::cout << "Input contains invalid characters" << std::endl;
					return 0;
				}


			}

			std::cout << encryptedMessage<<std::endl;
			shiftState = false;
		}
		else if (choice == 2) {
			std::cout << "Decrypt Text" << std::endl << "------------" << std::endl << "Please enter text to decrypt: " << std::endl;
			std::cin.ignore();
			std::getline(std::cin, message);
			for (int i = 0; i < message.length(); i++) {

				message[i] = (char)toupper(message[i]);
				if ((letters.contains(message[i]))) {
					while (shiftState == false) {
						std::cout << "Enter a valid shift, 1 - 36" << std::endl;
						std::cin >> validShift;
						if (validShift >= 1 && validShift <= 36) {

							shiftState = true;



						}
						else {
							std::cout << "Invalid range" << std::endl;
							std::cin.clear();
							std::cin.ignore();
							shiftState = false;
						}
					}
					newIndex = (letters.find(message[i]) - validShift + 37) % 37;
					decryptedMessage += letters[newIndex];
				}

				else {
					std::cout << "Input contains invalid characters" << std::endl;
					return 0;
				}


			}
			std::cout << decryptedMessage << std::endl;
			shiftState = false;
		}
		else if (choice == 3) {
			std::cout << "Terminating...." << std::endl;
			end = true;
		}
		else {
			std::cout << "Invalid Choice"<<std::endl;
			end = false;
			std::cin.clear();
			std::cin.ignore();

		}
		
	}
		while (end== false);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
