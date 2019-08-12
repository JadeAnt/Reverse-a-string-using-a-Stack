#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack{
  private{
    chr A[MAX_SIZE];
    int top = -1;
  }//private
  
  public{
    
    void Push(chr x){
      A[top++] == x;
    }
    
    void Pop(){
      top--;
    }
    
    chr Peek(){
      return A[top];
    }
  
    bool IsEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }
  
  }//Public
  
}//class Stack

void Reverse(chr *A, int n){
  Stack <chr> S;
  
  if(!IsEmpty){
    for(int i = 0; i < n; i++){
      S.Push(A[i]);
    }

    for(int i = 0; i < n; i++){
      A[i] = S.Peek();
      S.Pop();
    }
  }
  
  else{
     print("There is no expression to reverse.");
  }
  
}


int main(){
  chr A[64];
  
  printf("Input expression: ");
  gets(A);
  Reverse(A,strlen(A));
  
  printf("Reverse: %s", A);
  
}
