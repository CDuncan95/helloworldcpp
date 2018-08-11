#ifndef INCLUDED_FUN
#define INCLUDED_FUN

class Widget {
  private:
    int d_size;

  public:
    Widget(int size);
    const int& size() const;
    void addOne();
};

#endif