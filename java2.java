
public class Main
{
	public static void main(String[] args) { 
        Student stu = new Student(); /*인스턴스 연산자 : 클래스를 이용해
        객체를 선언*/
        stu.hello();/*메서드 실행 : 객체이름.메서드이름();*/
        Student abc/*객체를 선언*/ =  new Student(); 
        System.out.println(abc.x);
        Point p/*객체를 선언*/ = new Point();
        System.out.println(p.y);
        p.y=300;
        System.out.println(p.y);
        
        Point z=new Point();
        System.out.println(z.y);
	}
}

class Student{ /*클래스명 Student*/
    String name = "홍길동"; /*객체변수*/
    int x = 123;
    void hello() /*메소드 : 클래스의 변수를 사용하는 방법을 정의*/
    {
        System.out.println(name+"님이 인사합니다.");
    }
    
}
class Point{
    int y = 256;
}
