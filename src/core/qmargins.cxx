//  header block begin
// /usr/include/qt/QtCore/qmargins.h
#ifndef protected
#define protected public
#endif
#include <qmargins.h>
#include <QtCore>
#include "callback_inherit.h"

// QMargins is pure virtual: false
// QMargins has virtual projected: false
//  header block end

//  main block begin

class MyQMargins : public QMargins {
public:
  virtual ~MyQMargins() {}
// void QMargins()
MyQMargins() : QMargins() {}
// void QMargins(int, int, int, int)
MyQMargins(int left, int top, int right, int bottom) : QMargins(left, top, right, bottom) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:54
// [-2] void QMargins()
extern "C"
void* C_ZN8QMarginsC2Ev() {
  return  new QMargins();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:55
// [-2] void QMargins(int, int, int, int)
extern "C"
void* C_ZN8QMarginsC2Eiiii(int left, int top, int right, int bottom) {
  return  new QMargins(left, top, right, bottom);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:57
// [1] bool isNull()
extern "C"
bool C_ZNK8QMargins6isNullEv(void *this_) {
  return (bool)((QMargins*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:59
// [4] int left()
extern "C"
int C_ZNK8QMargins4leftEv(void *this_) {
  return (int)((QMargins*)this_)->left();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:60
// [4] int top()
extern "C"
int C_ZNK8QMargins3topEv(void *this_) {
  return (int)((QMargins*)this_)->top();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:61
// [4] int right()
extern "C"
int C_ZNK8QMargins5rightEv(void *this_) {
  return (int)((QMargins*)this_)->right();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:62
// [4] int bottom()
extern "C"
int C_ZNK8QMargins6bottomEv(void *this_) {
  return (int)((QMargins*)this_)->bottom();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:64
// [-2] void setLeft(int)
extern "C"
void C_ZN8QMargins7setLeftEi(void *this_, int left) {
  ((QMargins*)this_)->setLeft(left);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:65
// [-2] void setTop(int)
extern "C"
void C_ZN8QMargins6setTopEi(void *this_, int top) {
  ((QMargins*)this_)->setTop(top);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:66
// [-2] void setRight(int)
extern "C"
void C_ZN8QMargins8setRightEi(void *this_, int right) {
  ((QMargins*)this_)->setRight(right);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:67
// [-2] void setBottom(int)
extern "C"
void C_ZN8QMargins9setBottomEi(void *this_, int bottom) {
  ((QMargins*)this_)->setBottom(bottom);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:69
// [16] QMargins & operator+=(const class QMargins &)
extern "C"
void* C_ZN8QMarginspLERKS_(void *this_, QMargins* margins) {
  auto& rv = ((QMargins*)this_)->operator+=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:70
// [16] QMargins & operator-=(const class QMargins &)
extern "C"
void* C_ZN8QMarginsmIERKS_(void *this_, QMargins* margins) {
  auto& rv = ((QMargins*)this_)->operator-=(*margins);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:71
// [16] QMargins & operator+=(int)
extern "C"
void* C_ZN8QMarginspLEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator+=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:72
// [16] QMargins & operator-=(int)
extern "C"
void* C_ZN8QMarginsmIEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator-=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:73
// [16] QMargins & operator*=(int)
extern "C"
void* C_ZN8QMarginsmLEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator*=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:74
// [16] QMargins & operator/=(int)
extern "C"
void* C_ZN8QMarginsdVEi(void *this_, int arg0) {
  auto& rv = ((QMargins*)this_)->operator/=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:75
// [16] QMargins & operator*=(qreal)
extern "C"
void* C_ZN8QMarginsmLEd(void *this_, qreal arg0) {
  auto& rv = ((QMargins*)this_)->operator*=(arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:76
// [16] QMargins & operator/=(qreal)
extern "C"
void* C_ZN8QMarginsdVEd(void *this_, qreal arg0) {
  auto& rv = ((QMargins*)this_)->operator/=(arg0);
return &rv;
}


extern "C"
void C_ZN8QMarginsD2Ev(void *this_) {
  delete (QMargins*)(this_);
}
//  main block end
