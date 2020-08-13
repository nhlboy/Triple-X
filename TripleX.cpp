#include <iostream>

void PrintIntroduction()
{
  
        std::cout << "         |       " << std::endl;
        std::cout << "   pN0g0p0g00g0ge" << std::endl;
        std::cout << "  00000000000000" << std::endl;;
        std::cout << "_80000000000000!" << std::endl;;
        std::cout << "40000000000000000Y" << std::endl;
        std::cout << "|' ~~#880080MMM0M|" << std::endl;
        std::cout << "      'gM0M7      " << std::endl;
        std::cout << "|      00Q0       " << std::endl;
        std::cout << "#0____g0800P______8" << std::endl;
        std::cout << "#08g_p#880488&,__M#" << std::endl;
        std::cout << "80000088   ]8000088" << std::endl;
        std::cout << " |/j008'   '80004M'" << std::endl;
        std::cout << "  |/#00&00gg00*& |" << std::endl;
        std::cout << "* 008800008800*d" << std::endl;
        std::cout << "%  $0  ~P0$00|$$|" << std::endl;
        std::cout << "M090,00 ]0] *0j,g" << std::endl;
        std::cout << "l0g00] @09" << std::endl;
        std::cout << " ~08000p 0g0" << std::endl;
        std::cout << "    @000000   000" << std::endl;
        std::cout << "     MO00   000^" << std::endl;
        std::cout << "       '"<< std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "    ____  __________  ______ ____________" << std::endl;;
        std::cout << "   / __ \\/ ____/ __ \\/ ____// ____/ ____/\\"<< std::endl;;
        std::cout << "  / / / / __/ / / / /\\___ \\/ __/\\/ /\\___\\/" << std::endl;;
        std::cout << " / /_/ / /___/ /_/ /____/ / /___/ /_/__" << std::endl;;
        std::cout << "/_____/_____/_____/______/_____/\\_____/\\" << std::endl;;
        std::cout << "\\_____\\_____\\\_____\\______\\_____\\/_____\\/" << std::endl;;  
}

void PlayGame()
{
std::cout << "Wake up, Copper...\n";
    std::cout << "This is TARS.\n";
    std::cout << "You need to enter the correct code to break out of the Interstellar.\n\n";


    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    //Print CodeSum and CodeProduct to the terminal
    std::cout << "+ There are 3 numbers in the code.\n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl; 

    //Store player guess
    int GuessA ,GuessB , GuessC;
    
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "\n";
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    //Checking if the players guess is correct
    if ((GuessSum == CodeSum) && (GuessProduct == CodeProduct))
    {
        std::cout << "You win!";
    }
    else
    {
        std::cout << "You lose!";
    }
}

int main()
{
    PrintIntroduction();
    PlayGame();
    return 0;
}

