//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAudioEncoderSettings is pure virtual: false false
// QAudioEncoderSettings has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAudioEncoderSettings_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAudioEncoderSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAudioEncoderSettings_t qt_meta_stringdata_MyQAudioEncoderSettings = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQAudioEncoderSettings"
  },
  "MyQAudioEncoderSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAudioEncoderSettings[] = {
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
class Q_DECL_EXPORT MyQAudioEncoderSettings : public QAudioEncoderSettings {
public:
  virtual ~MyQAudioEncoderSettings() {}
// void QAudioEncoderSettings()
MyQAudioEncoderSettings() : QAudioEncoderSettings() {}
// void QAudioEncoderSettings(const QAudioEncoderSettings &)
MyQAudioEncoderSettings(const QAudioEncoderSettings & other) : QAudioEncoderSettings(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qaudioencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:58
// [-2] void QAudioEncoderSettings() 
// (11)qm273898256 (30)_ZN21QAudioEncoderSettingsC2Ev
/*void* qm273898256()*/{
  ;
  this_ =  new QAudioEncoderSettings();
  this_ =  new MyQAudioEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:59
// [-2] void QAudioEncoderSettings(const QAudioEncoderSettings &) 
// (12)qm1905780249 (33)_ZN21QAudioEncoderSettingsC2ERKS_
/*void* qm1905780249(const QAudioEncoderSettings & other)*/{
  const QAudioEncoderSettings & other = *(const QAudioEncoderSettings *)this_;
  this_ =  new QAudioEncoderSettings(other);
  this_ =  new MyQAudioEncoderSettings(other);
}


/*void C_ZN21QAudioEncoderSettingsD2Ev(void *this_)*/ {
  delete (QAudioEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qaudioencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
