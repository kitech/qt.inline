//  header block begin

// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStream is pure virtual: false false
// QTextStream has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextStream_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextStream_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextStream_t qt_meta_stringdata_MyQTextStream = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTextStream"
  },
  "MyQTextStream"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextStream[] = {
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
class Q_DECL_EXPORT MyQTextStream : public QTextStream {
public:
  virtual ~MyQTextStream() {}
// void QTextStream()
MyQTextStream() : QTextStream() {}
// void QTextStream(QIODevice *)
MyQTextStream(QIODevice * device) : QTextStream(device) {}
// void QTextStream(FILE *, QIODevice::OpenMode)
MyQTextStream(FILE * fileHandle, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(fileHandle, openMode) {}
// void QTextStream(QString *, QIODevice::OpenMode)
MyQTextStream(QString * string, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(string, openMode) {}
// void QTextStream(QByteArray *, QIODevice::OpenMode)
MyQTextStream(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
// void QTextStream(const QByteArray &, QIODevice::OpenMode)
MyQTextStream(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextstream(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:93
// [-2] void QTextStream() 
// (12)qm1102095014 (20)_ZN11QTextStreamC2Ev
/*void* qm1102095014()*/{
  ;
  this_ =  new QTextStream();
  this_ =  new MyQTextStream();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:94
// [-2] void QTextStream(QIODevice *) 
// (11)qm488794110 (30)_ZN11QTextStreamC2EP9QIODevice
/*void* qm488794110(QIODevice * device)*/{
  QIODevice * device = *(QIODevice **)this_;
  this_ =  new QTextStream(device);
  this_ =  new MyQTextStream(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:95
// [-2] void QTextStream(FILE *, QIODevice::OpenMode) 
// (12)qm2803988053 (64)_ZN11QTextStreamC2EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm2803988053(_IO_FILE * fileHandle, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  _IO_FILE * fileHandle = *(_IO_FILE **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(fileHandle, openMode);
  this_ =  new MyQTextStream(fileHandle, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:96
// [-2] void QTextStream(QString *, QIODevice::OpenMode) 
// (12)qm1628970897 (63)_ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm1628970897(QString * string, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  QString * string = *(QString **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(string, openMode);
  this_ =  new MyQTextStream(string, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:97
// [-2] void QTextStream(QByteArray *, QIODevice::OpenMode) 
// (12)qm3935249134 (67)_ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm3935249134(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  QByteArray * array = *(QByteArray **)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(array, openMode);
  this_ =  new MyQTextStream(array, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:98
// [-2] void QTextStream(const QByteArray &, QIODevice::OpenMode) 
// (11)qm700417304 (68)_ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE
/*void* qm700417304(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode)*/{
  const QByteArray & array = *(const QByteArray *)this_; QFlags<QIODevice::OpenModeFlag> openMode = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  this_ =  new QTextStream(array, openMode);
  this_ =  new MyQTextStream(array, openMode);
}


/*void C_ZN11QTextStreamD2Ev(void *this_)*/ {
  delete (QTextStream*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextstream
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
