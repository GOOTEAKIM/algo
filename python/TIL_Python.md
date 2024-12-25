# TIL_Python

## Python

### 6/15
---
#### f-string

```python
int x = 2
int y = 3

print(f"The sum of {x} and {y} is {x+y}.")
# The sum of 2 and 3 = 5.
```
---
#### replace()

- `new_string = string.replace(old, new)`
  - string : 원본 문자열
  - old : 바꾸기 전의 문자열
  - new : 바꾸고 나서의 문자열
  - new_string : 완성된 새로운 문자열

  ```python
  text = "hello world"
  new_text = text.replace("world", "there")

  print(new_text)  # hello there
  ```
---
#### get()

- `b = dictionary.get(a)`
  - a : 조회하려는 키
  - dictionary : 해당 dict
  - b : dict 에서 a라는 key 값에 해당하는 value 값
---
#### set

- set(== 집합) : 중복된 값을 허용하지 않고, 순서가 없는 자료형

- 합집합 : `|`
- 차집합 : `-`
- 교집합 : `&`
---