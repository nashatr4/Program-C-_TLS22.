// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    string gender;
    float tb, bb, bb_ideal;
    
   cout << "Gender(L/P): ";
   cin >> gender;
   
   cout << "Berat badan (kg) : ";
   cin >> bb;
   
   cout << "Tinggi badan (cm) : ";
   cin >> tb;
   
    if(gender == "L"){
        bb_ideal = (tb - 100) - ((tb - 100) * 0.1);
    } else if(gender == "P"){
        bb_ideal = (tb - 100) - ((tb - 100) * 0.15);
    } else {
        cout << "gender salah";
        bb_ideal = 0;
    }
    
    
    if(bb_ideal != 0){
        if(bb == bb_ideal){
            cout << "bb ideal : " << bb_ideal << " kg" << endl;
            cout << "Berat badan Anda Ideal";
        } else if(bb > bb_ideal){
            cout << "bb ideal : " << bb_ideal << " kg" << endl;
            cout << "Berat badan Anda lebih dari Ideal";
        } else { 
            cout << "bb ideal : " << bb_ideal << " kg" << endl;
            cout << "Berat badan Anda kurang dari Ideal";
        }
        
    return 0;}
    
}