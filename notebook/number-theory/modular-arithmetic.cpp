#include <bits/stdc++.h>
using namespace std;

// Operation modulo something

// adition
long long add(long long a, long long b, long long m) {
    long long x = (a + b) % m;
    return x;
}
// subtraction
long long sub(long long a, long long b, long long m) {
    long long x = (a - b) % m;
    // sometimes x can be negative
    if (x < 0) x += m;
    return x;
}
// multiplication
long long multi(long long a, long long b, long long m) {
    long long x = (a * b) % m;
    return x;
}

// division
long long div(long long a, long long b, long long m) {
    // just works for prime m
    long long b_inverse = binpow(b, m-2);
    long long x = (a * b_inverse) % m;
    return x;
}
