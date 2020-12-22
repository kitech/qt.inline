//  header block begin

// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QBrush is pure virtual: false false
// QBrush has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBrush_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBrush_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBrush_t qt_meta_stringdata_MyQBrush = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQBrush"
  },
  "MyQBrush"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBrush[] = {
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
class Q_DECL_EXPORT MyQBrush : public QBrush {
public:
  virtual ~MyQBrush() {}
// void QBrush()
MyQBrush() : QBrush() {}
// void QBrush(Qt::BrushStyle)
MyQBrush(Qt::BrushStyle bs) : QBrush(bs) {}
// void QBrush(const QColor &, Qt::BrushStyle)
MyQBrush(const QColor & color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(Qt::GlobalColor, Qt::BrushStyle)
MyQBrush(Qt::GlobalColor color, Qt::BrushStyle bs) : QBrush(color, bs) {}
// void QBrush(const QColor &, const QPixmap &)
MyQBrush(const QColor & color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(Qt::GlobalColor, const QPixmap &)
MyQBrush(Qt::GlobalColor color, const QPixmap & pixmap) : QBrush(color, pixmap) {}
// void QBrush(const QPixmap &)
MyQBrush(const QPixmap & pixmap) : QBrush(pixmap) {}
// void QBrush(const QImage &)
MyQBrush(const QImage & image) : QBrush(image) {}
// void QBrush(const QBrush &)
MyQBrush(const QBrush & brush) : QBrush(brush) {}
// void QBrush(const QGradient &)
MyQBrush(const QGradient & gradient) : QBrush(gradient) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbrush(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:66
// [-2] void QBrush() 
// (12)qm3258578779 (14)_ZN6QBrushC2Ev
/*void* qm3258578779()*/{
  ;
  this_ =  new QBrush();
  this_ =  new MyQBrush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:67
// [-2] void QBrush(Qt::BrushStyle) 
// (12)qm3846282792 (30)_ZN6QBrushC2EN2Qt10BrushStyleE
/*void* qm3846282792(Qt::BrushStyle bs)*/{
  Qt::BrushStyle bs = *(Qt::BrushStyle*)this_;
  this_ =  new QBrush(bs);
  this_ =  new MyQBrush(bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:68
// [-2] void QBrush(const QColor &, Qt::BrushStyle) 
// (12)qm1697783790 (39)_ZN6QBrushC2ERK6QColorN2Qt10BrushStyleE
/*void* qm1697783790(const QColor & color, Qt::BrushStyle bs)*/{
  const QColor & color = *(const QColor *)this_; Qt::BrushStyle bs = *(Qt::BrushStyle*)this_;
  this_ =  new QBrush(color, bs);
  this_ =  new MyQBrush(color, bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:69
// [-2] void QBrush(Qt::GlobalColor, Qt::BrushStyle) 
// (12)qm1191848810 (48)_ZN6QBrushC2EN2Qt11GlobalColorENS0_10BrushStyleE
/*void* qm1191848810(Qt::GlobalColor color, Qt::BrushStyle bs)*/{
  Qt::GlobalColor color = *(Qt::GlobalColor*)this_; Qt::BrushStyle bs = *(Qt::BrushStyle*)this_;
  this_ =  new QBrush(color, bs);
  this_ =  new MyQBrush(color, bs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:71
// [-2] void QBrush(const QColor &, const QPixmap &) 
// (12)qm1490641295 (32)_ZN6QBrushC2ERK6QColorRK7QPixmap
/*void* qm1490641295(const QColor & color, const QPixmap & pixmap)*/{
  const QColor & color = *(const QColor *)this_; const QPixmap & pixmap = *(const QPixmap *)this_;
  this_ =  new QBrush(color, pixmap);
  this_ =  new MyQBrush(color, pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:72
// [-2] void QBrush(Qt::GlobalColor, const QPixmap &) 
// (12)qm2424112937 (41)_ZN6QBrushC2EN2Qt11GlobalColorERK7QPixmap
/*void* qm2424112937(Qt::GlobalColor color, const QPixmap & pixmap)*/{
  Qt::GlobalColor color = *(Qt::GlobalColor*)this_; const QPixmap & pixmap = *(const QPixmap *)this_;
  this_ =  new QBrush(color, pixmap);
  this_ =  new MyQBrush(color, pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:73
// [-2] void QBrush(const QPixmap &) 
// (12)qm3362515310 (23)_ZN6QBrushC2ERK7QPixmap
/*void* qm3362515310(const QPixmap & pixmap)*/{
  const QPixmap & pixmap = *(const QPixmap *)this_;
  this_ =  new QBrush(pixmap);
  this_ =  new MyQBrush(pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:74
// [-2] void QBrush(const QImage &) 
// (11)qm423772952 (22)_ZN6QBrushC2ERK6QImage
/*void* qm423772952(const QImage & image)*/{
  const QImage & image = *(const QImage *)this_;
  this_ =  new QBrush(image);
  this_ =  new MyQBrush(image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:76
// [-2] void QBrush(const QBrush &) 
// (12)qm2727214921 (17)_ZN6QBrushC2ERKS_
/*void* qm2727214921(const QBrush & brush)*/{
  const QBrush & brush = *(const QBrush *)this_;
  this_ =  new QBrush(brush);
  this_ =  new MyQBrush(brush);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:78
// [-2] void QBrush(const QGradient &) 
// (11)qm882478478 (25)_ZN6QBrushC2ERK9QGradient
/*void* qm882478478(const QGradient & gradient)*/{
  const QGradient & gradient = *(const QGradient *)this_;
  this_ =  new QBrush(gradient);
  this_ =  new MyQBrush(gradient);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:82
// [8] QBrush & operator=(QBrush &&) 
// (12)qm2491504075 (16)_ZN6QBrushaSEOS_
//static
/*void qm2491504075(QBrush && other)*/ {
  QBrush && other =  static_cast<QBrush &&>(*(QBrush *)this_);
  (void) ((QBrush*)this_)->operator=(other);
  // auto xptr = (QBrush & (QBrush::*)(QBrush&&) ) &QBrush::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:84
// [-2] void swap(QBrush &) 
// (12)qm1084118737 (19)_ZN6QBrush4swapERS_
//static
/*void qm1084118737(QBrush & other)*/ {
  QBrush & other = *(QBrush *)this_;
  (void) ((QBrush*)this_)->swap(other);
   auto xptr = (void (QBrush::*)(QBrush&) ) &QBrush::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:89
// [4] Qt::BrushStyle style() const
// (12)qm1654706811 (19)_ZNK6QBrush5styleEv
//static
/*void qm1654706811()*/ {
  ;
  (void) ((QBrush*)this_)->style();
   auto xptr = (Qt::BrushStyle (QBrush::*)() const ) &QBrush::style;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:97
// [88] QTransform transform() const
// (11)qm927538849 (23)_ZNK6QBrush9transformEv
//static
/*void qm927538849()*/ {
  ;
  (void) ((QBrush*)this_)->transform();
   auto xptr = (QTransform (QBrush::*)() const ) &QBrush::transform;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:106
// [16] const QColor & color() const
// (12)qm3484663300 (19)_ZNK6QBrush5colorEv
//static
/*void qm3484663300()*/ {
  ;
  (void) ((QBrush*)this_)->color();
   auto xptr = (const QColor & (QBrush::*)() const ) &QBrush::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:108
// [-2] void setColor(Qt::GlobalColor) 
// (11)qm614895653 (38)_ZN6QBrush8setColorEN2Qt11GlobalColorE
//static
/*void qm614895653(Qt::GlobalColor color)*/ {
  Qt::GlobalColor color = *(Qt::GlobalColor*)this_;
  (void) ((QBrush*)this_)->setColor(color);
   auto xptr = (void (QBrush::*)(Qt::GlobalColor) ) &QBrush::setColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:115
// [1] bool operator!=(const QBrush &) const
// (11)qm620104100 (18)_ZNK6QBrushneERKS_
//static
/*void qm620104100(const QBrush & b)*/ {
  const QBrush & b = *(const QBrush *)this_;
  (void) ((QBrush*)this_)->operator!=(b);
  // auto xptr = (bool (QBrush::*)(QBrush const&) const ) &QBrush::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:129
// [1] bool isDetached() const
// (12)qm2871085120 (25)_ZNK6QBrush10isDetachedEv
//static
/*void qm2871085120()*/ {
  ;
  (void) ((QBrush*)this_)->isDetached();
   auto xptr = (bool (QBrush::*)() const ) &QBrush::isDetached;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:131
// [8] QBrush::DataPtr & data_ptr() 
// (12)qm2665920898 (21)_ZN6QBrush8data_ptrEv
//static
/*void qm2665920898()*/ {
  ;
  (void) ((QBrush*)this_)->data_ptr();
   auto xptr = (QScopedPointer<QBrushData, QBrushDataPointerDeleter> & (QBrush::*)() ) &QBrush::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN6QBrushD2Ev(void *this_)*/ {
  delete (QBrush*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbrush
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
