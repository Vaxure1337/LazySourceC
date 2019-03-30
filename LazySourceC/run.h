#include <iostream>

class run{
public:
    
    static void sqlmap(){
        system("clear");
        system("sqlmap -h");
    };
    
    static void namp(){
        system("clear");
        system("nmap");
    };
    
    static void jsql(){
        system("clear");
        system("jsql");
    };
    
    static void bbqsql(){
        system("clear");
        system("bbqsql");
    };
    
    static void sqlninja(){
        system("clear");
        system("sqlninja");
    }
};