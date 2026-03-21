// Program: Maximum of Two Numbers

FUNCTION max(a : INTEGER, b : INTEGER) : INTEGER
    IF a > b THEN
        RETURN a
    ELSE
        RETURN b
    END IF
END FUNCTION

PRINT max(23, 6)



#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    cout << maxNum(23, 6);
    return 0;
}

// ==========================================================

// Program: Absolute Value

FUNCTION abs(n : INTEGER) : INTEGER
    IF n >= 0 THEN
        RETURN n
    ELSE
        RETURN -n
    END IF
END FUNCTION

PRINT abs(-9)


#include <iostream>
using namespace std;

int absVal(int n) {
    if(n >= 0)
        return n;
    else
        return -n;
}

int main() {
    cout << absVal(-9);
    return 0;
}


// ==========================================================

// Program: Factorial

FUNCTION factorial(n : INTEGER) : INTEGER
    DECLARE fact : INTEGER
    SET fact = 1

    FOR i = n TO 1 STEP -1
        fact = fact * i
    END FOR

    RETURN fact
END FUNCTION

PRINT factorial(5)


#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = n; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}

int main() {
    cout << factorial(5);
    return 0;
}

// ==========================================================

// Program: Sum of First N Numbers

FUNCTION sum(n : INTEGER) : INTEGER
    DECLARE s : INTEGER
    SET s = 0

    FOR i = 1 TO n
        s = s + i
    END FOR

    RETURN s
END FUNCTION

PRINT sum(5)


#include <iostream>
using namespace std;

int sum(int n) {
    int s = 0;
    for(int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    cout << sum(5);
    return 0;
}


// ==============================================================

// Program: Reverse a Number

FUNCTION reverse(n : INTEGER) : INTEGER
    DECLARE a, b : INTEGER
    SET b = 0

    WHILE n > 0
        a = n MOD 10
        n = n / 10
        b = b * 10 + a
    END WHILE

    RETURN b
END FUNCTION

PRINT reverse(1234)




#include <iostream>
using namespace std;

int reverseNum(int n) {
    int a, b = 0;
    while(n > 0) {
        a = n % 10;
        n = n / 10;
        b = b * 10 + a;
    }
    return b;
}

int main() {
    cout << reverseNum(1234);
    return 0;
}

// ==============================================================

// Program: Palindrome Check

FUNCTION palindrome(n : INTEGER)
    DECLARE original, reversed, digit : INTEGER
    SET original = n
    SET reversed = 0

    WHILE n > 0
        digit = n MOD 10
        n = n / 10
        reversed = reversed * 10 + digit
    END WHILE

    IF original = reversed THEN
        PRINT "Palindrome"
    ELSE
        PRINT "Not Palindrome"
    END IF
END FUNCTION

CALL palindrome(1234)



#include <iostream>
using namespace std;

void palindrome(int n) {
    int original = n, reversed = 0, digit;

    while(n > 0) {
        digit = n % 10;
        n /= 10;
        reversed = reversed * 10 + digit;
    }

    if(original == reversed)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}

int main() {
    palindrome(1234);
    return 0;
}

// ==========================================================

// Program: Function with Loop and Conditions

FUNCTION funn(a : INTEGER, b : INTEGER, c : INTEGER) : INTEGER

FOR c = 3 TO 5
    a = (c + c) ^ b      

    IF (a + c) < (c + a) THEN
        b = (a + 11) + c
    ELSE
        c = b + b
        a = 3 + b
        CONTINUE
    END IF
END FOR

RETURN a + b

END FUNCTION

PRINT funn(4, 6, 7)



#include <iostream>
#include <cmath>
using namespace std;

int funn(int a, int b, int c) {
    for(c = 3; c <= 5; c++) {

         a = (c + c) ^ b;   // XOR

        if((a + c) < (c + a)) {
            b = (a + 11) + 6;
        } else {
            c = b + b;
            a = 3 + b;
            continue;
        }
    }
    return a + b;
}

int main() {
    cout << funn(4, 6, 7);
    return 0;
}