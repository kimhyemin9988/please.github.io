
public class Main
{
	public static void main(String[] args) {
		inter a = new Test();
		inter i = new Test();/*interface변수 변수이름 = new 클래스 이름*/
		System.out.println(i.sum(10,5)); /*변수.메서드이름(변수)*/
		System.out.println(a.minus(10,5));
	}
}

/*인터페이스 제작*/
interface inter{
    int number = 15;
    public static final int inter_number=25;
    
    int sum(int a, int b); /*abstract를 붙이지 않아도 interface안의 
    메서드는 class에서 구현해줘야 한다.*/
    public abstract int minus(int a, int b);/*추상메서드*/
    
}
/*인터페이스 구현*/
class Test implements inter{
    public int minus(int a, int b){
        return a-b;
    }
    public int sum(int a,int b){
        return a+b;
    }
}
