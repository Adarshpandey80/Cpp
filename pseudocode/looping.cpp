
// Factorial Program

DECLARE num : INTEGER
DECLARE fact : INTEGER
SET fact = 1

READ num

FOR i = num TO 1 STEP -1
    fact = fact * i
END FOR

PRINT fact


#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter number: ";
    cin >> num;

    for(int i = num; i >= 1; i--) {
        fact *= i;
    }

    cout << "Factorial = " << fact;
    return 0;
}

// =================================================

// Reverse Number Program
DECLARE num, num2 : INTEGER

READ num

WHILE num > 0
    num2 = num2 * 10 + (num % 10)
    num = num / 10
END WHILE

PRINT num2

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;

    cout << "Enter number: ";
    cin >> num;

    while(num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }

    cout << "Reversed Number = " << rev;
    return 0;
}

// ==============================================

// Palindrome Program

DECLARE num, b, a, n : INTEGER
SET b = 0

READ num
SET n = num

WHILE num > 0
    a = num MOD 10
    b = b * 10 + a
    num = num / 10
END WHILE

IF n == b THEN
    PRINT "Palindrome"
ELSE
    PRINT "Not Palindrome"
END IF

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}

// ==============================================

// Armstrong Number Program

DECLARE num, b, a, n : INTEGER
SET b = 0

READ num
SET n = num

WHILE num > 0
    a = num MOD 10
    b = b + (a * a * a)
    num = num / 10
END WHILE

IF n == b THEN
    PRINT "Armstrong"
ELSE
    PRINT "Not Armstrong"
END IF

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, temp;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if(temp == sum)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}
// =================================================

// Program: Sequence_Update

DECLARE a, b, c : INTEGER
SET b = 4
SET c = 5

FOR a = 2 TO 4
    PRINT c
    SET b = b - 1
    SET c = c + b
END FOR


#include <iostream>
using namespace std;

int main() {
    int a, b = 4, c = 5;

    for (a = 2; a <= 4; a++) {
        cout << c << " ";
        b = b - 1;
        c = c + b;
    }
    return 0;
}

// =================================================
// Program: Increment_Loop

DECLARE a, b, c : INTEGER
SET b = 0
SET c = 0

FOR a = 1 TO 5
    PRINT c
    SET b = b + 1
    SET c = c + 1
END FOR


#include <iostream>
using namespace std;

int main() {
    int a, b = 0, c = 0;

    for (a = 1; a <= 5; a++) {
        cout << c << " ";
        b = b + 1;
        c = c + 1;
    }
    return 0;
}

// =================================================

// Program: Divide_Until_Small

DECLARE value, n : INTEGER
SET value = 32
SET n = 1

WHILE value >= n
    SET value = value / 2
END WHILE

PRINT value


#include <iostream>
using namespace std;

int main() {
    int value = 32, n = 1;

    while (value >= n) {
        value = value / 2;
    }

    cout << value;
    return 0;
}

// =====================================================

// Program: DoWhile_Increment

DECLARE x, y : INTEGER
SET x = 4
SET y = 8

DO
    PRINT x
    SET x = x + y + 1
WHILE x < 15



#include <iostream>
using namespace std;

int main() {
    int x = 4, y = 8;

    do {
        cout << x << " ";
        x = x + y + 1;
    } while (x < 15);

    return 0;
}

// ==================================================

// Program: DoWhile_Decrement
DECLARE x, y : INTEGER
SET x = 20
SET y = 3       
while x > 0
    PRINT x
    SET x = x - y - 1
END WHILE

#include <iostream>
using namespace std;
int main() {
    int x = 20, y = 3;

    while (x > 0) {
        cout << x << " ";
        x = x - y - 1;
    }

    return 0;
}


 