#include<iostream>
using namespace std;

//main University class:
class University{
	
	private:
		
		//3d Matrix using dma storing students of each dept and each student having  marks of 5 subjects:
		int*** marks;
		int depcount;
		//making a student count arr to store count of students in each dept
		int studentCount[100];
		
		//a 2d array storing total marks of each student in each dept
		int** total;
		
		
	public:
		//default constructor:
		University(){ };
		
		//parametrized constructor:
		University(int dept){
			
			//allocating memory to all data members
			total = new int* [dept];

			marks = new int**[dept];
			depcount=dept;
			for(int i=0 ; i<depcount ; i++){
				int temp;
				
				//taking number of students in each deoartment as input
				cout<<"Enter Number of Students in Deartment "<<i+1<<" : ";
				cin>>temp;	
				studentCount[i]=temp;			
				marks[i] = new int*[temp];
				
				//allocating 5 element memory to each student in each dept for storing marks
				for(int j=0 ; j<temp ; j++){
					marks[i][j]= new int[5];
				}
				
				total[i]= new int [studentCount[i]]();
			}			
			
		
				
				
			}
		
		//method for adding data:
		
		void addData(){
			for(int i=0 ; i<depcount ; i++){
				cout<<"----Department "<<i+1<<"----\n\n";
				for(int j=0 ; j<studentCount[i] ; j++){
					cout<<"\n----Student "<<j+1<<"----\n";
					for(int k=0 ; k<5 ; k++){
						cout<<"Enter Marks of Subject "<<k+1<<" : ";
						cin>>marks[i][j][k];
					}
				}
			}
			
			//in adding data method calculating total and storing in total array:
			for(int i=0 ; i<depcount ; i++){
				for(int j=0 ; j<studentCount[i] ; j++){
					
					for(int k=0 ; k<5 ; k++){
						total[i][j]+=marks[i][j][k];					
					}					
				}
			}
		}
		
		//highest marks calculating method:
		void highestMarks(){
			
			for(int i=0 ; i<depcount ; i++){
			
				cout<<"\n----Max Marks in Department "<<i+1<<" ----\n"; 									
									
					int max=total[i][0],high=1;
					for(int j=1 ; j<studentCount[i] ; j++ ){
					if(max<total[i][j]){
						high=j+1;
					}
				}
				
				cout<<"Student "<<high<<endl;																															
			}
			
		}
		
		//lowest marks calculating method:
		void lowestMarks(){
			
			for(int i=0 ; i<depcount ; i++){
			
				cout<<"\n----Min Marks in Department "<<i+1<<" ----\n"; 									
									
					int min=total[i][0],low=1;
					for(int j=1 ; j<studentCount[i] ; j++ ){
					if(min>total[i][j]){
						low=j+1;
					}
				}
				
				cout<<"Student "<<low<<endl;																															
			}
			
		}
		
		//Average marks calculating method:
		
		void averageMarks(){
			for(int i=0 ; i<depcount ; i++){
				int temp=0;
				for(int j=0 ; j<studentCount[i] ; j++){
					temp+=total[i][j];
				}
				temp/=studentCount[i];
				cout<<"Average marks in Department "<<i+1<<" : \n"<<temp;
			}
		}
		
		
		//just an unecessary function to verify code's accuracy:
		void showTotal(){
			for(int i=0 ; i<depcount ; i++){
				for(int j=0 ; j<studentCount[i] ; j++){
					cout<<total[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
};

int main(){
	
 	//making an object u1 and pushing in 1 as department = 1 
	University u1(1);
	//adding data by calling addData()
	u1.addData();
	//calculating highest marks in each dept 
	u1.highestMarks();
	//calculating lowest marks in each dept 
	u1.lowestMarks();
	//calculating average marks in each dept 
	u1.averageMarks();
	
	return 0;
}
