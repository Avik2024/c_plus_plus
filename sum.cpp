    #include <iostream>  
    using namespace std;  
    //void change(int data);  
    //int main()  
    //{  
    //int data = 3;  
    //change(data);  
    //cout << "Value of the data is: " << data<< endl;  
    //return 0;  
    //}  
    //void change(int data)  
    //{  
    //data = 5;  
    //}  
    
    
  /* Function */  
  
  
//void max(int n1, int n2, int n3, int n4);
//int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//    int a,b,c,d;
    
//    cin >> a >> b >> c >> d;
//    max(a,b,c,d);
    
      
// return 0;
//}

//void max(int n1, int n2, int n3, int n4){
    
//    if(n1 >= n2 && n1 >= n3 && n1 >= n4 ){
//        cout << n1 <<endl;
//    }
//    else if(n2 >= n1 && n2 >= n3 && n2 >= n4 ){
//        cout << n2 <<endl;
//    }
//    else if(n3 >= n2 && n3 >= n4 && n3 >= n1 ){
//        cout << n3 <<endl;
//    }
//    else {
//        cout << n4 <<endl;
//    }
    
//} 



/* Pointer */
/*
void swap(int *x, int *y);

int main(){
	int a,b;
	cin >> a >> b;
	swap(&a,&b);
	
return 0;
}

void swap(int *x, int *y){
	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout<< "The current value of x = " << (*x)<<endl;
	cout << "The current value of y = " << (*y)<<endl;

}
*/
/*
int main(){
	int value,fact;
	int factorial(int);
	cin >>value;
	fact = factorial(value);
	cout<<"The factorial number of the given value is = "<<fact<<endl;

return 0;
}

int factorial(int num){

	
	if(num < 0){
		
		return (-1);
	}
	else if(num ==0){
	
		return (1);
	}
	else{
	
		return (num*factorial(num-1));
	}
	
}
*/

/*
int main() {
     
    void increament(int *a, int *b);
    //int sum,diff;
    int x,y;
    cin >> x >> y ;
    increament(&x,&y);
    return 0;
}

void increament(int *a, int *b){
    int diff;
    int sum = ((*a) + (*b));
    if((*a) >= (*b))
         diff = ((*a) - (*b)); 
    else  
         diff = ((*b)-(*a)); 
    cout <<sum<<endl;
    cout <<diff<<endl;
}
*/
//Array

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    void reverse(int arr[],int n);
    int Arr[100], num;
    cin >> num;
    cin >> Arr[num];
    reverse(Arr,num); 
    cout << Arr[num]<<"\n"<<endl;
       
    return 0;
    
}

void reverse(int arr[], int n){
    
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(arr[i]==arr[j]){
                break;
            }
            else{
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
           
        }
    }    

}




























