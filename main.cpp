#include <iostream>
#include <fstream>
using namespace std;

struct Recipe{
    int numOfComponents;
    string c_List[100];
    string c_Measurement;  
};
struct Menu{
	string menuName;
    int itemCode;
    float itemPrice;
    float preparationTime;
    Recipe itemRecipe;
};
struct Order{
    string orderedBy;
    Menu menuItems[5];
};
struct User {
    Order order[3]; 
};

// defining a structure variable
struct User user;
struct Menu resturantItems[10];
// Function definition / Funtion Prototyping
void initialize();
void showMenuInfo(int);
void showMenuList();
void copyItem(int, int, int);
void showMenuName(int item);
void showOrder(User user, int);
// variable to Number of Items in the menu
int numMenuItem;


int main(){
	initialize();
	int item,orderNum=1;
	string again;
		cout<<" "<<endl;
		cout<<"                         WELCOME TO CUSTOMER ORDERING SYSTEM....              "<<endl<<endl;
		cout<<"  You Can Make Three Separate Orders, And One Order Can Have Up To Five Items "<<endl;
		for(int i = 0; i<1;i++){
			do{
				showMenuList();    
			    cout<<"Order number "<<orderNum<<":"<<endl;
			    cout<<"  What Name Should We Use, For Your Order: ";
			    cin>>user.order[i].orderedBy;
			    cout<<" "<<endl;
			    
			    for(int z = 0; z<5;z++){
			        cout<<"  Choose By There Tag Number From The Table , "<<"It's Your Number "<<z+1<<" Item"<<endl;
			        while(!(cin>>item && item>=1 && item<=10)){
			            cout<<"  Your Number Must Be From 1 - 10 Only Number"<<endl;
				        cin.clear();
				        cin.ignore(100, '\n');	
					}
					copyItem(i,z,item-1);
			    }
			    cout<<" "<<endl;
			    // display order 
				cout<<"***Items in order number : "<<i+1<<"   By"<< user.order[i].orderedBy<<" ***"<<endl;
			    cout<<" Item Number 1 :"<<user.order[i].menuItems[0].menuName<<" Its Price: "<<user.order[i].menuItems[0].itemPrice <<endl;
				cout<<" Item Number 2 :"<<user.order[i].menuItems[1].menuName<<" Its Price: "<<user.order[i].menuItems[1].itemPrice<<endl;
				cout<<" Item Number 3 :"<<user.order[i].menuItems[2].menuName<<" Its Price: "<<user.order[i].menuItems[2].itemPrice<<endl;
				cout<<" Item Number 4 :"<<user.order[i].menuItems[3].menuName<<" Its Price: "<<user.order[i].menuItems[3].itemPrice<<endl;
				cout<<" Item Number 5 :"<<user.order[i].menuItems[4].menuName<<" Its Price: "<<user.order[i].menuItems[4].itemPrice<<endl;

			    
				orderNum++;
				if(orderNum<4){
					cout<<"Do You Want To Order Your Number "<<orderNum<<" (Y/N)"<<endl;
					cin>>again;
				}else{
					cout<<"You Can't Not Order More-Than 3 Order"<<endl;
					again = "n";
				}
				
			}while(again=="Y" || again=="y" );
		    
		}
	
    return 0;
}

void showMenuList(){
	string meunList;
	ifstream myFile("menuList.txt");
	while(getline(myFile, meunList)){
		cout<<meunList<<endl;
	}
	myFile.close();
}


void copyItem(int orderno, int itemno,int resturantItem){
    user.order[orderno].menuItems[itemno] = resturantItems[resturantItem];
//               1-3               1-5                        1-5
}


void showOrder(User user, int item){
	for(int i=0;i<3;i++){
		cout<<user.order[i].orderedBy<<endl;
	}
	cout<<" ";
	showMenuName(item);
}



void showMenuName(int item){
	switch (item){
		case 1:
		    cout<<"Beyaynet"<<endl;
		    break;
		case 2:
			cout<<"Shiro";
			break;
		case 3:
			cout<<"Kitfo";
			break;
		case 4:
			cout<<"Doro-wat";
			break;
		case 5:
			cout<<"Kit-fir-fir";
			break;
		case 6:
			cout<<"Burger";
			break;
		case 7:
			cout<<"Pizza";
			break;
		case 8:
			cout<<"Chicken";
			break;
		case 9:
			cout<<"Sandwich";
			break;
        case 10:
            cout<<"Pizza";
            break;
		default:
			cout<<"No Menu-List With That Number";
			break;
	}
	
	return;
}

