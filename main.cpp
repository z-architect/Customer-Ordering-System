#include <iostream>
using namespace std;


// created a sturcture of three and nested them with each other
struct Recipe{
    int numOfComponents;
    string c_List;
    string c_Measurement;  
}recX{
	  0,
	  {"Salt","Oil","Bread","Injer","Onion"},
	  {"gram","mililiter"}
    };
    
struct Menu{
    int itemCode;
    float itemPrice;
    int preparationTime;
    Recipe itemRecipe;
}menuX{
	   {1,2,3,4,5,6,7,8,9,10},
	   {23.4,45.5,76,45,73,99,69.6,50.0,125.9,30.00},
	   {25,45,35,50,30,65,35,35,45,65}
    };
    
struct Order{
    string orderedBy;
    Menu menuItems[5];
};







int main(){
	
	return 0;
}
