//  header block begin

// /usr/include/qt/QtWidgets/qcolormap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolormap.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColormap is pure virtual: false
// QColormap has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColormap_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColormap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColormap_t qt_meta_stringdata_MyQColormap = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQColormap"
  },
  "MyQColormap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColormap[] = {
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
class Q_DECL_EXPORT MyQColormap : public QColormap {
public:
  virtual ~MyQColormap() {}
// void QColormap(const QColormap &)
MyQColormap(const QColormap & colormap) : QColormap(colormap) {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:60
// [-2] void initialize()
extern "C" Q_DECL_EXPORT
void C_ZN9QColormap10initializeEv() {
  QColormap::initialize();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:61
// [-2] void cleanup()
extern "C" Q_DECL_EXPORT
void C_ZN9QColormap7cleanupEv() {
  QColormap::cleanup();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:63
// [8] QColormap instance(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QColormap8instanceEi(int screen) {
  auto rv = QColormap::instance(screen);
return new QColormap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:65
// [-2] void QColormap(const QColormap &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QColormapC2ERKS_(QColormap* colormap) {
  return  new QColormap(*colormap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:66
// [-2] void ~QColormap()
extern "C" Q_DECL_EXPORT
void C_ZN9QColormapD2Ev(void *this_) {
  delete (QColormap*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:68
// [8] QColormap & operator=(const QColormap &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QColormapaSERKS_(void *this_, QColormap* colormap) {
  auto& rv = ((QColormap*)this_)->operator=(*colormap);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:70
// [4] QColormap::Mode mode()
extern "C" Q_DECL_EXPORT
QColormap::Mode C_ZNK9QColormap4modeEv(void *this_) {
  return (QColormap::Mode)((QColormap*)this_)->mode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:72
// [4] int depth()
extern "C" Q_DECL_EXPORT
int C_ZNK9QColormap5depthEv(void *this_) {
  return (int)((QColormap*)this_)->depth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:73
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK9QColormap4sizeEv(void *this_) {
  return (int)((QColormap*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:75
// [4] uint pixel(const QColor &)
extern "C" Q_DECL_EXPORT
uint C_ZNK9QColormap5pixelERK6QColor(void *this_, QColor* color) {
  return (uint)((QColormap*)this_)->pixel(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:76
// [16] const QColor colorAt(uint)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QColormap7colorAtEj(void *this_, uint pixel) {
  auto rv = ((QColormap*)this_)->colorAt(pixel);
return new QColor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:78
// [-2] const QVector<QColor> colormap()
extern "C" Q_DECL_EXPORT
void C_ZNK9QColormap8colormapEv(void *this_) {
  auto rv = ((QColormap*)this_)->colormap();
/*return rv;*/
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
