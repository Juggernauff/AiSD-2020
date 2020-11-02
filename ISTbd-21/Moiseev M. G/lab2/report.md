# Отчет по лабораторной работе №2

## Алгоритм метода пузырька

Алгоритм состоит из повторяющихся проходов по сортируемому массиву. За каждый проход элементы последовательно сравниваются попарно и, если порядок в паре неверный, выполняется обмен элементов. При проходах проискодит перемещение меньшего элемента в начало списка, он как бы "всплывает", поэтому метод и называется методом пузырька.

## Достоинства и недостатки метода пузырька

Достоинства: 

+ довольно простой для понимания алгоритм
+ лежит в основе других сортировок

Недостатки: 

+ неэффетивен для больших масивов 
+ имеет сложность O(n^2)

## Алгоритм шейкер-сортировки

Разновидность пузырьковой сортировки. По сути всего лишь оптимизированный алгоритм пузырьковой сортировки.

В основе лежит сравнение двух соседних элементов. Единственное отличие состоит лишь в том, что теперь это происходит в двух направлениях поочередно, постепенно сужая диапазон сортировки. В итоге за один проход в конец массива “всплывает” максимальный элемент из диапазона, а за следующий проход — в начало массива минимальный (мы рассматриваем сортировку по возрастанию). Эти элементы можно больше не рассматривать и таким образом диапазон сужается с двух сторон.

## Достоинства и недостатки шейкер-сортировки

Достоинства:

+ быстрее пузырьковой сортировки

Недостатки:

+ все еще имеет сложность O(n^2)

## Алгоритм метода перебора

Суть метода состоит в следующем. Весь массив делится на две части. Слева будет находится отсортированная часть, а справа "куча" т.е. не отсортированный массив. Из "кучи" вбирается максимальный элемент затем он переставляется в первую ячейку, а элемент из первой ячейки на его место. После этого заполняется вторая ячейка. Массив опять перебирается и из оставшейся части снова выбирается максимальный элемент, который должен встать на место второго элемента, а второй элемент на его место и т.д. пока не переберется вся "куча".

## Достоинства и недостатки метода перебора

Достоинства:

+ Простой

Недостатки:

+ Алгоритм всегда будет иметь одинаковое количество сравнений (N2 -1) и перестановок (N – 1).

## Алгоритм метода вставок

Его суть заключается в том что, на каждом шаге алгоритма мы берем один из элементов массива, находим позицию для вставки и вставляем. Считается что массив из 1-го элемента считается отсортированным.

## Достоинства и недостатки метода вставок

Достоинства:

+ эффективен на небольших наборах данных, на наборах данных до десятков элементов может оказаться лучшим;
+ эффективен на наборах данных, которые уже частично отсортированы;
+это устойчивый алгоритм сортировки (не меняет порядок элементов, которые уже отсортированы);
+ может сортировать список по мере его получения;
+ не требует временной памяти, даже под стек.

Недостатки:

+ Высокая сложность алгоритма: O(n²).