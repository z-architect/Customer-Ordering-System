#include <iostream>
#include <fstream>
using namespace std;

struct Recipe{
<<<<<<< HEAD
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
		    
=======
    int numOfComponents;
    string c_List;
    string c_Measurement;  
}recX={
	  0,
	  {"Salt","Oil","Bread","Injer","Onion"},
	  {"gram","mililiter"}
    };
    
struct Menu{
    int itemCode;
    float itemPrice;
    int preparationTime;
    Recipe itemRecipe;
}menuX={
	   {1,2,3,4,5,6,7,8,9,10},
	   {23.4,45.5,76,45,73,99,69.6,50.0,125.9,30.00},
	   {25,45,35,50,30,65,35,35,45,65}
    };
    
>>>>>>> 8082276b02aef78ed4d96417b052b4fa84530e2a
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

<<<<<<< HEAD

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
=======
int main(){
>>>>>>> 8082276b02aef78ed4d96417b052b4fa84530e2a
	
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










