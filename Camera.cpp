#include "Camera.h"
#include <iostream>
#include <string>
using namespace std;

Camera::Camera(){

}

Camera::Camera(string _producer,int _volume_memory , int _zoom_ratio, int _minPrice, int _maxPrice , int _number_of_purchases,
               string _street_manufacture){
    producer = _producer;
    volume_memory = _volume_memory;
    zoom_ratio = _zoom_ratio;
    minPrice = _minPrice;
    maxPrice =_maxPrice;
    number_of_purchases = _number_of_purchases;
    street_manufacture = _street_manufacture;
}

Camera::~Camera(){

}

void Camera::Getproducer(){

    cout << "Name Camera: " << producer << endl;

}
void Camera::Getvolume_memory(){

    cout << "Volume memory: " << volume_memory << endl;

}
void Camera::Getzoom_ratio(){

    cout << "Zoom ratio: " << zoom_ratio << endl;

}
void Camera::GetminPrice(){

    cout << "Min Price: " << minPrice << endl;

}
void Camera::GetmaxPrice(){

    cout << "Max Price: " << maxPrice << endl;

}
void Camera::Getnumber_of_purchases(){

    cout << "Number of purchases: " << number_of_purchases << endl;

}
void Camera::Getstreet_manufacture(){

    cout << "Street manufacture: " << street_manufacture << endl;
    cout << endl;

}