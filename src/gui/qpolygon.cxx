//  header block begin
// /usr/include/qt/QtGui/qpolygon.h
#ifndef protected
#define protected public
#endif
#include <qpolygon.h>
#include <QtGui>
#include "callback_inherit.h"

// QPolygon is pure virtual: false
// QPolygon has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQPolygon : public QPolygon {
public:
  virtual ~MyQPolygon() {}
// void QPolygon()
MyQPolygon() : QPolygon() {}
// void QPolygon(int)
MyQPolygon(int size) : QPolygon(size) {}
// void QPolygon(const class QRect &, _Bool)
MyQPolygon(const QRect & r, bool closed) : QPolygon(r, closed) {}
// void QPolygon(int, const int *)
MyQPolygon(int nPoints, const int * points) : QPolygon(nPoints, points) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:59
// [-2] void QPolygon()
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonC2Ev() {
  return  new QPolygon();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:60
// [-2] void ~QPolygon()
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygonD2Ev(void *this_) {
  delete (QPolygon*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:61
// [-2] void QPolygon(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonC2Ei(int size) {
  return  new QPolygon(size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:66
// [-2] void QPolygon(const class QRect &, _Bool)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonC2ERK5QRectb(QRect* r, bool closed) {
  return  new QPolygon(*r, closed);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:67
// [-2] void QPolygon(int, const int *)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonC2EiPKi(int nPoints, const int * points) {
  return  new QPolygon(nPoints, points);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:71
// [8] QPolygon & operator=(class QPolygon &&)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonaSEOS_(void *this_, QPolygon && other) {
  auto& rv = ((QPolygon*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:73
// [8] QPolygon & operator=(const class QPolygon &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QPolygonaSERKS_(void *this_, QPolygon* other) {
  auto& rv = ((QPolygon*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qpolygon.h:74
// [-2] void swap(class QPolygon &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon4swapERS_(void *this_, QPolygon* other) {
  ((QPolygon*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:78
// [-2] void translate(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon9translateEii(void *this_, int dx, int dy) {
  ((QPolygon*)this_)->translate(dx, dy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:79
// [-2] void translate(const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon9translateERK6QPoint(void *this_, QPoint* offset) {
  ((QPolygon*)this_)->translate(*offset);
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpolygon.h:81
// [8] QPolygon translated(int, int)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon10translatedEii(void *this_, int dx, int dy) {
  auto rv = ((QPolygon*)this_)->translated(dx, dy);
return new QPolygon(rv);
}
#endif // QT_VERSION >= 0x040600

// Public inline Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtGui/qpolygon.h:82
// [8] QPolygon translated(const class QPoint &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon10translatedERK6QPoint(void *this_, QPoint* offset) {
  auto rv = ((QPolygon*)this_)->translated(*offset);
return new QPolygon(rv);
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:84
// [16] QRect boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon12boundingRectEv(void *this_) {
  auto rv = ((QPolygon*)this_)->boundingRect();
return new QRect(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:86
// [-2] void point(int, int *, int *)
extern "C" Q_DECL_EXPORT
void C_ZNK8QPolygon5pointEiPiS0_(void *this_, int i, int * x, int * y) {
  ((QPolygon*)this_)->point(i, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:87
// [8] QPoint point(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon5pointEi(void *this_, int i) {
  auto rv = ((QPolygon*)this_)->point(i);
return new QPoint(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:88
// [-2] void setPoint(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon8setPointEiii(void *this_, int index, int x, int y) {
  ((QPolygon*)this_)->setPoint(index, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:89
// [-2] void setPoint(int, const class QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon8setPointEiRK6QPoint(void *this_, int index, QPoint* p) {
  ((QPolygon*)this_)->setPoint(index, *p);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:90
// [-2] void setPoints(int, const int *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon9setPointsEiPKi(void *this_, int nPoints, const int * points) {
  ((QPolygon*)this_)->setPoints(nPoints, points);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:92
// [-2] void putPoints(int, int, const int *)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon9putPointsEiiPKi(void *this_, int index, int nPoints, const int * points) {
  ((QPolygon*)this_)->putPoints(index, nPoints, points);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:94
// [-2] void putPoints(int, int, const class QPolygon &, int)
extern "C" Q_DECL_EXPORT
void C_ZN8QPolygon9putPointsEiiRKS_i(void *this_, int index, int nPoints, QPolygon* from, int fromIndex) {
  ((QPolygon*)this_)->putPoints(index, nPoints, *from, fromIndex);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:96
// [1] bool containsPoint(const class QPoint &, Qt::FillRule)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPolygon13containsPointERK6QPointN2Qt8FillRuleE(void *this_, QPoint* pt, Qt::FillRule fillRule) {
  return (bool)((QPolygon*)this_)->containsPoint(*pt, fillRule);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:98
// [8] QPolygon united(const class QPolygon &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon6unitedERKS_(void *this_, QPolygon* r) {
  auto rv = ((QPolygon*)this_)->united(*r);
return new QPolygon(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:99
// [8] QPolygon intersected(const class QPolygon &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon11intersectedERKS_(void *this_, QPolygon* r) {
  auto rv = ((QPolygon*)this_)->intersected(*r);
return new QPolygon(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qpolygon.h:100
// [8] QPolygon subtracted(const class QPolygon &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK8QPolygon10subtractedERKS_(void *this_, QPolygon* r) {
  auto rv = ((QPolygon*)this_)->subtracted(*r);
return new QPolygon(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qpolygon.h:102
// [1] bool intersects(const class QPolygon &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool C_ZNK8QPolygon10intersectsERKS_(void *this_, QPolygon* r) {
  return (bool)((QPolygon*)this_)->intersects(*r);
}
#endif // QT_VERSION >= 0x050a00

//  main block end
