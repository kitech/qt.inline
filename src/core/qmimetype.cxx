//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(mimetype)
// /usr/include/qt/QtCore/qmimetype.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimetype.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeType is pure virtual: false false
// QMimeType has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMimeType_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMimeType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMimeType_t qt_meta_stringdata_MyQMimeType = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMimeType"
  },
  "MyQMimeType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMimeType[] = {
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
class Q_DECL_EXPORT MyQMimeType : public QMimeType {
public:
  virtual ~MyQMimeType() {}
// void QMimeType()
MyQMimeType() : QMimeType() {}
// void QMimeType(const QMimeType &)
MyQMimeType(const QMimeType & other) : QMimeType(other) {}
// void QMimeType(const QMimeTypePrivate &)
MyQMimeType(const QMimeTypePrivate & dd) : QMimeType(dd) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmimetype(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:81
// [8] QMimeType & operator=(QMimeType &&) 
// (11)qm909795579 (19)_ZN9QMimeTypeaSEOS_
//static
/*void qm909795579(QMimeType && other)*/ {
  QMimeType && other =  static_cast<QMimeType &&>(*(QMimeType *)this_);
  (void) ((QMimeType*)this_)->operator=(other);
  // auto xptr = (QMimeType & (QMimeType::*)(QMimeType&&) ) &QMimeType::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:82
// [-2] void swap(QMimeType &) 
// (12)qm2591497041 (22)_ZN9QMimeType4swapERS_
//static
/*void qm2591497041(QMimeType & other)*/ {
  QMimeType & other = *(QMimeType *)this_;
  (void) ((QMimeType*)this_)->swap(other);
   auto xptr = (void (QMimeType::*)(QMimeType&) ) &QMimeType::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:91
// [1] bool operator!=(const QMimeType &) const
// (12)qm3012304358 (21)_ZNK9QMimeTypeneERKS_
//static
/*void qm3012304358(const QMimeType & other)*/ {
  const QMimeType & other = *(const QMimeType *)this_;
  (void) ((QMimeType*)this_)->operator!=(other);
  // auto xptr = (bool (QMimeType::*)(QMimeType const&) const ) &QMimeType::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QMimeTypeD2Ev(void *this_)*/ {
  delete (QMimeType*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmimetype
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(mimetype)
#endif // #ifndef QT_MINIMAL
//  footer block end
