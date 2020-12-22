//  header block begin

// /usr/include/qt/QtMultimedia/qaudiobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioBuffer is pure virtual: false false
// QAudioBuffer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioBuffer_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioBuffer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioBuffer_t qt_meta_stringdata_MyQAudioBuffer = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQAudioBuffer"
  },
  "MyQAudioBuffer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioBuffer[] = {
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
class Q_DECL_EXPORT MyQAudioBuffer : public QAudioBuffer {
public:
  virtual ~MyQAudioBuffer() {}
// void QAudioBuffer()
MyQAudioBuffer() : QAudioBuffer() {}
// void QAudioBuffer(QAbstractAudioBuffer *)
MyQAudioBuffer(QAbstractAudioBuffer * provider) : QAudioBuffer(provider) {}
// void QAudioBuffer(const QAudioBuffer &)
MyQAudioBuffer(const QAudioBuffer & other) : QAudioBuffer(other) {}
// void QAudioBuffer(const QByteArray &, const QAudioFormat &, qint64)
MyQAudioBuffer(const QByteArray & data, const QAudioFormat & format, qint64 startTime) : QAudioBuffer(data, format, startTime) {}
// void QAudioBuffer(int, const QAudioFormat &, qint64)
MyQAudioBuffer(int numFrames, const QAudioFormat & format, qint64 startTime) : QAudioBuffer(numFrames, format, startTime) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiobuffer(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:58
// [-2] void QAudioBuffer() 
// (12)qm3301410979 (21)_ZN12QAudioBufferC2Ev
/*void* qm3301410979()*/{
  ;
  this_ =  new QAudioBuffer();
  this_ =  new MyQAudioBuffer();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:59
// [-2] void QAudioBuffer(QAbstractAudioBuffer *) 
// (11)qm277507064 (43)_ZN12QAudioBufferC2EP20QAbstractAudioBuffer
/*void* qm277507064(QAbstractAudioBuffer * provider)*/{
  QAbstractAudioBuffer * provider = *(QAbstractAudioBuffer **)this_;
  this_ =  new QAudioBuffer(provider);
  this_ =  new MyQAudioBuffer(provider);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:60
// [-2] void QAudioBuffer(const QAudioBuffer &) 
// (12)qm3958925061 (24)_ZN12QAudioBufferC2ERKS_
/*void* qm3958925061(const QAudioBuffer & other)*/{
  const QAudioBuffer & other = *(const QAudioBuffer *)this_;
  this_ =  new QAudioBuffer(other);
  this_ =  new MyQAudioBuffer(other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:61
// [-2] void QAudioBuffer(const QByteArray &, const QAudioFormat &, qint64) 
// (12)qm3790941056 (51)_ZN12QAudioBufferC2ERK10QByteArrayRK12QAudioFormatx
/*void* qm3790941056(const QByteArray & data, const QAudioFormat & format, long long startTime)*/{
  const QByteArray & data = *(const QByteArray *)this_; const QAudioFormat & format = *(const QAudioFormat *)this_; long long startTime = *(long long*)this_;
  this_ =  new QAudioBuffer(data, format, startTime);
  this_ =  new MyQAudioBuffer(data, format, startTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiobuffer.h:62
// [-2] void QAudioBuffer(int, const QAudioFormat &, qint64) 
// (12)qm4044279411 (38)_ZN12QAudioBufferC2EiRK12QAudioFormatx
/*void* qm4044279411(int numFrames, const QAudioFormat & format, long long startTime)*/{
  int numFrames = *(int*)this_; const QAudioFormat & format = *(const QAudioFormat *)this_; long long startTime = *(long long*)this_;
  this_ =  new QAudioBuffer(numFrames, format, startTime);
  this_ =  new MyQAudioBuffer(numFrames, format, startTime);
}


/*void C_ZN12QAudioBufferD2Ev(void *this_)*/ {
  delete (QAudioBuffer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiobuffer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
