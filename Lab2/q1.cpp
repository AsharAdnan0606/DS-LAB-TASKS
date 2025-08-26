#include<iostream>
using namespace std;
class Matrix{
             
             private:
                     int**mat;
                     int r;
                     int c;
             public:
                    Matrix(){}
                    
                    void createMatrix(){
                        cout<<"Enter Number Of Rows : ";
                        cin>>r;
                        cout<<"Enter Number of Columns : ";
                        cin>>c;
                         mat = new int*[r];
                         for(int i=0 ; i<r ; i++){
                                mat[i]=new int[c];                          
                                }
                         }
                         
                         
                    void addElem(){
                         for(int i=0 ; i<r ; i++){
                                   for(int j=0 ; j<c ; j++){
                                             int temp;
                                             cout<<"Enter Row "<<i+1<<" "<<" Element "<<j+1<<" : ";
                                             cin>>temp;
                                             mat[i][j]=temp;                              
                                           }                                 
                                 }                                                       
                         }
                         
                    
                    void showElem(){
                            for(int i=0 ; i<r ; i++){
                                 for(int j=0 ; j<c ; j++){
                                       cout<<mat[i][j]<<" ";
                                    }
                                      cout<<"\n";
                             }   
                         }
                         
                    void resizeMatrix(){
                        int newrow , newcol;
                        cout<<"Enter New Number of Rows : ";
                        cin>>newrow;
                        
                        cout<<"Enter New Number of Columns : ";
                        cin>>newcol;
                        
                        if(newrow!= r || newcol!=c){
                            
                            
                        }
                        
                        
                    }
      
      
      };
int main(){
    
    Matrix m1;
    m1.createMatrix();
    m1.addElem();
    m1.showElem();
    
    
    
}
