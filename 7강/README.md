# 기초 정렬 문제 풀어보기

지난 시간 개념 : 선택 정렬, 버블 정렬, 삽입 정렬, 퀵 정렬
</br>

위 정렬 알고리즘을 활용해 실제로 문제를 풀어보자.
</br>

[추천 알고리즘 사이트]
* 백준 온라인
    * [https://www.acmicpc.net/](https://www.acmicpc.net/)


## 문제

1. 시간 복잡도 O(N^2)
    *  단순 정렬 [[https://www.acmicpc.net/problem/2750]](https://www.acmicpc.net/problem/2750)

        1,000 * 1,000 = 1,000,000 개의 데이터이다. 보통 1억 개 미만의 데이터인 경우 '선택 정렬', '버블 정렬', '삽입 정렬' 등을 사용하는게 간단하고 빠르다.

        [[문제 풀이 보기]](https://github.com/flexboni/algorithm_c/blob/master/7강/simpleSort.cpp)

    * 세 숫자 정렬 [[https://www.acmicpc.net/problem/2752]](https://www.acmicpc.net/problem/2752)

        [[문제 풀이 보기]](https://github.com/flexboni/algorithm_c/blob/master/7강/threeFiguresSort.cpp)

2. 시간 복잡도 O(N * logN)

    * 100만 개 정렬 [[https://www.acmicpc.net/problem/2751]](https://www.acmicpc.net/problem/2751)

        위 문제는 데이터의 갯수가 100만 개인데 시간 제한이 1초이므로 반드시 시간 복잡도 O(N * logN)으로 풀어야 해결할 수 있는 문제이다. (ex. 퀵 정렬, 힙 정렬...)

        [[문제 풀이 보기]](https://github.com/flexboni/algorithm_c/blob/master/7강/oneMillionSort.cpp)

        위 소스 코드로 정답 처리가 된다. 사실 기본적으로 O(N * logN)을 요구하는 문제는 기본적인 퀵 정렬 소스 코드를 넣었을 때 틀리다고 처리된다. 왜냐면 최악의 경우 O(N^2)가 나올 수 있기 때문이다. 그래서 프로그래밍 대회에서는 일부로 O(N^2) 가 나오는 경우를 테스트 케이스에 넣어서 기본 퀵 정렬로는 문제를 풀 수 없도록 한다.

        [[추천 풀이 보기]](https://github.com/flexboni/algorithm_c/blob/master/7강/oneMillionSort2.cpp)

        그래서 위와 같이 C++ 알고리즘 STL 라이브러리를 사용한다. **STL 라이브러리 에서 제공하는 sort() 함수는** 퀵 정렬을 기반으로 하되 최악의 경우에도 O(N * logN) 을 보장한다. 혹은 이후 배울 병합 정렬 혹은 힙 정렬을 사용할 수 있다.