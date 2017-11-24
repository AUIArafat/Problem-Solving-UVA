#include <iostream>
#include<cstdio>
using namespace std;

//210000000

/*long long pizzaCutting(int N){
    if(N==0)
        return 1;
    else if(N==1)
        return 2;
    else if(N==2)
        return 4;
    else
        return pizzaCutting(N-1)+N;
}
int main()
{
    int N;
    while(scanf("%d", &N)){
        if(N<0)
            return 0;
        printf("%lld\n", pizzaCutting(N));
    }
}

*/

#include <cstdio>
using namespace std;

int main() {
	long long n;

	while (scanf("%lld", &n), n >= 0) {
		printf("%lld\n", (n * (n + 1) / 2 )+1);
	}

	return 0;
}

