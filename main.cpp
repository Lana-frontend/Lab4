#include "Camera.h"
#include "iostream"

    using namespace std;

    int main() {

        Camera cam1("Canon", 228 , 20 , 1000 , 5000 , 2 , "Avenu");
        cam1.Getproducer();
        cam1.Getvolume_memory();
        cam1.Getzoom_ratio();
        cam1.GetminPrice();
        cam1.GetmaxPrice();
        cam1.Getnumber_of_purchases();
        cam1.Getstreet_manufacture();

        Camera cam2("HP", 69 , 25 , 600 , 800 , 7 , "Shevchenka");
        cam2.Getproducer();
        cam2.Getvolume_memory();
        cam2.Getzoom_ratio();
        cam2.GetminPrice();
        cam2.GetmaxPrice();
        cam2.Getnumber_of_purchases();
        cam2.Getstreet_manufacture();

        Camera cam3("Lenovo", 30 , 45 , 1600 , 1800 , 5 , "Baker");
        cam3.Getproducer();
        cam3.Getvolume_memory();
        cam3.Getzoom_ratio();
        cam3.GetminPrice();
        cam3.GetmaxPrice();
        cam3.Getnumber_of_purchases();
        cam3.Getstreet_manufacture();

    return 0;
}