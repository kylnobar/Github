    long long first125000Primes [ SIZE ];    // Array to store the first 125000 Prime Numbers. First element is 2
    bool isPrime;
    int iter = 1;                            // Used to control while loop & as index for first125000Primes array
    int squareRoot;

    long long currentNumber = 3;             // First number to be tested and it will be incremented by 2

    first125000Primes [ 0 ] = 2;             // First element is always 2, which is the first prime number

    std::cerr << first125000Primes [ 0 ] << std::endl; // Display the first element in the array

    while ( iter < SIZE ) {
        isPrime = true;     // Reset boolean var to true

        squareRoot = std::sqrt ( currentNumber );   // Find the square root of the current number being tested

        // Go through the list of all previously found primes and divide the sqrt of the current number by each element
        // As soon as the number is divisible, flag it as "Not Prime" and break the loop
        for ( int index = 0 ; first125000Primes [ index ] <= squareRoot; index ++ )
            if ( currentNumber % first125000Primes [ index ] == 0 ) {
                isPrime = false;
                break;
            }

        // If the number is prime, store the value in the next index of array and increment iter
        if ( isPrime ) {
            first125000Primes [ iter ] = currentNumber;

            std::cerr << first125000Primes [ iter ] << std::endl;

            iter ++;
        }

        currentNumber += 2;     // Add 2 to currentNumber since it only needs to test odd numbers
    }
