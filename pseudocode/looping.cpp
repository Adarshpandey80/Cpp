
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

