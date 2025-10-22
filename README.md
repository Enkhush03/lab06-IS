# lab06-IS
C++ inheritance lab project for Shape hierarchy
#  lab06 – C++ Удамшлын лабораторийн ажил

## Сэдэв:
**Удамшил (Inheritance)** — C++ хэл дээр классуудыг удамшуулах, ерөнхийлөлтийн аргаар бүтцийг загварчлах.

---

##  Багийн мэдээлэл

- **Багийн нэр:** Team IS  
- **Ахлагч:** Энхнасан  
- **Гишүүд:**  
  - Энхнасан  
  - Номин-Эрдэнэ  
  - Мөнгөншагай  

- **Зорилго:**  
  C++ хэл дээр удамшлын зарчмыг ашиглан `Shape → 2DShape → {Circle, Square, Triangle}` гэсэн классын шатлалт загвар зохиож, кодын дахин ашиглалт ба бүтэцчилсэн загварыг эзэмших.


```cpp
class Parent {
public:
    void greet() { cout << "Hello from Parent!"; }
};

class Child : public Parent {
    // Parent-ийн greet() функцийг автоматаар өвлөнө
};
