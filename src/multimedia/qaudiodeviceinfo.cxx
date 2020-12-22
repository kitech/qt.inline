//  header block begin

// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiodeviceinfo.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioDeviceInfo is pure virtual: false false
// QAudioDeviceInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioDeviceInfo_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioDeviceInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioDeviceInfo_t qt_meta_stringdata_MyQAudioDeviceInfo = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQAudioDeviceInfo"
  },
  "MyQAudioDeviceInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioDeviceInfo[] = {
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
class Q_DECL_EXPORT MyQAudioDeviceInfo : public QAudioDeviceInfo {
public:
  virtual ~MyQAudioDeviceInfo() {}
// void QAudioDeviceInfo()
MyQAudioDeviceInfo() : QAudioDeviceInfo() {}
// void QAudioDeviceInfo(const QAudioDeviceInfo &)
MyQAudioDeviceInfo(const QAudioDeviceInfo & other) : QAudioDeviceInfo(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudiodeviceinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:67
// [-2] void QAudioDeviceInfo() 
// (12)qm2385936377 (25)_ZN16QAudioDeviceInfoC2Ev
/*void* qm2385936377()*/{
  ;
  this_ =  new QAudioDeviceInfo();
  this_ =  new MyQAudioDeviceInfo();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodeviceinfo.h:68
// [-2] void QAudioDeviceInfo(const QAudioDeviceInfo &) 
// (11)qm462715353 (28)_ZN16QAudioDeviceInfoC2ERKS_
/*void* qm462715353(const QAudioDeviceInfo & other)*/{
  const QAudioDeviceInfo & other = *(const QAudioDeviceInfo *)this_;
  this_ =  new QAudioDeviceInfo(other);
  this_ =  new MyQAudioDeviceInfo(other);
}


/*void C_ZN16QAudioDeviceInfoD2Ev(void *this_)*/ {
  delete (QAudioDeviceInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudiodeviceinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
