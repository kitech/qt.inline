//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractPlanarVideoBuffer is pure virtual: true true
// QAbstractPlanarVideoBuffer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractPlanarVideoBuffer_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractPlanarVideoBuffer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractPlanarVideoBuffer_t qt_meta_stringdata_MyQAbstractPlanarVideoBuffer = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQAbstractPlanarVideoBuffer"
  },
  "MyQAbstractPlanarVideoBuffer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractPlanarVideoBuffer[] = {
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
class Q_DECL_EXPORT MyQAbstractPlanarVideoBuffer : public QAbstractPlanarVideoBuffer {
public:
  virtual ~MyQAbstractPlanarVideoBuffer() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] int map(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
  virtual int map(QAbstractVideoBuffer::MapMode mode, int * numBytes, int bytesPerLine[4], uchar * data[4])  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"map", &handled, 4, (uint64_t)mode, (uint64_t)numBytes, (uint64_t)bytesPerLine, (uint64_t)data, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QAbstractVideoBuffer::MapMode mapMode()
  virtual QAbstractVideoBuffer::MapMode mapMode() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mapMode", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractVideoBuffer::MapMode)(int)(irv);
      // Enum Enum QAbstractVideoBuffer::MapMode
    } else {
    return (QAbstractVideoBuffer::MapMode){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void unmap()
  virtual void unmap()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"unmap", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAbstractPlanarVideoBuffer::unmap();
  }
  }

// void QAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType)
MyQAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType type_) : QAbstractPlanarVideoBuffer(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractplanarvideobuffer(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN26QAbstractPlanarVideoBufferD2Ev(void *this_)*/ {
  delete (QAbstractPlanarVideoBuffer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractplanarvideobuffer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
