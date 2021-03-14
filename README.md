# 프로젝트 명 : 42seoul_libft

## 소개
42서울 과제중 libft라는 과제를 수행하게 됬다.
c언어 헤더패키지에서 제공하는 라이브러리를 직접 구현하고 내부 로직의 원리를 파악하기 위해 만든 과제인 것 같다.

## 구현해야할 라이브러리들

1. ft_atoi
2. ft_bzero
3. ft_calloc
4. ft_isalnum
5. ft_isalpha
6. ft_isascii
7. ft_isdigit
8. ft_isprint
9. ft_itoa
10. ft_lstadd_back
11. ft_lstadd_front
12. ft_lstclear
13. ft_lstdelone
14. ft_lstiter
15. ft_lstlast
16. ft_lstmap
17. ft_lstnew
18. ft_lstsize
19. ft_memccpy
20. ft_memchr
21. ft_memcmp
22. ft_memcpy
23. ft_memmove
24. ft_memset
25. ft_putchar_fd
26. ft_putendl_fd
27. ft_putnbr_fd
28. ft_putstr_fd
29. ft_split
30. ft_strchr
31. ft_strdup
32. ft_strjoin
33. ft_strlcat
34. ft_strlcpy
35. ft_strlen
36. ft_strmapi
37. ft_strncmp
38. ft_strnstr
39. ft_strrchr
40. ft_strtrim
41. ft_substr
42. ft_tolower
43. ft_toupper


---------------------------------------
### int     ft_atoi(const char *str)

#### 설명 : 
atoi = ascii - to - integer 라는 뜻이다.
즉, char 타입을 int로 바꾸는 것을 의미한다.
에를 들어
```
#include <stdio.h>
#include <stdlib.h>    // atoi 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "283";   // "283"은 문자열
    int num1;

    num1 = atoi(s1);        // 문자열을 정수로 변환하여 num1에 할당

    printf("%d\n", num1);   // 283

    return 0;
}
```
출력 결과 : 283

매개변수 : const char *str(값을 고정시키고 변화를 주지 못하게 하려고)

단, 문자열은 정수로 되어있어야만 하며 알파벳 영문자, 특수문자가 포함되면 해당 문자부터는 변환을 하지 않는다. 또한 처음부터 숫자가 아니면 0으로 변환된다. 예를들어 다음과 같다.
```
283a → 283
283a30 → 283
283! → 283
283!30 → 283
a30 → 0
!30 → 0
abc → 0
!@# → 0
```

---------------------------------------

### void    ft_bzero(void *s, size_t n)
#### 설명 :
s가 가리키는 곳에 '0'바이트를 n개만큼 넣는다.

##### 매개변수(parameters)
- s : 채우고자 하는 메모리의 시작 주소
- n : 채우고자 하는 바이트 수

##### 반환값(return)
- void



---------------------------------------

### void    *ft_calloc(size_t count, size_t size)
#### 설명 :
우리가 흔히 c언어에서 쓰는 calloc을 구현하는 것이다.
원하는 메모리 블록크기와 갯수를 정하여 동적할달 할 수 있도록 한다.

##### 매개변수(parameters)
- count : 원하는 메모리 블록 크기(char, int, long... ect)
- size : 메모리블록의 개수

##### 반환값(return)
- 실패시 : NULL 반환
- 성공시 : 할당된 메모리 반환


---------------------------------------


### void    ft_free_2d(char **str)
#### 설명 :
문자열에 할당된 메모리를 해제하기 위한 함수

##### 매개변수(parameter)
- **str : 문자열
###### 반환값(return)
- void

---------------------------------------


### int     ft_isalnum(int c)
#### 설명 : 
알파벳 혹은 숫자가 있는지 확인하기 위한 함수

##### 매개변수(parameter)
- c : 문자를 받는다.(아스키로)

##### 반환값(return)
- 있으면 True, 없으면 False(NULL) 반환

---------------------------------------


### int		ft_isalpha(int c)
#### 설명 :
알파벳인지 아닌지 구별하기 위한 함수
###### 매개변수(parameter)
- c : 정수
##### 반환값(return)
- 알파벳이면 true, 아니면 false

