#include <iostream>

void menu() {
	system("cls");
	std::cout << "   THE NOT FAKE ATM   \n" << std::endl;
	std::cout << "<<---->> Menu <<---->>\n" << std::endl;
	std::cout << "1. Check balance" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "\n<<------------------>>\n" << std::endl;
}

int main()
{
	// choosen option
	int choosenOpt;

	// current balance
	double currentBalance = 1000;

	// deposit amount
	double deposit;

	// withdraw amount
	double withdraw;

	// show menu and read input
	do
	{
		menu();
		std::cout << "Enter option: ";
		std::cin >> choosenOpt;

		// switch based on choosen option
		switch (choosenOpt) {
		case 1: 
			std::cout << "Current balance: " << currentBalance << " kr.\n" << std::endl; 
			system("pause");
			break;
		case 2: 
			std::cout << "Enter amount to be deposited: ";
			std::cin >> deposit;
			currentBalance += deposit;
			std::cout << "\nYou deposited " << deposit << " kr. to your account.\n" << std::endl;
			system("pause");
			break;
		case 3:
			std::cout << "Enter amount to be withdrawn: ";
			std::cin >> withdraw;
			if (withdraw <= currentBalance) {
				currentBalance -= withdraw;
			}
			else {
				std::cout << "\nInsufficient funds on your account.\n" << std::endl;
				system("pause");
			}
			break;
		}
	} while (choosenOpt != 4);
}
