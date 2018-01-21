//  header block begin
// /usr/include/qt/QtCore/qpoint.h
#include <qpoint.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qpoint.h:51
// void QPoint()
extern "C"
void* C_ZN6QPointC1Ev() {
  return new QPoint();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:52
// void QPoint(int, int)
extern "C"
void* C_ZN6QPointC1Eii(int xpos, int ypos) {
  return new QPoint(xpos, ypos);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:54
// bool isNull()
extern "C"
void C_ZNK6QPoint6isNullEv(void *this_) {
  /*return*/ ((QPoint*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:56
// int x()
extern "C"
void C_ZNK6QPoint1xEv(void *this_) {
  /*return*/ ((QPoint*)this_)->x();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:57
// int y()
extern "C"
void C_ZNK6QPoint1yEv(void *this_) {
  /*return*/ ((QPoint*)this_)->y();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:58
// void setX(int)
extern "C"
void C_ZN6QPoint4setXEi(void *this_, int x) {
  ((QPoint*)this_)->setX(x);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:59
// void setY(int)
extern "C"
void C_ZN6QPoint4setYEi(void *this_, int y) {
  ((QPoint*)this_)->setY(y);
}
// inline
// /usr/include/qt/QtCore/qpoint.h:61
// int manhattanLength()
extern "C"
void C_ZNK6QPoint15manhattanLengthEv(void *this_) {
  /*return*/ ((QPoint*)this_)->manhattanLength();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:63
// int & rx()
extern "C"
void C_ZN6QPoint2rxEv(void *this_) {
  /*return*/ ((QPoint*)this_)->rx();
}
// inline
// /usr/include/qt/QtCore/qpoint.h:64
// int & ry()
extern "C"
void C_ZN6QPoint2ryEv(void *this_) {
  /*return*/ ((QPoint*)this_)->ry();
}
// static inline
// /usr/include/qt/QtCore/qpoint.h:75
// int dotProduct(const class QPoint &, const class QPoint &)
extern "C"
void C_ZN6QPoint10dotProductERKS_S1_(const QPoint & p1, const QPoint & p2) {
  /*return*/ QPoint::dotProduct(p1, p2);
}
//  main block end
