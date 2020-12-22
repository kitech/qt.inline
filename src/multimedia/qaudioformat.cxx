//  header block begin

// /usr/include/qt/QtMultimedia/qaudioformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudioformat.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioFormat is pure virtual: false false
// QAudioFormat has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioFormat_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioFormat_t qt_meta_stringdata_MyQAudioFormat = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQAudioFormat"
  },
  "MyQAudioFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioFormat[] = {
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
class Q_DECL_EXPORT MyQAudioFormat : public QAudioFormat {
public:
  virtual ~MyQAudioFormat() {}
// void QAudioFormat()
MyQAudioFormat() : QAudioFormat() {}
// void QAudioFormat(const QAudioFormat &)
MyQAudioFormat(const QAudioFormat & other) : QAudioFormat(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioformat(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:60
// [-2] void QAudioFormat() 
// (11)qm451230891 (21)_ZN12QAudioFormatC2Ev
/*void* qm451230891()*/{
  ;
  this_ =  new QAudioFormat();
  this_ =  new MyQAudioFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudioformat.h:61
// [-2] void QAudioFormat(const QAudioFormat &) 
// (12)qm2955025467 (24)_ZN12QAudioFormatC2ERKS_
/*void* qm2955025467(const QAudioFormat & other)*/{
  const QAudioFormat & other = *(const QAudioFormat *)this_;
  this_ =  new QAudioFormat(other);
  this_ =  new MyQAudioFormat(other);
}


/*void C_ZN12QAudioFormatD2Ev(void *this_)*/ {
  delete (QAudioFormat*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioformat
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
