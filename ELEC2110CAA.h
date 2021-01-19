#ifndef ELEC2110CAA
#define ELEC2110CAA
using namespace std;

//===================Getting Matrix Size===================================
void GetSize(int &rowA, int &colA, int &rowB, int &colB, int choice){
  if (choice == 1 || choice ==2 || choice ==3){
    cout<<"Matrix A"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rowA;
    cout<<"Enter the number of columns: ";
    cin>>colA;
    cout<<endl<<"Matrix B"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rowB;
    cout<<"Enter the number of columns: ";
    cin>>colB;
  }
  else if (choice == 4){
    cout<<"Matrix A"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rowA;
    cout<<"Enter the number of columns: ";
    cin>>colA;
    rowB = rowA;
    colB = 1;
  }
  else if (choice == 5){
    cout<<"Matrix A"<<endl;
    cout<<"Enter the number of rows: ";
    cin>>rowA;
    cout<<"Enter the number of columns: ";
    cin>>colA;
  }
}
//=======================Addition================================
void Addition(int choice){
  cout<<"Addition [A + B]"<<endl; 
  cout<<"----------------"<<endl;
  //Getting dimensions for both matrices
  int rowA, colA, rowB, colB;
  GetSize(rowA, colA, rowB, colB, choice);
  
  if (rowA == rowB && colA == colB){
    //creating matrix A
    cout<<endl<<"Matrix A"<<endl;
    float **matrixA; 
    matrixA = new float*[rowA];
    for (int i = 0; i<rowA; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixA[i] = new float[colA];
      for(int j = 0; j<colA; j++){
        cin >> matrixA[i][j];
      }
    }
    //creating matrix B
    cout<<endl<<"Matrix B"<<endl;
    float **matrixB;
    matrixB = new float*[rowB];
    for (int i = 0; i<rowB; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixB[i] = new float[colB];
      for(int j=0; j<colB; j++){
        cin >> matrixB[i][j];
      }
    }
    //creating A+B matrix
    float **sum;
    sum = new float*[rowA];
    for (int i=0; i<rowA; i++){
      sum[i] = new float[rowA];
    }
    //sending values to sum matrix
      for(int i=0; i<rowA; i++){
        for(int j=0; j<colA; j++){
          sum[i][j]= matrixA[i][j] + matrixB[i][j];
        }
      }
      //outputting results to user
      cout<<endl<<"Matrix A + MatrixB"<<endl;
      for(int i=0; i<rowA; i++){
        for(int j=0; j<rowA; j++){
          cout<<sum[i][j]<<" ";
        }cout<<endl;
      }
    }
  else{
    //custom error statement
    cout<<endl<<"error: Matrices should have same dimensions"<<endl;
  }
  cout<<endl;
}
//=====================Subtraction===============================
void Subtraction(int choice){
  cout<<"Subtraction [A - B]"<<endl; 
  cout<<"-------------------"<<endl;
  //Getting dimensions for both matrices
  int rowA, colA, rowB, colB;
  GetSize(rowA, colA, rowB, colB, choice);

  if (rowA == rowB && colA == colB){
    //creating matrix A
    cout<<endl<<"Matrix A"<<endl;
    float **matrixA;
    matrixA = new float*[rowA];
    for (int i = 0; i<rowA; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixA[i] = new float[colA];
      for(int j = 0; j<colA; j++){
        cin >> matrixA[i][j];
      }
    }
    //creating matrix B
    cout<<endl<<"Matrix B"<<endl;
    float **matrixB;
    matrixB = new float*[rowB];
    for (int i = 0; i<rowB; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixB[i] = new float[colB];
      for (int j = 0; j<colB; j++){
        cin >> matrixB[i][j];
      }
    }
    //creating A-B matrix
    float **diff;
    diff = new float*[rowA];
    for(int i=0; i<rowA; i++){
      diff[i]=new float[rowA];
    }
    //sending values to the A-B matrix
    for(int i=0; i<rowA; i++){
      for(int j=0; j<rowA; j++){
        diff[i][j]=matrixA[i][j]-matrixB[i][j];
      }
    }
    //outputting results to the user
    cout<<endl<<"Matrix A - Matrix B"<<endl;
    for(int i=0; i<rowA; i++){
      for(int j=0; j<colA; j++){
        cout<<diff[i][j]<<" ";
      }
      cout <<endl;
    }
  }
  else{
    //custom error message
    cout<<endl<<"error: Matrices should have same dimensions"<<endl;
  }
  cout <<endl;
}
//=======================Multiplication==========================
void Multiplication(int choice){
  cout<<"Multiplication [A * B]"<<endl;
  cout<<"----------------------"<<endl;
  //Getting the dimension of both matrices
  int rowA, colA, rowB, colB;
  GetSize(rowA, colA, rowB, colB, choice);

  if (rowA == rowB && colA == colB){
    //creating matrix A
    cout<<endl<<"Matrix A"<<endl;
    float **matrixA;
    matrixA = new float*[rowA];
    for (int i = 0; i<rowA; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixA[i] = new float[colA];
      for (int j = 0; j<colA; j++){
        cin >> matrixA[i][j];
      }
    }
    //creating matrix B
    cout<<endl<<"Matrix B"<<endl;
    float **matrixB;
    matrixB = new float*[rowB];
    for (int i = 0; i<rowB; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      matrixB[i] = new float[colB];
      for (int j=0; j<colB; j++){
        cin >> matrixB[i][j];
      }
    }
    //creating the product matrix
    float **matrixC;
    matrixC = new float* [rowA];
    for(int i=0; i<rowA; i++){
      matrixC[i]= new float[colB];
    }
    //Outputting results to user
    cout<<endl<<"Matrix A * Matrix B"<<endl;
    for(int i=0; i<rowA; i++){
      for(int j=0; j<colB; j++){
        for(int k=0; k<rowB; k++){
          matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
        }
        cout<<matrixC[i][j]<<" ";
      }
      cout <<endl;
    }
    cout<<endl;
  }
  //custom error message
  else{
    cout<<endl<<"error: Matrices should have same dimensions"<<endl;
  }
}

