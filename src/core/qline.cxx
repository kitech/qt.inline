//  header block begin
// /usr/include/qt/QtCore/qline.h
#include <qline.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qline.h:55
// void QLine()
extern "C"
void* C_ZN5QLineC1Ev() {
  return new QLine();
}
// inline
// /usr/include/qt/QtCore/qline.h:56
// void QLine(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN5QLineC1ERK6QPointS2_(const QPoint & pt1, const QPoint & pt2) {
  return new QLine(pt1, pt2);
}
// inline
// /usr/include/qt/QtCore/qline.h:57
// void QLine(int, int, int, int)
extern "C"
void* C_ZN5QLineC1Eiiii(int x1, int y1, int x2, int y2) {
  return new QLine(x1, y1, x2, y2);
}
// inline
// /usr/include/qt/QtCore/qline.h:59
// bool isNull()
extern "C"
void C_ZNK5QLine6isNullEv(void *this_) {
  /*return*/ ((QLine*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qline.h:61
// QPoint p1()
extern "C"
void C_ZNK5QLine2p1Ev(void *this_) {
  /*return*/ ((QLine*)this_)->p1();
}
// inline
// /usr/include/qt/QtCore/qline.h:62
// QPoint p2()
extern "C"
void C_ZNK5QLine2p2Ev(void *this_) {
  /*return*/ ((QLine*)this_)->p2();
}
// inline
// /usr/include/qt/QtCore/qline.h:64
// int x1()
extern "C"
void C_ZNK5QLine2x1Ev(void *this_) {
  /*return*/ ((QLine*)this_)->x1();
}
// inline
// /usr/include/qt/QtCore/qline.h:65
// int y1()
extern "C"
void C_ZNK5QLine2y1Ev(void *this_) {
  /*return*/ ((QLine*)this_)->y1();
}
// inline
// /usr/include/qt/QtCore/qline.h:67
// int x2()
extern "C"
void C_ZNK5QLine2x2Ev(void *this_) {
  /*return*/ ((QLine*)this_)->x2();
}
// inline
// /usr/include/qt/QtCore/qline.h:68
// int y2()
extern "C"
void C_ZNK5QLine2y2Ev(void *this_) {
  /*return*/ ((QLine*)this_)->y2();
}
// inline
// /usr/include/qt/QtCore/qline.h:70
// int dx()
extern "C"
void C_ZNK5QLine2dxEv(void *this_) {
  /*return*/ ((QLine*)this_)->dx();
}
// inline
// /usr/include/qt/QtCore/qline.h:71
// int dy()
extern "C"
void C_ZNK5QLine2dyEv(void *this_) {
  /*return*/ ((QLine*)this_)->dy();
}
// inline
// /usr/include/qt/QtCore/qline.h:73
// void translate(const class QPoint &)
extern "C"
void C_ZN5QLine9translateERK6QPoint(void *this_, const QPoint & p) {
  ((QLine*)this_)->translate(p);
}
// inline
// /usr/include/qt/QtCore/qline.h:74
// void translate(int, int)
extern "C"
void C_ZN5QLine9translateEii(void *this_, int dx, int dy) {
  ((QLine*)this_)->translate(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qline.h:76
// QLine translated(const class QPoint &)
extern "C"
void C_ZNK5QLine10translatedERK6QPoint(void *this_, const QPoint & p) {
  /*return*/ ((QLine*)this_)->translated(p);
}
// inline
// /usr/include/qt/QtCore/qline.h:77
// QLine translated(int, int)
extern "C"
void C_ZNK5QLine10translatedEii(void *this_, int dx, int dy) {
  /*return*/ ((QLine*)this_)->translated(dx, dy);
}
// inline
// /usr/include/qt/QtCore/qline.h:79
// void setP1(const class QPoint &)
extern "C"
void C_ZN5QLine5setP1ERK6QPoint(void *this_, const QPoint & p1) {
  ((QLine*)this_)->setP1(p1);
}
// inline
// /usr/include/qt/QtCore/qline.h:80
// void setP2(const class QPoint &)
extern "C"
void C_ZN5QLine5setP2ERK6QPoint(void *this_, const QPoint & p2) {
  ((QLine*)this_)->setP2(p2);
}
// inline
// /usr/include/qt/QtCore/qline.h:81
// void setPoints(const class QPoint &, const class QPoint &)
extern "C"
void C_ZN5QLine9setPointsERK6QPointS2_(void *this_, const QPoint & p1, const QPoint & p2) {
  ((QLine*)this_)->setPoints(p1, p2);
}
// inline
// /usr/include/qt/QtCore/qline.h:82
// void setLine(int, int, int, int)
extern "C"
void C_ZN5QLine7setLineEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QLine*)this_)->setLine(x1, y1, x2, y2);
}
//  main block end
