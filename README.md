# 42_SoLong

그리고 모든 생선들께 감사를...

*종합 : 이 프로젝트는 아주 작은 2D 게임이에요! 스프라이트와 텍스쳐로 만들 수 있습니다! 그리고 아주 간단한 게임 플레이 요소가 있어요!*

*Version : 1*


## Chapter 1


들어가며...   


개발자가 되는 것은 게임만드는 것에 있어서 좋은 일입니다.   
그러나 좋은 게임은 좋은 자산이 필요해요.   
2D게임을 위해서, 당신은 타일과 타일셋, 스프라이트와 스프라이트 시트를 찾아야 합니다.   
감사하게도 몇몇 재능있는 예술가들이 그들의 작업물을 itch.io 에서 공유합니다!    

> 당신이 뭘 하든 다른이들의 작품을 존중하도록 노력하세용


## Chapter 2


목표

이 프로젝트의 목표는 모든 처음 목표와 유사합니다. : 엄격함, C를 사용, 간단한 알고리즘과 정보 연구 등...   


그래픽 디자인 프로젝트로서, 이 프로젝트는 다음과 같은 영역의 기술을 향상시킬 수 있습니다. : windows, colors, events, texture 등

## Chapter 3


공통부

- 프로젝트는 `Norm` 규정에 맞춰 작성되어야 합니다. 만약 보너스 파일과 함수를 작성했다면, 그것 역시 `Norm` 규정에 맞는지 체크하고 만약 내부에 `norm error`아 있다면, 0점을 받게 됩니다.
- 정의되지 않은 동작과는 별도로 함수가 의도치 않게 종료되어서는 안됩니다. (segmentation fault, bus error, double free 등). 만약 발생한다면 당신의 프로젝트는 작동하지 않는 것으로 간주되어 평가때 0점을 받게 됩니다.
- 모든 힙에서 할당된 메모리 공간은 적절하게 해제되어야 합니다. 메모리 누수는 용납되지 않습니다.
- 과제에서 요구한다면, 당신은 소스파일을 `cc`를 사용하여 `-Wall, -Wextra and -Werror` 옵션으로 컴파일할 `Makefile`을 제출해야 하고 Makefile은 relink 되어선 안됩니다.
- `Makefile`은 적어도 `$(NAME), all, clean, fclean, re` 규칙을 포함해야 합니다.
- 보너스 파트를 제출한다면 반드시 `Makefile`에 필수파트에서 금지된 모든 다양한 헤더, 라이브러리, 함수를 추가하는 `bonus` 규칙을 추가해야합니다. 보너스는 반드시 `_bonus.{c/h}`가 접미사에 붙는, 필수파트와 다른 파일로 제출해야합니다. 필수파트와 보너스파트는 서로 분리되어 평가받습니다.
- 프로젝트에서 당신의 `libft`를 허용한다면, libft폴더에 관련된 Makefile과 소스를 복사해야합니다. 프로젝트의 Makefile은 Makefile을 사용하여 라이브러리를 컴파일한 다음 프로젝트를 컴파일해야 합니다.
- 이 작업은 제출할 필요도 없고 채점도 되지 않을 것이므로 프로젝트를 위한 테스트 프로그램을 만들 것을 권장합니다. 평가를 쉽게 해줄 거예용. 디펜스때 이 테스트가 유용하다는 것을 알게 될 것입니다. 실제로 디펜스때 테스트를 자유롭게 사용할 수 있습니다.
- 할당된 깃 레포지토리에 작업물을 제출하세요. 깃 레포지토리에 들어있는 것만 채점될 것입니다. DeppThought가 작업물을 채점하도록 지정되면, 그것은 동료평가 이후에 이루어집니다. Deppthought의 평가 도중 작업의 어느부분에서 오류가 발생하면 평가가 중지됩니다.

## Chapter 4


필수파트 - so long
