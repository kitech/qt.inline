//  header block begin

// /usr/include/qt/QtMultimedia/qmediatimerange.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediatimerange.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaTimeRange is pure virtual: false false
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
MyQMediaTimeRange(qint64 start, qint64 end_) : QMediaTimeRange(start, end_) {}
// void QMediaTimeRange(const QMediaTimeInterval &)
MyQMediaTimeRange(const QMediaTimeInterval & arg0) : QMediaTimeRange(arg0) {}
// void QMediaTimeRange(const QMediaTimeRange &)
MyQMediaTimeRange(const QMediaTimeRange & range_) : QMediaTimeRange(range_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediatimerange(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:88
// [-2] void QMediaTimeRange() 
// (12)qm2034936333 (24)_ZN15QMediaTimeRangeC2Ev
/*void* qm2034936333()*/{
  ;
  this_ =  new QMediaTimeRange();
  this_ =  new MyQMediaTimeRange();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:89
// [-2] void QMediaTimeRange(qint64, qint64) 
// (12)qm1821838618 (25)_ZN15QMediaTimeRangeC2Exx
/*void* qm1821838618(long long start, long long end_)*/{
  long long start = *(long long*)this_; long long end_ = *(long long*)this_;
  this_ =  new QMediaTimeRange(start, end_);
  this_ =  new MyQMediaTimeRange(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:90
// [-2] void QMediaTimeRange(const QMediaTimeInterval &) 
// (12)qm4263073953 (45)_ZN15QMediaTimeRangeC2ERK18QMediaTimeInterval
/*void* qm4263073953(const QMediaTimeInterval & arg0)*/{
  const QMediaTimeInterval & arg0 = *(const QMediaTimeInterval *)this_;
  this_ =  new QMediaTimeRange(arg0);
  this_ =  new MyQMediaTimeRange(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediatimerange.h:91
// [-2] void QMediaTimeRange(const QMediaTimeRange &) 
// (11)qm212184687 (27)_ZN15QMediaTimeRangeC2ERKS_
/*void* qm212184687(const QMediaTimeRange & range_)*/{
  const QMediaTimeRange & range_ = *(const QMediaTimeRange *)this_;
  this_ =  new QMediaTimeRange(range_);
  this_ =  new MyQMediaTimeRange(range_);
}


/*void C_ZN15QMediaTimeRangeD2Ev(void *this_)*/ {
  delete (QMediaTimeRange*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediatimerange
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
