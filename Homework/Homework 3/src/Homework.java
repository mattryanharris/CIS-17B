import java.util.Arrays;

public class Homework {

	public static void main(String[] args) {
		int i;
		int j;
		int count = 1;
		String key;
		String[] inputArray = {"Rodger","Raven","Rotten","C","L", "N", "E"};
		System.out.println("NOT SORTED\n#" + count + "\t" + Arrays.toString(inputArray));
		  for (j = 1; j < inputArray.length; j++) { 
		  	key = inputArray[j];
		  	i = j - 1;
		  	while (i >= 0) {
		      if (key.compareTo(inputArray[i]) > 0)
		      	break;
		      inputArray[i + 1] = inputArray[i];
		      i--;
		  }
		  count++;
		  inputArray[i + 1] = key;
		  System.out.println("#" + count + "\t" + Arrays.toString(inputArray));
		}
		  System.out.println("SORTED");
	}
}
