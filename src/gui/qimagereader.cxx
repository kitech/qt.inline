//  header block begin

// /usr/include/qt/QtGui/qimagereader.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimagereader.h>
#include <QtGui>
#include "callback_inherit.h"

// QImageReader is pure virtual: false false
// QImageReader has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImageReader_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageReader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageReader_t qt_meta_stringdata_MyQImageReader = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQImageReader"
  },
  "MyQImageReader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageReader[] = {
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
class Q_DECL_EXPORT MyQImageReader : public QImageReader {
public:
  virtual ~MyQImageReader() {}
// void QImageReader()
MyQImageReader() : QImageReader() {}
// void QImageReader(QIODevice *, const QByteArray &)
MyQImageReader(QIODevice * device, const QByteArray & format) : QImageReader(device, format) {}
// void QImageReader(const QString &, const QByteArray &)
MyQImageReader(const QString & fileName, const QByteArray & format) : QImageReader(fileName, format) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimagereader(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:61
// [8] QString tr(const char *, const char *, int) 
// (12)qm3396744498 (28)_ZN12QImageReader2trEPKcS1_i
//static
/*void qm3396744498(const char * sourceText, const char * disambiguation, int n)*/ {
  const char * sourceText = *(const char **)this_; const char * disambiguation = *(const char **)this_; int n = *(int*)this_;
  (void) QImageReader::tr(sourceText, disambiguation, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QImageReader::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:71
// [-2] void QImageReader() 
// (12)qm1579189598 (21)_ZN12QImageReaderC2Ev
/*void* qm1579189598()*/{
  ;
  this_ =  new QImageReader();
  this_ =  new MyQImageReader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:72
// [-2] void QImageReader(QIODevice *, const QByteArray &) 
// (12)qm4096643181 (45)_ZN12QImageReaderC2EP9QIODeviceRK10QByteArray
/*void* qm4096643181(QIODevice * device, const QByteArray & format)*/{
  QIODevice * device = *(QIODevice **)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QImageReader(device, format);
  this_ =  new MyQImageReader(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimagereader.h:73
// [-2] void QImageReader(const QString &, const QByteArray &) 
// (12)qm2039519028 (44)_ZN12QImageReaderC2ERK7QStringRK10QByteArray
/*void* qm2039519028(const QString & fileName, const QByteArray & format)*/{
  const QString & fileName = *(const QString *)this_; const QByteArray & format = *(const QByteArray *)this_;
  this_ =  new QImageReader(fileName, format);
  this_ =  new MyQImageReader(fileName, format);
}


/*void C_ZN12QImageReaderD2Ev(void *this_)*/ {
  delete (QImageReader*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimagereader
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
