package com.company;
import java.util.Scanner;

class Week2Q3{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t;
        System.out.println("enter test cases");
        t = sc.nextInt();
        while (t!=0) {
            int n;
            System.out.println("enter array size");
            n = sc.nextInt();
            System.out.println("enter array elements");
            int[]arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int key , count = 0;
            System.out.println("enter key");
            key = sc.nextInt();

            for(int i = 0 ;i<n;i++)
            {
                for(int j = i+1 ;j<n;j++)
                {
                    int abs =Math.abs(arr[i]-arr[j]);
                    if(abs == key )
                    {
                        count++;
                    }
                }
            }
            System.out.println(count);
        t--;
        }
    }
}
