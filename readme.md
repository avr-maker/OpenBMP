
## OpenBMP

OpenBMP is a library for working with Bitmaps, which allows you to manipulate bitmaps images.

![main image](./assets/object.bmp)

### Get started
```cpp
#include <iostream>
#include "obmp.h"

int main()
{
	OpenBMP obmp = OpenBMP("./examples/image.bmp");
	std::cout << "Shape(y, x): " << obmp.shape();	
	return 0;
}
```

### Методы API

#### `.shape()`
Возвращает размерность изображения (height, width)
```cpp
obmp.shape();
// формат std::pair<int, int>
```

#### `invert(const std::string& method)`
Инвертирование изображения
```cpp
obmp.invert("arithmetic");
obmp.invert("bitwise_not");
```
#### `arith_invert()`
Арифметическое инвертирование с созданием нового объекта
```cpp
OpenBMP inverted = obmp.arith_invert();
```
#### `bitwise_not()`
Побитовое инвертирование с созданием нового объекта
```cpp
OpenBMP inverted = obmp.bitwise_not();
```
#### `grayscale()`
Перевод изображения в grayscale
```cpp
obmp.grayscale();
```

#### `rgb2gray()`
создаем новый объект из текущего изображения в grayscale
```cpp
OpenBMP grayscale_image = obmp.rgb2gray();
```

#### `mirror(const std::string& method)`
Отзеркалить изображение.
```cpp
// по вертикали
obmp.mirror("vertical");
```

#### `save(const std::string& filename)`
Сохранить изображение в файл `filename`
```cpp
obmp.save("test.bmp");
```

#### `get_pxl()`
Получить массив пикселей изображения
```cpp
vector<BITMAP_COLORTABLE> pixels = obmp.get_pxl();
```

#### `to_ascii(const int& ascii_width)`
Перевести изображение в ASCII формат
```cpp
vector<vector<char>> ascii_image = obmp.to_ascii(80);
```

#### `print_ascii(const int& width)`
Отобразить изображение в ASCII формате
```cpp
obmp.print_ascii(80);
```
