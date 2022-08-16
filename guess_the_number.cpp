#include <iostream>
#include <time.h>

int main()
{
	std::cout << "I had a number in my mind,It's between 1 and 100... can you guess it? ";
	std::cout << std::endl;
	int num = 0;
	srand(time(NULL)); //I don't know very well about random, honestly.
	num = rand() % 101;
	//std::cout << num << std::endl;
	bool scucess = false; //a flag that decide if the play has won and if the loop should end.

	while (not scucess)
	{
		int input = 0;
		std::cin >> input;
		if (input == num)
		{
			std::cout << "That's right!" << std::endl;
			scucess = true;
		}
		else
		{
			if (input < num)
			{
				std::cout << "Too small! Try again!" << std::endl;
			}
			else
			{
				std::cout << "Too big! Try again!" << std::endl;
			}
		}
	}
	return 0;
}

