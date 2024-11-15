// Code to implement the gcf function goes here
double gcf(double a, double b) {
    int bigger;
    int smaller;
    int remainder;
    if (a > b) {
        bigger = a;
        smaller = b;
    }
    else {
        smaller = a;
        bigger = b;
    }

    remainder = bigger % smaller;
    if(remainder == 0) {
        return smaller;
    }
    else {
        return gcf(smaller, remainder);
    }
}