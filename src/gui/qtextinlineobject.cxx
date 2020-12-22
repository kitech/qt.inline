//  header block begin

// /usr/include/qt/QtGui/qtextlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextInlineObject is pure virtual: false false
// QTextInlineObject has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextInlineObject_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextInlineObject_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextInlineObject_t qt_meta_stringdata_MyQTextInlineObject = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQTextInlineObject"
  },
  "MyQTextInlineObject"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextInlineObject[] = {
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
class Q_DECL_EXPORT MyQTextInlineObject : public QTextInlineObject {
public:
  virtual ~MyQTextInlineObject() {}
// void QTextInlineObject(int, QTextEngine *)
MyQTextInlineObject(int i, QTextEngine * e) : QTextInlineObject(i, e) {}
// void QTextInlineObject()
MyQTextInlineObject() : QTextInlineObject() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextinlineobject(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:71
// [-2] void QTextInlineObject(int, QTextEngine *) 
// (12)qm1890895892 (40)_ZN17QTextInlineObjectC2EiP11QTextEngine
/*void* qm1890895892(int i, QTextEngine * e)*/{
  int i = *(int*)this_; QTextEngine * e = *(QTextEngine **)this_;
  this_ =  new QTextInlineObject(i, e);
  this_ =  new MyQTextInlineObject(i, e);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:72
// [-2] void QTextInlineObject() 
// (12)qm2728157517 (26)_ZN17QTextInlineObjectC2Ev
/*void* qm2728157517()*/{
  ;
  this_ =  new QTextInlineObject();
  this_ =  new MyQTextInlineObject();
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextlayout.h:73
// [1] bool isValid() const
// (12)qm3043826042 (33)_ZNK17QTextInlineObject7isValidEv
//static
/*void qm3043826042()*/ {
  ;
  (void) ((QTextInlineObject*)this_)->isValid();
   auto xptr = (bool (QTextInlineObject::*)() const ) &QTextInlineObject::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QTextInlineObjectD2Ev(void *this_)*/ {
  delete (QTextInlineObject*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextinlineobject
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
