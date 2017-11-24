#include<cstdio>

int max1=0, max2=0;
void maxValue(int A, int B, int C){
    if(A<=B && A<=C){
        max1 = B;
        max2 = C;
    }
    else if(B<=A && B<=C){
        max1 = A;
        max2 = C;
    }
    else{
        max1 = B;
        max2 = A;;
    }
}

int main(){
    int T, Term1, Term2, Final, Attendance, ClassTest1, ClassTest2, ClassTest3, avg, result, cnt=0;
    scanf("%d", &T);
    while(T--){
        scanf("%d%d%d%d%d%d%d", &Term1, &Term2, &Final, &Attendance, &ClassTest1, &ClassTest2, &ClassTest3);
        maxValue(ClassTest1, ClassTest2, ClassTest3);
        avg = (max1+max2)/2;
        result = Term1 + Term2 + Final + Attendance + avg;

        if(result >= 90)
            printf("Case %d: A\n", ++cnt);
        else if(result >= 80 && result<90)
            printf("Case %d: B\n",++cnt);
        else if(result >= 70 && result<80)
            printf("Case %d: C\n", ++cnt);
        else if(result >= 60 && result<70)
            printf("Case %d: D\n", ++cnt);
        else if(result < 60)
            printf("Case %d: F\n", ++cnt);
    }

}
