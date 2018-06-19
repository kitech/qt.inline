//  header block begin
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h
#ifndef protected
#define protected public
#endif
#include <qabstractvideobuffer.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QAbstractVideoBuffer is pure virtual: true
// QAbstractVideoBuffer has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractVideoBuffer : public QAbstractVideoBuffer {
public:
  virtual ~MyQAbstractVideoBuffer() {}
// void QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType)
MyQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType type_) : QAbstractVideoBuffer(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:78
// [-2] void QAbstractVideoBuffer(QAbstractVideoBuffer::HandleType)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoBufferC2ENS_10HandleTypeE(QAbstractVideoBuffer::HandleType type_) {
  return 0; // new QAbstractVideoBuffer(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:79
// [-2] void ~QAbstractVideoBuffer()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoBufferD2Ev(void *this_) {
  delete (QAbstractVideoBuffer*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:80
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoBuffer7releaseEv(void *this_) {
  ((QAbstractVideoBuffer*)this_)->release();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:82
// [4] QAbstractVideoBuffer::HandleType handleType()
extern "C" Q_DECL_EXPORT
QAbstractVideoBuffer::HandleType C_ZNK20QAbstractVideoBuffer10handleTypeEv(void *this_) {
  return (QAbstractVideoBuffer::HandleType)((QAbstractVideoBuffer*)this_)->handleType();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:84
// [4] QAbstractVideoBuffer::MapMode mapMode()
extern "C" Q_DECL_EXPORT
QAbstractVideoBuffer::MapMode C_ZNK20QAbstractVideoBuffer7mapModeEv(void *this_) {
  return (QAbstractVideoBuffer::MapMode)((QAbstractVideoBuffer*)this_)->mapMode();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:86
// [8] uchar * map(QAbstractVideoBuffer::MapMode, int *, int *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QAbstractVideoBuffer3mapENS_7MapModeEPiS1_(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int * bytesPerLine) {
  return (void*)((QAbstractVideoBuffer*)this_)->map(mode, numBytes, bytesPerLine);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:87
// [4] int mapPlanes(QAbstractVideoBuffer::MapMode, int *, int *, uchar **)
extern "C" Q_DECL_EXPORT
int C_ZN20QAbstractVideoBuffer9mapPlanesENS_7MapModeEPiS1_PPh(void *this_, QAbstractVideoBuffer::MapMode mode, int * numBytes, int* bytesPerLine, uchar** data) {
  return (int)((QAbstractVideoBuffer*)this_)->mapPlanes(mode, numBytes, bytesPerLine, data);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:88
// [-2] void unmap()
extern "C" Q_DECL_EXPORT
void C_ZN20QAbstractVideoBuffer5unmapEv(void *this_) {
  ((QAbstractVideoBuffer*)this_)->unmap();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideobuffer.h:90
// [16] QVariant handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QAbstractVideoBuffer6handleEv(void *this_) {
  auto rv = ((QAbstractVideoBuffer*)this_)->handle();
return new QVariant(rv);
}

//  main block end
