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

void Install::jsql(){
  system("sudo apt install jsql");
}

void Install::bbqsql(){
  system("sudo apt install bbqsql");
}

void Install::sqlninja(){
  static("sudo apt install sqlninja");
}
