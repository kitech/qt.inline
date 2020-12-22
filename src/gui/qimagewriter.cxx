//  header block begin

// /usr/include/qt/QtGui/qimagewriter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimagewriter.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageWriter is pure virtual: false false
// QImageWriter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImageWriter_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageWriter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageWriter_t qt_meta_stringdata_MyQImageWriter = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQImageWriter"
  },
  "MyQImageWriter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageWriter[] = {
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
class Q_DECL_EXPORT MyQImageWriter : public QImageWriter {
public:
  virtual ~MyQImageWriter() {}
// void QImageWriter()
MyQImageWriter() : QImageWriter() {}
// void QImageWriter(QIODevice *, const QByteArray &)
MyQImageWriter(QIODevice * device, const QByteArray & format) : QImageWriter(device, format) {}
// void QImageWriter(const QString &, const QByteArray &)
MyQImageWriter(const QString & fileName, const QByteArray & format) : QImageWriter(fileName, format) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimagewriter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:58
// [8] QString tr(const char *, const char *, int) 
// (12)qm2352869310 (28)_ZN12QImageWriter2trEPKcS1_i
//static
/*void qm2352869310(const char * sourceText, const char * disambiguation, int n)*/ {
  const char * sourceText = *(const char **)this_; const char * disambiguation = *(const char **)this_; int n = *(int*)this_;
  (void) QImageWriter::tr(sourceText, disambiguation, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QImageWriter::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:67
// [-2] void QImageWriter() 
// (12)qm3298027225 (21)_ZN12QImageWriterC2Ev
/*void* qm3298027225()*/{
  ;
  this_ =  new QImageWriter();
  this_ =  new MyQImageWriter();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:68
// [-2] void QImageWriter(QIODevice *, const QByteArray &) 
// (11)qm383421868 (45)_ZN12QImageWriterC2EP9QIODeviceRK10QByteArray
/*void* qm383421868(QIODevice * device, const QByteArray & format)*/{
  QIODevice * device = *(QIODevice **)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QImageWriter(device, format);
  this_ =  new MyQImageWriter(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagewriter.h:69
// [-2] void QImageWriter(const QString &, const QByteArray &) 
// (11)qm917979901 (44)_ZN12QImageWriterC2ERK7QStringRK10QByteArray
/*void* qm917979901(const QString & fileName, const QByteArray & format)*/{
  const QString & fileName = *(const QString *)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QImageWriter(fileName, format);
  this_ =  new MyQImageWriter(fileName, format);
}


/*void C_ZN12QImageWriterD2Ev(void *this_)*/ {
  delete (QImageWriter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimagewriter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
