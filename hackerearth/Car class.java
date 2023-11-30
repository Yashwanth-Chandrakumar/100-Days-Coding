import java.io.*;

import java.util.* ;
 

import java.util.*;

class Car {
    int noOfGear;
    String color;
   

}

class RaceCar extends Car {
    int maxSpeed;
    RaceCar(int a, String s, int b){
        super.noOfGear = a;
        super.color = s;
        this.maxSpeed = b;
    }
    void printInfo(){
        System.out.println("noOfGear: "+noOfGear);
        System.out.println("color: "+color);
        System.out.println("maxSpeed: "+maxSpeed);
    }
    
}

class Solution {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        int noOfGear = sc.nextInt();

        // [IGNORE]: Extra "end line" in previous line.
        sc.nextLine();

        String color = sc.nextLine();
        int maxSpeed = sc.nextInt();
        RaceCar raceCar = new RaceCar(noOfGear, color, maxSpeed);
        raceCar.printInfo();
    }
}
