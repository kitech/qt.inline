//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qbrush.h:205
// void QGradient()
extern "C"
void* C_ZN9QGradientC1Ev() {
  return new QGradient();
}
// inline
// /usr/include/qt/QtGui/qbrush.h:207
// QGradient::Type type()
extern "C"
void C_ZNK9QGradient4typeEv(void *this_) {
  /*return*/ ((QGradient*)this_)->type();
}
// inline
// /usr/include/qt/QtGui/qbrush.h:209
// void setSpread(enum QGradient::Spread)
extern "C"
void C_ZN9QGradient9setSpreadENS_6SpreadE(void *this_, QGradient::Spread spread) {
  ((QGradient*)this_)->setSpread(spread);
}
// inline
// /usr/include/qt/QtGui/qbrush.h:210
// QGradient::Spread spread()
extern "C"
void C_ZNK9QGradient6spreadEv(void *this_) {
  /*return*/ ((QGradient*)this_)->spread();
}
// /usr/include/qt/QtGui/qbrush.h:212
// void setColorAt(qreal, const class QColor &)
extern "C"
void C_ZN9QGradient10setColorAtEdRK6QColor(void *this_, qreal pos, const QColor & color) {
  ((QGradient*)this_)->setColorAt(pos, color);
}
// /usr/include/qt/QtGui/qbrush.h:214
// void setStops(const QGradientStops &)
extern "C"
void C_ZN9QGradient8setStopsERK7QVectorI5QPairId6QColorEE(void *this_, const QGradientStops & stops) {
  ((QGradient*)this_)->setStops(stops);
}
// /usr/include/qt/QtGui/qbrush.h:215
// QGradientStops stops()
extern "C"
void C_ZNK9QGradient5stopsEv(void *this_) {
  /*return*/ ((QGradient*)this_)->stops();
}
// /usr/include/qt/QtGui/qbrush.h:217
// QGradient::CoordinateMode coordinateMode()
extern "C"
void C_ZNK9QGradient14coordinateModeEv(void *this_) {
  /*return*/ ((QGradient*)this_)->coordinateMode();
}
// /usr/include/qt/QtGui/qbrush.h:218
// void setCoordinateMode(enum QGradient::CoordinateMode)
extern "C"
void C_ZN9QGradient17setCoordinateModeENS_14CoordinateModeE(void *this_, QGradient::CoordinateMode mode) {
  ((QGradient*)this_)->setCoordinateMode(mode);
}
// /usr/include/qt/QtGui/qbrush.h:220
// QGradient::InterpolationMode interpolationMode()
extern "C"
void C_ZNK9QGradient17interpolationModeEv(void *this_) {
  /*return*/ ((QGradient*)this_)->interpolationMode();
}
// /usr/include/qt/QtGui/qbrush.h:221
// void setInterpolationMode(enum QGradient::InterpolationMode)
extern "C"
void C_ZN9QGradient20setInterpolationModeENS_17InterpolationModeE(void *this_, QGradient::InterpolationMode mode) {
  ((QGradient*)this_)->setInterpolationMode(mode);
}
//  main block end
