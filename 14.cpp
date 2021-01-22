#include <iostream>
#include <cmath>

using namespace std;

class TemperatureConvector {
    
    float temperature;
    char convertTo;

    public:
    
    void convertTemp (float temperature, char convertTo){
           
            if (convertTo=='F' or convertTo =='f')
            {   
                cout << (temperature*1.8)+32  << " F "<< endl;
            }
            else if (convertTo=='C' or convertTo =='c')
            {
                cout << (temperature - 32) * 5 / 9 << " C " << endl;
            }
            else
            {
                cout<< "Unknown symbol" << endl;
            }
            
        }

        
    };


int main () {

 TemperatureConvector s ;
    s.convertTemp (32,'C');
 TemperatureConvector fs ;
    fs.convertTemp (5.00,'F');
    return 0;
}