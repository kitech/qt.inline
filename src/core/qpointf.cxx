//  header block begin
// /usr/include/qt/QtCore/qpoint.h
#include <qpoint.h>
#include <QtCore>
#include "callback_inherit.h"

// QPointF is pure virtual: false
// QPointF has virtual projected: false
//  header block end

//  main block begin

class MyQPointF : public QPointF {
public:
  virtual ~MyQPointF() {}
// void QPointF()
MyQPointF() : QPointF() {}
// void QPointF(const class QPoint &)
MyQPointF(const QPoint & p) : QPointF(p) {}
// void QPointF(qreal, qreal)
MyQPointF(qreal xpos, qreal ypos) : QPointF(xpos, ypos) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:222
// [-2] void QPointF()
extern "C"
void* C_ZN7QPointFC2Ev() {
  return  new QPointF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:223
// [-2] void QPointF(const class QPoint &)
extern "C"
void* C_ZN7QPointFC2ERK6QPoint(QPoint* p) {
  return  new QPointF(*p);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:224
// [-2] void QPointF(qreal, qreal)
extern "C"
void* C_ZN7QPointFC2Edd(qreal xpos, qreal ypos) {
  return  new QPointF(xpos, ypos);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:226
// [8] qreal manhattanLength()
extern "C"
qreal C_ZNK7QPointF15manhattanLengthEv(void *this_) {
  return (qreal)((QPointF*)this_)->manhattanLength();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:228
// [1] bool isNull()
extern "C"
bool C_ZNK7QPointF6isNullEv(void *this_) {
  return (bool)((QPointF*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:230
// [8] qreal x()
extern "C"
qreal C_ZNK7QPointF1xEv(void *this_) {
  return (qreal)((QPointF*)this_)->x();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:231
// [8] qreal y()
extern "C"
qreal C_ZNK7QPointF1yEv(void *this_) {
  return (qreal)((QPointF*)this_)->y();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:232
// [-2] void setX(qreal)
extern "C"
void C_ZN7QPointF4setXEd(void *this_, qreal x) {
  ((QPointF*)this_)->setX(x);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:233
// [-2] void setY(qreal)
extern "C"
void C_ZN7QPointF4setYEd(void *this_, qreal y) {
  ((QPointF*)this_)->setY(y);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:235
// [8] qreal & rx()
extern "C"
void* C_ZN7QPointF2rxEv(void *this_) {
  auto& rv = ((QPointF*)this_)->rx();
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:236
// [8] qreal & ry()
extern "C"
void* C_ZN7QPointF2ryEv(void *this_) {
  auto& rv = ((QPointF*)this_)->ry();
return &rv;
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:243
// [8] qreal dotProduct(const class QPointF &, const class QPointF &)
extern "C"
qreal C_ZN7QPointF10dotProductERKS_S1_(QPointF* p1, QPointF* p2) {
  return (qreal)QPointF::dotProduct(*p1, *p2);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:256
// [8] QPoint toPoint()
extern "C"
void* C_ZNK7QPointF7toPointEv(void *this_) {
  auto rv = ((QPointF*)this_)->toPoint();
return new QPoint(rv);
}

extern "C"
void C_ZN7QPointFD2Ev(void *this_) {
  delete (QPointF*)(this_);
}
//  main block end