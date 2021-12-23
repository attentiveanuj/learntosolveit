/* write a function rightrot(x,n) that returns the value of the integer x rotated to rightby n bit positions */

#include <stdio.h>
unsigned rightrot( unsigned x,int n);

int main() {
unsigned x =19;
int n=3  ;
printf("%u", rightrot((unsigned) x ,n ));
return 0;
}

unsigned rightrot( unsigned x ,int n )  {
return  (x>>n) | (x& ~(~0<<n))<<(~(~0>>1)-n) ;

}
