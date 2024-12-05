# Commit Convention Structure

## Basic Structure

```md
[언어] Type : 문제 번호 or 문제집 ([Day X])
```
- [언어] : 사용한 언어 (Python, Java, C++ 등).
- 유형 : 커밋 작업의 상태 (ing - 진행 중, end - 완료).
- 문제 번호 or 문제집 : 문제 번호나 문제집 이름.
- [Day X] : Day X는 특정 데이클래스를 나타낸다.

### **Types**
| Type        | Description                               |
|-------------|-------------------------------------------|
| `ing`       | 문제 풀이 진행 중                         |
| `end`       | 문제 풀이 완료                            | 

### Examples

1. 문제 풀이 진행 중 (데일리 클래스):

    ```md
    [c++] ing: programmers basic [day 1]
    ```

2. 문제 풀이 완료 (데일리 문제):

    ```md
    [C++] end: programmers codingtest intro [day 2]
    ```

3. 플랫폼별 문제 완료:

    ```md
    [Python] end: b_8011
    ```