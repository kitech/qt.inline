//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QConicalGradient is pure virtual: false
// QConicalGradient has virtual projected: false
//  header block end

//  main block begin

class MyQConicalGradient : public QConicalGradient {
public:
  virtual ~MyQConicalGradient() {}
// void QConicalGradient()
MyQConicalGradient() : QConicalGradient() {}
// void QConicalGradient(const class QPointF &, qreal)
MyQConicalGradient(const QPointF & center, qreal startAngle) : QConicalGradient(center, startAngle) {}
// void QConicalGradient(qreal, qreal, qreal)
MyQConicalGradient(qreal cx, qreal cy, qreal startAngle) : QConicalGradient(cx, cy, startAngle) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:306
// [-2] void QConicalGradient()
extern "C" Q_DECL_EXPORT
void* C_ZN16QConicalGradientC2Ev() {
  return  new QConicalGradient();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:307
// [-2] void QConicalGradient(const class QPointF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN16QConicalGradientC2ERK7QPointFd(QPointF* center, qreal startAngle) {
  return  new QConicalGradient(*center, startAngle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:308
// [-2] void QConicalGradient(qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN16QConicalGradientC2Eddd(qreal cx, qreal cy, qreal startAngle) {
  return  new QConicalGradient(cx, cy, startAngle);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:310
// [16] QPointF center()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QConicalGradient6centerEv(void *this_) {
  auto rv = ((QConicalGradient*)this_)->center();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:311
// [-2] void setCenter(const class QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradient9setCenterERK7QPointF(void *this_, QPointF* center) {
  ((QConicalGradient*)this_)->setCenter(*center);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:312
// [-2] void setCenter(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradient9setCenterEdd(void *this_, qreal x, qreal y) {
  ((QConicalGradient*)this_)->setCenter(x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:314
// [8] qreal angle()
extern "C" Q_DECL_EXPORT
qreal C_ZNK16QConicalGradient5angleEv(void *this_) {
  return (qreal)((QConicalGradient*)this_)->angle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:315
// [-2] void setAngle(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradient8setAngleEd(void *this_, qreal angle) {
  ((QConicalGradient*)this_)->setAngle(angle);
}


extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradientD2Ev(void *this_) {
  delete (QConicalGradient*)(this_);
}
//  main block end
