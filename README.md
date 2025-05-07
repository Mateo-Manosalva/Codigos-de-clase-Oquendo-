El código es este
#include <iostream>
#include <cmath>
#include <fstream>

bool is_prime(long n){
    for (long ii = 2; ii * ii <= n; ii++)
    if (n % ii == 0) return false;
    return true;
}

void nth_twin_primes(int count){
    long counter = 0;
    for (long ii; ; ++ii){
        if (is_prime(ii) && is_prime(ii+2)){
            counter++;
            if(counter == count){
                std::cout << "(" << ii << "," << ii+2 << ")\n";
                break;
            }
        }
    }
}

void print_twin_primes_norms(int N){
    long count = 0;
    long p = 2;
    std::ofstream file("twin_primes.txt");

    std::cout << "n\tp\tp+2\tnorma\n";

    while (count < N) {
        if (is_prime(p) && is_prime(p + 2)) {
            ++count;
            double norma = std::sqrt(p …
[6:35 p. m., 6/5/2025] Daniela Fisica: y el del python es{
[6:36 p. m., 6/5/2025] Daniela Fisica: import matplotlib.pyplot as plt
import numpy as np
# import seaborn as sns
# sns.set_context("poster")

# read data
n, p, p2, norma = np.loadtxt("twin_primes.txt", unpack=True)

# plot 
fig, ax = plt.subplots()
ax.plot(n, norma, '-o', label='Relación')
ax.set_xlabel('Pareja n de números primos')
ax.set_ylabel('Norma de la pareja')
ax.legend()
fig.savefig('twin_primes.pdf')
#include <iostream>
#include <cmath>

int isprime(int m);
int largest_prime_factor(int m);

int main(void){
    std::cout << largest_prime_factor(9) << std::endl;
    std::cout << largest_prime_factor(97) << std::endl;
    std::cout << largest_prime_factor(100) << std::endl;
    std::cout << largest_prime_factor(12345) << std::endl;
    std::cout << largest_prime_factor(1000099) << std::endl;
    std::cout << largest_prime_factor(5412345) << std::endl;

    return 0;
}

int isprime(int m){
    for (int ii = 2; ii*ii <= m; ii++ )
    if (m%ii == 0) return false;
    return true;
}

int largest_prime_factor(int m){
    int largestprime = 0;
    
    if (isprime(m))        
        return m;

    for (long ii = 2; ii*ii <= m; ii++){
         while (m % ii ==0){
             if (isprime(ii)){
             largestprime = ii;   
            } 
         m /= ii;              
        }     
    }
return 0;
}
Primer punto preparcial
#include <iostream>
#include <cmath>

int isprime(int m);
int largest_prime_factor(int m);

int main(void){
    std::cout << largest_prime_factor(9) << std::endl;
    std::cout << largest_prime_factor(97) << std::endl;
    std::cout << largest_prime_factor(100) << std::endl;
    std::cout << largest_prime_factor(12345) << std::endl;
    std::cout << largest_prime_factor(1000099) << std::endl;
    std::cout << largest_prime_factor(5412345) << std::endl;

    return 0;
}

int isprime(int m){
    for (int ii = 2; ii*ii <= m; ii++ )
    if (m%ii == 0) return false;
    return true;
}

int largest_prime_factor(int m){
    int largestprime = 0;
    
    if (isprime(m))        
        return m;

    for (long ii = 2; ii*ii <= m; ii++){
         while (m % ii ==0){
             if (isprime(ii)){
             largestprime = ii;   
            } 
         m /= ii;              
        }     
    }
return 0;
}
