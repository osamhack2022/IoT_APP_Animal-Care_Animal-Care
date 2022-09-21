
# Animal-Care
![Logo](https://logosbynick.com/wp-content/uploads/2018/03/final-logo-example.png)

프로젝트명 또는 프로젝트 로고 이미지 **(택1)**

## 프로잭트 소개
반려동물 스마트 모니터링 목걸이를 제안하고자 한다. 스마트 목걸이에는 체온, 심박수를 측정할 수 있는 센서를 부착하여 생체신호를 24시간 측정하여 반려동물의 건강을 체크할 수 있도록 한다. 추가로 GPS, Beacon 모듈을 탈부착 식으로 목걸이에 장착할 수 있도록 하여 상황에 맞게 위치데이터를 얻을 수 있도록 한다. GPS 모듈은 외부에서, Beacon 모듈은 집과 같은 실내에서 사용할 수 있도록 한다. 실내 외 모두에서 위치데이터를 얻을 수 있도록한다.

위의 스마트 모니터링 목걸이를 통해 군견을 효율적으로 관리할 수 있다. 

첫 번째로 군견 훈련소의 적격 심사에서 체력 요소를 활동량 측정법을 통해서 객관적인 지표로 평가 할 수 있다.


두 번째로  임신한 군견은 출산 전후로 세심한 관리를 받는다. 생체신호를 모니터링 하다가 이상 신호가 나오면 신혹한 대응을 할 수 있을 것이다.


세 번째로 GPS, Beacon 기능을 이용해 위치 데이터를 받으면 임무를 좀 더 효율적으로 할 수 있을 것이다. 

군견은 탐지, 수색, 추적, 경비등의 임무를 하는데 만약 위치 데이터를 받을 수 있으면 사람보다 더 빠른 속도로 수색, 추적하여 거수자를 찾아내 위치를 정확하게 받아 임무를 좀 더 정밀 대응이 가능할 것으로 예상된다.


또한 이런 기기는 민간에서도 충분히 활용가능한 부분이라고 생각된다.

## 기능 설명
1. 반려동물으로부터 생체 신호를 분석하여 반려동물의 건강을 주인이 손쉽게 알게 하고자 한다. 

   생체 신호로는 체온, 심박수를 분석할 예정이다.
   체온을 지속적으로 모니터링 하여 열사병 등과 같은 체온 이상으로 생긴 경우 알람을 하여 빠른 조치를 취할 수 있도록 할 수 있다.
   심박수를 모니터링을 하여 심장병 등을 예방할 수 있다. 또는 수면 상태의 심박수를 분석하여 반려동물의 수면 상태도 체크 할 수 있다.

2. GPS 모듈을 부착하여 외부 활동 시 활동량을 계산할 수 있는 기능, 반려동물을 분실했을 때 반려동물의 위치를 찾을 수 있다. 

   군에서 활용할 수 있는 부분은 GPS 모듈을 이용하여 군견의 탐지, 수색, 추적, 경비 활동 범위를 확대 시킬 수 있을 것으로 예상된다.


3. 블루투스 모듈로 Beacon을 만들어 집안에서의 활동량 측정, 활동 상태 체크, 실내 위치를 기반으로 접근 제한 구역을 만들어 반려동물이 제한 구역 접근할 시 바로 주인에게 알람을 하여 조치를 취하게 할 수도 있다. 

    여기서 말하는 조치란 집안 CCTV와 연결하여 반려동물을 확인 하거나, 스피커를 통해 주인의 음성을 들려줄 에정이다. 집안 IoT 기기와 연동하여 물리적으로 분리하는 방법도 개발할 예정이다.

## 컴퓨터 구성 / 필수 조건 안내 (Prerequisites)
* ECMAScript 6 지원 브라우저 사용
* 권장: Google Chrome 버젼 77 이상

## 기술 스택 (Technique Used) 
### Server(back-end)
 -  nodejs, php, java 등 서버 언어 버전 
 - express, laravel, sptring boot 등 사용한 프레임워크 
 - DB 등 사용한 다른 프로그램 
 
### Front-end
 -  react.js, vue.js 등 사용한 front-end 프레임워크 
 -  UI framework
 - 기타 사용한 라이브러리

## 설치 안내 (Installation Process)
```bash
$ git clone git주소
$ yarn or npm install
$ yarn start or npm run start
```

## 프로젝트 사용법 (Getting Started)
**마크다운 문법을 이용하여 자유롭게 기재**

잘 모를 경우
구글 검색 - 마크다운 문법
[https://post.naver.com/viewer/postView.nhn?volumeNo=24627214&memberNo=42458017](https://post.naver.com/viewer/postView.nhn?volumeNo=24627214&memberNo=42458017)

 편한 마크다운 에디터를 찾아서 사용
 샘플 에디터 [https://stackedit.io/app#](https://stackedit.io/app#)
 
## 팀 정보 (Team Information)
-이효석(lhs30328@gmail.com) Github Id: hyord

-이종용() Github Id: koy04721

-조승현() Github Id: gmelan


## 저작권 및 사용권 정보 (Copyleft / End User License)
 * [MIT](https://github.com/osam2020-WEB/Sample-ProjectName-TeamName/blob/master/license.md)

This project is licensed under the terms of the MIT license.

※ [라이선스 비교표(클릭)](https://olis.or.kr/license/compareGuide.do)

※ [Github 내 라이선스 키워드(클릭)](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/licensing-a-repository)

※ [\[참조\] Github license의 종류와 나에게 맞는 라이선스 선택하기(클릭)](https://flyingsquirrel.medium.com/github-license%EC%9D%98-%EC%A2%85%EB%A5%98%EC%99%80-%EB%82%98%EC%97%90%EA%B2%8C-%EB%A7%9E%EB%8A%94-%EB%9D%BC%EC%9D%B4%EC%84%A0%EC%8A%A4-%EC%84%A0%ED%83%9D%ED%95%98%EA%B8%B0-ae29925e8ff4)
