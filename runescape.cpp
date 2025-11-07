#include <iostream>
#include <string>
#include <fstream>
int main(){
    std::string items[20]={"|wodden sword|","|steak|"};
    int displayhp;
    std::string place;
    int displayexp;
    int maxhp;
    int lvl;
    std::string playername;
    lvl = 0;
    bool inventory=false;
    maxhp = 50 +(lvl*5);
    displayhp = maxhp/2;
    displayexp = 0;
    std::cout<<"Enter your player name: ";
    std::cin>>playername;
    std::string action="";
    while(true){
        std::cin>>action;
        if (action=="inventory"){
        inventory = true;
        }

        if (action=="start"){
            std::cout<<"someone: welcome to land of rune "<<playername<<". you journey begins now. this land is of adventure, history, and discovery, here is a wooden sheild to help you on your quests";
            items[2]="|wooden shield|";
            place = "little hut";
            std::cout<<place;
        }
        if (inventory==true){
         std::cout<<"player name: "<<playername;
         std::cout<<"|hp: "<<displayhp<<"/"<<maxhp;
         std::cout<<"|exp: "<<displayexp;
         std::cout<<"|level: "<<lvl;
         inventory=false;
        }
        if (action=="items"){
            for (int i=0;i<20;i++){
                std::cout<<items[i];
                }
            }

        }
        
    std::ofstream outputFile("storage"); // Open file for writing

    if (outputFile.is_open()) {
        outputFile << displayhp<<lvl<<maxhp<<items<< std::endl; 
        outputFile.close();
        
    } else {
        std::cerr << "Error opening file for writing." << std::endl;
    }
    }
    


