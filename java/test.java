import java.util.Scanner;
class Test
{
	public static void main(String[] args) {
/*		int i;
		i=10;	
		System.out.println(i);
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter Line ");
		String line= sc.nextLine();
		System.out.println("line is "+ line);
		char ch;
		System.out.println("Enter Cahr ");
		ch =  sc.next().charAt(0);
		System.out.println("Char is : "+ch);	*/
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextInt())
		{
			System.out.println("int is : "+sc.nextInt());
		}

			System.out.println("String is : "+sc.next());

	}
}