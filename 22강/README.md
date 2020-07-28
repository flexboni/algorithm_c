# 다이나믹 프로그래밍 타일링 문제 풀어보기 ①

다이나믹 프로그래밍 기법의 기본이라고 하 수 있는 **탸일링(Tiling) 문제** 를 풀어보자. 다이나믹 프로그래밍 중급으로 넘어가기 위한 가장 기초적인 단계라고 할 수 있다. 사실 기초적인 단계라고 하지만 _타일링 문제도 어렵게 내면 매우 어려워질 수 있는 문제 유형_ 이다.

[[자세한 설명 보러가기]](https://blog.naver.com/ndb796/221233586932)

## 난이도 1! 2 X N 타일링

[[문제 보러가기]](https://www.acmicpc.net/problem/11726)

가장 마지막에 오는 타일을 기준으로 생각했을 때 가능한 경우는 오직 두 가지 경우이다. 따라서 점화식은 다음과 같다

    D[i] = D[i - 1] + D[i - 2]

[[소스 확인]](https://github.com/flexboni/algorithm_c/blob/master/22강/dp1.cpp)

## 난이도 2!! 2 X N 타일링2

[[문제 보러가기]](https://www.acmicpc.net/problem/11727)

가장 마지막에 오는 타일을 기준으로 생각했을 때 가능한 경우는 오직 세 가지 경우이다. 따라서 점화식은 다음과 같다

    D[i] = D[i - 1] + 2 * D[i - 2]

[[소스 확인]](https://github.com/flexboni/algorithm_c/blob/master/22강/dp2.cpp)

## 난이도 3!!! 2 X N 타일링3

[[문제 보러가기]](https://www.acmicpc.net/problem/2133)

가장 마지막에 오는 타일을 기준으로 생각했을 때 가능한 경우는 오직 세 가지 경우이다. 또한 4부터는 2의 배수가 될 때마다 고유한 모양이 2개 씩 나타난다. 따라서 점화식은 다음과 같다

    D[i] = 3 * D[i - 2] + (2 * D[i - 4] + 2 * D[i - 6] ... 2 * D[0])

더불어 i 가 홀수일 때는 0을 출력 해준다는 점만 기억하면 된다.

[[소스 확인]](https://github.com/flexboni/algorithm_c/blob/master/22강/dp3.cpp)

## 난이도 4!!!! 2 X N 타일링4

[[문제 보러가기]](https://www.acmicpc.net/problem/14852)

가장 마지막에 오는 타일을 기준으로 생각했을 때 가능한 경우는 오직 5 가지 경우이다. 또한 3부터는 하나씩 증가할 때마다 고유한 모양이 2개씩 나타난다. 따라서 점화식은 다음과 같다

    D[i] = 3 * D[i - 2] + 2 * D[i - 1] + (2 * D[i - 3] + 2 * D[i - 4] ... 2 * D[0])

더불어 i 가 홀수일 때는 0을 출력 해준다는 점만 기억하면 된다.

[[소스 확인]](https://github.com/flexboni/algorithm_c/blob/master/22강/dp4.cpp)

하지만 이 경우 시간 복잡도가 사실상 **O(N^2)** 이 나온다는 점ㅁ에서 시간 초과가 발생한다. 따라서 2차원 다이나믹 프로그래밍 기법을 사용하여 다음과 같이 해결해야 한다.

[[소스 확인]](https://github.com/flexboni/algorithm_c/blob/master/22강/dp5.cpp)