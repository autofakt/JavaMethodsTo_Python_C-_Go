import java.util.*;
import java.util.stream.*;

public class Main
{
    static void printString(String input)
{
      System.out.print(input);
 }
 
 static int[] intRandom1DArray(int size)
 {
    return new Random().ints().limit(size).toArray(); 
 }
 
 static int[][] intRand2DArray(int row, int col) 
 { 
     return IntStream.range(0, row).mapToObj(x  
          -> new Random().ints().limit(col).toArray()
        ) .toArray(int[][]::new) ;  
 }
 
 static String int2DArrayToString(int[][] input) 
{ 
     return Arrays.stream(input).map(x 
        -> Arrays.stream(x). mapToObj(i 
            -> String.format(" % 6d", i)
           ) .reduce("", (a,b) -> a + b)
       ).reduce("", (a,b) -> a + b+'\n'); 
}

static String promptForInput(String msg) 
{ 
    Scanner reader = new Scanner(System.in); 
    System.out.print(msg); 
    return reader.next(); 
}

static int[] orderedArray(int size) 
 {
    return IntStream.range(0, size).toArray(); 
 }
 
 static int[][] ordered2DArray(int row, int col) 
 { 
    return IntStream.range(0, row).mapToObj(x  
         -> IntStream.range(x*10, x*10+col) .toArray()
        ).toArray(int[][]::new);
 }
 
 static int sumArray(int[] input) 
{ 
   return Arrays.stream(input).reduce(0, (a,b) -> a + b); 
}

static int averageArray(int[] input) 
{ 
   return Arrays.stream(input).reduce(0, (a,b) -> a + b)/input.length; 
}
    
	public static void main(String[] args) {
		System.out.println("Hello World");
	}
}
