//  header block begin

// /usr/include/qt/QtWidgets/qcolormap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolormap.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColormap is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolormap(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolormap.h:65
// [-2] void QColormap(const QColormap &) 
// (12)qm1768561548 (20)_ZN9QColormapC2ERKS_
/*void* qm1768561548(const QColormap & colormap)*/{
  const QColormap & colormap = *(const QColormap *)this_;
  this_ =  new QColormap(colormap);
  this_ =  new MyQColormap(colormap);
}


/*void C_ZN9QColormapD2Ev(void *this_)*/ {
  delete (QColormap*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolormap
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
