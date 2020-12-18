//  header block begin

// /usr/include/qt/QtGui/qcursor.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcursor.h>
#include <QtGui>
#include "callback_inherit.h"

// QCursor is pure virtual: false false
// QCursor has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCursor_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCursor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCursor_t qt_meta_stringdata_MyQCursor = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQCursor"
  },
  "MyQCursor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCursor[] = {
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
class Q_DECL_EXPORT MyQCursor : public QCursor {
public:
  virtual ~MyQCursor() {}
// void QCursor()
MyQCursor() : QCursor() {}
// void QCursor(Qt::CursorShape)
MyQCursor(Qt::CursorShape shape) : QCursor(shape) {}
// void QCursor(const QBitmap &, const QBitmap &, int, int)
MyQCursor(const QBitmap & bitmap, const QBitmap & mask, int hotX, int hotY) : QCursor(bitmap, mask, hotX, hotY) {}
// void QCursor(const QPixmap &, int, int)
MyQCursor(const QPixmap & pixmap, int hotX, int hotY) : QCursor(pixmap, hotX, hotY) {}
// void QCursor(const QCursor &)
MyQCursor(const QCursor & cursor) : QCursor(cursor) {}
// void QCursor(QCursor &&)
MyQCursor(QCursor && other) : QCursor(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qcursor(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:89
// [-2] void QCursor(QCursor &&) 
// (11)qm710598164 (17)_ZN7QCursorC2EOS_
/*void* qm710598164(QCursor && other)*/{
  QCursor && other =  static_cast<QCursor &&>(*(QCursor *)this_);
  this_ =  new QCursor(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:90
// [8] QCursor & operator=(QCursor &&) 
// (12)qm3295421652 (17)_ZN7QCursoraSEOS_
//static
/*void qm3295421652(QCursor && other)*/ {
  QCursor && other =  static_cast<QCursor &&>(*(QCursor *)this_);
  (void) ((QCursor*)this_)->operator=(other);
  // auto xptr = (QCursor & (QCursor::*)(QCursor&&) ) &QCursor::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:93
// [-2] void swap(QCursor &) 
// (12)qm3212534974 (20)_ZN7QCursor4swapERS_
//static
/*void qm3212534974(QCursor & other)*/ {
  QCursor & other = *(QCursor *)this_;
  (void) ((QCursor*)this_)->swap(other);
   auto xptr = (void (QCursor::*)(QCursor&) ) &QCursor::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:120
// [-2] void setPos(const QPoint &) 
// (12)qm3847847402 (28)_ZN7QCursor6setPosERK6QPoint
//static
/*void qm3847847402(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) QCursor::setPos(p);
   auto xptr = (void (*)(QPoint const&) ) &QCursor::setPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:121
// [-2] void setPos(QScreen *, const QPoint &) 
// (12)qm2961776494 (37)_ZN7QCursor6setPosEP7QScreenRK6QPoint
//static
/*void qm2961776494(QScreen * screen, const QPoint & p)*/ {
  QScreen * screen = *(QScreen **)this_; const QPoint & p = *(const QPoint *)this_;
  (void) QCursor::setPos(screen, p);
   auto xptr = (void (*)(QScreen*, QPoint const&) ) &QCursor::setPos;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QCursorD2Ev(void *this_)*/ {
  delete (QCursor*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qcursor
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
