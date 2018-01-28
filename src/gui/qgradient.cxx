//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#include <qbrush.h>
#include <QtGui>

// QGradient is pure virtual: false
//  header block end

//  main block begin

class MyQGradient : public QGradient {
public:
MyQGradient() : QGradient() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:206
// [-2] void QGradient()
extern "C"
void* C_ZN9QGradientC1Ev() {
  (MyQGradient*)(0);
  return  new MyQGradient();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:208
// [4] QGradient::Type type()
extern "C"
QGradient::Type C_ZNK9QGradient4typeEv(void *this_) {
  return (QGradient::Type)((QGradient*)this_)->type();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:210
// [-2] void setSpread(enum QGradient::Spread)
extern "C"
void C_ZN9QGradient9setSpreadENS_6SpreadE(void *this_, QGradient::Spread spread) {
  ((QGradient*)this_)->setSpread(spread);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:211
// [4] QGradient::Spread spread()
extern "C"
QGradient::Spread C_ZNK9QGradient6spreadEv(void *this_) {
  return (QGradient::Spread)((QGradient*)this_)->spread();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:213
// [-2] void setColorAt(qreal, const class QColor &)
extern "C"
void C_ZN9QGradient10setColorAtEdRK6QColor(void *this_, qreal pos, const QColor & color) {
  ((QGradient*)this_)->setColorAt(pos, color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:218
// [4] QGradient::CoordinateMode coordinateMode()
extern "C"
QGradient::CoordinateMode C_ZNK9QGradient14coordinateModeEv(void *this_) {
  return (QGradient::CoordinateMode)((QGradient*)this_)->coordinateMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:219
// [-2] void setCoordinateMode(enum QGradient::CoordinateMode)
extern "C"
void C_ZN9QGradient17setCoordinateModeENS_14CoordinateModeE(void *this_, QGradient::CoordinateMode mode) {
  ((QGradient*)this_)->setCoordinateMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:221
// [4] QGradient::InterpolationMode interpolationMode()
extern "C"
QGradient::InterpolationMode C_ZNK9QGradient17interpolationModeEv(void *this_) {
  return (QGradient::InterpolationMode)((QGradient*)this_)->interpolationMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:222
// [-2] void setInterpolationMode(enum QGradient::InterpolationMode)
extern "C"
void C_ZN9QGradient20setInterpolationModeENS_17InterpolationModeE(void *this_, QGradient::InterpolationMode mode) {
  ((QGradient*)this_)->setInterpolationMode(mode);
}
//  main block end
