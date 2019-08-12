#include <iostream>
using namespace std

#define MAX_SIZE 100

class Stack{
  private{
    chr A[MAX_SIZE];
    int top = -1;
  }
  
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
  
  }
  
}

void Reverse(chr A, int n){
  
  for(int i=0; i < n; i++){
    Push(A[i]);
  }
  
  for(int i = 0; i < n; i++){
    A[i] == Peek();
    Pop();
  }
  
};


int main(){
  chr A[MAX_SIZE];
  
  printf("Input expression: ");
  gets(A);
  Reverse(A,strlen(A));
  
  printf("Reverse: %c", A);
  
}
