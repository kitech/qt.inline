//  header block begin

// since 0x040700
// /usr/include/qt/QtCore/qelapsedtimer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qelapsedtimer.h>
#include <QtCore>
#include "callback_inherit.h"

// QElapsedTimer is pure virtual: false
// QElapsedTimer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQElapsedTimer_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQElapsedTimer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQElapsedTimer_t qt_meta_stringdata_MyQElapsedTimer = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQElapsedTimer"
  },
  "MyQElapsedTimer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQElapsedTimer[] = {
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
class Q_DECL_EXPORT MyQElapsedTimer : public QElapsedTimer {
public:
  virtual ~MyQElapsedTimer() {}
// void QElapsedTimer()
MyQElapsedTimer() : QElapsedTimer() {}
};

// Public inline Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtCore/qelapsedtimer.h:59
// [-2] void QElapsedTimer()
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void* C_ZN13QElapsedTimerC2Ev() {
  return  new QElapsedTimer();
}
#endif // QT_VERSION >= 0x050400

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:65
// [4] QElapsedTimer::ClockType clockType()
extern "C" Q_DECL_EXPORT
QElapsedTimer::ClockType C_ZN13QElapsedTimer9clockTypeEv() {
  return (QElapsedTimer::ClockType)QElapsedTimer::clockType();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:66
// [1] bool isMonotonic()
extern "C" Q_DECL_EXPORT
bool C_ZN13QElapsedTimer11isMonotonicEv() {
  return (bool)QElapsedTimer::isMonotonic();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:68
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN13QElapsedTimer5startEv(void *this_) {
  ((QElapsedTimer*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:69
// [8] qint64 restart()
extern "C" Q_DECL_EXPORT
qint64 C_ZN13QElapsedTimer7restartEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->restart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:70
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN13QElapsedTimer10invalidateEv(void *this_) {
  ((QElapsedTimer*)this_)->invalidate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:71
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QElapsedTimer7isValidEv(void *this_) {
  return (bool)((QElapsedTimer*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qelapsedtimer.h:73
// [8] qint64 nsecsElapsed()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QElapsedTimer12nsecsElapsedEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->nsecsElapsed();
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:74
// [8] qint64 elapsed()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QElapsedTimer7elapsedEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->elapsed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:75
// [1] bool hasExpired(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QElapsedTimer10hasExpiredEx(void *this_, qint64 timeout) {
  return (bool)((QElapsedTimer*)this_)->hasExpired(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:77
// [8] qint64 msecsSinceReference()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QElapsedTimer19msecsSinceReferenceEv(void *this_) {
  return (qint64)((QElapsedTimer*)this_)->msecsSinceReference();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:78
// [8] qint64 msecsTo(const QElapsedTimer &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QElapsedTimer7msecsToERKS_(void *this_, QElapsedTimer* other) {
  return (qint64)((QElapsedTimer*)this_)->msecsTo(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:79
// [8] qint64 secsTo(const QElapsedTimer &)
extern "C" Q_DECL_EXPORT
qint64 C_ZNK13QElapsedTimer6secsToERKS_(void *this_, QElapsedTimer* other) {
  return (qint64)((QElapsedTimer*)this_)->secsTo(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:81
// [1] bool operator==(const QElapsedTimer &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QElapsedTimereqERKS_(void *this_, QElapsedTimer* other) {
  return (bool)((QElapsedTimer*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qelapsedtimer.h:83
// [1] bool operator!=(const QElapsedTimer &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QElapsedTimerneERKS_(void *this_, QElapsedTimer* other) {
  return (bool)((QElapsedTimer*)this_)->operator!=(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QElapsedTimerD2Ev(void *this_) {
  delete (QElapsedTimer*)(this_);
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
