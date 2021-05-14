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

// a functuion to calulate the total amount of the food price including VAT %

/*
int VatCalculator()
{
	for(int index = 0; index <5; index++)
	{	
		float Vat = 115.0;
		float incVat; //price including VAT
		float itemVat; //VAT per item
		
		itemVat = menuX[index].itemPrice/vat;
		
		int totalVat = itemVat * (100 - Vat);
		
		int newPrice = menuX[index].itemPrice + totalVat;
		
		return(newPrice);
		
		
	}
}
*/

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
	
	menuX[1].menuName = "Shiro";
	menuX[1].itemCode = 2;
	menuX[1].itemPrice = 45.7;
	menuX[1].preparationTime = 35;
	menuX[1].itemRecipe.numOfComponents = 3;
	menuX[1].itemRecipe.c_List[0] = " ";
	menuX[1].itemRecipe.c_List[1] = " ";
	menuX[1].itemRecipe.c_List[2] = " ";
	menuX[1].itemRecipe.c_Measurement = "liter";
	
	menuX[2].menuName = "Kitfo";
	menuX[2].itemCode = 3;
	menuX[2].itemPrice = 145;
	menuX[2].preparationTime = 55;
	menuX[2].itemRecipe.numOfComponents = 2;
	menuX[2].itemRecipe.c_List[0] = " ";
	menuX[2].itemRecipe.c_List[1] = " ";
	menuX[2].itemRecipe.c_Measurement = "Gram";
	
	menuX[3].menuName = "Doro-wat";
	menuX[3].itemCode = 4;
	menuX[3].itemPrice = 125.8;
	menuX[3].preparationTime = 60;
	menuX[3].itemRecipe.numOfComponents = 4;
	menuX[3].itemRecipe.c_List[0] = " ";
	menuX[3].itemRecipe.c_List[1] = " ";
	menuX[3].itemRecipe.c_List[2] = " ";
	menuX[3].itemRecipe.c_List[3] = " ";
	menuX[3].itemRecipe.c_Measurement = "liter";
	
	menuX[4].menuName = "Kita-fir-fir";
	menuX[4].itemCode = 5;
	menuX[4].itemPrice = 55.8;
	menuX[4].preparationTime = 60;
	menuX[4].itemRecipe.numOfComponents = 3;
	menuX[4].itemRecipe.c_List[0] = " ";
	menuX[4].itemRecipe.c_List[1] = " ";
	menuX[4].itemRecipe.c_List[2] = " ";
	menuX[4].itemRecipe.c_Measurement = "Gram ";
	
}










