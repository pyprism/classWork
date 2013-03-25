import java.util.Scanner;
class Stack{
	public int stck[] = new int[10];
	int tos;
	Stack()
	{
		tos = -1;
	}
	void push(int item)
	{
		if(tos==9)
			System.out.println("Stack is full!");
		else
			stck[++tos] = item;
	}
	int pop()
	{
		if(tos<0)
		{
			System.out.println("Stack is Empty!");
			return 0;
		}
		else
			return stck[tos--];
	}
}

public class Hiren {
	public static void main(String[] args) {
	Stack stack1 = new Stack();
	for(int i=0;i<10;i++)
	{
		Scanner b= new Scanner(System.in);
		System.out.print("Element: ");
		int a = b.nextInt();
		stack1.push(a);
	}
	System.out.println("Stack : ");
	for(int i=0;i<10;i++)
		System.out.println(stack1.pop());
	}

}
