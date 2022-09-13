# A Simple (And very specific-use-case and thus ignoring a lot of details) Comparison between CPP and Python Performance on Similar Algorithm

## Background
This is to experiment the runtime performance of running native CPP vs Python in identifying the first n prime numbers using the brute-force method.

Note: Lower-level optimisation on Python is not yet been explore (and thus focuses solely on the native functions) and would serve as a specific-comparison case.

## Running
>./prime_script
Note: This will default to run 100 iterations and generate the data file.

## 100 Iterations Data
![plot](https://github.com/MarcusLG/CPP_vs_Python/blob/main/comparison.png)

Note: From this use-case the difference is multiple-order of magnitude as seen from the plot.