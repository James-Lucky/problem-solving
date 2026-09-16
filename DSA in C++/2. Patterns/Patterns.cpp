// Step 1: Observe The Patterns
// Step 2: Count The Rows (Outer Loop)
// Step 3: Write the Data of Row how many stars have
// Step 4: Identify Direction (Increasing or Descreasing or something Else)
// Step 5: Find Relations 
// Step 6: Declare of the Job of each variable 
// Step 7: Do Dry Run 



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void Pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void Pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << j << " ";
        }

        cout << endl;
    }
}
void Pattern4(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }

        cout << endl;
    }
}
void Pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void Pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << j << "";
        }
        cout << endl;
    }
}
void Pattern7(int n)
{

    for (int i=0; i<n; i++){

        // Space Print
        for (int j=0; j<n-i-1; j++) {
            cout << " " ;

        }

        // Star Print
        for (int j=0; j<2*i+1; j++) {
            cout << "*";

        }

         // Space Print
        for (int j=0; j<n-i-1; j++) {
            cout << " ";

        }

        cout << endl;
    }

}
void Pattern8(int n)
{

    for (int i =0; i<n; i++) {

        // Space 
        for (int j=0; j<i; j++) {
            cout << " ";

        }

        // star
        for (int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }

         // Space 
        for (int j=0; j<i; j++) {
            cout << " ";

        }

        cout << endl;

}

}
void Pattern9(int n)
{
for (int i=0; i<n; i++) {

    // space
    for (int j=0; j<n-i-1; j++){
    cout << " ";
    }

    // Stars 
    for (int j=0; j<2*i+1; j++){
    cout << "*";
    }

      // space
    for (int j=0; j<n-i-1; j++){
    cout << " ";
    }
    cout << endl;

}
for (int i=0; i<n; i++) {

    // space
    for (int j=0; j<i; j++){
    cout << " ";
    }

    // Stars 
    for (int j=0; j<2*n-(2*i+1); j++){
    cout << "*";
    }

      // space
    for (int j=0; j<i; j++){
    cout << " ";
    }
    cout << endl;

}
}
void Pattern10(int n) 
{
for (int i=1; i<=2*n-1; i++){

    int star = i;
    if (i>n) star = 2*n-i; 

    for (int j=1; j<=star; j++) {
        cout << "*" ;

    }
    cout << endl;
} 
}
void Pattern11(int n) 
{
    int spaces = 2 * (n - 1);
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
        
        spaces -= 2;
    }
}
void Pattern12(int n) 
{
    int num = 1;  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";  
            num = num + 1; 
        }

        cout << endl;
    }
}
void Pattern13(int n) 
{
for (int i = 0; i < n; i++) {
            for (char ch = ('A' + n - 1) - i; ch <= ('A' + n - 1); ch++) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
void Pattern14(int n)
 {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " "; 
        }
        cout << endl;
    }
}
void Pattern15(int n)
 {
    for (int i = 0; i < n; i++) {
        
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";  
        }

        cout << endl;
    }
}
void Pattern16(int n)
 {
 for (int i = 0; i < n; i++) {
        
        char ch = 'A' + i;
        
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";  
        }

        cout << endl;
    }
}
void Pattern17(int n) 
{
 for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char ch = 'A';

        int breakpoint = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            if (j <= breakpoint) ch++;
            else ch--;
        }

        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
}

}
void Pattern18(int n)
 {
  int iniS = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            for (int j = 1; j <= n - i; j++) {
                cout << "*";
            }
            iniS += 2;
            cout << endl;
        }

        iniS = 2 * n - 2;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            for (int j = 0; j < iniS; j++) {
                cout << " ";
            }
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            iniS -= 2;
            cout << endl;
        }
    }
void Pattern19(int n) 
{
 int spaces = 2 * n - 2;

        for (int i = 1; i <= 2 * n - 1; i++) {
            int stars = i;

            if (i > n) stars = 2 * n - i;

            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            for (int j = 1; j <= spaces; j++) {
                cout << " ";
            }

            for (int j = 1; j <= stars; j++) {
                cout << "*";
            }

            cout << endl;

            if (i < n) spaces -= 2;
            else spaces += 2;
        }
}
void Pattern20(int n)
 {
for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
}
void Pattern21 (int n)
 {
 for (int i = 0; i < 2 * n - 1; i++) {
            for (int j = 0; j < 2 * n - 1; j++) {
                int top = i;
                int left = j;
                int bottom = (2 * n - 2) - i;
                int right = (2 * n - 2) - j;

                int minDist = min(min(top, bottom), min(left, right));

                cout << (n - minDist) << " ";
            }
            cout << endl;
        }
    }





int main()
{
    int n;
    cin >> n;
    Pattern1(n);
    cout << endl;
    Pattern2(n);
    cout << endl;
    Pattern3(n);
    cout << endl;
    Pattern4(n);
    cout << endl;
    Pattern5(n);
    cout << endl;
    Pattern6(n);
    cout << endl;
    Pattern7(n);
    cout << endl;
    Pattern8(n);
    cout << endl;
    Pattern9(n);
    cout << endl;
    Pattern10(n);
    cout << endl;
    Pattern11(n);
    cout << endl;
    Pattern12(n);
    cout << endl;
    Pattern13(n);
    cout << endl;
    Pattern14(n);
    cout << endl;
    Pattern15(n);
    cout << endl;
    Pattern16(n);
    cout << endl;
    Pattern17(n);
    cout << endl;
    Pattern18(n);
    cout << endl;
    Pattern19(n);
    cout << endl;
    Pattern20(n);
    return 0;
}