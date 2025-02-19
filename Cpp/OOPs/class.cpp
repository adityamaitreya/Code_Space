#include<iostream> 
#include<string>
using namespace std; //iska matalb ky hai??

class Signup{
    //string format;
    private:
    string password;
    // //to use private use getter() and setter() functions at line 29 and 34
    public:
    string name;
    string email;

    //Constructor
    Signup(){
        cout<<"I am Constructor"<<endl;
    }

    //PArameterized Constructor
    Signup(string name,string email){
        this->name=name;
        this->email=email;
    }

    //copy constructor
    //Destructor
    //uses delete keyword
    //delete ptr;

    //Destructor
    ~Signup(){
        cout<<"Hi, I delete every thing";
        //delete ptr; //for deleting piont dma allocated memory by deep copy
    }


    //Function
    void displayInfo(){
        cout<<"Name: "<<name<<endl<<"Email: "<<email<<endl;
    }
    //setter
    void setpass(string pass){
        password=pass;
    }

    //gettter
    string showpass(){
        return password;
    }
};

// int main(){
//     signup s1; //object creation
//     s1.first_name="Amit";
//     s1.email="abc@xxx.com";
//     user.password="1234";
//     user.displayInfo();
//     return 0;
// }

int main(){
    //getline(cin,name)
    // //to input string with space i.e. "aditya maitr"
    Signup s1("Aditya","abc@gma.com");

    s1.displayInfo();
    s1.setpass("abc");
    cout<<"password: "<<s1.showpass()<<endl;
}