// While loop implementation
/*
#include<iostream>

using namespace std;

int main(){

	int n,i,j;
	cout << "Enter the no of inputs";
	cin >> n;
	i=1;
	while(i <= n){
	
		j=1;
		while(j <= i){
		
			cout << j<< " ";
			j++;
		
		}
		i++;
		cout << endl;
		
	
	}
	
return 0;
}

--------------------------------------------------------------------------------------------------------------------
// For loop implementation
#include <iostream>

using namespace std;

int main() {

	int n,i,j;
	cout << "Enter the no of step";
	cin >> n;
	//i=1;
	for(i=1; i <=n; i++){
	
		for(j=1;j<=i;j++){
		
			cout << j << " ";
			j++;
		
		}
		i++;
		cout << endl;
	
	}
	

return 0;
}
------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

	int n,i,j;
	cout << "Enter the no of step";
	cin >> n;
	//i=1;
	for(i=1; i <=n; i++){
	
		for(j=1;j<=i;j++){
			++j;
			cout << j << " ";
			
		
		}
		i++;
		cout << endl;
	
	}
	

return 0;
}
---------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

	int n,i,j;
	cout << "Enter the no";
	cin >> n;
	i=1;
	while(i <= n){
	
		j=n;
		while(j >= i){
		
			cout << j << " ";
			j--;
		}
		i++;
		cout << endl;
	}
return 0;
}
----------------------------------------------------------------------------------------------------------------------------


#include <iostream>

using namespace std;

int main() {

	int n,i,j;
	cout << "Enter the no";
	cin >> n;
	
	for(i=1;i<=n;i++){
	
		for(j=n;j>=i;j--){
		
			cout << j << " ";
		
		}
		cout << endl;
	
	}
	
return 0;
}

---------------------------------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

	int n,i,j;
	cout << "Enter the no";
	cin >> n;
	
	for(i=1;i<=n;i++){
	
		for(j=n;j>=i;j--){
		
			cout << i << "    ";
		
		}
		cout << endl;
	
	}
	
return 0;
}

----------------------------------------------------------------------------------------------------------------------------



#include <iostream>

using namespace std;

int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
------------------------------------------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}






























