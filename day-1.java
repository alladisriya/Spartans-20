/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		//System.out.println("Hello World");
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=sc.nextInt();
		for(int i=n;i<=m;i++)
		{
		    if(prime(i))
		    System.out.println(i);
		}
	}
	static boolean prime(int n)
	{
	    for(int i=2;i<=Math.sqrt(n);i++)
	    if(n%i==0)
	    return(false);
	    return(true);
	}
}
