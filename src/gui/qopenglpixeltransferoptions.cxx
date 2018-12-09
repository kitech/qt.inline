//  header block begin

// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglpixeltransferoptions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLPixelTransferOptions is pure virtual: false
// QOpenGLPixelTransferOptions has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLPixelTransferOptions_t qt_meta_stringdata_MyQOpenGLPixelTransferOptions = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQOpenGLPixelTransferOptions"
  },
  "MyQOpenGLPixelTransferOptions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLPixelTransferOptions[] = {
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
class Q_DECL_EXPORT MyQOpenGLPixelTransferOptions : public QOpenGLPixelTransferOptions {
public:
  virtual ~MyQOpenGLPixelTransferOptions() {}
// void QOpenGLPixelTransferOptions()
MyQOpenGLPixelTransferOptions() : QOpenGLPixelTransferOptions() {}
// void QOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions &)
MyQOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions & arg0) : QOpenGLPixelTransferOptions(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:56
// [-2] void QOpenGLPixelTransferOptions()
extern "C" Q_DECL_EXPORT
void* C_ZN27QOpenGLPixelTransferOptionsC2Ev() {
  return  new QOpenGLPixelTransferOptions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:57
// [-2] void QOpenGLPixelTransferOptions(const QOpenGLPixelTransferOptions &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QOpenGLPixelTransferOptionsC2ERKS_(QOpenGLPixelTransferOptions* arg0) {
  return  new QOpenGLPixelTransferOptions(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:59
// [8] QOpenGLPixelTransferOptions & operator=(QOpenGLPixelTransferOptions &&)
extern "C" Q_DECL_EXPORT
void* C_ZN27QOpenGLPixelTransferOptionsaSEOS_(void *this_, QOpenGLPixelTransferOptions && other) {
  auto& rv = ((QOpenGLPixelTransferOptions*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:62
// [8] QOpenGLPixelTransferOptions & operator=(const QOpenGLPixelTransferOptions &)
extern "C" Q_DECL_EXPORT
void* C_ZN27QOpenGLPixelTransferOptionsaSERKS_(void *this_, QOpenGLPixelTransferOptions* arg0) {
  auto& rv = ((QOpenGLPixelTransferOptions*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:63
// [-2] void ~QOpenGLPixelTransferOptions()
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptionsD2Ev(void *this_) {
  delete (QOpenGLPixelTransferOptions*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:65
// [-2] void swap(QOpenGLPixelTransferOptions &)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions4swapERS_(void *this_, QOpenGLPixelTransferOptions* other) {
  ((QOpenGLPixelTransferOptions*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:68
// [-2] void setAlignment(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions12setAlignmentEi(void *this_, int alignment) {
  ((QOpenGLPixelTransferOptions*)this_)->setAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:69
// [4] int alignment()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions9alignmentEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:71
// [-2] void setSkipImages(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions13setSkipImagesEi(void *this_, int skipImages) {
  ((QOpenGLPixelTransferOptions*)this_)->setSkipImages(skipImages);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:72
// [4] int skipImages()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions10skipImagesEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->skipImages();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:74
// [-2] void setSkipRows(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions11setSkipRowsEi(void *this_, int skipRows) {
  ((QOpenGLPixelTransferOptions*)this_)->setSkipRows(skipRows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:75
// [4] int skipRows()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions8skipRowsEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->skipRows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:77
// [-2] void setSkipPixels(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions13setSkipPixelsEi(void *this_, int skipPixels) {
  ((QOpenGLPixelTransferOptions*)this_)->setSkipPixels(skipPixels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:78
// [4] int skipPixels()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions10skipPixelsEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->skipPixels();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:80
// [-2] void setImageHeight(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions14setImageHeightEi(void *this_, int imageHeight) {
  ((QOpenGLPixelTransferOptions*)this_)->setImageHeight(imageHeight);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:81
// [4] int imageHeight()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions11imageHeightEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->imageHeight();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:83
// [-2] void setRowLength(int)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions12setRowLengthEi(void *this_, int rowLength) {
  ((QOpenGLPixelTransferOptions*)this_)->setRowLength(rowLength);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:84
// [4] int rowLength()
extern "C" Q_DECL_EXPORT
int C_ZNK27QOpenGLPixelTransferOptions9rowLengthEv(void *this_) {
  return (int)((QOpenGLPixelTransferOptions*)this_)->rowLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:86
// [-2] void setLeastSignificantByteFirst(bool)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions28setLeastSignificantByteFirstEb(void *this_, bool lsbFirst) {
  ((QOpenGLPixelTransferOptions*)this_)->setLeastSignificantByteFirst(lsbFirst);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:87
// [1] bool isLeastSignificantBitFirst()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QOpenGLPixelTransferOptions26isLeastSignificantBitFirstEv(void *this_) {
  return (bool)((QOpenGLPixelTransferOptions*)this_)->isLeastSignificantBitFirst();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:89
// [-2] void setSwapBytesEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN27QOpenGLPixelTransferOptions19setSwapBytesEnabledEb(void *this_, bool swapBytes) {
  ((QOpenGLPixelTransferOptions*)this_)->setSwapBytesEnabled(swapBytes);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:90
// [1] bool isSwapBytesEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK27QOpenGLPixelTransferOptions18isSwapBytesEnabledEv(void *this_) {
  return (bool)((QOpenGLPixelTransferOptions*)this_)->isSwapBytesEnabled();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
