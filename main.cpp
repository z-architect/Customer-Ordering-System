#include <iostream>
#include <fstream>
using namespace std;

struct Recipe{
	    int numOfComponents;
	    string c_List[20];
	    string c_Measurement;  
};
	    
struct Menu{
	    string menuName;
	    int itemCode;
	    float itemPrice;
	    int preparationTime;
	    Recipe itemRecipe;
}menuX[10];
		    
struct Order{
	    string orderedBy;
	    Menu menuItems[5];
};

// prototyping a function
void initialize();
void showMenuList();


// a global variable
int numOfMenuItems;

int main(){
	showMenuList();

	return 0;
}


void showMenuList (){
	ofstream menuList("menuTable.txt");
	menuList<<"    ****************************** MENU LIST ***********************************"<<endl;
 	menuList<<" "<<endl;
    menuList<<"                Daily-food                         Fast-Food    "<<endl;                        
    menuList<<"                **********                         *********    "<<endl;                       
    menuList<<"              01. Beyaynet                       06. Burger     "<<endl;                     
    menuList<<"              02. Shiro                          07. Pizza      "<<endl;                 
    menuList<<"              03. Kitfo                          08. Chicken    "<<endl;                      
    menuList<<"              04. Doro-wat                       09. Sandwich   "<<endl;                         
    menuList<<"              05. Kita-fir-fir                   10. Tacos      "<<endl;                       
	menuList.close();
	
	string itemLine;
	ifstream readFile("menuTable.txt");
	while(getline(readFile, itemLine)){
		cout<<itemLine<<endl;
	}
	readFile.close();
	
}



void initialize(){
	// Initializing the first menu Item
	menuX[0].menuName = "Beyaynet";
	menuX[0].itemCode = 1;
	menuX[0].itemPrice = 35.5;
	menuX[0].preparationTime = 30;
	menuX[0].itemRecipe.numOfComponents = 3;
	menuX[0].itemRecipe.c_List[0] = " ";
	menuX[0].itemRecipe.c_List[1] = " ";
	menuX[0].itemRecipe.c_List[2] = " ";
	menuX[0].itemRecipe.c_Measurement = "Gram";
}










