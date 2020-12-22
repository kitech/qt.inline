//  header block begin

// /usr/include/qt/QtCore/qdatastream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatastream.h>
#include <QtCore>
#include "callback_inherit.h"

// QDataStream is pure virtual: false false
// QDataStream has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDataStream_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDataStream_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDataStream_t qt_meta_stringdata_MyQDataStream = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQDataStream"
  },
  "MyQDataStream"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDataStream[] = {
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
class Q_DECL_EXPORT MyQDataStream : public QDataStream {
public:
  virtual ~MyQDataStream() {}
// void QDataStream()
MyQDataStream() : QDataStream() {}
// void QDataStream(QIODevice *)
MyQDataStream(QIODevice * arg0) : QDataStream(arg0) {}
// void QDataStream(QByteArray *, QIODevice::OpenMode)
MyQDataStream(QByteArray * arg0, QFlags<QIODevice::OpenModeFlag> flags) : QDataStream(arg0, flags) {}
// void QDataStream(const QByteArray &)
MyQDataStream(const QByteArray & arg0) : QDataStream(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdatastream(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:134
// [-2] void QDataStream() 
// (12)qm1024512340 (20)_ZN11QDataStreamC2Ev
/*void* qm1024512340()*/{
  ;
  this_ =  new QDataStream();
  this_ =  new MyQDataStream();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:135
// [-2] void QDataStream(QIODevice *) 
// (12)qm1093704089 (30)_ZN11QDataStreamC2EP9QIODevice
/*void* qm1093704089(QIODevice * arg0)*/{
  QIODevice * arg0 = *(QIODevice **)this_;
  this_ =  new QDataStream(arg0);
  this_ =  new MyQDataStream(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:136
// [-2] void QDataStream(QByteArray *, QIODevice::OpenMode) 
// (12)qm2299279107 (67)_ZN11QDataStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm2299279107(QByteArray * arg0, QFlags<QIODevice::OpenModeFlag> flags)*/{
  QByteArray * arg0 = *(QByteArray **)this_; QFlags<QIODevice::OpenModeFlag> flags = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QDataStream(arg0, flags);
  this_ =  new MyQDataStream(arg0, flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:137
// [-2] void QDataStream(const QByteArray &) 
// (12)qm3901970218 (33)_ZN11QDataStreamC2ERK10QByteArray
/*void* qm3901970218(const QByteArray & arg0)*/{
  const QByteArray & arg0 = *(const QByteArray *)this_;
  this_ =  new QDataStream(arg0);
  this_ =  new MyQDataStream(arg0);
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:140
// [8] QIODevice * device() const
// (12)qm3030871964 (26)_ZNK11QDataStream6deviceEv
//static
/*void qm3030871964()*/ {
  ;
  (void) ((QDataStream*)this_)->device();
   auto xptr = (QIODevice * (QDataStream::*)() const ) &QDataStream::device;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:156
// [4] QDataStream::ByteOrder byteOrder() const
// (12)qm3031145717 (29)_ZNK11QDataStream9byteOrderEv
//static
/*void qm3031145717()*/ {
  ;
  (void) ((QDataStream*)this_)->byteOrder();
   auto xptr = (QDataStream::ByteOrder (QDataStream::*)() const ) &QDataStream::byteOrder;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:159
// [4] int version() const
// (12)qm1289843543 (27)_ZNK11QDataStream7versionEv
//static
/*void qm1289843543()*/ {
  ;
  (void) ((QDataStream*)this_)->version();
   auto xptr = (int (QDataStream::*)() const ) &QDataStream::version;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:160
// [-2] void setVersion(int) 
// (12)qm3736430169 (30)_ZN11QDataStream10setVersionEi
//static
/*void qm3736430169(int arg0)*/ {
  int arg0 = *(int*)this_;
  (void) ((QDataStream*)this_)->setVersion(arg0);
   auto xptr = (void (QDataStream::*)(int) ) &QDataStream::setVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:163
// [32] QDataStream & operator>>(quint8 &) 
// (12)qm3008482323 (21)_ZN11QDataStreamrsERh
//static
/*void qm3008482323(unsigned char & i)*/ {
  unsigned char & i = *(unsigned char *)this_;
  (void) ((QDataStream*)this_)->operator>>(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned char&) ) &QDataStream::operator>>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:165
// [32] QDataStream & operator>>(quint16 &) 
// (12)qm2807074908 (21)_ZN11QDataStreamrsERt
//static
/*void qm2807074908(unsigned short & i)*/ {
  unsigned short & i = *(unsigned short *)this_;
  (void) ((QDataStream*)this_)->operator>>(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned short&) ) &QDataStream::operator>>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:167
// [32] QDataStream & operator>>(quint32 &) 
// (12)qm1566551359 (21)_ZN11QDataStreamrsERj
//static
/*void qm1566551359(unsigned int & i)*/ {
  unsigned int & i = *(unsigned int *)this_;
  (void) ((QDataStream*)this_)->operator>>(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned int&) ) &QDataStream::operator>>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:169
// [32] QDataStream & operator>>(quint64 &) 
// (12)qm3655462113 (21)_ZN11QDataStreamrsERy
//static
/*void qm3655462113(unsigned long long & i)*/ {
  unsigned long long & i = *(unsigned long long *)this_;
  (void) ((QDataStream*)this_)->operator>>(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned long long&) ) &QDataStream::operator>>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:170
// [32] QDataStream & operator>>(std::nullptr_t &) 
// (12)qm3308574830 (22)_ZN11QDataStreamrsERDn
//static
/*void qm3308574830(nullptr_t & ptr)*/ {
  nullptr_t & ptr = *(nullptr_t *)this_;
  (void) ((QDataStream*)this_)->operator>>(ptr);
  // auto xptr = (QDataStream & (QDataStream::*)(decltype(nullptr)&) ) &QDataStream::operator>>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:179
// [32] QDataStream & operator<<(quint8) 
// (12)qm1310110888 (20)_ZN11QDataStreamlsEh
//static
/*void qm1310110888(unsigned char i)*/ {
  unsigned char i = *(unsigned char*)this_;
  (void) ((QDataStream*)this_)->operator<<(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned char) ) &QDataStream::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:181
// [32] QDataStream & operator<<(quint16) 
// (12)qm1511516391 (20)_ZN11QDataStreamlsEt
//static
/*void qm1511516391(unsigned short i)*/ {
  unsigned short i = *(unsigned short*)this_;
  (void) ((QDataStream*)this_)->operator<<(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned short) ) &QDataStream::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:183
// [32] QDataStream & operator<<(quint32) 
// (12)qm2685982084 (20)_ZN11QDataStreamlsEj
//static
/*void qm2685982084(unsigned int i)*/ {
  unsigned int i = *(unsigned int*)this_;
  (void) ((QDataStream*)this_)->operator<<(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned int) ) &QDataStream::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:185
// [32] QDataStream & operator<<(quint64) 
// (11)qm614896730 (20)_ZN11QDataStreamlsEy
//static
/*void qm614896730(unsigned long long i)*/ {
  unsigned long long i = *(unsigned long long*)this_;
  (void) ((QDataStream*)this_)->operator<<(i);
  // auto xptr = (QDataStream & (QDataStream::*)(unsigned long long) ) &QDataStream::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatastream.h:186
// [32] QDataStream & operator<<(std::nullptr_t) 
// (12)qm2574972178 (21)_ZN11QDataStreamlsEDn
//static
/*void qm2574972178(nullptr_t arg0)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_;
  (void) ((QDataStream*)this_)->operator<<(arg0);
  // auto xptr = (QDataStream & (QDataStream::*)(decltype(nullptr)) ) &QDataStream::operator<<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QDataStreamD2Ev(void *this_)*/ {
  delete (QDataStream*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdatastream
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
