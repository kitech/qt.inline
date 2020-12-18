//  header block begin

// /usr/include/qt/QtSvg/qsvggenerator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsvggenerator.h>
#include <QtSvg>
#include "callback_inherit.h"

// QSvgGenerator is pure virtual: false false
// QSvgGenerator has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSvgGenerator_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSvgGenerator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSvgGenerator_t qt_meta_stringdata_MyQSvgGenerator = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSvgGenerator"
  },
  "MyQSvgGenerator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSvgGenerator[] = {
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
class Q_DECL_EXPORT MyQSvgGenerator : public QSvgGenerator {
public:
  virtual ~MyQSvgGenerator() {}
// void QSvgGenerator()
MyQSvgGenerator() : QSvgGenerator() {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QPaintEngine * paintEngine()
  virtual QPaintEngine * paintEngine() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEngine", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QPaintEngine *)(irv);
      // Pointer Pointer QPaintEngine *
    } else {
    return QSvgGenerator::paintEngine();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)metric, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QSvgGenerator::metric(metric);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsvggenerator(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN13QSvgGeneratorD2Ev(void *this_)*/ {
  delete (QSvgGenerator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsvggenerator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
