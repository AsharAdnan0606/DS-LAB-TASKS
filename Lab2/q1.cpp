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
                        
                        int **tempMat = new int* [newrow];
                        for(int i=0 ; i<newrow ; i++){
                            tempMat[i]=new int [newcol]();
                        }
                        
                        for(int i=0 ; i<r ; i++){
                            for(int j=0 ; j<c ; j++){
                                tempMat[i][j]=mat[i][j];
                            }
                        }

                        for(int i=0 ; i<r ; i++){
                        	delete[] mat[i];
						}
						
						delete[] mat;
						
						mat = tempMat;
                        r=newrow;
                        c=newcol;
                  }


					void transposeMatrix(){
						
						int**tempMat = new int*[r];
						
						for(int i=0 ; i<r ; i++){
							tempMat[i] = new int [c];
						}
						
						for(int i=0 ; i<r ; i++ ){
							for(int j=0 ; j<c ; j++){
								tempMat[j][i]=mat[i][j];
							}
						}
									
						for(int i=0 ; i<r ; i++){
							delete[] mat[i];
						}
						
						delete[] mat;
						
						mat= tempMat;
					}

      
      
      };
int main(){
    
    Matrix m1;
    m1.createMatrix();
    m1.addElem();
    cout<<"\nMatrix : \n";
    m1.showElem();
    cout<<"\n\nMatrix after first transpose : \n";
    m1.transposeMatrix();
//    m1.resizeMatrix();
    m1.showElem();
    cout<<"\n\nMatrix after second transpose : \n";
    m1.transposeMatrix();
    m1.showElem();
    
    
}
