//  header block begin
// /usr/include/qt/QtMultimedia/qmediatimerange.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediatimerange.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaTimeRange is pure virtual: false
// QMediaTimeRange has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaTimeRange_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaTimeRange_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaTimeRange_t qt_meta_stringdata_MyQMediaTimeRange = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQMediaTimeRange"
  },
  "MyQMediaTimeRange"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaTimeRange[] = {
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
class Q_DECL_EXPORT MyQMediaTimeRange : public QMediaTimeRange {
public:
  virtual ~MyQMediaTimeRange() {}
// void QMediaTimeRange()
MyQMediaTimeRange() : QMediaTimeRange() {}
// void QMediaTimeRange(qint64, qint64)
MyQMediaTimeRange(qint64 start, qint64 end) : QMediaTimeRange(start, end) {}
// void QMediaTimeRange(const QMediaTimeInterval &)
MyQMediaTimeRange(const QMediaTimeInterval & arg0) : QMediaTimeRange(arg0) {}
// void QMediaTimeRange(const QMediaTimeRange &)
MyQMediaTimeRange(const QMediaTimeRange & range_) : QMediaTimeRange(range_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:83
// [-2] void QMediaTimeRange()
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeC2Ev() {
  return  new QMediaTimeRange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:84
// [-2] void QMediaTimeRange(qint64, qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeC2Exx(qint64 start, qint64 end) {
  return  new QMediaTimeRange(start, end);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:85
// [-2] void QMediaTimeRange(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeC2ERK18QMediaTimeInterval(QMediaTimeInterval* arg0) {
  return  new QMediaTimeRange(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:86
// [-2] void QMediaTimeRange(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeC2ERKS_(QMediaTimeRange* range_) {
  return  new QMediaTimeRange(*range_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:87
// [-2] void ~QMediaTimeRange()
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRangeD2Ev(void *this_) {
  delete (QMediaTimeRange*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:89
// [8] QMediaTimeRange & operator=(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeaSERKS_(void *this_, QMediaTimeRange* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:90
// [8] QMediaTimeRange & operator=(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangeaSERK18QMediaTimeInterval(void *this_, QMediaTimeInterval* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:92
// [8] qint64 earliestTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK15QMediaTimeRange12earliestTimeEv(void *this_) {
  return (qint64)((QMediaTimeRange*)this_)->earliestTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:93
// [8] qint64 latestTime()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK15QMediaTimeRange10latestTimeEv(void *this_) {
  return (qint64)((QMediaTimeRange*)this_)->latestTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:95
// [-2] QList<QMediaTimeInterval> intervals()
extern "C" Q_DECL_EXPORT
QList<QMediaTimeInterval>* C_ZNK15QMediaTimeRange9intervalsEv(void *this_) {
  auto rv = ((QMediaTimeRange*)this_)->intervals();
return new QList<QMediaTimeInterval>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:96
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QMediaTimeRange7isEmptyEv(void *this_) {
  return (bool)((QMediaTimeRange*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:97
// [1] bool isContinuous()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QMediaTimeRange12isContinuousEv(void *this_) {
  return (bool)((QMediaTimeRange*)this_)->isContinuous();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:99
// [1] bool contains(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZNK15QMediaTimeRange8containsEx(void *this_, qint64 time) {
  return (bool)((QMediaTimeRange*)this_)->contains(time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:101
// [-2] void addInterval(qint64, qint64)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange11addIntervalExx(void *this_, qint64 start, qint64 end) {
  ((QMediaTimeRange*)this_)->addInterval(start, end);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:102
// [-2] void addInterval(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange11addIntervalERK18QMediaTimeInterval(void *this_, QMediaTimeInterval* interval) {
  ((QMediaTimeRange*)this_)->addInterval(*interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:103
// [-2] void addTimeRange(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange12addTimeRangeERKS_(void *this_, QMediaTimeRange* arg0) {
  ((QMediaTimeRange*)this_)->addTimeRange(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:105
// [-2] void removeInterval(qint64, qint64)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange14removeIntervalExx(void *this_, qint64 start, qint64 end) {
  ((QMediaTimeRange*)this_)->removeInterval(start, end);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:106
// [-2] void removeInterval(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange14removeIntervalERK18QMediaTimeInterval(void *this_, QMediaTimeInterval* interval) {
  ((QMediaTimeRange*)this_)->removeInterval(*interval);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:107
// [-2] void removeTimeRange(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange15removeTimeRangeERKS_(void *this_, QMediaTimeRange* arg0) {
  ((QMediaTimeRange*)this_)->removeTimeRange(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:109
// [8] QMediaTimeRange & operator+=(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangepLERKS_(void *this_, QMediaTimeRange* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator+=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:110
// [8] QMediaTimeRange & operator+=(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangepLERK18QMediaTimeInterval(void *this_, QMediaTimeInterval* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator+=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:111
// [8] QMediaTimeRange & operator-=(const QMediaTimeRange &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangemIERKS_(void *this_, QMediaTimeRange* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator-=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:112
// [8] QMediaTimeRange & operator-=(const QMediaTimeInterval &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QMediaTimeRangemIERK18QMediaTimeInterval(void *this_, QMediaTimeInterval* arg0) {
  auto& rv = ((QMediaTimeRange*)this_)->operator-=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:114
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN15QMediaTimeRange5clearEv(void *this_) {
  ((QMediaTimeRange*)this_)->clear();
}

//  main block end
