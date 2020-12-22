//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionHeader is pure virtual: false false
// QStyleOptionHeader has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionHeader_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionHeader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionHeader_t qt_meta_stringdata_MyQStyleOptionHeader = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStyleOptionHeader"
  },
  "MyQStyleOptionHeader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionHeader[] = {
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
class Q_DECL_EXPORT MyQStyleOptionHeader : public QStyleOptionHeader {
public:
  virtual ~MyQStyleOptionHeader() {}
// void QStyleOptionHeader()
MyQStyleOptionHeader() : QStyleOptionHeader() {}
// void QStyleOptionHeader(const QStyleOptionHeader &)
MyQStyleOptionHeader(const QStyleOptionHeader & other) : QStyleOptionHeader(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionheader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:230
// [-2] void QStyleOptionHeader() 
// (12)qm4046365034 (27)_ZN18QStyleOptionHeaderC2Ev
/*void* qm4046365034()*/{
  ;
  this_ =  new QStyleOptionHeader();
  this_ =  new MyQStyleOptionHeader();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:231
// [-2] void QStyleOptionHeader(const QStyleOptionHeader &) 
// (12)qm3893759944 (30)_ZN18QStyleOptionHeaderC2ERKS_
/*void* qm3893759944(const QStyleOptionHeader & other)*/{
  const QStyleOptionHeader & other = *(const QStyleOptionHeader *)this_;
  this_ =  new QStyleOptionHeader(other);
  this_ =  new MyQStyleOptionHeader(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:232
// [120] QStyleOptionHeader & operator=(const QStyleOptionHeader &) 
// (12)qm1939667842 (30)_ZN18QStyleOptionHeaderaSERKS_
//static
/*void qm1939667842(const QStyleOptionHeader & arg0)*/ {
  const QStyleOptionHeader & arg0 = *(const QStyleOptionHeader *)this_;
  (void) ((QStyleOptionHeader*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionHeader & (QStyleOptionHeader::*)(QStyleOptionHeader const&) ) &QStyleOptionHeader::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN18QStyleOptionHeaderD2Ev(void *this_)*/ {
  delete (QStyleOptionHeader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionheader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
