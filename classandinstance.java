/******************************************************************************
             
다형성(polymorphism)
하나의 타입에 여러 객체를 대입할 수 있는 성질
자바에서는 상속을 통하여 이를 구현하고 있음
부모 타입의 변수에는 자식 객체가 저장될 수 있음

클래스 변수 : 설계도 자체로 사용할 수 있는 영역
객체를 통하지 않아도 데이터의 저장이 가능하다
해당 클래스를 통하여 제작된 객체가 같은 변수를 참조하게 됨

인스턴스 변수
객체가 개별적으로 보유하고 있는 영역
반드시 객체를 통해서 데이터의 저장이 가능하다
모든 객체는 서로 다른 변수를 참조하게 됨
*******************************************************************************/

public class Main{
    public static void main(String[]args)
    {
        Data a = new Data(); /*인스턴스 (= 클래스를 이용해 객체를 선언하게 된 결과물) a*/
        Data b = new Data(); /*인스턴스 b*/
        a.num = 5;/*객체를 통해 클래스에 접근*/
        b.num = 10;
        System.out.println(a.num); 
        System.out.println(b.num);
        Data.st_num=30;/*객체를 통하지 않아도 데이터의 저장이 가능*/
        /*클래스 변수 : 모든 인스턴스가 공통된 저장공간을 공유하게 된다.
        그래서 한 클래스의 모든 인스턴스들이 공통적인 값을 유지해야하는 속성의 경유, 클래스변수로 선언*/
        a.st_num=5;/*객체를 통해 클래스에 접근*/
        b.st_num=10; /*마지막에 저장된 값으로 모두 출력됨.*/
        System.out.println(a.st_num);
        System.out.println(b.st_num);
        System.out.println(Data.st_num);
    }
}

class Data{ /*메소드,생성자가 정의되지 않음*/
    int num;
    static int st_num; /*클래스 변수*/
}
