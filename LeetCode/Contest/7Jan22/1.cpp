#include<bits/stdc++.h>
using namespace std;

    string categorizeBox(int length, int width, int height, int mass) {
        //bulky, heavy, both, neither, 
        bool isBulky=false,isHeavy=false,isBoth=false,isNeither=false;
        int pow4 = pow(10,4);
        unsigned long long pow9 = pow(10,9);
        
        string category;
        unsigned long long volume = 1;
        volume*=length;
        volume*=width;
        volume*=height;
        
        if(length>=pow4 || width>=pow4 || height>=pow4 || volume>=pow9){
            isBulky=true;
        }
        
        if(mass>=100){
            isHeavy=true;
        }
        
        if(isHeavy && isBulky){
            category="Both";
        }else if(!isHeavy && !isBulky){
            category="Neither";
        }else if(!isHeavy && isBulky){
            category="Bulky";
        }else if(isHeavy && !isBulky){
            category="Heavy";
        }else{
            category="Error";
        }
        
        return category;
    }

    int main(){
        int l=1000,w=2000,h=30000,mass=500;
        cout<<categorizeBox(l,w,h,mass);
        return 0;
    }