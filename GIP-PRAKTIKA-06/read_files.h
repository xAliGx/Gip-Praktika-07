#pragma once
#include <iostream>
#include <fstream>
#include <string>

std::string personendaten;
std::string webseite;
std::string tempvar[5];

void einlesen(std::string tempvar[5])
{

    std::ifstream personenDatenFile("personendaten.txt");
    int i = 0;
    while(std::getline(personenDatenFile, personendaten))
    {
        tempvar[i] = personendaten;
        i ++;
    }
    personenDatenFile.close();
    
}