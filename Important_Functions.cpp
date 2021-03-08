//sum of all divisors of a number for all numbers till 1e6+5
void sumofalldivisors(){
    int sum[1e6+5];
    repA(i,1,1000005){
        for(int j=1;i*j<=1000005;j++){
            sum[i*j]+=i;
        }
    }
}
