//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:940
// void QScrollPrepareEvent(const class QPointF &)
extern "C"
void* C_ZN19QScrollPrepareEventC1ERK7QPointF(const QPointF & startPos) {
  return new QScrollPrepareEvent(startPos);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:941
// void ~QScrollPrepareEvent()
extern "C"
void C_ZN19QScrollPrepareEventD1Ev(void *this_) {
  delete (QScrollPrepareEvent*)(this_);
}
// /usr/include/qt/QtGui/qevent.h:943
// QPointF startPos()
extern "C"
void C_ZNK19QScrollPrepareEvent8startPosEv(void *this_) {
  /*return*/ ((QScrollPrepareEvent*)this_)->startPos();
}
// /usr/include/qt/QtGui/qevent.h:945
// QSizeF viewportSize()
extern "C"
void C_ZNK19QScrollPrepareEvent12viewportSizeEv(void *this_) {
  /*return*/ ((QScrollPrepareEvent*)this_)->viewportSize();
}
// /usr/include/qt/QtGui/qevent.h:946
// QRectF contentPosRange()
extern "C"
void C_ZNK19QScrollPrepareEvent15contentPosRangeEv(void *this_) {
  /*return*/ ((QScrollPrepareEvent*)this_)->contentPosRange();
}
// /usr/include/qt/QtGui/qevent.h:947
// QPointF contentPos()
extern "C"
void C_ZNK19QScrollPrepareEvent10contentPosEv(void *this_) {
  /*return*/ ((QScrollPrepareEvent*)this_)->contentPos();
}
// /usr/include/qt/QtGui/qevent.h:949
// void setViewportSize(const class QSizeF &)
extern "C"
void C_ZN19QScrollPrepareEvent15setViewportSizeERK6QSizeF(void *this_, const QSizeF & size) {
  ((QScrollPrepareEvent*)this_)->setViewportSize(size);
}
// /usr/include/qt/QtGui/qevent.h:950
// void setContentPosRange(const class QRectF &)
extern "C"
void C_ZN19QScrollPrepareEvent18setContentPosRangeERK6QRectF(void *this_, const QRectF & rect) {
  ((QScrollPrepareEvent*)this_)->setContentPosRange(rect);
}
// /usr/include/qt/QtGui/qevent.h:951
// void setContentPos(const class QPointF &)
extern "C"
void C_ZN19QScrollPrepareEvent13setContentPosERK7QPointF(void *this_, const QPointF & pos) {
  ((QScrollPrepareEvent*)this_)->setContentPos(pos);
}
//  main block end
