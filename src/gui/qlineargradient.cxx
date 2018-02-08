//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QLinearGradient is pure virtual: false
// QLinearGradient has virtual projected: false
//  header block end

//  main block begin

class MyQLinearGradient : public QLinearGradient {
public:
  virtual ~MyQLinearGradient() {}
// void QLinearGradient()
MyQLinearGradient() : QLinearGradient() {}
// void QLinearGradient(const class QPointF &, const class QPointF &)
MyQLinearGradient(const QPointF & start, const QPointF & finalStop) : QLinearGradient(start, finalStop) {}
// void QLinearGradient(qreal, qreal, qreal, qreal)
MyQLinearGradient(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) : QLinearGradient(xStart, yStart, xFinalStop, yFinalStop) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:257
// [-2] void QLinearGradient()
extern "C"
void* C_ZN15QLinearGradientC2Ev() {
  return  new QLinearGradient();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:258
// [-2] void QLinearGradient(const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN15QLinearGradientC2ERK7QPointFS2_(QPointF* start, QPointF* finalStop) {
  return  new QLinearGradient(*start, *finalStop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:259
// [-2] void QLinearGradient(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QLinearGradientC2Edddd(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) {
  return  new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:261
// [16] QPointF start()
extern "C"
void* C_ZNK15QLinearGradient5startEv(void *this_) {
  auto rv = ((QLinearGradient*)this_)->start();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:262
// [-2] void setStart(const class QPointF &)
extern "C"
void C_ZN15QLinearGradient8setStartERK7QPointF(void *this_, QPointF* start) {
  ((QLinearGradient*)this_)->setStart(*start);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:263
// [-2] void setStart(qreal, qreal)
extern "C"
void C_ZN15QLinearGradient8setStartEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setStart(x, y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:265
// [16] QPointF finalStop()
extern "C"
void* C_ZNK15QLinearGradient9finalStopEv(void *this_) {
  auto rv = ((QLinearGradient*)this_)->finalStop();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:266
// [-2] void setFinalStop(const class QPointF &)
extern "C"
void C_ZN15QLinearGradient12setFinalStopERK7QPointF(void *this_, QPointF* stop) {
  ((QLinearGradient*)this_)->setFinalStop(*stop);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:267
// [-2] void setFinalStop(qreal, qreal)
extern "C"
void C_ZN15QLinearGradient12setFinalStopEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setFinalStop(x, y);
}

extern "C"
void C_ZN15QLinearGradientD2Ev(void *this_) {
  delete (QLinearGradient*)(this_);
}
//  main block end