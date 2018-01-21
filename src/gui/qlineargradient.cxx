//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qbrush.h:256
// void QLinearGradient()
extern "C"
void* C_ZN15QLinearGradientC1Ev() {
  return new QLinearGradient();
}
// /usr/include/qt/QtGui/qbrush.h:257
// void QLinearGradient(const class QPointF &, const class QPointF &)
extern "C"
void* C_ZN15QLinearGradientC1ERK7QPointFS2_(const QPointF & start, const QPointF & finalStop) {
  return new QLinearGradient(start, finalStop);
}
// /usr/include/qt/QtGui/qbrush.h:258
// void QLinearGradient(qreal, qreal, qreal, qreal)
extern "C"
void* C_ZN15QLinearGradientC1Edddd(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) {
  return new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}
// /usr/include/qt/QtGui/qbrush.h:260
// QPointF start()
extern "C"
void C_ZNK15QLinearGradient5startEv(void *this_) {
  /*return*/ ((QLinearGradient*)this_)->start();
}
// /usr/include/qt/QtGui/qbrush.h:261
// void setStart(const class QPointF &)
extern "C"
void C_ZN15QLinearGradient8setStartERK7QPointF(void *this_, const QPointF & start) {
  ((QLinearGradient*)this_)->setStart(start);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:262
// void setStart(qreal, qreal)
extern "C"
void C_ZN15QLinearGradient8setStartEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setStart(x, y);
}
// /usr/include/qt/QtGui/qbrush.h:264
// QPointF finalStop()
extern "C"
void C_ZNK15QLinearGradient9finalStopEv(void *this_) {
  /*return*/ ((QLinearGradient*)this_)->finalStop();
}
// /usr/include/qt/QtGui/qbrush.h:265
// void setFinalStop(const class QPointF &)
extern "C"
void C_ZN15QLinearGradient12setFinalStopERK7QPointF(void *this_, const QPointF & stop) {
  ((QLinearGradient*)this_)->setFinalStop(stop);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:266
// void setFinalStop(qreal, qreal)
extern "C"
void C_ZN15QLinearGradient12setFinalStopEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setFinalStop(x, y);
}
//  main block end
