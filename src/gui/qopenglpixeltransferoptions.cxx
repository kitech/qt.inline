// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qopenglpixeltransferoptions.h
// dst-file: /src/gui/qopenglpixeltransferoptions.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qopenglpixeltransferoptions.h>


// <= header block end

// main block begin =>
void __keep_qopenglpixeltransferoptions_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 60, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::swap(QOpenGLPixelTransferOptions & other);
if (true) {
  auto f = [](QOpenGLPixelTransferOptions flythis, QOpenGLPixelTransferOptions & arg1) {
    ((QOpenGLPixelTransferOptions*)0)->swap(arg1);
    flythis.swap(arg1);
  };
  if (f == nullptr){}
}
// _ZN27QOpenGLPixelTransferOptions4swapERS_ swap(class QOpenGLPixelTransferOptions &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QOpenGLPixelTransferOptions_Class_Size()
{
  return sizeof(QOpenGLPixelTransferOptions);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 50, column 5>
//   // proto:  void QOpenGLPixelTransferOptions::QOpenGLPixelTransferOptions();
extern "C"
QOpenGLPixelTransferOptions*
C_ZN27QOpenGLPixelTransferOptionsC2Ev() {
  auto ret = new QOpenGLPixelTransferOptions();
  return ret;
}
//   // proto:  void QOpenGLPixelTransferOptions::~QOpenGLPixelTransferOptions();
extern "C"
void C_ZN27QOpenGLPixelTransferOptionsD2Ev(void *qthis) {
  delete (QOpenGLPixelTransferOptions*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 85, column 10>
//   // proto:  bool QOpenGLPixelTransferOptions::isSwapBytesEnabled();
// _ZNK27QOpenGLPixelTransferOptions18isSwapBytesEnabledEv isSwapBytesEnabled()
extern "C"
bool
C_ZNK27QOpenGLPixelTransferOptions18isSwapBytesEnabledEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->isSwapBytesEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 60, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::swap(QOpenGLPixelTransferOptions & other);
// _ZN27QOpenGLPixelTransferOptions4swapERS_ swap(class QOpenGLPixelTransferOptions &)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions4swapERS_(void *qthis,
QOpenGLPixelTransferOptions* arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->swap(*((QOpenGLPixelTransferOptions*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 51, column 5>
//   // proto:  void QOpenGLPixelTransferOptions::QOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions & );
extern "C"
QOpenGLPixelTransferOptions*
C_ZN27QOpenGLPixelTransferOptionsC2ERKS_(const QOpenGLPixelTransferOptions* arg1) {
  auto ret = new QOpenGLPixelTransferOptions(*((const QOpenGLPixelTransferOptions*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 67, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::skipImages();
// _ZNK27QOpenGLPixelTransferOptions10skipImagesEv skipImages()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions10skipImagesEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->skipImages();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 69, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setSkipRows(int skipRows);
// _ZN27QOpenGLPixelTransferOptions11setSkipRowsEi setSkipRows(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions11setSkipRowsEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setSkipRows(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 73, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::skipPixels();
// _ZNK27QOpenGLPixelTransferOptions10skipPixelsEv skipPixels()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions10skipPixelsEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->skipPixels();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 78, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setRowLength(int rowLength);
// _ZN27QOpenGLPixelTransferOptions12setRowLengthEi setRowLength(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions12setRowLengthEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setRowLength(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 76, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::imageHeight();
// _ZNK27QOpenGLPixelTransferOptions11imageHeightEv imageHeight()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions11imageHeightEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->imageHeight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 75, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setImageHeight(int imageHeight);
// _ZN27QOpenGLPixelTransferOptions14setImageHeightEi setImageHeight(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions14setImageHeightEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setImageHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 70, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::skipRows();
// _ZNK27QOpenGLPixelTransferOptions8skipRowsEv skipRows()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions8skipRowsEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->skipRows();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 63, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setAlignment(int alignment);
// _ZN27QOpenGLPixelTransferOptions12setAlignmentEi setAlignment(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions12setAlignmentEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setAlignment(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 66, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setSkipImages(int skipImages);
// _ZN27QOpenGLPixelTransferOptions13setSkipImagesEi setSkipImages(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions13setSkipImagesEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setSkipImages(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 64, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::alignment();
// _ZNK27QOpenGLPixelTransferOptions9alignmentEv alignment()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions9alignmentEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->alignment();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 72, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setSkipPixels(int skipPixels);
// _ZN27QOpenGLPixelTransferOptions13setSkipPixelsEi setSkipPixels(int)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions13setSkipPixelsEi(void *qthis,
int arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setSkipPixels(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 84, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setSwapBytesEnabled(bool swapBytes);
// _ZN27QOpenGLPixelTransferOptions19setSwapBytesEnabledEb setSwapBytesEnabled(_Bool)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions19setSwapBytesEnabledEb(void *qthis,
bool arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setSwapBytesEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 81, column 10>
//   // proto:  void QOpenGLPixelTransferOptions::setLeastSignificantByteFirst(bool lsbFirst);
// _ZN27QOpenGLPixelTransferOptions28setLeastSignificantByteFirstEb setLeastSignificantByteFirst(_Bool)
extern "C"
void
C_ZN27QOpenGLPixelTransferOptions28setLeastSignificantByteFirstEb(void *qthis,
bool arg1) {
  ((QOpenGLPixelTransferOptions*)qthis)->setLeastSignificantByteFirst(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 82, column 10>
//   // proto:  bool QOpenGLPixelTransferOptions::isLeastSignificantBitFirst();
// _ZNK27QOpenGLPixelTransferOptions26isLeastSignificantBitFirstEv isLeastSignificantBitFirst()
extern "C"
bool
C_ZNK27QOpenGLPixelTransferOptions26isLeastSignificantBitFirstEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->isLeastSignificantBitFirst();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qopenglpixeltransferoptions.h', line 79, column 9>
//   // proto:  int QOpenGLPixelTransferOptions::rowLength();
// _ZNK27QOpenGLPixelTransferOptions9rowLengthEv rowLength()
extern "C"
int
C_ZNK27QOpenGLPixelTransferOptions9rowLengthEv(void *qthis) {
  auto ret =
  ((QOpenGLPixelTransferOptions*)qthis)->rowLength();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// <= body block end

