//  header block begin

// /usr/include/qt/QtCore/quuid.h
#ifndef protected
#define protected public
#define private public
#endif
#include <quuid.h>
#include <QtCore>
#include "callback_inherit.h"

// QUuid is pure virtual: false false
// QUuid has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQUuid_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQUuid_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQUuid_t qt_meta_stringdata_MyQUuid = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQUuid"
  },
  "MyQUuid"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQUuid[] = {
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
class Q_DECL_EXPORT MyQUuid : public QUuid {
public:
  virtual ~MyQUuid() {}
// void QUuid()
MyQUuid() : QUuid() {}
// void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar)
MyQUuid(uint l, ushort w1, ushort w2, uchar b1, uchar b2, uchar b3, uchar b4, uchar b5, uchar b6, uchar b7, uchar b8) : QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) {}
// void QUuid(const QString &)
MyQUuid(const QString & arg0) : QUuid(arg0) {}
// void QUuid(const char *)
MyQUuid(const char * arg0) : QUuid(arg0) {}
// void QUuid(const QByteArray &)
MyQUuid(const QByteArray & arg0) : QUuid(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_quuid(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:96
// [-2] void QUuid() 
// (12)qm3807779934 (13)_ZN5QUuidC2Ev
/*void* qm3807779934()*/{
  ;
  this_ =  new QUuid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:98
// [-2] void QUuid(uint, ushort, ushort, uchar, uchar, uchar, uchar, uchar, uchar, uchar, uchar) 
// (12)qm4113588650 (23)_ZN5QUuidC2Ejtthhhhhhhh
/*void* qm4113588650(unsigned int l, unsigned short w1, unsigned short w2, unsigned char b1, unsigned char b2, unsigned char b3, unsigned char b4, unsigned char b5, unsigned char b6, unsigned char b7, unsigned char b8)*/{
  unsigned int l = *(unsigned int*)this_; unsigned short w1 = *(unsigned short*)this_; unsigned short w2 = *(unsigned short*)this_; unsigned char b1 = *(unsigned char*)this_; unsigned char b2 = *(unsigned char*)this_; unsigned char b3 = *(unsigned char*)this_; unsigned char b4 = *(unsigned char*)this_; unsigned char b5 = *(unsigned char*)this_; unsigned char b6 = *(unsigned char*)this_; unsigned char b7 = *(unsigned char*)this_; unsigned char b8 = *(unsigned char*)this_;
  this_ =  new QUuid(l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8);
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:139
// [1] bool operator==(const QUuid &) const
// (12)qm2928902147 (17)_ZNK5QUuideqERKS_
//static
/*void qm2928902147(const QUuid & orig)*/ {
  const QUuid & orig = *(const QUuid *)this_;
  (void) ((QUuid*)this_)->operator==(orig);
  // auto xptr = (bool (QUuid::*)(QUuid const&) const ) &QUuid::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:152
// [1] bool operator!=(const QUuid &) const
// (11)qm886281332 (17)_ZNK5QUuidneERKS_
//static
/*void qm886281332(const QUuid & orig)*/ {
  const QUuid & orig = *(const QUuid *)this_;
  (void) ((QUuid*)this_)->operator!=(orig);
  // auto xptr = (bool (QUuid::*)(QUuid const&) const ) &QUuid::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:207
// [16] QUuid createUuidV3(const QUuid &, const QString &) 
// (12)qm1061695893 (38)_ZN5QUuid12createUuidV3ERKS_RK7QString
//static
/*void qm1061695893(const QUuid & ns, const QString & baseData)*/ {
  const QUuid & ns = *(const QUuid *)this_; const QString & baseData = *(const QString *)this_;
  (void) QUuid::createUuidV3(ns, baseData);
   auto xptr = (QUuid (*)(QUuid const&, QString const&) ) &QUuid::createUuidV3;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:213
// [16] QUuid createUuidV5(const QUuid &, const QString &) 
// (12)qm1826183281 (38)_ZN5QUuid12createUuidV5ERKS_RK7QString
//static
/*void qm1826183281(const QUuid & ns, const QString & baseData)*/ {
  const QUuid & ns = *(const QUuid *)this_; const QString & baseData = *(const QString *)this_;
  (void) QUuid::createUuidV5(ns, baseData);
   auto xptr = (QUuid (*)(QUuid const&, QString const&) ) &QUuid::createUuidV5;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QUuidD2Ev(void *this_)*/ {
  delete (QUuid*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_quuid
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
