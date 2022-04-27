/*
Nutrition Facts
Pawelski
4/26/2022
Please follow the instructions on the activity sheet.
*/

#include <iostream>

/// <summary>
/// Display the nutrition informaiton for an apple.
/// </summary>
void DisplayApple()
{
    std::cout << "Surving Size: 1 medium (3\" dia)\n";
    std::cout << "Calories: 95\n";
    std::cout << "Total Fat: 0.3 g\n";
    std::cout << "Total Carbohydrate: 25 g\n";
    std::cout << "Protein: 0.5 g\n";
}

/// <summary>
/// Display the nutrition informaiton for a banana.
/// </summary>
void DisplayBanana()
{
    std::cout << "Surving Size: 1 medium (7\" long)\n";
    std::cout << "Calories: 105\n";
    std::cout << "Total Fat: 0.4 g\n";
    std::cout << "Total Carbohydrate: 27 g\n";
    std::cout << "Protein: 1.3 g\n";
}

/// <summary>
/// Display the nutrition informaiton for a stalk of celery.
/// </summary>
void DisplayCelery()
{
    std::cout << "Surving Size: 1 medium stalk (7\" long)\n";
    std::cout << "Calories: 6\n";
    std::cout << "Total Fat: 0 g\n";
    std::cout << "Total Carbohydrate: 1 g\n";
    std::cout << "Protein: 0 g\n";
}

int main()
{
    std::string food;
    std::cout << "Enter a food you want to see the nutrition facts for >> ";
    std::cin >> food;
    if (food == "apple")
    {
        DisplayApple();
    }
    else if (food == "celery")
    {
        DisplayCelery();
    }
    else if (food == "banana")
    {
        DisplayBanana();
    }
    else
    {
        std::cout << "I don't have any information on that particular item.\n";
    }
    return 0;
}
