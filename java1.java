public class Main
{ /*반복문 for-each 배열 등 자료를 반복해서 수행
    for(변수 : 배열){반복 수행할 문장}*/
	public static void main(String[] args) {
	   	   int[]arr={1, 2, 3, 4, 5};
	   	   for(int num : arr){
	   	       System.out.println("반복 실행 중"+num);
	   	   }
	}
}
