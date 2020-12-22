//  header block begin

// /usr/include/qt/QtMultimedia/qmediatimerange.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediatimerange.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaTimeInterval is pure virtual: false false
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
// void QMediaTimeInterval(QMediaTimeInterval &&)
MyQMediaTimeInterval(QMediaTimeInterval && arg0) : QMediaTimeInterval(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediatimeinterval(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:55
// [-2] void QMediaTimeInterval() 
// (12)qm1081797096 (27)_ZN18QMediaTimeIntervalC2Ev
/*void* qm1081797096()*/{
  ;
  this_ =  new QMediaTimeInterval();
  this_ =  new MyQMediaTimeInterval();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:56
// [-2] void QMediaTimeInterval(qint64, qint64) 
// (12)qm3167628206 (28)_ZN18QMediaTimeIntervalC2Exx
/*void* qm3167628206(long long start, long long end_)*/{
  long long start = *(long long*)this_; long long end_ = *(long long*)this_;
  this_ =  new QMediaTimeInterval(start, end_);
  this_ =  new MyQMediaTimeInterval(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:58
// [-2] void QMediaTimeInterval(const QMediaTimeInterval &) 
// (12)qm1577160823 (30)_ZN18QMediaTimeIntervalC2ERKS_
/*void* qm1577160823(const QMediaTimeInterval & arg0)*/{
  const QMediaTimeInterval & arg0 = *(const QMediaTimeInterval *)this_;
  this_ =  new QMediaTimeInterval(arg0);
  this_ =  new MyQMediaTimeInterval(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:59
// [16] QMediaTimeInterval & operator=(const QMediaTimeInterval &) 
// (12)qm3314246717 (30)_ZN18QMediaTimeIntervalaSERKS_
//static
/*void qm3314246717(const QMediaTimeInterval & arg0)*/ {
  const QMediaTimeInterval & arg0 = *(const QMediaTimeInterval *)this_;
  (void) ((QMediaTimeInterval*)this_)->operator=(arg0);
  // auto xptr = (QMediaTimeInterval & (QMediaTimeInterval::*)(QMediaTimeInterval const&) ) &QMediaTimeInterval::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:60
// [-2] void QMediaTimeInterval(QMediaTimeInterval &&) 
// (12)qm1330703696 (29)_ZN18QMediaTimeIntervalC2EOS_
/*void* qm1330703696(QMediaTimeInterval && arg0)*/{
  QMediaTimeInterval && arg0 =  static_cast<QMediaTimeInterval &&>(*(QMediaTimeInterval *)this_);
  this_ =  new QMediaTimeInterval(arg0);
  this_ =  new MyQMediaTimeInterval(arg0);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:61
// [16] QMediaTimeInterval & operator=(QMediaTimeInterval &&) 
// (12)qm2707822480 (29)_ZN18QMediaTimeIntervalaSEOS_
//static
/*void qm2707822480(QMediaTimeInterval && arg0)*/ {
  QMediaTimeInterval && arg0 =  static_cast<QMediaTimeInterval &&>(*(QMediaTimeInterval *)this_);
  (void) ((QMediaTimeInterval*)this_)->operator=(arg0);
  // auto xptr = (QMediaTimeInterval & (QMediaTimeInterval::*)(QMediaTimeInterval&&) ) &QMediaTimeInterval::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QMediaTimeIntervalD2Ev(void *this_)*/ {
  delete (QMediaTimeInterval*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediatimeinterval
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
