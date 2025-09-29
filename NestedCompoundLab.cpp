/*
Shrish Kushwaha
9/29/25
Nested/Compound Conditionals Lab
*/

#include <iostream>
using namespace std;



int main(){
//variables
int temp = 67;
bool isHome = true;
string user;
string pass;
int age = 112;
string dayOfTheWeek = "Tueeeesday";

//checking whether home or not
if(isHome){
//checking temp and giving output based on that
if(temp>75){
    cout << "Activating cooling system." << endl;
}else if(temp < 65){
    cout << "Activating heating system." << endl;
}
else{
    cout << "Temperature is stable. System standby." << endl;
}
}
else{
    cout << "System idle. No one is home." << endl;
}



//asking for input
cout << "What is your username" << endl;
cin >> user;
cout << "What is your password" << endl;
cin >> pass;
//checking if user and pass is correct
if( user == "admin" && pass == "1234"){
    cout << "Access granted" << endl;
}
else{
    cout << "Access denied" << endl;
}


//checking with or if you can get a free pass
if(age == 12 || dayOfTheWeek == "Tuesday"){
    cout << "You can get a free pass!" << endl;
}
else{
    cout << "You are not allowed to get a free pass" << endl;
}



return 0;

}






    



