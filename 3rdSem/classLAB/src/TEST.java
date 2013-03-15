import java.util.Scanner;
public class TEST {
	double u(){
		double a;
		Scanner b= new Scanner(System.in);
		System.out.print("Enter number : ");
		a = b.nextDouble();
		return a;
		
	}
	public static void main(String[] args) {
		TEST ob=new  TEST();
		double x = ob.u();
		int res = (int)(x/20);
		switch(res)
		{
		case 5:
			System.out.println("CGPA 4");
			break;
		case 4:
			System.out.println("CGPA 4");
			break;
		case 3:
			System.out.println("CGPA 3");
			break;
		case 2:
			System.out.println("CGPA 2");
			break;
		case 1:
			System.out.println("CGPA 1");
			break;
		default:
			System.out.println("Fail !!");
			
		
		}

	}

}
