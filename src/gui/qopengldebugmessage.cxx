//  header block begin

// /usr/include/qt/QtGui/qopengldebug.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopengldebug.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLDebugMessage is pure virtual: false false
// QOpenGLDebugMessage has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLDebugMessage_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLDebugMessage_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLDebugMessage_t qt_meta_stringdata_MyQOpenGLDebugMessage = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQOpenGLDebugMessage"
  },
  "MyQOpenGLDebugMessage"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLDebugMessage[] = {
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
class Q_DECL_EXPORT MyQOpenGLDebugMessage : public QOpenGLDebugMessage {
public:
  virtual ~MyQOpenGLDebugMessage() {}
// void QOpenGLDebugMessage()
MyQOpenGLDebugMessage() : QOpenGLDebugMessage() {}
// void QOpenGLDebugMessage(const QOpenGLDebugMessage &)
MyQOpenGLDebugMessage(const QOpenGLDebugMessage & debugMessage) : QOpenGLDebugMessage(debugMessage) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopengldebugmessage(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:109
// [-2] void QOpenGLDebugMessage() 
// (12)qm3415398641 (28)_ZN19QOpenGLDebugMessageC2Ev
/*void* qm3415398641()*/{
  ;
  this_ =  new QOpenGLDebugMessage();
  this_ =  new MyQOpenGLDebugMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:110
// [-2] void QOpenGLDebugMessage(const QOpenGLDebugMessage &) 
// (11)qm628778491 (31)_ZN19QOpenGLDebugMessageC2ERKS_
/*void* qm628778491(const QOpenGLDebugMessage & debugMessage)*/{
  const QOpenGLDebugMessage & debugMessage = *(const QOpenGLDebugMessage *)this_;
  this_ =  new QOpenGLDebugMessage(debugMessage);
  this_ =  new MyQOpenGLDebugMessage(debugMessage);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:113
// [8] QOpenGLDebugMessage & operator=(QOpenGLDebugMessage &&) 
// (12)qm1807234394 (30)_ZN19QOpenGLDebugMessageaSEOS_
//static
/*void qm1807234394(QOpenGLDebugMessage && other)*/ {
  QOpenGLDebugMessage && other =  static_cast<QOpenGLDebugMessage &&>(*(QOpenGLDebugMessage *)this_);
  (void) ((QOpenGLDebugMessage*)this_)->operator=(other);
  // auto xptr = (QOpenGLDebugMessage & (QOpenGLDebugMessage::*)(QOpenGLDebugMessage&&) ) &QOpenGLDebugMessage::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:116
// [-2] void swap(QOpenGLDebugMessage &) 
// (12)qm2260166470 (33)_ZN19QOpenGLDebugMessage4swapERS_
//static
/*void qm2260166470(QOpenGLDebugMessage & other)*/ {
  QOpenGLDebugMessage & other = *(QOpenGLDebugMessage *)this_;
  (void) ((QOpenGLDebugMessage*)this_)->swap(other);
   auto xptr = (void (QOpenGLDebugMessage::*)(QOpenGLDebugMessage&) ) &QOpenGLDebugMessage::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:134
// [1] bool operator!=(const QOpenGLDebugMessage &) const
// (12)qm1499156283 (32)_ZNK19QOpenGLDebugMessageneERKS_
//static
/*void qm1499156283(const QOpenGLDebugMessage & debugMessage)*/ {
  const QOpenGLDebugMessage & debugMessage = *(const QOpenGLDebugMessage *)this_;
  (void) ((QOpenGLDebugMessage*)this_)->operator!=(debugMessage);
  // auto xptr = (bool (QOpenGLDebugMessage::*)(QOpenGLDebugMessage const&) const ) &QOpenGLDebugMessage::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QOpenGLDebugMessageD2Ev(void *this_)*/ {
  delete (QOpenGLDebugMessage*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopengldebugmessage
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
