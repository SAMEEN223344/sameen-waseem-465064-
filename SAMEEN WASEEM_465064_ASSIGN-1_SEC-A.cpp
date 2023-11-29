#include<iostream>
using namespace std;
int main()
//{
////Write a C++ program to display factors of a number using for loops.
//	cout<<"TASK-1"<<endl;
//	cout<<"display factors of number from 1-100"<<endl;
//	int x;
//	cout<<"entre any number from 1-100"<<endl;
//	cin>>x;
//	
//	int i;
//	cout<<"factors of number are:"<<endl;
//	for( i=1 ; i<=100 ; i++){
//		if ( x % i==0 )
//		cout<<i<<" "<<endl;
//	}
//	return 0;
//}

//{
//	
//	cout<<"TASK-3"<<endl;
//int x;
//cout<<"enter the value of x:"<<endl;
//cin>>x;
//
//if(10<x && x<=20){
//	//print one if yes
//	cout<<"1"<<endl;
//	}
//else{
//	//print 0 if no
//	cout<<"0"<<endl;
//	}
//	return 0;
//}

//{
//	cout<<"TASK-4"<<endl;
//		int x,y,z;
//	bool prime;
//	cout<<"positive integer:"<<endl;
//	cin>>x;
//	
//	y=x-1;
//	
//	if (x==1)	{
//			cout<<"no prime number less than 1."<<endl;
//	}
//	if(x<=0)	{
//		cout<<"Invalid"<<endl;
//	}
//	while(y>=2)	{
//		prime=true;
//		z=2;
//		while(z<y)	{
//			if(y%z == 0)	{
//				prime=false;
//				break;
//			}
//			z++;
//		}
//		if(prime==true){
//			break;
//		}
//		y--;
//	}
//	if(prime == true)	{
//		cout<<"largest prime number less then x: "<<y;
//	}
//	else	{
//		cout<<"no prime number less then "<<x;
//	}
//	return 0;
//}

//{
//	//compare two strings
//	cout<<"TASK-5"<<endl;
//     string x1,x2;
//     string x3="";
//    cout<<"Enter the First String (x1): "<<endl;
//    cin>>x1;
//    cout<<"Enter the Second String(x2): "<<endl;
//    cin>>x2;
//    if (x1==x2)
//    {
//    	cout<<"strings x1=x2"<<endl;
//     for ( int i= x1.length(); i>=0; i-- ) {
//     	x3 = x3 + x1[i];
//    	}
//	}
//	else {
//	cout<<"strings x1 and x2 are unequal"<<endl;
//	
//}
//return 0;
//}

//{
//perform division
//	cout<<"TASK-6"<<endl;
//	int dividend, divisor, quotient=0;
//	int ans;
//	
//    cout<<"value of dividend:"<<endl;
//    cin>>dividend;
//
//    cout<<"value of divisor:"<<endl;
//    cin>>divisor;
//    
//    ans=dividend;
//    if(dividend<divisor)	{
//	cout<<"dividend should be greater than the divisor."<<endl;
//}
//else if (dividend>0 && divisor>0)	{
//	for (int i=dividend;i>=divisor; i--)	{
//		if (i%divisor==0)	{
//			quotient=quotient+1;
//		}
//	}
//	cout<<"value of quotient:"<<quotient<<endl;
//	cout<<"value of remainder: "<<ans%divisor;
//}
//return 0;
//}

//{
//	cout<<"TASK-7"<<endl;
//	//program for a string which may contain lowercase and uppercase 
//    	string x;
//	cout<<"value of x:"<<endl;
//	cin>>x;
//	
//	for(int i=0 ; i<x.length() ; i++){
//		for(int j=0 ; j<x.length() ; j++){
//			if(i!=j){
//				if (tolower(x[i])==tolower(x[j])){
//					x[j] = x[j+1];
//					x[j+1] = ' ';
//				}
//			}
//		}
//	}
//	cout<<"The new string is "<<x;
//	return 0;
//}

//{	//Add more elements to an integer array a[5] = {1,2,3,4,5}
//	cout<<"TASK-8"<<endl;
//		int arr[5]={1,2,3,4,5};
//	int add;
//	cout<<"Enter the size of the new array"<<endl;
//	cin>>add;
//	
//	int number_updated[add];
//	for (int i=0;i<5;i++){
//		number_updated[i]=arr[i];
//	}
//	cout<<"Previous array is "<<endl;
//	for (int i=0;i<5;i++){
//		cout<<arr[i]<<endl;
//	}
//	for (int i=5 ; i<add ; i++){
//		cout<<"new numbers to the array."<<endl;
//		cin>>number_updated[i];
//	}
//	cout<<endl;
//	for (int i=0;i<add;i++){
//		cout<<i<<"th element : "<<number_updated[i]<<endl;
//	}
//	return 0;
//}
//
//
//{
//	//Find if there’s a triplet in the array which sums up to the given integer X of an array
//	cout<<"TASK-9"<<endl;
//		int x,y,z;
//	int numbers[x];
//	cout<<"array should be greater than 3"<<endl;
//	cin>>x;
//	
//	for (int j=0; j<x;j++){
//		cout<<"number of array:"<<endl;
//		cin>>numbers[j];
//	}
//	cout<<endl;
//	cout<<"number for which triplet is required"<<endl;
//	cin>>y;
//	
//	for(int i=0;i<x;i++){
//		for (int j=i+1;j<x;j++){
//			for (int k=j+1;k<x;k++){
//				z=numbers[i]+numbers[j]+numbers[k];
//				if (z==y){
//					cout<<numbers[i]<<" "<<numbers[j]<<" "<<numbers[k]<<endl;
//				}
//			}
//		}
//	}
//	return 0;
//}


//{
//	cout<<"TASK-10"<<endl;
//	//Implement Bubble sort on an array of 5 integers.
//	int a[5] = {10,9,4,15,25};
//	
//	for(int i=0 ; i<5 ; i++ )
//	{
//		for(int j=0 ; j<5-1 ;j++)
//		{
//			if ( a[j]>a[j+1] )
//			{
//				int temp = a[j];
//				a[j] = a[j+1];
//				a[j+1] = temp;
//			}
//		}
//	}
//	cout<<"sorted elements of array"<<endl;
//	for( int i=0 ; i<5 ; i++)
//	{
//		cout<< a[i] <<" ";
//		
//	}
//	return 0;
//}

	


	
	

