#include <stdio.h>

// This main() prints the Farenheit-Celsius table for a fahr = 0, 20, ..., 300
main()
{
    // Here we are defining two integer values, fahr and celsius.
    // These are used to store integers. Notice we do not assign any values yet.
    int fahr, calsius;
    /* Here we define three more integers: lower, upper, and step.
    lower represents the starting value from which to calculate,
    upper is the upper bound of the algorithm, and step is the interval by which
    to calculate. E.g. a step of 3 means fahr = 0, 3, 6, ... 300; */
    int lower, upper, step;
    
    // Now we assign values
    lower = 0;
    upper = 300;
    step = 20;
    
    // This sets the current farenheit value to the lower value.
    fahr = lower;
    // This initilialize a while loop which will loop though the code in the {}
    // until the condition is false (fahr <= upper, meaning until fahr > upper)
    while (fahr <= upper) {
        // This is the algorithm which converts fahr to a celsius value 
        // (subtract 32, multiply by 5, divide by 9)
        celsius = 5 * (fahr-32) / 9;
        // Print the fahrenheit and celsius values
        // The "%d\t%d\n" means %d (the first variable, in this case fahr),
        // then \t (a tab), then %d (now celsius), then \n (newline)
        printf("%d\t%d\n", fahr, celsius);
        // Increase the fahr value by the step (move to the next number)
        fahr = fahr + step;
    }
}