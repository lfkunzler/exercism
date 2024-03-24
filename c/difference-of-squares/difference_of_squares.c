#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    // 1²+2²+...+N² = N(N+1)(2N+1)/6
    return (number*(number+1)*(2*number+1))/6;
}

unsigned int square_of_sum(unsigned int number)
{
    // (1+2+...+N)² = (N(N+1)/2)²
    //return (number*number*(number+1)*(number+1))/4;
    unsigned int sum = number*(number+1)/2;
    return sum*sum;
}

unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number)-sum_of_squares(number);
}
