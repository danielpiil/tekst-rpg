#include <iostream>
#include <string>
using namespace ::std;



int mc_hp = 10;
int mc_power = 10;
int mc_armor = 10;
int mc_coin = 100;
int mc_lvl = 0;






void mc_stats_show (){
        
    cout << "hp: " << mc_hp << "\n";
    cout << "power: " << mc_power << "\n";
    cout << "armor: " << mc_armor << "\n";
    cout << "coins: " << mc_coin << "\n";
    cout << "mc level: " << mc_lvl << "\n";

}





void shop(){


    int hp_shop = 2; 
    int hp_shop_price = 10;
    int power_shop = 2;
    int power_shop_price = 2;
    int armor_shop = 2;
    int armor_shop_price = 2;

    string shop_input;



    cout << "welcome to my shop. here you can buy stats to help you owercome this dungeon" << "\n";

    cout << "hp: " << hp_shop << " price: " << hp_shop_price << "\n";

    cout << "power: " << power_shop << " price: " << power_shop_price << "\n";

    cout << "armor: " << armor_shop << " price: " << armor_shop_price << "\n";

    cout << "if you wish to buy anything type the name, if not type no" << "\n";

    getline(cin,shop_input);

    if (shop_input == "hp"){

        mc_hp = mc_hp + hp_shop;
        mc_coin = mc_coin - hp_shop_price;
        cout << "your new stats:" << "\n\n\n";
        mc_stats_show();

    }

    if (shop_input == "power"){

        mc_power = mc_power + power_shop;
        mc_coin = mc_coin - power_shop_price;
        cout << "your new stats:" << "\n\n\n";
        mc_stats_show();
    }
    
    if (shop_input == "armor"){

        mc_armor = mc_armor + armor_shop;
        mc_coin = mc_coin - armor_shop_price;
        cout << "your new stats:" << "\n\n\n";
        mc_stats_show();
    }

    if (shop_input == "no"){

        cout << "goodbye, hope to see you again soon" << "\n";
        mc_stats_show();
    }


    if (shop_input != "power" && shop_input != "hp" && shop_input != "armor" && shop_input != "no"){

        cout << "did you type this wrong, lets try again" << "\n\n\n";

        shop();

    }

    
}







int main(){


    mc_stats_show();


    shop();


    
}



