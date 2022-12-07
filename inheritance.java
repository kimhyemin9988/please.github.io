/******************************************************************************
             

상속(inheritance)
class 자식클래스 이름 extends 부모클래스 이름{}
상속받는 클래스쪽에 부모가 될 클래스의 이름을 명시

상속받는 자식 클래스를 객체로 조립하기 위해서는 반드시 부모 클래스의 생성자가 1회 실행되어야 함
따로 부모클래스를 객체로 만들지 않아도 자동으로 부모 클래스의 생성자가 실행됨.

부모의 생성자가 여러 개 오버로드 되어 있는 경우
자식의 생성자의 내부에서 super()라는 이름으로 생성자 중 하나를 특정하여 실행해주어야 함.
->하지 않은 경우 : 매개변수가 없는 기본 생성자가 실행됨.


*******************************************************************************/

class Parent{
    int number;
    Parent()
    {
        number=20;
    }
    Parent(int n)
    {
        number=n*3;
    }
    
}

class Child extends Parent{
    Child()
    {
        super(); /*n = 60*/
    }
}

public class Main{
    public static void main(String[]args)
    {
        Child c = new Child();
        System.out.println(c.number);
    }
}
