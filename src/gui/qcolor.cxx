//  header block begin

// /usr/include/qt/QtGui/qcolor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcolor.h>
#include <QtGui>
#include "callback_inherit.h"

// QColor is pure virtual: false false
// QColor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQColor_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQColor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQColor_t qt_meta_stringdata_MyQColor = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQColor"
  },
  "MyQColor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQColor[] = {
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
class Q_DECL_EXPORT MyQColor : public QColor {
public:
  virtual ~MyQColor() {}
// void QColor()
MyQColor() : QColor() {}
// void QColor(Qt::GlobalColor)
MyQColor(Qt::GlobalColor color) : QColor(color) {}
// void QColor(int, int, int, int)
MyQColor(int r, int g, int b, int a) : QColor(r, g, b, a) {}
// void QColor(QRgb)
MyQColor(QRgb rgb) : QColor(rgb) {}
// void QColor(QRgba64)
MyQColor(QRgba64 rgba64) : QColor(rgba64) {}
// void QColor(const QString &)
MyQColor(const QString & name) : QColor(name) {}
// void QColor(QStringView)
MyQColor(QStringView name) : QColor(name) {}
// void QColor(const char *)
MyQColor(const char * aname) : QColor(aname) {}
// void QColor(QLatin1String)
MyQColor(QLatin1String name) : QColor(name) {}
// void QColor(QColor::Spec)
MyQColor(QColor::Spec spec) : QColor(spec) {}
// void QColor(const QColor &)
MyQColor(const QColor & color) : QColor(color) {}
// void QColor(QColor &&)
MyQColor(QColor && other) : QColor(other) {}
// void QColor(QColor::Spec, ushort, ushort, ushort, ushort, ushort)
MyQColor(QColor::Spec spec, ushort a1, ushort a2, ushort a3, ushort a4, ushort a5) : QColor(spec, a1, a2, a3, a4, a5) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcolor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:70
// [-2] void QColor() 
// (12)qm2667467580 (14)_ZN6QColorC2Ev
/*void* qm2667467580()*/{
  ;
  this_ =  new QColor();
  this_ =  new MyQColor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:72
// [-2] void QColor(Qt::GlobalColor) 
// (11)qm659170527 (31)_ZN6QColorC2EN2Qt11GlobalColorE
/*void* qm659170527(Qt::GlobalColor color)*/{
  Qt::GlobalColor color = *(Qt::GlobalColor*)this_;
  this_ =  new QColor(color);
  this_ =  new MyQColor(color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:73
// [-2] void QColor(int, int, int, int) 
// (12)qm3599673984 (17)_ZN6QColorC2Eiiii
/*void* qm3599673984(int r, int g, int b, int a)*/{
  int r = *(int*)this_; int g = *(int*)this_; int b = *(int*)this_; int a = *(int*)this_;
  this_ =  new QColor(r, g, b, a);
  this_ =  new MyQColor(r, g, b, a);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:80
// [-2] void QColor(QRgb) 
// (12)qm2331971443 (14)_ZN6QColorC2Ej
/*void* qm2331971443(unsigned int rgb)*/{
  unsigned int rgb = *(unsigned int*)this_;
  this_ =  new QColor(rgb);
  this_ =  new MyQColor(rgb);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:81
// [-2] void QColor(QRgba64) 
// (12)qm2826816292 (21)_ZN6QColorC2E7QRgba64
/*void* qm2826816292(QRgba64 rgba64)*/{
  QRgba64 rgba64 = *(QRgba64*)this_;
  this_ =  new QColor(rgba64);
  this_ =  new MyQColor(rgba64);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:83
// [-2] void QColor(const QString &) 
// (12)qm3733157329 (23)_ZN6QColorC2ERK7QString
/*void* qm3733157329(const QString & name)*/{
  const QString & name = *(const QString *)this_;
  this_ =  new QColor(name);
  this_ =  new MyQColor(name);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:86
// [-2] void QColor(const char *) 
// (12)qm1002334670 (16)_ZN6QColorC2EPKc
/*void* qm1002334670(const char * aname)*/{
  const char * aname = *(const char **)this_;
  this_ =  new QColor(aname);
  this_ =  new MyQColor(aname);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:87
// [-2] void QColor(QLatin1String) 
// (12)qm3634380930 (28)_ZN6QColorC2E13QLatin1String
/*void* qm3634380930(QLatin1String name)*/{
  QLatin1String name = *(QLatin1String*)this_;
  this_ =  new QColor(name);
  this_ =  new MyQColor(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:88
// [-2] void QColor(QColor::Spec) 
// (12)qm4061352020 (22)_ZN6QColorC2ENS_4SpecE
/*void* qm4061352020(QColor::Spec spec)*/{
  QColor::Spec spec = *(QColor::Spec*)this_;
  this_ =  new QColor(spec);
  this_ =  new MyQColor(spec);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:92
// [-2] void QColor(const QColor &) 
// (11)qm545131598 (17)_ZN6QColorC2ERKS_
/*void* qm545131598(const QColor & color)*/{
  const QColor & color = *(const QColor *)this_;
  this_ =  new QColor(color);
  this_ =  new MyQColor(color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:95
// [-2] void QColor(QColor &&) 
// (12)qm2175822173 (16)_ZN6QColorC2EOS_
/*void* qm2175822173(QColor && other)*/{
  QColor && other =  static_cast<QColor &&>(*(QColor *)this_);
  this_ =  new QColor(other);
  this_ =  new MyQColor(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:96
// [16] QColor & operator=(QColor &&) 
// (12)qm1871090589 (16)_ZN6QColoraSEOS_
//static
/*void qm1871090589(QColor && other)*/ {
  QColor && other =  static_cast<QColor &&>(*(QColor *)this_);
  (void) ((QColor*)this_)->operator=(other);
  // auto xptr = (QColor & (QColor::*)(QColor&&) ) &QColor::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:103
// [1] bool isValid() const
// (12)qm2234402181 (21)_ZNK6QColor7isValidEv
//static
/*void qm2234402181()*/ {
  ;
  (void) ((QColor*)this_)->isValid();
   auto xptr = (bool (QColor::*)() const ) &QColor::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:117
// [4] QColor::Spec spec() const
// (12)qm2556846289 (18)_ZNK6QColor4specEv
//static
/*void qm2556846289()*/ {
  ;
  (void) ((QColor*)this_)->spec();
   auto xptr = (QColor::Spec (QColor::*)() const ) &QColor::spec;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolor.h:315
// [-2] void QColor(QColor::Spec, ushort, ushort, ushort, ushort, ushort) 
// (12)qm1603974973 (27)_ZN6QColorC2ENS_4SpecEttttt
/*void* qm1603974973(QColor::Spec spec, unsigned short a1, unsigned short a2, unsigned short a3, unsigned short a4, unsigned short a5)*/{
  QColor::Spec spec = *(QColor::Spec*)this_; unsigned short a1 = *(unsigned short*)this_; unsigned short a2 = *(unsigned short*)this_; unsigned short a3 = *(unsigned short*)this_; unsigned short a4 = *(unsigned short*)this_; unsigned short a5 = *(unsigned short*)this_;
  this_ =  new QColor(spec, a1, a2, a3, a4, a5);
  this_ =  new MyQColor(spec, a1, a2, a3, a4, a5);
}


/*void C_ZN6QColorD2Ev(void *this_)*/ {
  delete (QColor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcolor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
