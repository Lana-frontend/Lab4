#ifndef UNTITLED_CAMERA_H
#define UNTITLED_CAMERA_H

#include <iostream>
#include <string>
using namespace std;


class Camera
        {
        private:

    string producer;
    int volume_memory;
    int zoom_ratio;

        public:
            Camera();
            Camera(string _producer,int _volume_memory , int _zoom_ratio, int _minPrice, int _maxPrice , int _number_of_purchases,
    string _street_manufacture);

            ~Camera();

    void Getproducer();
    void Getvolume_memory();
    void Getzoom_ratio();
    void GetminPrice();
    void GetmaxPrice();
    void Getnumber_of_purchases();
    void Getstreet_manufacture();

         int number_of_purchases;
         string street_manufacture;

        protected:
           int minPrice;
           int maxPrice;




};


#endif