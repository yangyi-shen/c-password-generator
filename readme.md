# cpassgen
A simple password generator I wrote to familiarise myself with the basics of C.

## how to run:
1. Download this folder
2. In the root directory, run `gcc main.c utils.c -o main`
3. Then, run `./main` or `./main <length>` (e.g. `./main 12`)

## todo list:
- [x] Follow all items of NIST 2020 password guidelines not too inconvenient to implement
- - [x] Default length of 15
- - [x] Minimum/maximum length of 8/64
- - [x] Support all printable ASCII characters
- - [x] Include spaces
- - [x] No complexity requirements (mixing uppercase, numerical, special characters etc.)