#include<iostream>
using namespace std;

class Exam{
      
      private:
              string *name;
              string *examDate;
              int *score;
              
      public:
             
            //Default Constructor
            Exam(){
                name= new string("Not Available");
                examDate= new string ("Not Available");
                score= new int(0);
            }
             
             //Method for setting data
             void setData(string name , string examDate , int score){
                  
                  *this->name = name;
                  *this->examDate = examDate;
                  *this->score = score;
                  
             }
             
             //Method for displaying data
             void displayExamDetails(){
                  
                  cout<<"Name : "<<*name<<"\n";
                  cout<<"Exam Date  : "<<*examDate<<"\n";
                  cout<<"Score : "<<*score<<"\n";
             }
             
             //Method for changing data to show impact of shallow copy 
             void changeScore(int x){
                 *score=x;
             }        
};

int main(){
    
    //making object1 of exam class
    Exam s1;
    
    //showing details set by default constructor
    s1.displayExamDetails();
    
    //copying data of s1 in s2 with copy assignment oeprator
    Exam s2 = s1;
    
    //showing s2 data which shallow copied s1
    s2.displayExamDetails();
    
    //changin data in s2
    s2.changeScore(300);
    
    //displaying s1 data to see change occured due to shallow copy
    s1.displayExamDetails();

    return 0;
}
