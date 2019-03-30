#include <stdio.h>
#include <iostream>
#include "install.h"
#include "run.h"

void install_updates(){
    system("sudo apt install update");
    system("sudo apt install upgrade");
}

void install_tools(){
    install_updates();
    install::nmap();
    install::sqlmap();
    install::jsql();
    install::bbqsql();
    install::sqlninja();
}

int main(int argc, char **argv)
{
    std::string program;
    install_tools();
    system("clear");
    std::cout << "LazySourceC - 0.0-a1" << std::endl;
    std::cout << "1) Sqlmap\n2) Nmap\n3) BBQSQL\n4) JSql\n5) Sqlninja" << std::endl;
    getline(std::cin, program);
    if (program == "1"){
        run::sqlmap();
    } else if (program == "2"){
        run::sqlmap();
    } else if (program == "3"){
        run::bbqsql();
    } else if (program == "4"){
        run::jsql();
    } else if (program == "5"){
        run::sqlninja();
    }
}
