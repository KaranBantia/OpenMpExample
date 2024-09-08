# OpenMpExample
OpenMp example code

This C++ code calculates the sum of integers from 1 to 1000 using parallel processing with OpenMP. It sets up 5 threads and uses the #pragma omp parallel directive to perform the summation in parallel. The #pragma omp critical ensures that only one thread at a time updates the shared variable sum to avoid race conditions. Finally, the total sum is printed, which will be 500500 (the sum of integers from 1 to 1000)
