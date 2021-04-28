#include <iostream>
#include <functional>
#include <thread>
#include <chrono>
#include <string>
using std::cout;
using std::cin;
using std::string;
using namespace std::chrono_literals;

void program();

int main(){
program();
return(0);

}
void program(){

string nations[15] = {"Czech", "Slovakian", "Polish", "Belarusian", "Moldovan", "Hungarian", "Russian", "Ukrainian", "Bulgarian", "Romanian", "Bosnian", "Serbian", "Croatian", "Albanian", "Greek"};

string offences[8] = {"Money Laundering", "Prostitutes", "Laptop", "Drugs",  "Trafficking", "Mafia", "Collusion", "Property"};
string politician = "placement";


cout << "\nScandal Generator";
cout << "\nKaLyJa\n";

int upnat;
int upoff;
upnat = 15;
upoff = 8;
srand(time(0));

//cout << nations[rand()%upnat];
cout << "\nenter politician's name: ";
cin >> politician;
cout << "\n" + politician + " " + nations[rand()%upnat] + " " + offences[rand()%upoff];

}
