// Conditional Logic Program

INTEGER a, b, c

SET a = 7, b = 8, c = 9

IF (a^b^c < b + c + a)
    b = 6 + a
END IF

PRINT a + b + c

#include <iostream>
using namespace std;

int main() {
    int a = 7, b = 8, c = 9;

    if ((a ^ b ^ c) < (b + c + a)) {
        b = 6 + a;
    }

    cout << "Result = " << a + b + c;
    return 0;
}

// =============================================

//  Loop + Calculation Program

INTEGER a, b, c

SET a = 2, b = 3, c = 10

FOR c FROM 3 TO 6
    a = (a + a) + 9
END FOR

b = (9 + 7) + a

PRINT a + b

#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c;

    for(c = 3; c <= 6; c++) {
        a = (a + a) + 9;
    }

    b = (9 + 7) + a;

    cout << "Result = " << a + b;
    return 0;
}

// ================================================

// Bitwise Operation Program

SET a = 4, b = 4, c = 9

IF (a & (b ^ c))
    a = a >> 1
END IF

PRINT a + b + c

#include <iostream>
using namespace std;

int main() {
    int a = 4, b = 4, c = 9;

    if (a & (b ^ c)) {
        a = a >> 1;
    }

    cout << "Result = " << a + b + c;
    return 0;
}

// =====================================================

// Program: Arithmetic_Test 

DECLARE a, b, c : INTEGER
SET c = 12
SET b = 4

SET a = c / b
SET c = b + a

PRINT c



#include <iostream>
using namespace std;

int main() {
    int a, b = 4, c = 12;

    a = c / b;
    c = b + a;

    cout << c;
    return 0;
}