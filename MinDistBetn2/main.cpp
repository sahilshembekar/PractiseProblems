
long long minDist (long long arr[],long long n, long long x, long long y) {
    long long min=n;
    long long k=INT_MIN, l=INT_MAX;
    for (long i=0; i<n; i++) {
        if (arr[i]==x) {
            k=i;
        }  
        if (arr[i]==y) {
            l=i;
        }
        if (abs(l-k) <min)    {
            min =abs(l-k);
        }
    }
    if (min==n)  
    return -1;
    else 
    return min;
}