#include <iostream>
#include <math.h>
#include <istream>
#include <algorithm>
#include <fstream>
#include "Project.h"



using namespace std;

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}

void Project::multiple_of_3_and_5()
{
    Project proj;
    int i=0, sum=0;
    for (i=0; i<1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            sum=sum+i;
        }
    }
    cout << sum << endl ;
}

void Project::even_fibonacce()
{
    int a=1,b=2,c=3,t=0,rs=2;

        while(c < 4*1000*1000) {
                if(c % 2 == 0) {
                        rs += c;
                }
                a=b;
                b=c;
                c=a+b;
        }
        cout << rs << endl;
}

void Project::largest_prime_factor()
{
    Project proj;
    long long num = 600851475143LL;
    long i = 0;
    long long result = 0;

    if (num%2 == 0)
    {
        result = 2;
        while (num % 2 == 0)
        num /= 2;
    }
    for(i=3; i<sqrt(num); i+=2)
    {
        if (num% i == 0)
        {
        result = i;
        while (num% i == 0)
        num /= i;
        }
    }
    cout << max(num,result) << '\n';
}

bool is_palindrome(int n) {
        for( int i=0; i<3; ++i) {
                if( n / (int)pow(10, 5-i) % 10 != n / (int)pow(10, i) % 10 ) {
                        return false;
                }
        }
        return true;
}

void Project::largest_palindrome_product()
{
    int max = 0, rs;
        for(int a=999; a > 889; --a) {
                for(int b=a; b > 889; --b) {
                        rs = a*b;
                        if(rs < max) {
                                break;
                        }
                        if(is_palindrome(rs)) {
                                max = (rs > max) ? rs : max;
                                //cout << a << '*' << b << '=' << a*b << endl;
                                //return 0;
                        }
                }
        }
        cout << max << endl;
}

int commonfact(long long a, int b) {
        while(a % b !=0) {
                int c = b;
                b = a % b;
                a = c;
        }
        return b;
}

void Project::smallest_multiple ()
{
    Project proj;
    int TARGET = 20;
        long long rs = TARGET;
        for(int i = TARGET-1; i>0; --i) {
                rs = rs * i / commonfact(rs, i);
        }
        cout << rs << endl;


}

void Project::sum_square_diff()
{
    cout << "Sorry, I haven't got enough time to answer" << endl;
}

void Project::the_10001st_pime_num()
{

    Project proj;

    const int max = 1000000;
	int count = 1;
	bool arr[max];

	for(int i = 0; i < max; ++i)
		arr[i] = true;

	for(int i = 2; i < max-1; )
	{
		if(count == 10001)
		{
			std::cout<<i << endl;
			break;
		}
		//mark all multiples
		for(int j = 2; (j*i) < max-1; ++j)
		{
			arr[i*j] = false;
		}
		//find next prime
		for(int k = i+1; k < max-1; k++)
		{
			if(arr[k])
			{
				i=k;
				++count;
				break;
			}
		}
	}

}

void Project::largest_product_in_series()
{
    char s[1000] = "73167176531330624919225119674426574742355349194934969835203127745063262395783180169848018694788518438586156078911294949545950173795833195285320880551112540698747158523863050715693290963295227443043557668966489504452445231617318564030987111217223831136222989342338030813533627661428280644448664523874930358907296290491560440772390713810515859307960866701724271218839987979087922749219016997208880937766572733300105336788122023542180975125454059475224352584907711670556013604839586446706324415722155397536978179778461740649551492908625693219784686224828397224137565705605749026140797296865241453510047482166370484403199890008895243450658541227588666881164271714799244429282308634656748139191231628245861786645835912456652947654568284891288314260769004224219022671055626321111109370544217506941658960408719840385096245544436298123098787992724428490918884580156166097919133875499200524063689912560717606588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
        int tmpmax = 1, rs=1;
        char *p = s;
        while(p < s + 995) {
                cout << *p << " ";
                tmpmax = 1;
                for(int j=0;j<5; ++j) {
                        tmpmax *= ( *(p + j) - '0' );
                }
                rs = max(tmpmax, rs);
                ++p;
                if(*(p+4) == '0') {
                        p+=5;
                }
        }
        cout << "\n The Sum is: " << rs << endl;
}

void Project::pythagorean_triplet()
{
        Project proj;
        int m=1,n=1;
        int a,b,c;
        long long rs;
        for( n=1; n<32; ++n)
        {
            for(m=n+1;m<32;++m)
            {
                a = pow(m,2) - pow(n,2);
                b = 2 * m * n;
                c = pow(m,2) + pow(n,2);
                if(1000 % (a+b+c) == 0)
                {
                    cout << "a = "<< a << " " << "b = "<< b << " " << "c = "<< c << " " <<  a * b * c * (long long )pow(1000 / (a+b+c), 3) << endl;

                }
            }
        }
}

void Project::summation_of_primes()
{
    const int max = 2000000;
	int count = 1;
	bool arr[max];

	for(int i = 0; i < max; ++i)
	{
		arr[i] = true;
	}

    for(int i = 2; i < max-1;)
    {
	for(int j = 2; (j*i) < max-1; ++j)
		{
			arr[i*j] = false;
		}

    for(int k = i+1; k < max-1; k++)
    {
        if(arr[k])
        {
            i=k;
            ++count;
            break;
        }
    }
    long long sum = 0;
    for (i=0; i<=max; ++i)
    {
        if (arr[i]==1)
        {
            sum += i;
        }
    }
		cout << sum << endl;
    }
}
