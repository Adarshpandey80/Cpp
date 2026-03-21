// Program: Array_Input_Output

DECLARE a : ARRAY[5] OF INTEGER

FOR i = 0 TO 4
    READ a[i]
END FOR

FOR i = 0 TO 4
    PRINT a[i]
END FOR


#include <iostream>
using namespace std;

int main() {
    int a[5];

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    return 0;
}

// ====================================================

// Program: Array_Sum

DECLARE a : ARRAY[5] OF INTEGER
DECLARE sum : INTEGER
SET sum = 0

FOR i = 0 TO 4
    READ a[i]
END FOR

FOR i = 0 TO 4
    SET sum = sum + a[i]
END FOR

PRINT sum



#include <iostream>
using namespace std;

int main() {
    int a[5], sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++) {
        sum += a[i];
    }

    cout << sum;
    return 0;
}


// ====================================================

// Program: Find_Max

DECLARE a : ARRAY[5] OF INTEGER
DECLARE max : INTEGER

FOR i = 0 TO 4
    READ a[i]
END FOR

SET max = a[0]

FOR i = 0 TO 4
    IF a[i] > max THEN
        SET max = a[i]
    END IF
END FOR

PRINT max



#include <iostream>
using namespace std;

int main() {
    int a[5], max;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    max = a[0];

    for (int i = 0; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    cout << max;
    return 0;
}

// ======================================================

// Program: Matrix_Sum

DECLARE x : ARRAY[2][2] OF INTEGER
DECLARE sum : INTEGER
SET sum = 0

FOR r = 0 TO 1
    FOR c = 0 TO 1
        READ x[r][c]
    END FOR
END FOR

FOR r = 0 TO 1
    FOR c = 0 TO 1
        SET sum = sum + x[r][c]
    END FOR
END FOR

PRINT sum



#include <iostream>
using namespace std;

int main() {
    int x[2][2], sum = 0;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            cin >> x[r][c];
        }
    }

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 2; c++) {
            sum += x[r][c];
        }
    }

    cout << sum;
    return 0;
}
// =========================================================

// Program: Count Even and Odd in 3x3 Matrix

DECLARE X : ARRAY[3][3] OF INTEGER
DECLARE even : INTEGER
DECLARE odd : INTEGER

SET even = 0
SET odd = 0

FOR i = 0 TO 2
    FOR j = 0 TO 2
        READ X[i][j]
        IF X[i][j] MOD 2 = 0 THEN
            even = even + 1
        ELSE
            odd = odd + 1
        END IF
    END FOR
END FOR

PRINT even
PRINT odd


#include <iostream>
using namespace std;

int main() {
    int X[3][3], even = 0, odd = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> X[i][j];
            if(X[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}

// =========================================================

// Program: Matrix Addition

DECLARE X, Y, Z : ARRAY[3][3] OF INTEGER

FOR i = 0 TO 2
    FOR j = 0 TO 2
        READ X[i][j]
        READ Y[i][j]
        Z[i][j] = X[i][j] + Y[i][j]
    END FOR
END FOR

PRINT Z



#include <iostream>
using namespace std;

int main() {
    int X[3][3], Y[3][3], Z[3][3];

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cin >> X[i][j] >> Y[i][j];
            Z[i][j] = X[i][j] + Y[i][j];
        }
    }

    cout << "Result Matrix:\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << Z[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}