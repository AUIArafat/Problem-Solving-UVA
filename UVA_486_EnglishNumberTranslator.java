import java.util.*;
class Main{
	public static void main(String []args){
		Map<String, Integer> map = new HashMap<String, Integer>();
		map.put("zero", 0);
		map.put("one", 1);
		map.put("two", 2);
		map.put("three", 3);
		map.put("four", 4);
		map.put("five", 5);
		map.put("six", 6);
		map.put("seven", 7);
		map.put("eight", 8);
		map.put("nine", 9);
		map.put("ten", 10);
		map.put("eleven", 11);
		map.put("twelve", 12);
		map.put("thirteen", 13);
		map.put("fourteen", 14);
		map.put("fifteen", 15);
		map.put("sixteen", 16);
		map.put("seventeen", 17);
		map.put("eighteen", 18);
		map.put("nineteen", 19);
		map.put("twenty", 20);
		map.put("thirty", 30);
		map.put("forty", 40);
		map.put("fifty", 50);
		map.put("sixty", 60);
		map.put("seventy", 70);
		map.put("eighty", 80);
		map.put("ninety", 90);
		map.put("hundred", 100);
		map.put("thousand", 1000);
		map.put("million", 1000000);
		map.put("negative", -1);
		String number, temp="", tempNumber;
		String[] numberArray = new String[110];
		Scanner in = new Scanner(System.in);
		while(true){
			int flag=0;
			int cnt=0, answer=0, tempValue =0;
			Vector<String> V= new Vector<String>();
			tempNumber = in.next();
			number = in.nextLine();
			V.addElement(tempNumber);
			for(int i=1;i<number.length();i++){
				if(number.charAt(i)==' '){
					V.addElement(temp);
					temp="";
				}
				else if(i==number.length()-1){
					temp = temp + number.charAt(i);
					V.addElement(temp);
					temp="";
				}
				else
					temp = temp + number.charAt(i);
			}   
			for(int i=0;i<V.size();i++){
				if(V.get(i).equals("hundred")){
					tempValue = tempValue*map.get(V.get(i));
				}
				else if(V.get(i).equals("thousand")){
					answer = answer + tempValue*map.get(V.get(i));
					tempValue = 0;
				}
				else if(V.get(i).equals("million")){
					answer = answer + tempValue*map.get(V.get(i));
					tempValue = 0;
				}
				else if(V.get(i).equals("negative")){
					flag=-1;
				}
				else 
					tempValue = tempValue + map.get(V.get(i));
				}
				if(tempValue!=0){
					answer = answer + tempValue;
				}
				if(flag==-1)
					answer = answer*(-1);
			System.out.println(answer);
		}
		

	}
}