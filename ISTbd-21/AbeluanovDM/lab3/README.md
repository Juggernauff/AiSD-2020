# Отчет по лабораторной работе №3

~~(все нижеприведённые записи были взяты с вики, может и не только :3 (Я читал это всё! Точно!))~~
***

## Кто такой Чарльз Хоар? Чем он известен?

**Чарльз Хоар** - английский учёный, специализирующийся в области информатики и вычислительной техники. Наиболее известен как разработчик алгоритма «быстрой сортировки», на сегодняшний день являющегося наиболее популярным алгоритмом сортировки.
***

## Общее описание метода Хоара 

1. Выбрать элемент из массива.

2. Разбиение: перераспределение элементов в массиве таким образом, что элементы меньше опорного помещаются перед ним, а больше или равные после.

3. Рекурсивно применить первые два шага к двум подмассивам слева и справа от опорного элемента. Рекурсия не применяется к массиву, в котором только один элемент или отсутствуют элементы.
***

## Алгоритм метода Хоара

В наиболее общем виде алгоритм на псевдокоде (где A — сортируемый массив, а low и high — соответственно, нижняя и верхняя границы сортируемого участка этого массива) массив A передаётся по ссылке, то есть сортировка происходит «на том же месте», а неописанная функция partition возвращает индекс опорного элемента.
***

## Как происходит выбор опорного пункта

Обычно выбирают первый или последний элемент.
Для улучшения эффективности можно выбирать средний, случайный элемент или (для больших массивов) медиана первого, среднего и последнего элементов.
***

## Разбиение Ломуто

Алгоритм хранит индекс в переменной i. Каждый раз, когда находится элемент, меньше или равный опорному, индекс увеличивается, и элемент вставляется перед опорным. Хоть эта схема разбиения проще и компактнее, чем схема Хоара, она менее эффективна и используется в обучающих материалах. Сложность данной быстрой сортировки падает до O(n^2), когда массив уже отсортирован или все его элементы равны.
***

## Разбиение Хоара

Данная схема использует два индекса (один в начале массива, другой в конце),
которые приближаются друг к другу, пока не найдётся пара элементов,
где один больше опорного и расположен перед ним, а второй меньше и
расположен после. Эти элементы меняются местами. Обмен происходит до тех
пор, пока индексы не пересекутся. Алгоритм возвращает последний индекс.
Схема Хоара эффективнее схемы Ломуто, так как происходит в среднем в
три раза меньше обменов (swap) элементов, и разбиение эффективнее,
даже когда все элементы равны. Его и писал.
***

## Достоинства

- Один из самых быстродействующих (на практике) из алгоритмов
  внутренней сортировки общего назначения.

- Алгоритм очень короткий: запомнив основные моменты, его легко написать «из головы», невелика константа при n*logn.
  
- Требует лишь O(log n) дополнительной памяти для своей работы. (Не улучшенный рекурсивный алгоритм в худшем случае O(n) памяти)
  
- Хорошо сочетается с механизмами кэширования и виртуальной памяти.
  
- Допускает естественное распараллеливание (сортировка выделенных подмассивов в параллельно выполняющихся подпроцессах).
  
- Допускает эффективную модификацию для сортировки по нескольким ключам (в частности — алгоритм Седжвика для сортировки строк): благодаря тому, что в процессе разделения автоматически выделяется отрезок элементов, равных опорному, этот отрезок можно сразу же сортировать по следующему ключу.
  
- Работает на связных списках и других структурах с последовательным доступом, допускающих эффективный проход как от начала к концу, так и от конца к началу.
***

## Недостатки

- Сильно деградирует по скорости (до O(n^2)) в худшем или
  близком к нему случае, что может случиться при неудачных входных данных.

- Прямая реализация в виде функции с двумя рекурсивными вызовами
  может привести к ошибке переполнения стека

- Неустойчив
***

## Интересные факты метода Хоара

1. Очевидно, что после такой перестановки для получения отсортированного массива не понадобится перемещать ни один из элементов между получившимися отрезками, то есть достаточно будет произвести сортировку «меньшего» и «большего» отрезков как самостоятельных массивов.
   
2. Проблема неустойчивости решается путём расширения ключа исходным индексом элемента в массиве. В случае равенства основных ключей сравнение производится по индексу, исключая, таким образом, возможность изменения взаимного положения равных элементов. Эта модификация не бесплатна — она требует дополнительно O(n) памяти и одного полного прохода по массиву для сохранения исходных индексов.
