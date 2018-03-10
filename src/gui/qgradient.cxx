//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QGradient is pure virtual: false
// QGradient has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGradient : public QGradient {
public:
  virtual ~MyQGradient() {}
// void QGradient()
MyQGradient() : QGradient() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:206
// [-2] void QGradient()
extern "C" Q_DECL_EXPORT
void* C_ZN9QGradientC2Ev() {
  return  new QGradient();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:208
// [4] QGradient::Type type()
extern "C" Q_DECL_EXPORT
QGradient::Type C_ZNK9QGradient4typeEv(void *this_) {
  return (QGradient::Type)((QGradient*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:210
// [-2] void setSpread(enum QGradient::Spread)
extern "C" Q_DECL_EXPORT
void C_ZN9QGradient9setSpreadENS_6SpreadE(void *this_, QGradient::Spread spread) {
  ((QGradient*)this_)->setSpread(spread);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:211
// [4] QGradient::Spread spread()
extern "C" Q_DECL_EXPORT
QGradient::Spread C_ZNK9QGradient6spreadEv(void *this_) {
  return (QGradient::Spread)((QGradient*)this_)->spread();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:213
// [-2] void setColorAt(qreal, const class QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN9QGradient10setColorAtEdRK6QColor(void *this_, qreal pos, QColor* color) {
  ((QGradient*)this_)->setColorAt(pos, *color);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtGui/qbrush.h:218
// [4] QGradient::CoordinateMode coordinateMode()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
QGradient::CoordinateMode C_ZNK9QGradient14coordinateModeEv(void *this_) {
  return (QGradient::CoordinateMode)((QGradient*)this_)->coordinateMode();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:219
// [-2] void setCoordinateMode(enum QGradient::CoordinateMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QGradient17setCoordinateModeENS_14CoordinateModeE(void *this_, QGradient::CoordinateMode mode) {
  ((QGradient*)this_)->setCoordinateMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:221
// [4] QGradient::InterpolationMode interpolationMode()
extern "C" Q_DECL_EXPORT
QGradient::InterpolationMode C_ZNK9QGradient17interpolationModeEv(void *this_) {
  return (QGradient::InterpolationMode)((QGradient*)this_)->interpolationMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:222
// [-2] void setInterpolationMode(enum QGradient::InterpolationMode)
extern "C" Q_DECL_EXPORT
void C_ZN9QGradient20setInterpolationModeENS_17InterpolationModeE(void *this_, QGradient::InterpolationMode mode) {
  ((QGradient*)this_)->setInterpolationMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:224
// [1] bool operator==(const class QGradient &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGradienteqERKS_(void *this_, QGradient* gradient) {
  return (bool)((QGradient*)this_)->operator==(*gradient);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:225
// [1] bool operator!=(const class QGradient &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QGradientneERKS_(void *this_, QGradient* other) {
  return (bool)((QGradient*)this_)->operator!=(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QGradientD2Ev(void *this_) {
  delete (QGradient*)(this_);
}
//  main block end
