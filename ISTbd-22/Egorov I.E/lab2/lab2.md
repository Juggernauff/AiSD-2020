# Отчет по 2 лабораторной работе 

### Вопрос 1
Алгоритм сортировки методом пузырька - простейший алгоритм сортировки , каждый раз проходя массив все соседние элементы сравниваются (если они не отсортированы , мы их меняем местами) , это происходит до тех пор пока есть неотсортированные элименты.
'+'
+Простота и эффективность при работе с небольшими массивами
'-'
+В больших массивах не эффективен , т.к. проверяет заведомо отсортированные элементы
### Вопрос 2
Алгоритм шейкерной сортировки - доработка сортировки методом пузырька , отличие в том , что проход каждый раз начинается не с начала массива , а каждый раз меняет направление (от начала к концу - от конца к началу -от начала к концу) до тех пор пока все элементы не будут отсортированы.
'+'
+Работает сравнительно быстрее сортировки методом пузырька
'-'
+Сложность остается той же
### Вопрос 3
Алгоритм метода перебора - при первом переборе массива находится наименьший элемент в неотсортированной части , этот элемент меняется местами с первым элементом неотсортированной части(выполняется до тех пор пока не будут пройдены все элементы).
'+'
+Быстрее предыдущих алгоритмов
'-'
+Слишком медленный в больших массивах
### Вопрос 4 
Алгоритм метода вставок - вставляет первый элемент неотсортированной части в необходимое место отсортированной части.
'+'
+Более эффективен с частично отсортированными массивами
+Скорость работы менее всего , по сравнению с другими алгоритмами сортировок , зависит от размера массива
+Может сортировать массив по ходу его получения
'-'
+Скорость работы зависит от размера массива