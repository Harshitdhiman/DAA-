package com.company;

import java.util.Scanner;

public class Week2Q2{

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        System.out.println("enter test cases");
        t= sc.nextInt();
        while(t!=0)
        {

            int n , flag = 0;
            System.out.println("enter array size");
            n = sc.nextInt();
            int[]arr = new int[n];
            System.out.println("enter elements");
            for (int i = 0 ;i<n ;i++)
            {
                arr[i] = sc.nextInt();
            }
            // 24,28,48,71,86,89,92,120,194,201
            // i  j  k
            for(int i = 0;i<n-2 ;i++)
            {
                for(int  j  = i+1 ; j<n-1 ; j++)
                {
                    for(int k = j+1 ; k<n ;k++)
                    {
                        if(arr[i] + arr[j] == arr[k])
                        {
                            System.out.printf(" %d %d %d \n", i , j , k);
                          flag = 1;
                        }
                    }
                }
            }

            if(flag == 0)
            {
                System.out.println("no sequence detected");
            }
            t--;
        }
    }
}
