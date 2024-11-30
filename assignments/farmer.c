#include <stdio.h>

int main() {
    
    int total_land = 80;
    int segments = 5;
    int segment_area = total_land / segments; 

    
    float tomato_yield_30 = 10.0; 
    float tomato_yield_70 = 12.0; 
    float potato_yield = 10.0;    
    float cabbage_yield = 14.0;   
    float sunflower_yield = 0.7;  
    float sugarcane_yield = 45.0;

    float tomato_price = 7.0;     
    float potato_price = 20.0;    
    float cabbage_price = 24.0;   
    float sunflower_price = 200.0; 
    float sugarcane_price = 4000.0; 

    
    float tomato_land_30 = segment_area * 0.3; 
    float tomato_land_70 = segment_area * 0.7; 

    float tomato_yield_total = (tomato_land_30 * tomato_yield_30) + (tomato_land_70 * tomato_yield_70);
    float tomato_sales = tomato_yield_total * 1000 * tomato_price; 

    
    float potato_yield_total = segment_area * potato_yield;
    float potato_sales = potato_yield_total * 1000 * potato_price; 

    
    float cabbage_yield_total = segment_area * cabbage_yield;
    float cabbage_sales = cabbage_yield_total * 1000 * cabbage_price; 

    
    float sunflower_yield_total = segment_area * sunflower_yield;
    float sunflower_sales = sunflower_yield_total * 1000 * sunflower_price; 

    
    float sugarcane_yield_total = segment_area * sugarcane_yield;
    float sugarcane_sales = sugarcane_yield_total * sugarcane_price; 

    // Total sales
    float total_sales = tomato_sales + potato_sales + cabbage_sales + sunflower_sales + sugarcane_sales;

    // Chemical-free farming sales (end of 11 months)
    float chemical_free_sales = tomato_sales + potato_sales + cabbage_sales + sunflower_sales + sugarcane_sales;

    
    printf("Total sales from 80 acres: Rs. %.2f\n", total_sales);
    printf("Sales realization from chemical-free farming (end of 11 months): Rs. %.2f\n", chemical_free_sales);

    return 0;
}
