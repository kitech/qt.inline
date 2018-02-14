//  header block begin
// /usr/include/qt/QtCore/qline.h
#include <qline.h>
#include <QtCore>
#include "callback_inherit.h"

// QLine is pure virtual: false
// QLine has virtual projected: false
//  header block end

//  main block begin

class MyQLine : public QLine {
public:
  virtual ~MyQLine() {}
// void QLine()
MyQLine() : QLine() {}
// void QLine(const class QPoint &, const class QPoint &)
MyQLine(const QPoint & pt1, const QPoint & pt2) : QLine(pt1, pt2) {}
// void QLine(int, int, int, int)
MyQLine(int x1, int y1, int x2, int y2) : QLine(x1, y1, x2, y2) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:55
// [-2] void QLine()
extern "C"
void* C_ZN5QLineC2Ev() {
  return  new QLine();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:56
// [-2] void QLine(const class QPoint &, const class QPoint &)
extern "C"
void* C_ZN5QLineC2ERK6QPointS2_(QPoint* pt1, QPoint* pt2) {
  return  new QLine(*pt1, *pt2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:57
// [-2] void QLine(int, int, int, int)
extern "C"
void* C_ZN5QLineC2Eiiii(int x1, int y1, int x2, int y2) {
  return  new QLine(x1, y1, x2, y2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:59
// [1] bool isNull()
extern "C"
bool C_ZNK5QLine6isNullEv(void *this_) {
  return (bool)((QLine*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:61
// [8] QPoint p1()
extern "C"
void* C_ZNK5QLine2p1Ev(void *this_) {
  auto rv = ((QLine*)this_)->p1();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:62
// [8] QPoint p2()
extern "C"
void* C_ZNK5QLine2p2Ev(void *this_) {
  auto rv = ((QLine*)this_)->p2();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:64
// [4] int x1()
extern "C"
int C_ZNK5QLine2x1Ev(void *this_) {
  return (int)((QLine*)this_)->x1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:65
// [4] int y1()
extern "C"
int C_ZNK5QLine2y1Ev(void *this_) {
  return (int)((QLine*)this_)->y1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:67
// [4] int x2()
extern "C"
int C_ZNK5QLine2x2Ev(void *this_) {
  return (int)((QLine*)this_)->x2();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:68
// [4] int y2()
extern "C"
int C_ZNK5QLine2y2Ev(void *this_) {
  return (int)((QLine*)this_)->y2();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:70
// [4] int dx()
extern "C"
int C_ZNK5QLine2dxEv(void *this_) {
  return (int)((QLine*)this_)->dx();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:71
// [4] int dy()
extern "C"
int C_ZNK5QLine2dyEv(void *this_) {
  return (int)((QLine*)this_)->dy();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:73
// [-2] void translate(const class QPoint &)
extern "C"
void C_ZN5QLine9translateERK6QPoint(void *this_, QPoint* p) {
  ((QLine*)this_)->translate(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:74
// [-2] void translate(int, int)
extern "C"
void C_ZN5QLine9translateEii(void *this_, int dx, int dy) {
  ((QLine*)this_)->translate(dx, dy);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:76
// [16] QLine translated(const class QPoint &)
extern "C"
void* C_ZNK5QLine10translatedERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QLine*)this_)->translated(*p);
return new QLine(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:77
// [16] QLine translated(int, int)
extern "C"
void* C_ZNK5QLine10translatedEii(void *this_, int dx, int dy) {
  auto rv = ((QLine*)this_)->translated(dx, dy);
return new QLine(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:79
// [8] QPoint center()
extern "C"
void* C_ZNK5QLine6centerEv(void *this_) {
  auto rv = ((QLine*)this_)->center();
return new QPoint(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:81
// [-2] void setP1(const class QPoint &)
extern "C"
void C_ZN5QLine5setP1ERK6QPoint(void *this_, QPoint* p1) {
  ((QLine*)this_)->setP1(*p1);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:82
// [-2] void setP2(const class QPoint &)
extern "C"
void C_ZN5QLine5setP2ERK6QPoint(void *this_, QPoint* p2) {
  ((QLine*)this_)->setP2(*p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:83
// [-2] void setPoints(const class QPoint &, const class QPoint &)
extern "C"
void C_ZN5QLine9setPointsERK6QPointS2_(void *this_, QPoint* p1, QPoint* p2) {
  ((QLine*)this_)->setPoints(*p1, *p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:84
// [-2] void setLine(int, int, int, int)
extern "C"
void C_ZN5QLine7setLineEiiii(void *this_, int x1, int y1, int x2, int y2) {
  ((QLine*)this_)->setLine(x1, y1, x2, y2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:86
// [1] bool operator==(const class QLine &)
extern "C"
bool C_ZNK5QLineeqERKS_(void *this_, QLine* d) {
  return (bool)((QLine*)this_)->operator==(*d);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:87
// [1] bool operator!=(const class QLine &)
extern "C"
bool C_ZNK5QLineneERKS_(void *this_, QLine* d) {
  return (bool)((QLine*)this_)->operator!=(*d);
}

extern "C"
void C_ZN5QLineD2Ev(void *this_) {
  delete (QLine*)(this_);
}
//  main block end
