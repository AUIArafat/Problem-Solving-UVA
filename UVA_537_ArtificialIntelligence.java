import java.util.Scanner;
class Main{
	public static void main(String []args){
		int T, cnt=0;
		String S;
		double P, U, I;
		String Ps, Us, Is;
		Scanner in = new Scanner(System.in);
		T = in.nextInt();
		int temp = T;
		while(T+1!=0){
			Ps=""; Us=""; Is="";
			P=0; U=0; I=0;
			S = in.nextLine();
			for(int i=0;i<S.length()-1;i++){
				if(S.charAt(i)=='P' && S.charAt(i+1)=='='){
					i=i+2;
						while(S.charAt(i)!='M' && S.charAt(i)!='m' && S.charAt(i)!='k' && S.charAt(i)!='W'){
							Ps = Ps + S.charAt(i);
							++i;
						}
					P = Double.parseDouble(Ps);
					if(S.charAt(i)=='M') P = P*1000000;
					if(S.charAt(i)=='k') P = P*1000;
					if(S.charAt(i)=='m') P = P*0.001;
				}
				if(S.charAt(i)=='U' && S.charAt(i+1)=='='){
					i=i+2;
						while(S.charAt(i)!='M' && S.charAt(i)!='m' && S.charAt(i)!='k' && S.charAt(i)!='V'){
							Us = Us + S.charAt(i);
							++i;
						}
					U = Double.parseDouble(Us);
					if(S.charAt(i)=='M') U = U*1000000;
					if(S.charAt(i)=='k') U = U*1000;
					if(S.charAt(i)=='m') U = U*0.001;
				}
				if(S.charAt(i)=='I' && S.charAt(i+1)=='='){
					i=i+2;
						while(S.charAt(i)!='M' && S.charAt(i)!='m' && S.charAt(i)!='k' && S.charAt(i)!='A'){
							Is = Is + S.charAt(i);
							++i;
						}
					I = Double.parseDouble(Is);
					if(S.charAt(i)=='M') I = I*1000000;
					if(S.charAt(i)=='k') I = I*1000;
					if(S.charAt(i)=='m') I = I*0.001;
				}
			}
			if(T!=temp){
				++cnt;
				if(P==0){
					P = U*I;
					System.out.println("Problem #" + cnt);
					System.out.printf("P=%.2fW\n", P);
					System.out.println();
				}
				else if(U==0){
					U = P/I;
					System.out.println("Problem #" + cnt);
					System.out.printf("U=%.2fV\n", U);
					System.out.println();
				}
				else if(I==0){
					I = P/U;
					System.out.println("Problem #" + cnt);
					System.out.printf("I=%.2fA\n", I);
					System.out.println();
				}
			}
			T--;
		}
	}
}