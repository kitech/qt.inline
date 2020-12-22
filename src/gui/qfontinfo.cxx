//  header block begin

// /usr/include/qt/QtGui/qfontinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontinfo.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontInfo is pure virtual: false false
// QFontInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFontInfo_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontInfo_t qt_meta_stringdata_MyQFontInfo = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQFontInfo"
  },
  "MyQFontInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontInfo[] = {
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
class Q_DECL_EXPORT MyQFontInfo : public QFontInfo {
public:
  virtual ~MyQFontInfo() {}
// void QFontInfo(const QFont &)
MyQFontInfo(const QFont & arg0) : QFontInfo(arg0) {}
// void QFontInfo(const QFontInfo &)
MyQFontInfo(const QFontInfo & arg0) : QFontInfo(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfontinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:53
// [-2] void QFontInfo(const QFont &) 
// (11)qm909948022 (24)_ZN9QFontInfoC2ERK5QFont
/*void* qm909948022(const QFont & arg0)*/{
  const QFont & arg0 = *(const QFont *)this_;
  this_ =  new QFontInfo(arg0);
  this_ =  new MyQFontInfo(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:54
// [-2] void QFontInfo(const QFontInfo &) 
// (12)qm1723687083 (20)_ZN9QFontInfoC2ERKS_
/*void* qm1723687083(const QFontInfo & arg0)*/{
  const QFontInfo & arg0 = *(const QFontInfo *)this_;
  this_ =  new QFontInfo(arg0);
  this_ =  new MyQFontInfo(arg0);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:59
// [-2] void swap(QFontInfo &) 
// (12)qm1281789274 (22)_ZN9QFontInfo4swapERS_
//static
/*void qm1281789274(QFontInfo & other)*/ {
  QFontInfo & other = *(QFontInfo *)this_;
  (void) ((QFontInfo*)this_)->swap(other);
   auto xptr = (void (QFontInfo::*)(QFontInfo&) ) &QFontInfo::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:69
// [1] bool bold() const
// (12)qm1037638541 (21)_ZNK9QFontInfo4boldEv
//static
/*void qm1037638541()*/ {
  ;
  (void) ((QFontInfo*)this_)->bold();
   auto xptr = (bool (QFontInfo::*)() const ) &QFontInfo::bold;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QFontInfoD2Ev(void *this_)*/ {
  delete (QFontInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfontinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
