import java.util.Scanner;
import java.math.BigInteger;

class root {
    public static BigInteger binarySearch(BigInteger X){
	BigInteger middle = new BigInteger("1");
	BigInteger term;
	BigInteger base = BigInteger.ZERO;
	BigInteger limit = new BigInteger("10").pow(501);
	while(base.compareTo(limit) <= 0){
	    middle = (base.add(limit)).divide(new BigInteger("2"));
	    term = middle.multiply(middle);
	    if(term.compareTo(X) == 0) return middle;
	    if(term.compareTo(X) < 0) base = middle.add(BigInteger.ONE);
	    else limit = middle.subtract(BigInteger.ONE);
	}
	return middle;
    }
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int cases = sc.nextInt();

	for(int i = 0; i < cases; i++){
	    BigInteger in = sc.nextBigInteger();
	    BigInteger out = binarySearch(in);
	    System.out.println(out.toString());
	    if(i != cases - 1)
		System.out.println();
	}
	sc.close();
    }
}
