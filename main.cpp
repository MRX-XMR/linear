#include <iostream>
#include <cmath>

double function(double x, double y) {
    return x*x - 4 + y*y + 6*x*y;
}

int main() {
    double min_x, min_y, min_value = INFINITY; 

    for (double x = -10; x <= 10; x += 0.1) {
        for (double y = -10; y <= 10; y += 0.1) {
            double val = function(x, y); 
            if (val < min_value) {
                min_x = x;
                min_y = y;
                min_value = val;
            }
        }
    }

   
    std::cout << "Минимальное значение функции f(x, y) = " << min_value << " достигается при x = " << min_x << " и y = " << min_y << std::endl;

    return 0;
}