---------------------------------------


### int		ft_isascii(int c)
#### 설명 :
아스키코드인지 아닌지 구별하기 위한 함수
##### 매개변수(parameter)
- c : 정수
##### 반환값(return)
- 아스키코드이면 true, 아니면 false

---------------------------------------

### int		ft_isdigit(int c)
#### 설명 :
숫자인지 아닌지 구별하기 위한 함수
##### 매개변수(parameter)
- c : 숫자 
##### 반환값 (return)
- 숫자이면 true, 아니면 false
---------------------------------------


### int		ft_isprint(int c)
#### 설명 :
범위안에 출력 가능한 것인지 알아보는 함수
##### 매개변수(parameter)
- c : 숫자
##### 반환값 (return)
- 출력가능하다면 1 아니면 0


---------------------------------------


### int		ft_isset(char c, char *set)
#### 설명 :
문자열 중에서 원하는 단어가 있는지 검사하는 함수
##### 매개변수(parameter):
- c : 찾으려는 단어
- set  : 문자열

---------------------------------------
### char	*ft_itoa(int n)
#### 설명 :
int를 아스키로 바꿔는 함수
즉, int형을 char타입으로 바꿔는 역할을 수행

---------------------------------------

### void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
#### 설명 : src메모리영역에서 dest메모리 영역으로 nbyte만큼 복사
##### 매개변수(parameter)
- dest : 채우고자 하는 메모리의 시작 주소
- src : 복사하여는 메모리의 시작 주소
- c : 같은지 확인하려는 문자
- n : 채우고자 하는 바이트의 수

##### 반환값(return)
- void *
- 제대로 copy가 되면 : NULL
- c와 같은 문자를 만나 중간에 중단되었을 경우 : 다음 문자에 대한 포인터 반환(값을 복사한 다음 index의 dest 주소를 반환)


---------------------------------------

### void	*ft_memchr(const void *s, int c, size_t n)
#### 섦명 : s에서 n바이트 중에서 c를 찾는 함수, 즉 메모리에서 특정 값을 찾을 때 사용하는 함수
##### 매개변수(parameter)
- s : 검색을 수행하는 문자열의 시작 주소
- c : 검새하려는 문자
- n : 검색을 시작한 부분부터 검색을 수행할 만틈의 바이트 수(즉, 검색 개수를 정할 수 있음)
##### 반환값(return)
- 만약 검색 범위(n)에서 원하는 단어를 찾았을 경우, 찾은 단어 이후 단어까지 출력
- 만약 검색에 실패 하였을 경우 NULL(0)출력



---------------------------------------
### int		ft_memcmp(const void *s1, const void *s2, size_t n)
#### 설명 : 문자열의 시작 주소 s1과 문자열의 시작 주소 s2를 비교하여 n바이트 만큼 비교
##### 매개변수(parameter)
- s1, s2 : 미교할 메모리 블럭
- n : 비교할 바이트 수

###### 반환값(return)
- s1 == s2 : 0
- s1 > s2 : 양수 반환
- s1 < s2 : 음수 반환
---------------------------------------

### void *memcpy(void *dst,const void *src,size_t size)
#### 설명 : dst에 src가 가리키는 포인터를 시작해서 size만큼 복사 
##### 매개변수(parameter)
- dst : 데이터가 복사될 시작 주소.
- src : 복사할 데이터의 시작 주소.
- size : 복사할 데이터의 바이트 수

##### 반환값(return)
- 복사한 dst


---------------------------------------

### void	*ft_memmove(void *dst, const void *src, size_t len)
#### 설명 : dst에 src의 len만큼 복사 넣기 dst < src: 순차적으로 복사, dst > src : 뒤에서부터 복사
##### 매개변수(parameter)
- dst : 데이터가 복사될 곳을 가리키는 포인터. void 혈
- src : 복사할 데이터가 있는 위치를 가리키는 포인터. void 형
- num : 복사할 바이트 수
##### 반환값(return)
- dst 포인터
