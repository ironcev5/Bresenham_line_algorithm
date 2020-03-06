
//  main.cpp
//  Bresenham
//

#include <iostream>

void bresenham(int x1, int y1, int x2, int y2)
{
    int m_new = 2 * (y2 - y1);
    int slope_error_new = m_new - (x2 - x1);
    for (int x = x1, y = y1; x <= x2; x++)
    {
        std::cout << "(" << x << "," << y << ")\n";

        if (slope_error_new < 0){
            slope_error_new += m_new;
        } else {
            y++;
            slope_error_new  = slope_error_new + m_new  - 2 * (x2 - x1);
        }

    }
}

int main()
{
    int x1,y1,x2,y2;

    std::cout<<"Enter value of x1: ";
    std::cin>>x1;
    std::cout<<"Enter value of y1: ";
    std::cin>>y1;
    std::cout<<"Enter value of x2: ";
    std::cin>>x2;
    std::cout<<"Enter value of y2: ";
    std::cin>>y2;

    bresenham(x1, y1, x2, y2);
    return 0;
}
