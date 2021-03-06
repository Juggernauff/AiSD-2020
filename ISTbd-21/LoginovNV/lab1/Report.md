﻿# Лабораторная №1
### Алгоритм линейного поиска
Простейший алгоритм поиска. Перебираем поочерёдно каждый элемент массива и сравниваем его с нужным элементом. 
#### Псевдокод:
для всех элементов массива:
----если элемент = нужный элемент:
--------элемент найден
### Алгоритм линейного поиска с барьером
Этот алгоритм является модификацией линейного поиска. В конец массива добавляется элемент, который нужно найти (либо заместо последнего). Теперь мы можем пройтись циклом не по всем элементам массива, а до того момента, когда будет найден нужный элемент. Таким образом, среднее время выполнения алгоритма линейного поиска с барьером становится ниже, чем у обычного линейного поиска.
#### Псевдокод:
пока элемент != нужный элемент:
----увеличить индекс 
### Алгоритм двоичного поиска
Алгоритм применяется к отсортированному массиву. Основная идея - сравнить текущий элемент с серединным элементом. Если серединный больше, то половина массива, которая следует за серединным элементом, отбрасывается, так как все её элементы больше нужного элемента (массив отсортирован). Далее поиск продолжается в оставшейся половине массива. Снова сравнивается серединный элемент с нужным и так далее...

### Где используются 
Линейный поиск и линейный поиск с барьером используются при поиске элемента в небольших массивах. Время их выполнения O(N). Поэтому если количество элементов N = over99999999, то поиск будет долговременным. 
Двоичный поиск гораздо эффективнее линейного, так как его время выполнения O(log(N)). Это значит, что для поиска элемента в массиве с количеством элементов N = 32768 потребуется всего 15 шагов цикла (2^15 = 32768), в то время как у линейного 32786.
