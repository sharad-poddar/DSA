/*
 * queue is an storing of data in array but works in FIFO 
 * first in first out, here element is taken from front and push at back
 * queue is mainly used in cases of nodes
*/
#include<iostream>
using namespace std;
class queue{
    public:
        int arr[10];
        int f = -1;
        int r = -1;

        void push(int x){
            if(r >= 10){
                cout<<"queue overflow"<<endl;
                return;
            }
            this->arr[++r] = x;
            if(f == -1){
                f = 0;
            }
        }

        int front(){
            if(f >= 10 || f > r){
                cout<<"queue underflow"<<endl;
                return (-1);
            }
            return this->arr[f];
        }
        
        void pop(){
            if(f >= 10 || f > r || f < 0){
                cout<<"queue underflow"<<endl;
                return;
            }
            f++;
        }
        
        bool empty(){
            if(r == -1 || f == 10){
                return (true);
            }
            return (false);
        }
};
int main(){
    queue* q = new queue();
    q->push(10);
    q->push(20);
    cout<<q->front()<<endl;
    cout<<q->empty()<<endl;
    q->pop();
    cout<<q->front()<<endl;
    return 0;
}