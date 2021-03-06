# 정렬의 개요와 선택 정렬(Selection Sort)

일반적으로 알고리즘 공부할 때 가장 먼저 풀어보는 문제는 **'정렬(Sort)'** 이다. why? 정렬만틈 알고리즘의 효율성 차이를 극명하게 보여주는 것이 없기 때문이다.

## 문제

### 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요.

> 1, 10, 5, 8, 7, 6, 4, 3, 2, 9

## 문제 확인

가장 직관적인 접근 방법 : 선택 정렬.

사람은 전체 배열을 확인 뒤 1~10까지 숫자를 써내려가겠지만, 컴퓨터는 그 과정을 구체적으로 명시해야 한다. 즉, 알고리즘을 정의 해아함!!.
</br>

    가장 작은 것을 선택해서 제일 앞으로 보내면 어떨까? => **선택 정렬**

---

[소스 코드 확인](https://github.com/flexboni/algorithm_c/blob/master/2%EA%B0%95/selectionSort.cpp)

---

## 시간 복잡도

여기서 가장 중요한 것은 데이터의 갯수가 N개 일 때 총 몇 번의 비교 연산을 해야 하는지 이다. 선택 정력은 대략 N \* (N + 1) / 2 번 가량의 연산을 수행한다.

    선택 정렬의 시간 복잡도
    N * (N + 1) / 2 => O(N^2)

즉, 10,000 개의 데이터가 있는 경우 일 억 번 정도 계산을 할 것이다 라는 의미이다. 실제로 이 정도의 시간 복잡도를 가지는 선택 정렬이 효율적인지, 그리고 현실 세계의 정렬 상황에서 효과적으로 사용될 수 있을지 고민해보는 시간이 필요하다.
