//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QConicalGradient is pure virtual: false
// QConicalGradient has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQConicalGradient_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQConicalGradient_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQConicalGradient_t qt_meta_stringdata_MyQConicalGradient = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQConicalGradient"
  },
  "MyQConicalGradient"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQConicalGradient[] = {
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
class Q_DECL_EXPORT MyQConicalGradient : public QConicalGradient {
public:
  virtual ~MyQConicalGradient() {}
// void QConicalGradient()
MyQConicalGradient() : QConicalGradient() {}
// void QConicalGradient(const QPointF &, qreal)
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
// [-2] void QConicalGradient(const QPointF &, qreal)
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
// [-2] void setCenter(const QPointF &)
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
// since 4.2
// /usr/include/qt/QtGui/qbrush.h:315
// [-2] void setAngle(qreal)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradient8setAngleEd(void *this_, qreal angle) {
  ((QConicalGradient*)this_)->setAngle(angle);
}
#endif // QT_VERSION >= 0x040200


extern "C" Q_DECL_EXPORT
void C_ZN16QConicalGradientD2Ev(void *this_) {
  delete (QConicalGradient*)(this_);
}
//  main block end
