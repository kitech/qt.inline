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
