#include<iostream>
#include<string>
using namespace std;

// 1. Think of an Object
//    Object:       FoodItem
//    attributes:   title, rating, price, description, quantity

// 2. Create is Class
class FoodItem{
    // attributes written here are property of Object
    // they are by default private
    // not accessible outside the boundary of class
    string title;
    float rating;
    float price;
    string description;
    int quantity;

    public:

    // Constructor Overloading: Multiple Constructors with Different Inputs

    FoodItem(){
        title = "NA";
        rating = 2.5;
        price = 100;
        description = "NA";
        quantity = 0;
    }

    FoodItem(string t, float r, float p, string d, int q){
        title = t;
        rating = r;
        price = p;
        description = d;
        quantity = q;
    }

    // Function Overloading : Same Function name But Different Inputs
    //                        In Overloading return type of function has no role to play

    // SETTER FUNCTIONS : To set the data in Object
    // Taking Input form User
    void setDataForFoodItem(){
        cout<<"Enter Food Item Title\n";
        cin>>title;
        cout<<"Enter Food Item Rating\n";
        cin>>rating;
        cout<<"Enter Food Item Price\n";
        cin>>price;
        cout<<"Enter Food Item Description\n";
        cin>>description;
        cout<<"Enter Food Item Quantity\n";
        cin>>quantity;
        cout<<"Thank You for adding Details\n";
    }

    // Take Input from User as Arguments
    void setDataForFoodItem(string t, float r, float p, string d, int q){
        title = t;
        rating = r;
        price = p;
        description = d;
        quantity = q;
    }

    // Polymorphism:
    // 1. Compile Time Polymorphism | Static Binding | Early Binding
    //    OVERLOADING : Constructors and Functions
    // Binding : Linking of Function Execution Call with its corresponding defintion
    //           When linking is done by compiler at compile time
    //           Static Binding 

    // DISPLAY OPERATION ON DATA OF OBJECT
    void showDetailsForFoodItem(); // Declartion

    // GETTER FUNCTION
    int getPrice(){
        return price;
    }

    int getQuantity(){
        return quantity;
    }

    // GETTER FUNCTION : Business Logic Function
    int getActualPrice(){
        return price * quantity;
    }
};

void FoodItem::showDetailsForFoodItem(){
    cout<<"====="<<title<<"=====\n";
    cout<<"Price:\t"<<price<<"\n";
    cout<<"Rating:\t"<<rating<<"\n";
    cout<<"Description:\t"<<description<<"\n";
    cout<<"Quantity:\t"<<quantity<<"\n";
    cout<<"==================\n\n";
}

int main(){

    // 3. Create Object form Class
    FoodItem item1, item2; // These Objects will call Default Constructor
    FoodItem item3("Paneer Paratha", 4.0, 90, "Stuffed Paneer Paratha", 3); // These Object will call Paremeterized Constructor

    item1.setDataForFoodItem();
    item2.setDataForFoodItem("Aloo Paratha", 4.5, 70, "Stuffed Aloo Paratha", 2);

    item1.showDetailsForFoodItem();
    item2.showDetailsForFoodItem();
    item3.showDetailsForFoodItem();


    //int total = item1.price + item2.price + item3.price;
    //int total = (item1.getPrice() * item1.getQuantity()) + (item2.getPrice() * item2.getQuantity()) + (item3.getPrice() * item3.getQuantity());
    int total = item1.getActualPrice() + item2.getActualPrice() + item3.getActualPrice();
    int totalItems = item1.getQuantity() + item2.getQuantity() + item3.getQuantity();

    cout<<"Total is: "<<total<<"\n";
    cout<<"Total Items is: "<<totalItems<<"\n";

    return 0;
}
