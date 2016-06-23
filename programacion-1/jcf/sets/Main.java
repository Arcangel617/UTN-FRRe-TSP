import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

public class Main{
	// a set a kind of collection that stores only unique elements
	public static void main(String[] args) {
		Set<String> set1 = new HashSet<String>();

		set1.add("dog");
		set1.add("cat");
		set1.add("mouse");
		set1.add("snake");
		set1.add("bear");

		// Adding duplicate items does nothing
		set1.add("mouse");

		System.out.println(set1);

		/* Iteration */
		for(String element: set1){
			System.out.println(element);
		}

		/* Does set contains a given item? */
		if (set1.contains("addvark")) {
			System.out.println("Contains addvark");
		}

		if (set1.contains("cat")) {
			System.out.println("Contains cat");
		}

		Set<String> set2 = new TreeSet<String>();

		set2.add("dog");
		set2.add("cat");
		set2.add("giraffe");
		set2.add("monkey");
		set2.add("ant");

		/* Intersection */
		Set<String> intersection = new HashSet<String>(set1);
		intersection.retainAll(set2);

		System.out.println(intersection);

		/* Differece */
		Set<String> difference = new HashSet<String>(set1);
		difference.removeAll(set2);
		System.out.println(difference);
	}
}