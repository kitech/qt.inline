//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

// QScrollPrepareEvent is pure virtual: false
// QScrollPrepareEvent has virtual projected: false
//  header block end

//  main block begin

class MyQScrollPrepareEvent : public QScrollPrepareEvent {
public:
  virtual ~MyQScrollPrepareEvent() {}
// void QScrollPrepareEvent(const class QPointF &)
MyQScrollPrepareEvent(const QPointF & startPos) : QScrollPrepareEvent(startPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:990
// [-2] void QScrollPrepareEvent(const class QPointF &)
extern "C"
void* C_ZN19QScrollPrepareEventC2ERK7QPointF(const QPointF & startPos) {
  return  new QScrollPrepareEvent(startPos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:991
// [-2] void ~QScrollPrepareEvent()
extern "C"
void C_ZN19QScrollPrepareEventD2Ev(void *this_) {
  delete (QScrollPrepareEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:993
// [16] QPointF startPos()
extern "C"
void* C_ZNK19QScrollPrepareEvent8startPosEv(void *this_) {
  auto rv = ((QScrollPrepareEvent*)this_)->startPos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:995
// [16] QSizeF viewportSize()
extern "C"
void* C_ZNK19QScrollPrepareEvent12viewportSizeEv(void *this_) {
  auto rv = ((QScrollPrepareEvent*)this_)->viewportSize();
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:996
// [32] QRectF contentPosRange()
extern "C"
void* C_ZNK19QScrollPrepareEvent15contentPosRangeEv(void *this_) {
  auto rv = ((QScrollPrepareEvent*)this_)->contentPosRange();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:997
// [16] QPointF contentPos()
extern "C"
void* C_ZNK19QScrollPrepareEvent10contentPosEv(void *this_) {
  auto rv = ((QScrollPrepareEvent*)this_)->contentPos();
return new QPointF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:999
// [-2] void setViewportSize(const class QSizeF &)
extern "C"
void C_ZN19QScrollPrepareEvent15setViewportSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QScrollPrepareEvent*)this_)->setViewportSize(size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1000
// [-2] void setContentPosRange(const class QRectF &)
extern "C"
void C_ZN19QScrollPrepareEvent18setContentPosRangeERK6QRectF(void *this_, const QRectF & rect) {
  ((QScrollPrepareEvent*)this_)->setContentPosRange(rect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1001
// [-2] void setContentPos(const class QPointF &)
extern "C"
void C_ZN19QScrollPrepareEvent13setContentPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QScrollPrepareEvent*)this_)->setContentPos(pos);
}
//  main block end
