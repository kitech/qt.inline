//  header block begin

// /usr/include/qt/QtGui/qbitmap.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbitmap.h>
#include <QtGui>
#include "callback_inherit.h"

// QBitmap is pure virtual: false false
// QBitmap has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQBitmap_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBitmap_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBitmap_t qt_meta_stringdata_MyQBitmap = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQBitmap"
  },
  "MyQBitmap"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBitmap[] = {
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
class Q_DECL_EXPORT MyQBitmap : public QBitmap {
public:
  virtual ~MyQBitmap() {}
// void QBitmap()
MyQBitmap() : QBitmap() {}
// void QBitmap(const QPixmap &)
MyQBitmap(const QPixmap & arg0) : QBitmap(arg0) {}
// void QBitmap(int, int)
MyQBitmap(int w, int h) : QBitmap(w, h) {}
// void QBitmap(const QSize &)
MyQBitmap(const QSize & arg0) : QBitmap(arg0) {}
// void QBitmap(const QString &, const char *)
MyQBitmap(const QString & fileName, const char * format) : QBitmap(fileName, format) {}
// void QBitmap(const QBitmap &)
MyQBitmap(const QBitmap & other) : QBitmap(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qbitmap(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:54
// [-2] void QBitmap() 
// (12)qm1857860163 (15)_ZN7QBitmapC2Ev
/*void* qm1857860163()*/{
  ;
  this_ =  new QBitmap();
  this_ =  new MyQBitmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:55
// [-2] void QBitmap(const QPixmap &) 
// (11)qm184471886 (24)_ZN7QBitmapC2ERK7QPixmap
/*void* qm184471886(const QPixmap & arg0)*/{
  const QPixmap & arg0 = *(const QPixmap *)this_;
  this_ =  new QBitmap(arg0);
  this_ =  new MyQBitmap(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:56
// [-2] void QBitmap(int, int) 
// (12)qm3297612919 (16)_ZN7QBitmapC2Eii
/*void* qm3297612919(int w, int h)*/{
  int w = *(int*)this_; int h = *(int*)this_;
  this_ =  new QBitmap(w, h);
  this_ =  new MyQBitmap(w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:57
// [-2] void QBitmap(const QSize &) 
// (12)qm2902527683 (22)_ZN7QBitmapC2ERK5QSize
/*void* qm2902527683(const QSize & arg0)*/{
  const QSize & arg0 = *(const QSize *)this_;
  this_ =  new QBitmap(arg0);
  this_ =  new MyQBitmap(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:58
// [-2] void QBitmap(const QString &, const char *) 
// (12)qm1118119835 (27)_ZN7QBitmapC2ERK7QStringPKc
/*void* qm1118119835(const QString & fileName, const char * format)*/{
  const QString & fileName = *(const QString *)this_; const char * format = *(const char **)this_;
  this_ =  new QBitmap(fileName, format);
  this_ =  new MyQBitmap(fileName, format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:61
// [-2] void QBitmap(const QBitmap &) 
// (12)qm2690957762 (18)_ZN7QBitmapC2ERKS_
/*void* qm2690957762(const QBitmap & other)*/{
  const QBitmap & other = *(const QBitmap *)this_;
  this_ =  new QBitmap(other);
  this_ =  new MyQBitmap(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:63
// [32] QBitmap & operator=(const QBitmap &) 
// (12)qm1005467016 (18)_ZN7QBitmapaSERKS_
//static
/*void qm1005467016(const QBitmap & other)*/ {
  const QBitmap & other = *(const QBitmap *)this_;
  (void) ((QBitmap*)this_)->operator=(other);
  // auto xptr = (QBitmap & (QBitmap::*)(QBitmap const&) ) &QBitmap::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:64
// [32] QBitmap & operator=(QBitmap &&) 
// (11)qm271373320 (17)_ZN7QBitmapaSEOS_
//static
/*void qm271373320(QBitmap && other)*/ {
  QBitmap && other =  static_cast<QBitmap &&>(*(QBitmap *)this_);
  (void) ((QBitmap*)this_)->operator=(other);
  // auto xptr = (QBitmap & (QBitmap::*)(QBitmap&&) ) &QBitmap::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:69
// [-2] void swap(QBitmap &) 
// (12)qm1502087187 (20)_ZN7QBitmap4swapERS_
//static
/*void qm1502087187(QBitmap & other)*/ {
  QBitmap & other = *(QBitmap *)this_;
  (void) ((QBitmap*)this_)->swap(other);
   auto xptr = (void (QBitmap::*)(QBitmap&) ) &QBitmap::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:72
// [-2] void clear() 
// (12)qm2226925555 (19)_ZN7QBitmap5clearEv
//static
/*void qm2226925555()*/ {
  ;
  (void) ((QBitmap*)this_)->clear();
   auto xptr = (void (QBitmap::*)() ) &QBitmap::clear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QBitmapD2Ev(void *this_)*/ {
  delete (QBitmap*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qbitmap
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
