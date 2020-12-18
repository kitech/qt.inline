//  header block begin

// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextBlock is pure virtual: false false
// QTextBlock has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBlock_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBlock_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBlock_t qt_meta_stringdata_MyQTextBlock = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTextBlock"
  },
  "MyQTextBlock"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBlock[] = {
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
class Q_DECL_EXPORT MyQTextBlock : public QTextBlock {
public:
  virtual ~MyQTextBlock() {}
// void QTextBlock(QTextDocumentPrivate *, int)
MyQTextBlock(QTextDocumentPrivate * priv, int b) : QTextBlock(priv, b) {}
// void QTextBlock()
MyQTextBlock() : QTextBlock() {}
// void QTextBlock(const QTextBlock &)
MyQTextBlock(const QTextBlock & o) : QTextBlock(o) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextblock(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:205
// [-2] void QTextBlock(QTextDocumentPrivate *, int) 
// (12)qm3172116198 (42)_ZN10QTextBlockC2EP20QTextDocumentPrivatei
/*void* qm3172116198(QTextDocumentPrivate * priv, int b)*/{
  QTextDocumentPrivate * priv = *(QTextDocumentPrivate **)this_; int b = *(int*)this_;
  this_ =  new QTextBlock(priv, b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:206
// [-2] void QTextBlock() 
// (12)qm1178354496 (19)_ZN10QTextBlockC2Ev
/*void* qm1178354496()*/{
  ;
  this_ =  new QTextBlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:207
// [-2] void QTextBlock(const QTextBlock &) 
// (12)qm1111305327 (22)_ZN10QTextBlockC2ERKS_
/*void* qm1111305327(const QTextBlock & o)*/{
  const QTextBlock & o = *(const QTextBlock *)this_;
  this_ =  new QTextBlock(o);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:208
// [16] QTextBlock & operator=(const QTextBlock &) 
// (12)qm3652704293 (22)_ZN10QTextBlockaSERKS_
//static
/*void qm3652704293(const QTextBlock & o)*/ {
  const QTextBlock & o = *(const QTextBlock *)this_;
  (void) ((QTextBlock*)this_)->operator=(o);
  // auto xptr = (QTextBlock & (QTextBlock::*)(QTextBlock const&) ) &QTextBlock::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:212
// [1] bool operator==(const QTextBlock &) const
// (12)qm4138973395 (23)_ZNK10QTextBlockeqERKS_
//static
/*void qm4138973395(const QTextBlock & o)*/ {
  const QTextBlock & o = *(const QTextBlock *)this_;
  (void) ((QTextBlock*)this_)->operator==(o);
  // auto xptr = (bool (QTextBlock::*)(QTextBlock const&) const ) &QTextBlock::operator==;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:213
// [1] bool operator!=(const QTextBlock &) const
// (12)qm1827908772 (23)_ZNK10QTextBlockneERKS_
//static
/*void qm1827908772(const QTextBlock & o)*/ {
  const QTextBlock & o = *(const QTextBlock *)this_;
  (void) ((QTextBlock*)this_)->operator!=(o);
  // auto xptr = (bool (QTextBlock::*)(QTextBlock const&) const ) &QTextBlock::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:214
// [1] bool operator<(const QTextBlock &) const
// (11)qm870739123 (23)_ZNK10QTextBlockltERKS_
//static
/*void qm870739123(const QTextBlock & o)*/ {
  const QTextBlock & o = *(const QTextBlock *)this_;
  (void) ((QTextBlock*)this_)->operator<(o);
  // auto xptr = (bool (QTextBlock::*)(QTextBlock const&) const ) &QTextBlock::operator<;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:290
// [8] QTextDocumentPrivate * docHandle() const
// (12)qm3418960443 (28)_ZNK10QTextBlock9docHandleEv
//static
/*void qm3418960443()*/ {
  ;
  (void) ((QTextBlock*)this_)->docHandle();
   auto xptr = (QTextDocumentPrivate * (QTextBlock::*)() const ) &QTextBlock::docHandle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:291
// [4] int fragmentIndex() const
// (12)qm3070935678 (33)_ZNK10QTextBlock13fragmentIndexEv
//static
/*void qm3070935678()*/ {
  ;
  (void) ((QTextBlock*)this_)->fragmentIndex();
   auto xptr = (int (QTextBlock::*)() const ) &QTextBlock::fragmentIndex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QTextBlockD2Ev(void *this_)*/ {
  delete (QTextBlock*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextblock
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
