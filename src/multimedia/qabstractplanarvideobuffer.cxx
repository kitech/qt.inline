//  header block begin
// since 0x050400
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractvideobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractPlanarVideoBuffer is pure virtual: true
// QAbstractPlanarVideoBuffer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractPlanarVideoBuffer : public QAbstractPlanarVideoBuffer {
public:
  virtual ~MyQAbstractPlanarVideoBuffer() {}
// void QAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType)
MyQAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType type_) : QAbstractPlanarVideoBuffer(type_) {}
// void QAbstractPlanarVideoBuffer(QAbstractPlanarVideoBufferPrivate &, QAbstractVideoBuffer::HandleType)
MyQAbstractPlanarVideoBuffer(QAbstractPlanarVideoBufferPrivate & dd, QAbstractVideoBuffer::HandleType type_) : QAbstractPlanarVideoBuffer(dd, type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:107
// [-2] void QAbstractPlanarVideoBuffer(QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractPlanarVideoBufferC2EN20QAbstractVideoBuffer10HandleTypeE(QAbstractVideoBuffer::HandleType type_) {
  return 0; // new QAbstractPlanarVideoBuffer(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:108
// [-2] void ~QAbstractPlanarVideoBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractPlanarVideoBufferD2Ev(void *this_) {
  delete (QAbstractPlanarVideoBuffer*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:110
// [8] uchar * map(QAbstractVideoBuffer::MapMode, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractPlanarVideoBuffer3mapEN20QAbstractVideoBuffer7MapModeEPiS2_(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int * bytesPerLine) {
  return (void*)((QAbstractPlanarVideoBuffer*)this_)->map(mode, numBytes, bytesPerLine);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:111
// [4] int map(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
extern "C" Q_DECL_EXPORT
int C_ZN26QAbstractPlanarVideoBuffer3mapEN20QAbstractVideoBuffer7MapModeEPiS2_PPh(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int* bytesPerLine, uchar** data) {
  return (int)((QAbstractPlanarVideoBuffer*)this_)->map(mode, numBytes, bytesPerLine, data);
}

//  main block end
