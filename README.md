# Лабораторна робота № 3.3

### Автор: Кулаковський Юрій

### Варіант: 9

## Опис

<img src="./graphic.png" width="600" height="200" title="Graphic" alt="Graphic">

Ця програма обчислює значення функції `y`, залежно від введеної змінної `x`, на основі розгалужень, заданих графіком функції. Кожен інтервал значень `x` на графіку визначає певне правило для обчислення `y`.

## Структура програми

1. **Вхідні дані**:
    - Користувач вводить значення змінної `x`.

2. **Обчислення значення `y`**:
    - Якщо `x <= -7` або `x > 4`, тоді `y = 0`.
    - Якщо `-7 < x <= -3`, тоді `y = x + 7`.
    - Якщо `-3 < x <= -2`, тоді `y = 4`.
    - Якщо `-2 < x <= 2`, тоді `y = x^2`.
    - Якщо `2 < x <= 4`, тоді `y = 2 * x - 4`.

3. **Виведення результату**:
    - Програма виводить результат `y` для введеного значення `x`.

## Приклад виконання

x = 1

y = 1

## Використовувані бібліотеки
1) `<iostream>` - для введення та виведення даних.

2) `<cmath>` - для використання математичних функцій.
