# 코딩 테스트 연습

코딩 테스트 문제 풀이를 기록하고 서로 리뷰하는 저장소입니다.

## 폴더 구조

```text
.
├── duck/
│   ├── jclee/
│   └── taeeon/
├── .gitignore
└── README.md
```

- `duck/` 아래에 사용자별 풀이 폴더를 둡니다.
- 사용자 폴더 안에서 플랫폼별로 하위 폴더를 나눕니다.
- 파일명에는 문제 번호와 이름을 함께 적습니다.

예시:

```text
duck/
└── jclee/
    └── baekjoon/
        └── 1000_A더하기B.cpp
```

## 브랜치 규칙

`main` 브랜치에는 풀이가 끝난 코드만 반영합니다. 문제 풀이는 작업 브랜치에서 진행한 뒤 Pull Request로 `main`에 병합합니다.

### 브랜치 이름 (그냥 아무렇게 정해두고 개인 폴더에 넣기만 하면될듯)

문제 풀이 브랜치는 다음 형식으로 만듭니다.

```text
solve/<사용자명>/<플랫폼>-<문제번호>
```

예시:

```text
solve/jclee/baekjoon-1000
solve/taeeon/programmers-42576
```

문서나 저장소 설정을 수정할 때는 다음 형식을 사용합니다.

```text
docs/<사용자명>/<작업내용>
chore/<사용자명>/<작업내용>
```

예시:

```text
docs/jclee/readme
chore/taeeon/gitignore
```

### 작업 순서

작업을 시작하기 전에 `main` 브랜치의 최신 내용을 가져와 새 브랜치를 만듭니다.

```bash
git switch main
git pull origin main
git switch -c solve/jclee/baekjoon-1000
```

풀이 파일을 작성한 뒤 커밋하고 원격 저장소에 브랜치를 올립니다.

```bash
git add duck/jclee/baekjoon/1000_A더하기B.cpp
git commit -m "solve: 백준 1000번 A+B"
git push -u origin solve/jclee/baekjoon-1000
```

GitHub에서 Pull Request를 만들어 리뷰한 뒤 `main`에 병합합니다. 병합이 끝나면 작업 브랜치를 삭제합니다.

### 브랜치 운영 원칙

- `main`에 직접 커밋하지 않습니다.
- 문제 하나당 작업 브랜치 하나를 사용합니다.
- 브랜치 이름에는 영문 소문자와 하이픈(`-`)을 사용합니다.
- 다른 사람의 작업 브랜치에 직접 커밋하지 않습니다.
- 병합 후 로컬 작업 브랜치를 정리합니다.

```bash
git switch main
git pull origin main
git branch -d solve/jclee/baekjoon-1000
```

## 커밋 메시지 규칙

커밋 메시지는 다음 형식으로 작성합니다.

```text
<종류>: <변경 내용>
```

종류:

- `solve`: 문제 풀이 추가 또는 수정
- `docs`: README 등 문서 수정
- `chore`: 저장소 설정이나 폴더 구조 정리
- `fix`: 풀이 또는 설정 오류 수정
- `refactor`: 동작을 유지하면서 코드 정리

예시:

```text
solve: xx 1000번 A+B
docs: 브랜치 규칙 추가
chore: C++ 빌드 파일 gitignore 추가
fix: xx 1000번 입력 처리 수정
```

## 풀이 작성 규칙

- 풀이 파일은 본인 폴더 안에 저장합니다.
- 사용자 폴더 안에서 플랫폼별로 하위 폴더를 나눕니다.
- 파일명에는 문제 번호와 문제 이름을 적습니다.
- 풀이 코드에 문제 링크나 풀이 접근을 주석으로 남겨도 좋습니다.
- 다른 사람의 풀이 파일을 수정할 때는 작성자와 먼저 상의합니다.

## 언어 및 빌드

주 사용 언어는 C++입니다. 컴파일 결과물과 IDE 생성 파일은 `.gitignore`에 등록해 저장소에 올리지 않습니다.
