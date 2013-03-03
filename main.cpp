#include <iostream>
#include <cstdlib>
#include "Project.h"

using namespace std;

const string Problem[]= {"Multiples of 3 and 5","Even Fibonacci Numbers","Largest Prime Factor of 600851475143","Largest Palindrome Product","The Smallest Positive Number Evenly Divisible by 1-20","Sum Square Difference","The 10001st Prime Number",
"Largest Product in 5 Consecutive digits","The Pythagorean Triplet","Summation of All Primes below 2M","Largest Product in a Grid","Highly Divisible Triangular Number","Largest Sum","Longest Collatz Sequence","Diophantine Reciprocals A",
"Power Digit Sum","Number Letter Counts","Maximum Path Sum I","Counting Sundays","Factorial Digit Sum","Name Scores","Exit"};

const int NUM_PROBLEMS=21;           //babaguhin mo value nito pre! para magkasya lahat ng case sa desired number!!
const int EXIT=NUM_PROBLEMS+1;

int main()
{
    Project proj;
    bool done=false;
    int i=0, ch=0;
    //Problems[i];

    while (done==false)
    {
        system ("cls");
        for (i=0; i<(NUM_PROBLEMS+1); i++)
        {
            cout<<(i+1)<<"."<<Problem[i]<<endl;
        }
        cout<<"Choose Problem:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            proj.multiple_of_3_and_5();
            break;

        case 2:
            proj.even_fibonacce();
            break;

        case 3:
            proj.largest_prime_factor();
            break;

        case 4:
            proj.largest_palindrome_product();
            break;

        case 5:
            proj.smallest_multiple();
        break;

        case 6:
            proj.sum_square_diff ();
            break;

        case 7:
            proj.the_10001st_pime_num();
            break;

        case 8:
            proj.largest_product_in_series();
            break;

        case 9:
            proj.pythagorean_triplet();
            break;

        case 10:
            proj.summation_of_primes();
            break;

        case 11:
            proj.largest_product_grid();
            break;

        case 12:
            proj.divisible_triangular_number();     //Mabagal mag process ang problem na ito, antay lang konti..
            break;

        case 13:
            proj.largest_sum();
            break;

        case 14:
            proj.longest_collatz_sequence();
            break;

        case 15:
            proj.diophantine_reciprocals_a();
            break;

        case 16:
            proj.power_digit_sum();
            break;

        case 17:
            proj.number_letter_counts();
            break;

        case 18:
            proj.max_path_sum_one();
            break;

        case 19:
            proj.counting_sundays();
            break;

        case 20:
            proj.factorial_digit_sum();
            break;

        case 21:
            proj.name_scores();
            break;

        case EXIT:
            done=true;
            break;
        }
        system("PAUSE");
    }
}

