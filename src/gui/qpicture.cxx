//  header block begin

// /usr/include/qt/QtGui/qpicture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpicture.h>
#include <QtGui>
#include "callback_inherit.h"

// QPicture is pure virtual: false false
// QPicture has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQPicture_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPicture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPicture_t qt_meta_stringdata_MyQPicture = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQPicture"
  },
  "MyQPicture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPicture[] = {
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
class Q_DECL_EXPORT MyQPicture : public QPicture {
public:
  virtual ~MyQPicture() {}
// void QPicture(int)
MyQPicture(int formatVersion) : QPicture(formatVersion) {}
// void QPicture(const QPicture &)
MyQPicture(const QPicture & arg0) : QPicture(arg0) {}
// Protected virtual Direct Visibility=Default Availability=Available
// [4] int metric(QPaintDevice::PaintDeviceMetric)
  virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metric", &handled, 1, (uint64_t)m, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QPicture::metric(m);
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qpicture(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:81
// [32] QPicture & operator=(QPicture &&) 
// (12)qm3436752259 (18)_ZN8QPictureaSEOS_
//static
/*void qm3436752259(QPicture && other)*/ {
  QPicture && other =  static_cast<QPicture &&>(*(QPicture *)this_);
  (void) ((QPicture*)this_)->operator=(other);
  // auto xptr = (QPicture & (QPicture::*)(QPicture&&) ) &QPicture::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:83
// [-2] void swap(QPicture &) 
// (12)qm4039444500 (21)_ZN8QPicture4swapERS_
//static
/*void qm4039444500(QPicture & other)*/ {
  QPicture & other = *(QPicture *)this_;
  (void) ((QPicture*)this_)->swap(other);
   auto xptr = (void (QPicture::*)(QPicture&) ) &QPicture::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:116
// [8] QPicture::DataPtr & data_ptr() 
// (12)qm2763544097 (23)_ZN8QPicture8data_ptrEv
//static
/*void qm2763544097()*/ {
  ;
  (void) ((QPicture*)this_)->data_ptr();
   auto xptr = (QExplicitlySharedDataPointer<QPicturePrivate> & (QPicture::*)() ) &QPicture::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN8QPictureD2Ev(void *this_)*/ {
  delete (QPicture*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qpicture
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
