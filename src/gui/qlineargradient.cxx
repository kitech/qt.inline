//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QLinearGradient is pure virtual: false
// QLinearGradient has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLinearGradient_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLinearGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLinearGradient_t qt_meta_stringdata_MyQLinearGradient = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQLinearGradient"
  },
  "MyQLinearGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLinearGradient[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQLinearGradient : public QLinearGradient {
public:
  virtual ~MyQLinearGradient() {}
// void QLinearGradient()
MyQLinearGradient() : QLinearGradient() {}
// void QLinearGradient(const QPointF &, const QPointF &)
MyQLinearGradient(const QPointF & start, const QPointF & finalStop) : QLinearGradient(start, finalStop) {}
// void QLinearGradient(qreal, qreal, qreal, qreal)
MyQLinearGradient(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) : QLinearGradient(xStart, yStart, xFinalStop, yFinalStop) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:257
// [-2] void QLinearGradient()
extern "C" Q_DECL_EXPORT
void* C_ZN15QLinearGradientC2Ev() {
  return  new QLinearGradient();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:258
// [-2] void QLinearGradient(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QLinearGradientC2ERK7QPointFS2_(QPointF* start, QPointF* finalStop) {
  return  new QLinearGradient(*start, *finalStop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:259
// [-2] void QLinearGradient(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN15QLinearGradientC2Edddd(qreal xStart, qreal yStart, qreal xFinalStop, qreal yFinalStop) {
  return  new QLinearGradient(xStart, yStart, xFinalStop, yFinalStop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:261
// [16] QPointF start()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QLinearGradient5startEv(void *this_) {
  auto rv = ((QLinearGradient*)this_)->start();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:262
// [-2] void setStart(const QPointF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QLinearGradient8setStartERK7QPointF(void *this_, QPointF* start) {
  ((QLinearGradient*)this_)->setStart(*start);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:263
// [-2] void setStart(qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QLinearGradient8setStartEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setStart(x, y);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:265
// [16] QPointF finalStop()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QLinearGradient9finalStopEv(void *this_) {
  auto rv = ((QLinearGradient*)this_)->finalStop();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:266
// [-2] void setFinalStop(const QPointF &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QLinearGradient12setFinalStopERK7QPointF(void *this_, QPointF* stop) {
  ((QLinearGradient*)this_)->setFinalStop(*stop);
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:267
// [-2] void setFinalStop(qreal, qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QLinearGradient12setFinalStopEdd(void *this_, qreal x, qreal y) {
  ((QLinearGradient*)this_)->setFinalStop(x, y);
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN15QLinearGradientD2Ev(void *this_) {
  delete (QLinearGradient*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
