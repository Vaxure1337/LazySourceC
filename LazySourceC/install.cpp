#include <iostream>
#include <Windows.h>
#include <string>
#include "Install.h"

void Install::Nmap(){
  system("sudo apt install nmap");
}

void Install::Sqlmap(){
  system("sudo apt install sqlmap");
}
