# Interpolation


########################

RUS

Интерполяция методом Лагранжа

Функция создавалась для интерполяции точек на графике QCustomPlot, поэтому входные данные типа QVector <double>, где x и y соответственно координаты точек на графике. Переменные x_v, y_v, x_v2 и y_v2 тоже вектора double, причем x_v и y_v - это входные данные точек, по которым нужно провести интерполяцию, а x_v2 и y_v2 - это точки, по которым строится полученная функция.

Присутствуют некоторые баги, но это скорее всего не баги, а фичи метода Лагранжа.



########################

ENG/US

Interpolation by the Lagrange method

The function was created to interpolate points on a QCustomPlot graph, so the input data is of type QVector <double>, where x and y are respectively the coordinates of points on the your graph. The variables x_v, y_v, x_v2, and y_v2 are also double vectors, with x_v and y_v being the input data points to be interpolated from, and x_v2 and y_v2 being the points to build the resulting function from.

There are some bugs, but these are most likely not bugs, but features of the Lagrange method.
