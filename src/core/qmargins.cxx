//  header block begin
// /usr/include/qt/QtCore/qmargins.h
#include <qmargins.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qmargins.h:54
// void QMargins()
extern "C"
void* C_ZN8QMarginsC1Ev() {
  return new QMargins();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:55
// void QMargins(int, int, int, int)
extern "C"
void* C_ZN8QMarginsC1Eiiii(int left, int top, int right, int bottom) {
  return new QMargins(left, top, right, bottom);
}
// inline
// /usr/include/qt/QtCore/qmargins.h:57
// bool isNull()
extern "C"
void C_ZNK8QMargins6isNullEv(void *this_) {
  /*return*/ ((QMargins*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:59
// int left()
extern "C"
void C_ZNK8QMargins4leftEv(void *this_) {
  /*return*/ ((QMargins*)this_)->left();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:60
// int top()
extern "C"
void C_ZNK8QMargins3topEv(void *this_) {
  /*return*/ ((QMargins*)this_)->top();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:61
// int right()
extern "C"
void C_ZNK8QMargins5rightEv(void *this_) {
  /*return*/ ((QMargins*)this_)->right();
}
// inline
// /usr/include/qt/QtCore/qmargins.h:62
// int bottom()
extern "C"
void C_ZNK8QMargins6bottomEv(void *this_) {
  /*return*/ ((QMargins*)this_)->bottom();
}
// /usr/include/qt/QtCore/qmargins.h:64
// void setLeft(int)
extern "C"
void C_ZN8QMargins7setLeftEi(void *this_, int left) {
  ((QMargins*)this_)->setLeft(left);
}
// /usr/include/qt/QtCore/qmargins.h:65
// void setTop(int)
extern "C"
void C_ZN8QMargins6setTopEi(void *this_, int top) {
  ((QMargins*)this_)->setTop(top);
}
// /usr/include/qt/QtCore/qmargins.h:66
// void setRight(int)
extern "C"
void C_ZN8QMargins8setRightEi(void *this_, int right) {
  ((QMargins*)this_)->setRight(right);
}
// /usr/include/qt/QtCore/qmargins.h:67
// void setBottom(int)
extern "C"
void C_ZN8QMargins9setBottomEi(void *this_, int bottom) {
  ((QMargins*)this_)->setBottom(bottom);
}
//  main block end
