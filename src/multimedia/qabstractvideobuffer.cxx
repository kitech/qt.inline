//  header block begin

// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoBuffer is pure virtual: true true
// QAbstractVideoBuffer has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAbstractVideoBuffer_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractVideoBuffer_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractVideoBuffer_t qt_meta_stringdata_MyQAbstractVideoBuffer = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQAbstractVideoBuffer"
  },
  "MyQAbstractVideoBuffer"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractVideoBuffer[] = {
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
class Q_DECL_EXPORT MyQAbstractVideoBuffer : public QAbstractVideoBuffer {
public:
  virtual ~MyQAbstractVideoBuffer() {}
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

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] uchar * map(QAbstractVideoBuffer::MapMode, int *, int *)
  virtual uchar * map(QAbstractVideoBuffer::MapMode mode, int * numBytes, int * bytesPerLine)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"map", &handled, 3, (uint64_t)mode, (uint64_t)numBytes, (uint64_t)bytesPerLine, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (uchar *)(irv);
      // Pointer Pointer unsigned char *
    } else {
    return (uchar *){};
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
    // QAbstractVideoBuffer::unmap();
  }
  }

// void QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType)
MyQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType type_) : QAbstractVideoBuffer(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qabstractvideobuffer(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN20QAbstractVideoBufferD2Ev(void *this_)*/ {
  delete (QAbstractVideoBuffer*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qabstractvideobuffer
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
