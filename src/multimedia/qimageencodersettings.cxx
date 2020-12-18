//  header block begin

// /usr/include/qt/QtMultimedia/qmediaencodersettings.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaencodersettings.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderSettings is pure virtual: false false
// QImageEncoderSettings has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQImageEncoderSettings_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageEncoderSettings_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageEncoderSettings_t qt_meta_stringdata_MyQImageEncoderSettings = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQImageEncoderSettings"
  },
  "MyQImageEncoderSettings"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageEncoderSettings[] = {
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
class Q_DECL_EXPORT MyQImageEncoderSettings : public QImageEncoderSettings {
public:
  virtual ~MyQImageEncoderSettings() {}
// void QImageEncoderSettings()
MyQImageEncoderSettings() : QImageEncoderSettings() {}
// void QImageEncoderSettings(const QImageEncoderSettings &)
MyQImageEncoderSettings(const QImageEncoderSettings & other) : QImageEncoderSettings(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qimageencodersettings(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN21QImageEncoderSettingsD2Ev(void *this_)*/ {
  delete (QImageEncoderSettings*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qimageencodersettings
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
