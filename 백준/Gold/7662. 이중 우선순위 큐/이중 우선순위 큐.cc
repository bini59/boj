#include <cstdio>
#include <queue>

using namespace std;

int main(){
    priority_queue<long long int> qM, qm, marray, Marray;

    //총 반복횟수
    int n;

    //테스트 케이스
    int TEST;


    // 명령어 변수
    char command;
    long long int num;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%*c%d", &TEST);    
        qM = priority_queue<long long int>();
        qm = priority_queue<long long int>();
        marray = priority_queue<long long int>();
        Marray = priority_queue<long long int>();
        for (int j = 0; j < TEST; j++){
            scanf("%*c%c %lld", &command, &num);
            //입력, 둘다 넣어줌. 최소힙은 부호를 바꿔서 넣는것으로 만듬. 
            if(command == 'I'){
                qM.push(num);
                qm.push(-num);
            }
            //삭제연산
            else if(command=='D'){
                int temp;
                //제거연산을 할때는 항상 qM이 비지 않았을때만..
                if(num == 1 && !qM.empty()){
                    /*
                        제일 처음으로 해줄건, 혹시 저장해둔 게 있다면 지우기..
                        만약, 저장해둔게 있다면,
                        temp에 최대힙의 첫번째 원소를 넣고
                        최대힙의 첫번째 원소와, 저장해둔것의 첫번재 원소를 비교한다.
                        만약 같다면, 이미 제거된 원소이므로 둘다 제거해준다.
                    */
                    while(!Marray.empty()){
                        temp = qM.top();
                        //printf("temp(qM) : %d Marray top : %d\n", temp, Marray.top());
                        if(temp == Marray.top()){
                            qM.pop();
                            Marray.pop();
                        }
                        else
                            break;
                    }
                    /*
                        만약 위의 과정을 통해 qM이 비게 된다면...
                        continue로 넘어가기 
                        아니면 marray에 top원소 넣어주고 pop으로 하나 제거하기
                    */
                    if(qM.empty())
                        continue;
                    marray.push(-qM.top());
                    qM.pop();
                    //printf("qM size : %d qM top : %d\n", int(qM.size()), qM.top());
                    
                }
                else if(num == -1 && !qm.empty()){
                    /*
                        반대쪽도 마찬가지
                        만약, 저장해둔게 있다면,
                        temp에 최소힙의 첫번째 원소를 넣고
                        최소힙의 첫번째 원소와, 저장해둔것의 첫번재 원소를 비교한다.
                        만약 같다면, 이미 제거된 원소이므로 둘다 제거해준다.
                    */ 
                    while(!marray.empty()){
                        temp = -qm.top();
                        //printf("temp(qm) : %d marray top : %d\n", temp, -marray.top());
                        if(temp == -marray.top()){
                            qm.pop();
                            marray.pop();
                        }
                        else
                            break;
                    }
                    /*
                        역시나 반대쪽도 위와 마찬가지로 진행
                    */
                    if(qm.empty())   
                        continue;
                    Marray.push(-qm.top());
                    qm.pop();
                    //printf("qm size : %d qm top : %d\n", int(qm.size()), -qm.top());
                }

            
            }
        }
        /*
            연산이 모두 마치고 나머지 제거못한 원소 제거하기.
        */
        long long int temp;
        if(!Marray.empty()){
            while(!qM.empty() && !Marray.empty()){
                temp = qM.top();
                if(temp == Marray.top()){
                    qM.pop();
                    Marray.pop();
                }
                else
                    break;
            }
        }
        if(!marray.empty()){
            while(!qm.empty() && !marray.empty()){
                temp = -qm.top();
                if(temp == -marray.top()){
                    qm.pop();
                    marray.pop();
                }
                else
                    break;
            }
        }
        
        if((qm.empty()|| qM.empty())){
            printf("EMPTY\n");
        }
        else{
            printf("%lld %lld\n",qM.top(),-qm.top());
        }
    }




    return 0;
}