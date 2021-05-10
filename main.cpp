#include <iostream>
using namespace std;


// created a sturcture of three and nested them with eachother
struct Recipe{
    int numOfComponents;
    string c_List;
    string c_Measurement;  
};
struct Menu{
    int itemCode;
    float itemPrice;
    int preparationTime;
    Recipe itemRecipe;
};
struct Order{
    string orderedBy;
    Menu menuItems[5];
};







int main(){
	cout<<"Enter a name";
	
	return 0;
}
