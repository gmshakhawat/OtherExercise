 #include <stdio.h>

// function main begins program execution
int main( void )
 {
unsigned int counter;
int grade; // grade value
 int total; // sum of grades entered by user
 int average; // average of grades

 // initialization phase
 total = 0; // initialize total


 // processing phase
while (counter <= 10)
    { // loop 10 times
printf( "%s", "Enter grade: " ); // prompt for input
 scanf( "%d", &grade ); // read grade from user
 total = total + grade; // add grade to total

} // end while
// termination phase
average = total / 10; // integer division

printf( "Class average is %d\n", average ); // display result
 }
