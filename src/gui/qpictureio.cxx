//  header block begin

// /usr/include/qt/QtGui/qpicture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpicture.h>
#include <QtGui>
#include "callback_inherit.h"

// QPictureIO is pure virtual: false false
// QPictureIO has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPictureIO_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPictureIO_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPictureIO_t qt_meta_stringdata_MyQPictureIO = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQPictureIO"
  },
  "MyQPictureIO"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPictureIO[] = {
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
class Q_DECL_EXPORT MyQPictureIO : public QPictureIO {
public:
  virtual ~MyQPictureIO() {}
// void QPictureIO()
MyQPictureIO() : QPictureIO() {}
// void QPictureIO(QIODevice *, const char *)
MyQPictureIO(QIODevice * ioDevice, const char * format) : QPictureIO(ioDevice, format) {}
// void QPictureIO(const QString &, const char *)
MyQPictureIO(const QString & fileName, const char * format) : QPictureIO(fileName, format) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpictureio(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:132
// [-2] void QPictureIO() 
// (11)qm457136384 (19)_ZN10QPictureIOC2Ev
/*void* qm457136384()*/{
  ;
  this_ =  new QPictureIO();
  this_ =  new MyQPictureIO();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:133
// [-2] void QPictureIO(QIODevice *, const char *) 
// (12)qm3633094448 (32)_ZN10QPictureIOC2EP9QIODevicePKc
/*void* qm3633094448(QIODevice * ioDevice, const char * format)*/{
  QIODevice * ioDevice = *(QIODevice **)this_; const char * format = *(const char **)this_;
  this_ =  new QPictureIO(ioDevice, format);
  this_ =  new MyQPictureIO(ioDevice, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:134
// [-2] void QPictureIO(const QString &, const char *) 
// (12)qm3058324192 (31)_ZN10QPictureIOC2ERK7QStringPKc
/*void* qm3058324192(const QString & fileName, const char * format)*/{
  const QString & fileName = *(const QString *)this_; const char * format = *(const char **)this_;
  this_ =  new QPictureIO(fileName, format);
  this_ =  new MyQPictureIO(fileName, format);
}


/*void C_ZN10QPictureIOD2Ev(void *this_)*/ {
  delete (QPictureIO*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpictureio
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
