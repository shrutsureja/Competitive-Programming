/*
 * 
 * ---LASGEST SUM IN SUBARRAY---
 * --------Kadane's ALGO--------
 * Initialize:
    max_so_far = INT_MIN
    max_ending_here = 0

    Loop for each element of the array

    (a) max_ending_here = max_ending_here + a[i]
    (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
    (c) if(max_ending_here < 0)
            max_ending_here = 0
    return max_so_far
 */

import java.util.*;

public class kadanesAlgo {
    public static int maxSubArraySum(int [] a){
        int max_sum = Integer.MIN_VALUE;
        int curr_sum = 0;
        for (int i = 0; i < a.length; i++) {
            curr_sum = curr_sum + a[i];
            if (max_sum < curr_sum)
                max_sum = curr_sum;
            if (curr_sum<0)
                curr_sum = 0;
        }
        return max_sum;
    }

    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter lenght of array :");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Max Sum of Sub Array = "+maxSubArraySum(arr));
        sc.close();
    }
}
