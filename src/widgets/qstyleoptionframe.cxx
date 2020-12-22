//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFrame is pure virtual: false false
// QStyleOptionFrame has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionFrame_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionFrame_t qt_meta_stringdata_MyQStyleOptionFrame = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQStyleOptionFrame"
  },
  "MyQStyleOptionFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionFrame[] = {
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
class Q_DECL_EXPORT MyQStyleOptionFrame : public QStyleOptionFrame {
public:
  virtual ~MyQStyleOptionFrame() {}
// void QStyleOptionFrame()
MyQStyleOptionFrame() : QStyleOptionFrame() {}
// void QStyleOptionFrame(const QStyleOptionFrame &)
MyQStyleOptionFrame(const QStyleOptionFrame & other) : QStyleOptionFrame(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qstyleoptionframe(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:144
// [-2] void QStyleOptionFrame() 
// (12)qm1913315629 (26)_ZN17QStyleOptionFrameC2Ev
/*void* qm1913315629()*/{
  ;
  this_ =  new QStyleOptionFrame();
  this_ =  new MyQStyleOptionFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:145
// [-2] void QStyleOptionFrame(const QStyleOptionFrame &) 
// (12)qm1371095002 (29)_ZN17QStyleOptionFrameC2ERKS_
/*void* qm1371095002(const QStyleOptionFrame & other)*/{
  const QStyleOptionFrame & other = *(const QStyleOptionFrame *)this_;
  this_ =  new QStyleOptionFrame(other);
  this_ =  new MyQStyleOptionFrame(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:146
// [80] QStyleOptionFrame & operator=(const QStyleOptionFrame &) 
// (12)qm3392392080 (29)_ZN17QStyleOptionFrameaSERKS_
//static
/*void qm3392392080(const QStyleOptionFrame & arg0)*/ {
  const QStyleOptionFrame & arg0 = *(const QStyleOptionFrame *)this_;
  (void) ((QStyleOptionFrame*)this_)->operator=(arg0);
  // auto xptr = (QStyleOptionFrame & (QStyleOptionFrame::*)(QStyleOptionFrame const&) ) &QStyleOptionFrame::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QStyleOptionFrameD2Ev(void *this_)*/ {
  delete (QStyleOptionFrame*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qstyleoptionframe
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
