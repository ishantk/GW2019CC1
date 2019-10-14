#include<iostream>
#include<string>
using namespace std;

// Objectives : 1. Array of Objects
//              2. Passing Arrays into Functions
//              3. Passing Object into Function
//              HAS-A Relation | 1 to 1 and 1 to many

// We wish to create Zomato App
// We need to show Restaurant with Menu having Dishes
// Consider in Menu we will simply show Dishes
// 1. Think Of Object
//    1.1 Restaurant : name, phone, address, rating, type , Menu
//    1.2 Menu       : Array of Dish
//    1.3 Dish       : name, description, price
// Rsetaurant HAS A Menu | 1 to 1
// Menu HAS Dishes       | 1 to many

// 2. Create Class
class Dish{
    
    // By Default Private : Encapsulation i.e. Data Hiding
    // Property of Object
    string name;
    string description;
    int price;

    public:
    
    // Property of Object
    Dish(){
        name = "NA";
        description = "NA";
        price = 0;
    }

    // Property of Object
    Dish(string name, string description, int price){
        this->name = name;
        this->description = description;
        this->price = price;
    }

    void setDishDetails(string name, string description, int price){
        this->name = name;
        this->description = description;
        this->price = price;
    }

    void showDishDetails(){
        cout<<"------------------\n";
        cout<<"Dish: "<<name<<"\n";
        cout<<description<<" | "<<price<<"\n";
        cout<<"------------------\n";
    }

    // Setter and Getter for price attribute of Dish Object
    void setPrice(int price){
        this->price = price;
    }

    int getPrice(){
        return price;
    }
};

class Menu{

    // Property of Object
    string name;
    // Array Of Objects
    Dish* dishes; // HAS-A | 1 to many relationship | Dish dishes[10];

    public:

    Menu(){
        name = "NA";
        dishes = NULL;
    }

    Menu(string name, Dish* dishes){
        this->name = name;
        this->dishes = dishes;
    }

    void setMenuDetails(string name, Dish* dishes){
        this->name = name;
        this->dishes = dishes;
    }

    void showMenuDetails(int size){
        cout<<"=== Menu "<<name<<"===\n";
        for(int i=0;i<size;i++){
            (dishes+i)->showDishDetails();
        }
    }
};

class Restaurant{

    string name;
    string phone;
    string address;
    float rating;
    string type;
    Menu menu; // HAS-A | 1 to 1 | Default Constructor

    public:

    Restaurant(){
        name = "NA";
        phone = "NA";
        address = "NA";
        rating = 0;
        type = "NA";
        // menu = nothing has to be done here
    }

    Restaurant(string name, string phone, string address, float rating, string type, Menu menu){
        this->name = name;
        this->phone = phone;
        this->address = address;
        this->rating = rating;
        this->type = type;
        this->menu = menu;
    }

    void setResturatDetails(string name, string phone, string address, float rating, string type, Menu menu){
        this->name = name;
        this->phone = phone;
        this->address = address;
        this->rating = rating;
        this->type = type;
        this->menu = menu;
    }

    void showRestaurantDetails(){
        cout<<"===Restaurant: "<<name<<"====\n";
        cout<<"Phone: "<<phone<<" Address: "<<address<<"\n";
        cout<<"Rating: "<<rating<<" Type: "<<type<<"\n";

        menu.showMenuDetails(3);
    }




};


int main(){

    /*
    Dish d1("Shahi Paneer", "Paneer in Creamy Gravy", 200);
    Dish d2("Dal Makhani", "Black Dal", 100);
    Dish d3("Soya Champ", "Mixe Masala Champ", 150);

    Dish dishes[3] = {d1, d2, d3}; // Array of Objects
    Dish* ptr = dishes;            // Address Copy
    */
    //Dish myDishes[3] = dishes;   // Invalid Assignment
    //Dish myDishes[3] = dishes[3];  // Invalid Assignment

    //int array[3] = {10, 20, 30};
    //cout<<array; // 0th index address

    //cout<<"dishes is:"<<dishes<<" and ptr is: "<<ptr<<"\n";

    /*for (int i=0;i<3;i++){
        dishes[i].showDishDetails();
    }*/

    /*for(int i=0;i<3;i++){
        (ptr+i)->showDishDetails(); // Use Arrow Operator in case of Objects and Pointers
    }*/

    //Menu m1("PunjabiZaika", dishes);
    //m1.showMenuDetails(3);

    Dish d1("Shahi Paneer", "Paneer in Creamy Gravy", 200);
    Dish d2("Dal Makhani", "Black Dal", 100);
    Dish d3("Soya Champ", "Mixe Masala Champ", 150);

    Dish dishes[3] = {d1, d2, d3}; // Array of Objects

    Menu m1("PunjabiZaika", dishes); // Passing Array into Function

    Restaurant r1("Punjabi Rasoi", "+91 99999 00000", "Country Homes", 
    4.5, "Veg/NonVeg", m1); // // Passing Object into Function

    r1.showRestaurantDetails();

    return 0;
}
