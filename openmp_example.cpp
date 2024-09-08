#include<iostream> 
#include<omp.h> 

int main() {
    int i,sum = 0; 
    omp_set_num_threads(5); 
    int n = 1000;
    #pragma omp parallel shared(sum)
    { 
        
        #pragma omp for 
        for(i = 1; i <= n; i++) {
            #pragma omp critical 
            {
                sum += i; 
            }
        }
    }
    std::cout << sum << "\n";
}
