#include "read_files.h"
#include <iostream>
#include <string>
#include "person.h"
#include <fstream>


int main()
{

std::string z;
  std::string array[5];
  std::string array2[5];
  einlesen(array);
  extrahieren(array, array2);

 std::cout << std::endl;
  std::cout << array2[1];




  system("pause");
}