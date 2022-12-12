# включити  < iostream >
# включити <cstdlib> _ _
# включити <ctime> _ _

використання  простору імен  std ;
int  main () {
  int m= 3 , n= 4 , max= 0 , індекс ;
  int array[m][n];

  srand ( час ( NULL ));
  for ( int i= 0 ;i<m;i++){
    for ( int j= 0 ;j<n;j++){
      array[i][j]= rand ()% 10 ;
    }
  }
  for ( int i= 0 ;i<m;i++){
    for ( int j= 0 ;j<n;j++){
      cout << масив[i][j];
      якщо (j==n- 1 ){
        cout << array[i][j] << endl;
      } ще {
        cout << array[i][j] << " , " ;
      }
    }
  }
  for ( int i= 0 ;i<m;i++){
    for ( int j= 0 ;j<n;j++){
      if (array[i][j]>max){
        max = масив[i][j];
        індекс = i*n+j+ 1 ;
      }
    }
  }
    cout << " У масиві максимальних елементів = " << max << " знаходиться за номером: " << index << endl;
}
