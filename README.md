# arrays2d

#### 1][Prinitng a 2d matrix](inputandprint2dmatrix.cpp)
The first line of code, #include <iostream>, tells the compiler to include the iostream header file, which contains declarations for input and output operations.

The next line of code, using namespace std;, tells the compiler to use the std namespace, which contains commonly used functions and types.

The next few lines of code, int main(), int r1,c1,r2,c2;, cout<<"enter rows and columns for array1: "; cin>>r1; cin>>c1; cout<<"enter rows and columns for array2: "; cin>>r2; cin>>c2;, declare the main function and variables. The main function is the function that is called when the program starts. The variables r1, c1, r2, and c2 store the number of rows and columns of the two matrices.

The next few lines of code, int arr[r1][c1]; int arr1[r2][c2]; for(int i=0;i<r1;i++) { for(int j=0;j<c1;j++) {cout<<"enter element for array 1"<<":"<<endl; cin>>arr[i][j]; } } for(int i=0;i<r2;i++) { for(int j=0;j<c2;j++) {cout<<"enter element for array 2 "<<":"<<endl; cin>>arr1[i][j]; }}, declare two 2D arrays arr and arr1 and initialize them with the elements entered by the user.

The next line of code, if(r1==r2&&c1==c2), checks if the two matrices have the same dimensions. If they do, the program continues to the next step. Otherwise, the program prints the error message "error".

The next few lines of code, int sum[2][2]; cout<<"sum:"<<endl; for(int i=0;i<r1;i++) { for(int j=0;j<c1;j++) {sum[i][j]=arr[i][j]+arr1[i][j]; cout<<sum[i][j]<<" "; } cout<<endl;}, create a new 2D array sum to store the result of the addition, print the message "sum:", and iterate over the two matrices to add the corresponding elements and store the result in the sum array.

Finally, the last line of code, return 0;, terminates the program.

INPUT:

        enter rows and columns for array1: 2
        enter rows and columns for array2: 2
        enter element  for array 1: 1   1
        enter element for array 2 : 2   2
        

OUTPUT:

        sum:
        3 3
#### 2][Multiplication of 2d Arrays](mulofarrasy2d.cpp)

* The program first declares variables r1, c1, r2, and c2 to store the number of rows and columns of the two matrices.
* The program then gets the dimensions of the matrices from the user.
* The program declares two matrices arr and arr1 to store the elements of the two matrices.
* The program inputs the elements of the two matrices from the user.
* The program checks if the matrices can be multiplied by checking if the number of columns in the first matrix is equal to the number of rows in the second matrix.
* If the matrices can be multiplied, the program declares a matrix res to store the product of the two matrices.
* The program iterates over the rows of the first matrix and columns of the second matrix to calculate the product of the elements at each position.
* The program stores the product in the res matrix.
* The program prints the product matrix.
*If the matrices cannot be multiplied, the program prints an error message.
