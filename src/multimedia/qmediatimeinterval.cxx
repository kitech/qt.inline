//  header block begin
// /usr/include/qt/QtMultimedia/qmediatimerange.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediatimerange.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaTimeInterval is pure virtual: false
// QMediaTimeInterval has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaTimeInterval_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaTimeInterval_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaTimeInterval_t qt_meta_stringdata_MyQMediaTimeInterval = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQMediaTimeInterval"
  },
  "MyQMediaTimeInterval"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaTimeInterval[] = {
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
class Q_DECL_EXPORT MyQMediaTimeInterval : public QMediaTimeInterval {
public:
  virtual ~MyQMediaTimeInterval() {}
// void QMediaTimeInterval()
MyQMediaTimeInterval() : QMediaTimeInterval() {}
// void QMediaTimeInterval(qint64, qint64)
MyQMediaTimeInterval(qint64 start, qint64 end_) : QMediaTimeInterval(start, end_) {}
// void QMediaTimeInterval(const QMediaTimeInterval &)
MyQMediaTimeInterval(const QMediaTimeInterval & arg0) : QMediaTimeInterval(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:55
// [-2] void QMediaTimeInterval()
extern "C" Q_DECL_EXPORT
void* C_ZN18QMediaTimeIntervalC2Ev() {
  return  new QMediaTimeInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:56
// [-2] void QMediaTimeInterval(qint64, qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN18QMediaTimeIntervalC2Exx(qint64 start, qint64 end_) {
  return  new QMediaTimeInterval(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:57
// [-2] void QMediaTimeInterval(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QMediaTimeIntervalC2ERKS_(QMediaTimeInterval* arg0) {
  return  new QMediaTimeInterval(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:59
// [8] qint64 start()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK18QMediaTimeInterval5startEv(void *this_) {
  return (qint64)((QMediaTimeInterval*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:60
// [8] qint64 end()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK18QMediaTimeInterval3endEv(void *this_) {
  return (qint64)((QMediaTimeInterval*)this_)->end();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:62
// [1] bool contains(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QMediaTimeInterval8containsEx(void *this_, qint64 time) {
  return (bool)((QMediaTimeInterval*)this_)->contains(time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:64
// [1] bool isNormal()
extern "C" Q_DECL_EXPORT
bool C_ZNK18QMediaTimeInterval8isNormalEv(void *this_) {
  return (bool)((QMediaTimeInterval*)this_)->isNormal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:65
// [16] QMediaTimeInterval normalized()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QMediaTimeInterval10normalizedEv(void *this_) {
  auto rv = ((QMediaTimeInterval*)this_)->normalized();
return new QMediaTimeInterval(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:66
// [16] QMediaTimeInterval translated(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QMediaTimeInterval10translatedEx(void *this_, qint64 offset) {
  auto rv = ((QMediaTimeInterval*)this_)->translated(offset);
return new QMediaTimeInterval(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QMediaTimeIntervalD2Ev(void *this_) {
  delete (QMediaTimeInterval*)(this_);
}
//  main block end
