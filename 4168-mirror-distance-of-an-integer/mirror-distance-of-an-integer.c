int mirrorDistance(int n) {
    int a=n;
    int rn=0;

    while(a!=0){
        rn=(a%10)+(rn*10);
        a/=10;
    }
    return abs(rn-n);
    }