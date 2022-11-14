#pragma once
#include "person.h"
#include <string>
#include <iostream>

struct person
{
    std::string vorname;
    std::string nachname;
    int geburstag;
};

  void extrahieren(std::string tempvar[5], std::string arrayspeicher[5])
{
    std::string temp;
    
    
    int count = 0;
    for(int i = 0; i < 5 ;i++)
    {   
        int couKom = 0;
            for(int b = 0; b < tempvar[i].length()-1; b++){
                if (tempvar[i].at(b) == ','){
                    couKom ++;
                    if (couKom == 2){
                        break;
                    }
                }
                arrayspeicher[i] += tempvar[i].at(b);
            }
        }


    }