//========================Solution===============================
void Solution(int choice){
  cout<<"Solving [Ax = b]"<<endl;
  cout<<"----------------"<<endl;
  //Getting dimensions of coefficient matrix (matrix A)
  int rowA, colA, rowb, colb;
  GetSize(rowA, colA, rowb, colb, choice);

  if (rowA == colA){
    //creating coefficient matrix (matrix A)
    cout<<endl<<"Matrix A"<<endl;
    float **Coef_matrix;
    Coef_matrix = new float*[rowA];
    for (int i=0; i<rowA; i++){
      cout<<"Enter the elements of row "<<i+1<<": ";
      Coef_matrix[i] = new float[colA];
      for(int j = 0; j<colA; j++){
        cin >> Coef_matrix[i][j];
      }
    }
    //creating constant matrix (matrix b)
    cout<<endl<<"Matrix b"<<endl;
    float *const_matrix = new float[rowb];
    for (int i=0; i<rowb; i++){
      cout<<"Enter the element of row "<<i+1<<": ";
      cin >>const_matrix[i];
    }

    float a;
    float s;
    float x[rowA];
    //forward elimination 
    for (int i=1; i<rowA; i++){
      for (int j=i+1; j<rowA+1; j++){
        a = Coef_matrix[j-1][i-1];
        const_matrix[j-1] -= a*(const_matrix[i-1]/Coef_matrix[i-1][i-1]);
        for (int k=1; k<rowA+1; k++){
          Coef_matrix[j-1][k-1]-= a*((Coef_matrix[i-1][k-1])/(Coef_matrix[i-1][i-1]));
        }
      }
    }
    //backward substitution
    x[rowA-1]=const_matrix[rowA-1]/(Coef_matrix[rowA-1][rowA-1]);
    for (int i=rowA-1; i>-1; i--){
      s=const_matrix[i];
      for (int j=i+1; j<rowA; j++){
        s-=(Coef_matrix[i][j])*x[j];
      }
      x[i]=s/(Coef_matrix[i][i]);
    }
    //outputting results to the user
    cout<<endl<<"Solution"<<endl;
    for (int i=rowA; i>0; i--){
      cout<<"x"<<i<<" = "<<x[i-1]<<endl;
    }
  }
  else{
    cout<<endl<<"error: the rows and columns of matrix should be equal"<<endl;
  }
}

