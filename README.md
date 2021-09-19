# Wulfenstein-3D-project
My Wolfenstein 3D engine

Работает только на MacOS

Реализация движка популярной игры wolfenstein_3d.

В структуре есть Makefile, достаточно написать make для компиляции программы. Доступные комманды:

make или make all скомпилирует программу в файл cub3d.

make clean очистит все файлы с расширением .o и оставит скомпилированную программу cub3d.

make fclean очистит все файлы с расширением .o, удалил динамиескую и статическую библиотеки для отрисовки.

Для запуска игры нужно предоставить файл карты в которой указываются следующие параметры(каждый параметр с новой строки, после обозначения параметра иде пробел(ы)):


S - путь до препятствия в данном случае это бочка (ВНИМНИЕ для всех текстур рекомендуется использовать разрешение 64x64 и расширение .xpm)

SO - путь до текстуры южной стены (Путь до всех текстур может быть относительный или полный)

NO - текстура севера

WE - текстура запада

EA - тестура востока

R - разрешение окна (указывается через пробел, пример: R 800 600)

F - floor color (цвет потолка, указывается через запятую, пример: F 125, 135, 145)

C - ceil color (цвет пола, заполняется аналогично F)


После параметров идет карта:

0 - полы, где может ходить игрок

1 - стены

2 - препятсвие

Условия корректного файла конфигураций:


Весь пол должен быть закрыт стенами

Препятствие не может сущестовать вне стен

Карта начинается, либо сразу после параметров, либо через ОДИН перенос строки

После карты не должно быть ничего

Карта не должна содержать сторонние элементы не предусмотренные текущим описанием


Запуск программы:

./cub3d "путь до карты" - путь можно указать без кавычек

./cub3d --save "путь до карты" - сделает скриншот согласно конфигурационного файла
