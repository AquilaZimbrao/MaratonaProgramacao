#include <iostream>

using namespace std;

int main() {
int result=0,a,n;

scanf("%d",&a);
do{
scanf("%d",&n);
}while(n<=0);

for(int i=0;i<n;i++){

result += a+i;

}

printf("%d\n",result);

    return 0;
}