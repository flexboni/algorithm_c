# C++ STL sort() 함수 다루기 - 1

정렬 알고리즘을 공부하는 이유는 다양한 프로그래밍 대회 및 실무에서 활용할 수 있도록 하는 것이다. 하지만 이미 **정렬** 은 컴퓨터 공학의 오래된 연구 분야이므로 **이미 훌륭한 정렬 관련 라이브러리가 존재한다.** (물론 내부 정렬 원리를 모르고 무작정 라이브러리를 가져다 쓰는 것은 옳지 못하므로 귁 정렬, 병합 정렬에 대해 이해가 선행 되어야 한다.)

## sort() 함수의 기본 사용법

sort() 함수는 C++ 의 algorithm 헤더에 포함되어 있다.

```
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a + 10); // 첫 번째 인자 : 시작점 주소, 두 번째 인자 : 마지막 주소 + 1 => 포인터 개념
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';>>
    }
}
```

이 시점부터 C++ 문법을 사용하자. C++ 은 C 와 굉장히 흡사한 구조를 가지고 있고, C 에 객체 지향 프로그래밍 기법을 더한 문법이라고 보면 쉽다. sort() 함수는 **기본적으로 오름차순 정렬**을 수행한다. 위와 깉이 **배열의 시작점 주소와 마지막 주소 + 1** 를 적으면 된다. 단순히 sort(a, a + 10); 를 해주는 것만으로도 총 10개의 원소가 있는 배열 a 를 정렬해주는 것이다.

```
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main(void) {
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a + 10, compare); // 
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';>>
    }
}
```

위 소스코드는 기본적인 sort() 함수의 숨겨진 부분까지 쓴 것이라고 할 수 있다. sort() 함수가 좋은 이유는 **정렬의 기준을 자신이 원하는 형태로 설정할 수 있다는 점이다.** 위와 같이 compare() 함수를 만들어 sort() 의 _세 번째 인자 값으로 넣게 되면, 해당 함수의 반환 값에 맞게 정렬이 동작한다._

```
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    sort(a, a + 10, compare); // 
    for(int i = 0; i < 10; i++) {
        cout << a[i] << ' ';>>
    }
}
```

위와 같이 변수 a 와 b 를 비교하는 부분에서 반환 값만 큰 (Greater, >) 으로 바꾸어 주면 내림차순 정렬로 변환된다. (크다는 기준은 '왼쪽이 오른쪽에 비해서'를 기준으로 삼음) 즉, 두 개의 데이터를 비교함에 있어 왼쪽에 있는 것이 더 클 수 있도록 정렬하겠다는 소리이다. 따라서 내림차순 정렬이 수행되는 것이다.

## 데이터를 묶어서 정렬하는 방법

기본적으로 위와 같은 단순 데이터 정렬 기법은 실무에서 사용하기에 적합하지 않다. 실무에서는 모든 데이터들이 객체로 정리되어 내부적으로 여러 개의 변수를 포함하고 있기 때문이다. 이 경우 가장 중요한 정렬 방식은 **'특정한 변수를 기준으로 정렬'** 하는 것이다.

```
#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int score;
    Student(string name, int score)
    {
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 작은 순서'
    bool operator<(Student &student)
    {
        return this->score < student.score;
    }
};

bool compare(int a, int b)
{
    return a > b;
}

int main(void)
{
    Student students[] = {
        Student("김씨", 90),
        Student("박씨", 93),
        Student("이씨", 97),
        Student("최씨", 87),
        Student("하씨", 92)};
    sort(students, students + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << students[i].name << ' ';
    }
}
```

위 소스코드를 보면 왜 실생화에서 가장 많이 사용되는지 알 수 있다. 점수를 기준으로 학생을 정렬해서 이름을 출력하는 것이다. 이를 퀵 정렬, 병합 정렬 등의 함수 안에서 구현하고자 하면 굉장히 복잡해질 수 있는데, sort() 함수의 문법을 지키면서 구현하는 것은 위와 같이 클래스를 이용해 작업하면 된다.