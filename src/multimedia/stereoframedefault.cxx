//  header block begin

// /usr/include/qt/QtMultimedia/qaudiobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaudiobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// StereoFrameDefault is pure virtual: false false
// StereoFrameDefault has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyStereoFrameDefault_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyStereoFrameDefault_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyStereoFrameDefault_t qt_meta_stringdata_MyStereoFrameDefault = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyStereoFrameDefault"
  },
  "MyStereoFrameDefault"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyStereoFrameDefault[] = {
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
class Q_DECL_EXPORT MyStereoFrameDefault : public QAudioBuffer::StereoFrameDefault<unsigned short> {
public:
  virtual ~MyStereoFrameDefault() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_stereoframedefault(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN18StereoFrameDefaultD2Ev(void *this_)*/ {
  delete (QAudioBuffer::StereoFrameDefault<unsigned short>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_stereoframedefault
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
