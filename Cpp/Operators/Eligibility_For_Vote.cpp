// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     char citizen;
//     cout<<"Citizen (Y/N): ";
//     cin>>citizen;
//     cout<<"Age: ";
//     cin>>age;
//     if (age>=18 && citizen=='Y'){
//         cout<<"eligible For vote";
//     }
//     else {
//         cout<<"not eligible";
//     }

// }



//using string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    string citizen;
    cout<<"Citizen of india: (Yes/No): ";
    cin>>citizen;
    cout<<"Age: ";
    cin>>age;
    if (age>=18 && citizen== "Yes" || citizen=="yes"){
        cout<<"eligible For vote";
    }
    else {
        cout<<"not eligible";
    }

}
