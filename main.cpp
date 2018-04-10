#include <iostream>

using namespace std;

int main()
{
    int ro,col;
    cout << "Enter Row Number: ";
    cin >> col;
    cout << "Enter Column Number: ";
    cin >> ro;
    int rslt = ro/2;
    int rslt1 = col/2;
    for(int i=0; i<col; i++){
        for(int j=0; j<ro; j++){
            if(i == 0 || i == (col-1)){
                cout << "*";
            }else{
                if(i > 0 || i < (col-1)){
                    if(j == 0 || j == (ro-1)){
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
            }
        }
        if(i == col-1)
            break;
        else
            cout << "\n";

    }
    return 0;
}
