# включити  < iostream >
# включити <cstdlib> _ _
# включити <ctime> _ _


використання  простору імен  std ;
int  main () {
  int m= 5 , n= 7 ;
  int counter[m];
  int array[m][n];

  srand ( час ( NULL ));
  for ( int i= 0 ;i<m;i++){
    counter[i] = 0 ;
  }
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
        лічильник[i]+=масив[i][j];
    }
  }
  for ( int i= 0 ;i<m;i++){
    cout << " У " << i+ 1 << " -му рядку суми елементів = " << counter[i] << endl;
  }
}
