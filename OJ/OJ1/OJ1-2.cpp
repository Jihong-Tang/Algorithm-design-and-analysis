//
//  main.cpp
//  OJ1
//
//  Created by Jihong Tang on 2019/3/6.
//  Copyright © 2019 Jihong Tang. All rights reserved.
//

#include <iostream>
using namespace std;
int main(){
    //data input
    int num = 0, target =0;
    cin >> num; // input the # of the data in the array
    int arry[num];
    for (int i=0; i<num; ++i){
        cin >> arry[i];
    } // input the array
    cin >> target; // input the targer value

    // manipulate the data
    for (int j=0; j <= num - 2; j++){
        for(int k=j+1 ; k<= num-1; k++){
            if(arry[j] + arry[k] == target){
                cout << arry[j] <<' '<< arry[k] <<endl;
            }
        }
    }
    
    return 0;
}
