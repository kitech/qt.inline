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
