//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QVideoEncoderSettings is pure virtual: false false
// QVideoEncoderSettings has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVideoEncoderSettings_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVideoEncoderSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVideoEncoderSettings_t qt_meta_stringdata_MyQVideoEncoderSettings = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQVideoEncoderSettings"
  },
  "MyQVideoEncoderSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVideoEncoderSettings[] = {
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
class Q_DECL_EXPORT MyQVideoEncoderSettings : public QVideoEncoderSettings {
public:
  virtual ~MyQVideoEncoderSettings() {}
// void QVideoEncoderSettings()
MyQVideoEncoderSettings() : QVideoEncoderSettings() {}
// void QVideoEncoderSettings(const QVideoEncoderSettings &)
MyQVideoEncoderSettings(const QVideoEncoderSettings & other) : QVideoEncoderSettings(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvideoencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:100
// [-2] void QVideoEncoderSettings() 
// (12)qm1757182574 (30)_ZN21QVideoEncoderSettingsC2Ev
/*void* qm1757182574()*/{
  ;
  this_ =  new QVideoEncoderSettings();
  this_ =  new MyQVideoEncoderSettings();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaencodersettings.h:101
// [-2] void QVideoEncoderSettings(const QVideoEncoderSettings &) 
// (12)qm2480032049 (33)_ZN21QVideoEncoderSettingsC2ERKS_
/*void* qm2480032049(const QVideoEncoderSettings & other)*/{
  const QVideoEncoderSettings & other = *(const QVideoEncoderSettings *)this_;
  this_ =  new QVideoEncoderSettings(other);
  this_ =  new MyQVideoEncoderSettings(other);
}


/*void C_ZN21QVideoEncoderSettingsD2Ev(void *this_)*/ {
  delete (QVideoEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvideoencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
