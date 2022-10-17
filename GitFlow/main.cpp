//
//  GitFlow
//
//  Created by Илья Бурлак on 16.10.2022.
//
//  my email: ilya.burlak@mail.ry
//

#include <iostream>

using namespace std;

int main() {

    // Инициализация переменных и заполнение массива
    int len;
    cin >> len;
    int arr[len];
    for (int l = 0 ; l < len ; l++ ){
        cin >> arr[l] ;
    }

    // сортировка

    for(int i=1 ; i<len ; i++)
        for(int j=i;j>0 && arr[j-1] > arr[j]; j--)
            swap( arr[j-1] , arr[j] );              // swap меняеть местами элкменты (arr[j-1] , arr[j])



   // Выаод массива.
    for (int s = 0 ; s < (len); s++){
        cout << arr[s] << "\n" ;
    }

    return 0 ;
}

