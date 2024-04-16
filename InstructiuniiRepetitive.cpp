// InstructiuniiRepetitive.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool accelerare()
{
    std::cout << "Mai acceleram? " << "Da : 1" << "Nu : 2"
        << std::endl;
    int input;
    std::cin >> input;
    bool rezultat;
    switch (input)
    {
    case 1:
        rezultat = true;
        break;
    case 2:
        rezultat = false;
        break;

    default:
        rezultat = false;
        break;

        return rezultat;


    }
    /*std::cin >> input;
    switch (input)
    {
    case 1:
        return true;
    case 2:
        return false;
    default:
        std::cout << "Optiune incorecta\n";
        accelerare();
            break;
    }*/
}

int main()
{
    //std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
   // std::cout << "Hello World!\n";
    //std::cout << "Hello World!\n";
    // mega ineficient sa printam linie cu linie daca vrea sa executam acceasi linie de cod de mai multe ori 



    for (int i = 0; i <= 10; i++)
    {
        std::cout << "Val lui i este " << i << std::endl;
        std::cout << "Hello World!\n";

    }

    for (int i = 10; i >= 0; i--)
    {
        std::cout << i <<" Seconds to midnight\n";
        if (i ==  0)
        {
            std::cout << "Happy new year" << std::endl;

        }
    }

    int index = 2;
    const int max_index = 5;

    for (index; index < max_index; index++)
    {
        std::cout << "Indexul este intre tolerante\n";
    }


    int step = 0;
    const int  max_steps = 5;
    while (step < max_steps)
    {
        std::cout << "One more step\n";
        step++;
    }
    //nu ii bine --> avem bluca infinita
    //while (!false)
    //{
    //    std::cout << "Pasul spre infinit\n";
    //}
    while (accelerare())
    {
        std::cout << "Acceleram" << std::endl;
    }


    do
    {
        std::cout << "Sunt in do" << std::endl;
    } 
    while (false);

}
