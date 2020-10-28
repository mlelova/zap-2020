#include <stdio.h>

float lift_a_car(const int stick_length, const int human_weight, const int car_weight);

int main(){
    printf("%.4f\n", lift_a_car(2, 80, 1400));
    printf("%.4f\n", lift_a_car(4, 90, 1650));
    return 0;
}

float lift_a_car(const int stick_length, const int human_weight, const int car_weight){
    float point = (float)stick_length * (float)human_weight/ ((float)car_weight + (float)human_weight) ;
    float palica = (int)(point * 100 + 0.5); 
    return (float)palica / 100;
}