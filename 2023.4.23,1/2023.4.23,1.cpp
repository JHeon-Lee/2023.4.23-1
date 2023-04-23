// 2023.4.23,1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"

/*
    벡터의 함수
    push back(인자값) : 벡터의 제일 뒷쪽에 자료를 넣는다.
    pop back() : 벡터의 마지막 자료를 지운다.
    size() : 벡터에 들어가있는 자료의 갯수 반환
    begin() : 벡터의 첫번째 값의 주소값 반환 --> 포인터로 접근해야함.
    end() : 벡터의 마지막 값의 다음  주소값 반환.
    insert(자료를 넣을 위치 주소값, 넣을 값) : 특정 위치에 값을 넣는다.
    insert(자료를 넣을 위치 주소값, 갯수, 넣을 값) : 특정 위치에 지정 갯수만큼 값을 넣는다.
    erase(자료를 지울 위치 주소값) : 특정 위치의 값을 지운다.
    clear() : 벡터 전체를 지운다
    empty() : 벡터가 비어있는지 확인(bool)
*/

int main()
{
    // 벡터 : 자료를 담는 자료구조
    // vector<담을 자료형> 변수이름 으로 선언한다

    vector<int> vecInt; // int형 외에도 다른 자료형, 구조체, 클래스 모두 사용 가능

    cout << vecInt.empty() << endl; // true

    vecInt.push_back(3);
    vecInt.push_back(2);
    vecInt.push_back(4);
    vecInt.push_back(7);
    // 3 2 4 7 -- 배열하고 비슷하지만 매크로 기능이 추가된 자료구조 같은 느낌

    cout << vecInt.empty() << endl << endl; // false

    // 벡터 자료에 대한 접근은 다양한 방식으로 가능
    // 벡터 이터레이터 : 벡터의 주소값을 임시로 담을 변수 --> 값을 넣고 변경을 할때 사용
    vector<int>::iterator iter;
    for (iter = vecInt.begin(); iter != vecInt.end(); iter++)
    {
        cout << (*iter) << endl;
    }
    cout << *(vecInt.begin() + 3) << endl;
    cout << *(vecInt.end() - 1) << endl << endl;
    // vecInt[3]; => *(vecInt.begin() + 3)

    vecInt.insert(vecInt.begin() + 2, 10); // 3 2 10 4 7
    vecInt.insert(vecInt.begin() + 2, 3, 5); // 3 2 5 5 5 10 5 7

    for (int i = 0; i < vecInt.size(); i++) // index 방식 --> 데이터를 가지고 와서 확인하고 사용만 할때
    {
        cout << vecInt[i] << endl;
    }

    vecInt.clear();

    cout << endl;
    cout << vecInt.empty() << endl;

    system("pause");

    return 0;
}