//========================Inverse==================================
void Inverse(int choice){
  cout<<"Inversion [A --> A^-1]:"<<endl;
  cout<<"----------------------"<<endl;
  //Getting the dimensions for matrices
  int rowA, colA, rowB, colB;
  GetSize(rowA, colA, rowB, colB, choice);

  //creating matrix A
  cout<<endl<<"Matrix A"<<endl;
  float **matrix;
  matrix = new float*[rowA];
  for (int i=0; i<rowA; i++){
    cout<<"Enter the elements of row "<<i+1<<": ";
    matrix[i] = new float[colA];
    for(int j=0; j<colA; j++){
      cin>>matrix[i][j];
    }
  }
  //Creating the L matrix and initializing it to zero
  float **L_matrix;
  L_matrix = new float* [rowA];
  for(int i=0; i<rowA; i++){
    L_matrix[i]= new float[colA];
    for(int j=0; j<colA; j++){
      L_matrix[i][j]=0;
    }
  }
  //creating the U matrix and initializing it to zero
  float **U_matrix;
  U_matrix = new float* [rowA];
  for(int i=0; i<rowA; i++){
    U_matrix[i]= new float[colA];
    for(int j=0; j<colA; j++){
      U_matrix[i][j]=0;
    }
  }

  for(int i=0; i<rowA; i++){
     //Computing the U_matrix
    
    for(int j=i; j<rowA; j++){
      float s = 0;
      for(int k=0; k<i; k++){
        s += (L_matrix[i][k])*(U_matrix[k][j]);
      }
      U_matrix[i][j]=(matrix[i][j])-s;
    }
    //Computing the L_matrix
    for(int j=i; j<rowA; j++){
      if(i==j){
        L_matrix[i][i] = 1;
      }
      else{
        float s = 0;
        for(int k=0; k<i; k++){
          s += (L_matrix[j][k])*(U_matrix[k][i]);
        }
        L_matrix[j][i] = (matrix[j][i]-s)/(U_matrix[i][i]); 
      }
    }
  }
  //=====================creating inverse matrix==============
  float **inverse;
  inverse = new float* [rowA];
  for (int i=0; i<rowA; i++){
    inverse[i] = new float[rowA];
  }
  //========================creating I matrix==================
  float **I_mat;
  I_mat = new float* [rowA];
  for(int i=0; i<rowA; i++){
    I_mat[i] = new float[rowA];
    for(int j=0; j<rowA; j++){
      if(i==j){
        I_mat[i][j]=1;
      }
      else{
        I_mat[i][j]=0;
      }
    }
  }
  //START OF ALGORITHM
  for (int k=0; k<rowA; k++){ //0 1 2
    //==========forward substitution: Ld=b ======================
    float d[rowA]; //d0 d1 d2
    for (int i=0; i<rowA; i++){
      float s = I_mat[k][i];
      for(int j=i-1; j>-1; j--){
        s -= (L_matrix[i][j])*(d[j]);
      }
      d[i] = s/(L_matrix[i][i]); //returns a list d values
    }
    //=========Backward substitution: Ux=d =======================
    float x[rowA];
    for (int i=rowA-1; i>-1; i--){
      float s = d[i];
      for(int j= i+1; j<rowA; j++){
        s -= (U_matrix[i][j])*(x[j]);
      }
      x[i] =s/(U_matrix[i][i]);
      inverse[i][k] = s/(U_matrix[i][i]);
    }

  }
  //============Printing output================================
  
  // L_matrix
  cout<<endl<<"L matrix:"<<endl;
  cout<<"---------"<<endl;
  for(int i=0; i<rowA; i++){
    for(int j=0; j<rowA; j++){
      cout<<L_matrix[i][j]<<" ";
    }
    cout<<endl;
  }cout<<endl;

  //U_matrix
  cout<<"U matrix"<<endl;
  cout<<"--------"<<endl;
  for(int i=0; i<rowA; i++){
    for(int j=0; j<rowA; j++){
      cout<<U_matrix[i][j]<<" ";
    }
    cout<<endl;
  }cout<<endl;

  //Inverse matrix
  cout<<"Inverse matrix"<<endl;
  cout<<"--------"<<endl;
  for(int i=0; i<rowA; i++){
    for(int j=0; j<rowA; j++){
      cout<<inverse[i][j]<<" ";
    }
    cout<<endl;
  }
}





#endif