void initialize(){
	numMenuItem = 10;
	
	resturantItems[0].menuName = "Beyaynet";
	resturantItems[0].itemCode = 1;
	resturantItems[0].itemPrice = 30;
	resturantItems[0].preparationTime = 30;
	resturantItems[0].itemRecipe.numOfComponents = 4;
	resturantItems[0].itemRecipe.c_List[0] = "bread";
	resturantItems[0].itemRecipe.c_List[1] = "oil";
	resturantItems[0].itemRecipe.c_List[2] = "ice";
	resturantItems[0].itemRecipe.c_List[3] = "vegetables";
	resturantItems[0].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[1].menuName = "Shiro";
	resturantItems[1].itemCode = 2;
	resturantItems[1].itemPrice = 25;
	resturantItems[1].preparationTime = 20;
	resturantItems[1].itemRecipe.numOfComponents = 3;
	resturantItems[1].itemRecipe.c_List[0] = "shiro-powder";
	resturantItems[1].itemRecipe.c_List[1] = "oil";
	resturantItems[1].itemRecipe.c_List[2] = "some-butter";
	resturantItems[1].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[2].menuName = "Kitfo";
	resturantItems[2].itemCode = 3;
	resturantItems[2].itemPrice = 100;
	resturantItems[2].preparationTime = 45;
	resturantItems[2].itemRecipe.numOfComponents = 2;
	resturantItems[2].itemRecipe.c_List[0] = "Meat"; 
	resturantItems[2].itemRecipe.c_List[1] = "butter"; 
	resturantItems[2].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[3].menuName = "DoroWot";
	resturantItems[3].itemCode = 4;
	resturantItems[3].itemPrice = 150;
	resturantItems[3].preparationTime = 60;
	resturantItems[3].itemRecipe.numOfComponents = 4;
	resturantItems[3].itemRecipe.c_List[0] = "Chicken";
	resturantItems[3].itemRecipe.c_List[1] = "Butter";
	resturantItems[3].itemRecipe.c_List[2] = "Egg";
	resturantItems[3].itemRecipe.c_List[3] = "Onion";
	resturantItems[3].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[4].menuName = "Kit-fir-fir";
	resturantItems[4].itemCode = 5;
	resturantItems[4].itemPrice = 20;
	resturantItems[4].preparationTime = 15;
	resturantItems[4].itemRecipe.numOfComponents = 2;
	resturantItems[4].itemRecipe.c_List[0] = "Full-Kit";
	resturantItems[4].itemRecipe.c_List[1] = "Butter";
	resturantItems[4].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[5].menuName = "Burger";
	resturantItems[5].itemCode = 6;
	resturantItems[5].itemPrice = 150;
	resturantItems[5].preparationTime = 60;
	resturantItems[5].itemRecipe.numOfComponents = 4;
	resturantItems[5].itemRecipe.c_List[0] = "Chicken";
	resturantItems[5].itemRecipe.c_List[1] = "Sauce";
	resturantItems[5].itemRecipe.c_List[2] = "Toppings";
	resturantItems[5].itemRecipe.c_List[3] = "Bun";
	resturantItems[5].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[6].menuName = "Pizza";
	resturantItems[6].itemCode = 7;
	resturantItems[6].itemPrice = 170;
	resturantItems[6].preparationTime = 30;
	resturantItems[6].itemRecipe.numOfComponents = 4;
	resturantItems[6].itemRecipe.c_List[0] = "Pizza Dough";
	resturantItems[6].itemRecipe.c_List[1] = "active dry yeast";
	resturantItems[6].itemRecipe.c_List[2] = "bread flour";
	resturantItems[6].itemRecipe.c_List[6] = "olive oil";
	resturantItems[6].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[7].menuName = "Chicken";
	resturantItems[7].itemCode = 8;
	resturantItems[7].itemPrice = 250;
	resturantItems[7].preparationTime = 50;
	resturantItems[7].itemRecipe.numOfComponents = 3;
	resturantItems[7].itemRecipe.c_List[0] = "Chicken";
	resturantItems[7].itemRecipe.c_List[1] = "Butter";
	resturantItems[7].itemRecipe.c_List[2] = "Oil";
	resturantItems[7].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[8].menuName = "Sandwitch";
	resturantItems[8].itemCode = 9;
	resturantItems[8].itemPrice = 20;
	resturantItems[8].preparationTime = 15;
	resturantItems[8].itemRecipe.numOfComponents = 3;
	resturantItems[8].itemRecipe.c_List[0] = "Egg";
	resturantItems[8].itemRecipe.c_List[1] = "Bread";
	resturantItems[8].itemRecipe.c_List[2] = "Oil";
	resturantItems[8].itemRecipe.c_Measurement = "Grams";
	
	resturantItems[9].menuName = "Tacos";
	resturantItems[9].itemCode = 10;
	resturantItems[9].itemPrice = 200;
	resturantItems[9].preparationTime = 40;
	resturantItems[9].itemRecipe.numOfComponents = 4;
	resturantItems[9].itemRecipe.c_List[0] = "Taco Shells";
	resturantItems[9].itemRecipe.c_List[1] = "Taco Meat";
	resturantItems[9].itemRecipe.c_List[2] = "Soft Corn";
	resturantItems[9].itemRecipe.c_List[3] = "Onion";
	resturantItems[9].itemRecipe.c_Measurement = "Grams";
}









//for(int i = 0; i<3;i++){
//	    cout<<"Order number "<<i + 1<<":"<<endl;
//	    cout<<"  What Name Should We Use By, For Your Order: ";
//	    cin>>user.order[i].orderedBy;
////	    cout<<" Name Again"<<endl;
////	    cin>>user1.orderedBy;
//	    cout<<" "<<endl;
//	    for(int z = 0; z<5;z++){
//	        cout<<"  Choose By There Tag Number From The Table , "<<"It's Your Number "<<z+1<<" Item"<<endl;
//	        while(!(cin>>item) && item<2 || item>15){
//                cout<<"  Your Number Must Be From 1 - 15 Only Number"<<endl;
//	        	cin.clear();
//	        	cin.ignore(100, '\n');
//			}
//   			cout<<" You Entered The Number: "<<item <<" And Your Number "<<z+1<<" Item is ";
//            showMenuName(item);
//            cout<<' '<<endl;
//            cout<<" Ordered By: "<<user1.orderedBy<<endl;
//            cout<<""<<endl;
////	        copyItem(i,z, item);
//	    }
//	      
//	}
//
//	for(int i=0;i<3;i++){
//		cout<<" Ordered By: "<<i+1<<" "<<user.order[i].orderedBy<<endl;
//	}


//void showMenuInfo(int item){
//        cout<<". ----------  "<<resturantItems[item].itemCode<<"        ------------"<<resturantItems[item].itemPrice;
//		cout<<".  ----------  "<<resturantItems[item].preparationTime<<" Minutes" <<endl;
//		return;
//}


