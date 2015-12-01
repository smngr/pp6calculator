#include <iostream>
#include <limits>

int main()
{	
	// Declare variables
	
	double a(0);
	double b(0);
	double res(0);
	char op('\0');
	
	while (true)
	{
		
		// Choose operators
		
		std::cout << "Choose operator for A (+, -, *, /) B, or enter 'q' to quit" << std::endl;;
		std::cin >> op;
		
		if (!std::cin)
		{
			std::cout << "<ERROR> Incorrect Input!" << std::endl;;
			
			// Instead of breaking the code here, the buffer is cleared
			// and new line is created
			
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;			
		}
	
		// Check for 'quit'
	
		if (op == 'q')
		{
			break;
		}
				
		// Choose variables
		
		std::cout << "Enter variables, A and B:\n";
		std::cin >> a;
		
		if (!std::cin)
		{
			std::cout << "<ERROR> Incorrect Input!" << std::endl;;
			
			// Instead of breaking the code here, the buffer is cleared
			// and new line is created
			
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;			
		}
		
		std::cin >> b;
		
		if (!std::cin)
		{
			std::cout << "<ERROR> Incorrect Input!" << std::endl;;
			
			// Instead of breaking the code here, the buffer is cleared
			// and new line is created
			
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			continue;			
		}
						
		// Return result of operator on A and B
		
		if (op == '+')
		{
			res = a + b;
		}
		
		else if (op == '-')
		{
			res = a - b;
		}
		
		else if (op == '*')
		{
			res = a * b;
		}
		
		else if (op == '/')
		{
			if (b == 0)
			{
				std::cout << "<ERROR> Cannot divide by 0" << std::endl;
				continue
			}
			else
			{
				res = a / b;
			}
		}
		else
		{
			std::cout << "<ERROR> You didn't choose a correct operator!" << std::endl;
			continue;
		}
		
		// Print Answer	
			
		std::cout << "Result of " << a << op << b << " = " << res << std::endl;
	}		
		
		std::cout << "Thanks for using Sam's CPP Calculator!";
		
	return 0;
}
