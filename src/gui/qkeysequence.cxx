//  header block begin

// /usr/include/qt/QtGui/qkeysequence.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qkeysequence.h>
#include <QtGui>
#include "callback_inherit.h"

// QKeySequence is pure virtual: false false
// QKeySequence has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQKeySequence_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQKeySequence_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQKeySequence_t qt_meta_stringdata_MyQKeySequence = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQKeySequence"
  },
  "MyQKeySequence"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQKeySequence[] = {
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
class Q_DECL_EXPORT MyQKeySequence : public QKeySequence {
public:
  virtual ~MyQKeySequence() {}
// void QKeySequence()
MyQKeySequence() : QKeySequence() {}
// void QKeySequence(const QString &, QKeySequence::SequenceFormat)
MyQKeySequence(const QString & key, QKeySequence::SequenceFormat format) : QKeySequence(key, format) {}
// void QKeySequence(int, int, int, int)
MyQKeySequence(int k1, int k2, int k3, int k4) : QKeySequence(k1, k2, k3, k4) {}
// void QKeySequence(const QKeySequence &)
MyQKeySequence(const QKeySequence & ks) : QKeySequence(ks) {}
// void QKeySequence(QKeySequence::StandardKey)
MyQKeySequence(QKeySequence::StandardKey key) : QKeySequence(key) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qkeysequence(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:189
// [8] QKeySequence & operator=(QKeySequence &&) 
// (12)qm4039767688 (23)_ZN12QKeySequenceaSEOS_
//static
/*void qm4039767688(QKeySequence && other)*/ {
  QKeySequence && other =  static_cast<QKeySequence &&>(*(QKeySequence *)this_);
  (void) ((QKeySequence*)this_)->operator=(other);
  // auto xptr = (QKeySequence & (QKeySequence::*)(QKeySequence&&) ) &QKeySequence::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:190
// [-2] void swap(QKeySequence &) 
// (12)qm3480175524 (26)_ZN12QKeySequence4swapERS_
//static
/*void qm3480175524(QKeySequence & other)*/ {
  QKeySequence & other = *(QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->swap(other);
   auto xptr = (void (QKeySequence::*)(QKeySequence&) ) &QKeySequence::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:193
// [1] bool operator!=(const QKeySequence &) const
// (11)qm456588179 (25)_ZNK12QKeySequenceneERKS_
//static
/*void qm456588179(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator!=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:196
// [1] bool operator>(const QKeySequence &) const
// (12)qm1176792958 (25)_ZNK12QKeySequencegtERKS_
//static
/*void qm1176792958(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator>(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator>;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:198
// [1] bool operator<=(const QKeySequence &) const
// (12)qm2359945914 (25)_ZNK12QKeySequenceleERKS_
//static
/*void qm2359945914(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator<=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator<=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:200
// [1] bool operator>=(const QKeySequence &) const
// (12)qm2393816640 (25)_ZNK12QKeySequencegeERKS_
//static
/*void qm2393816640(const QKeySequence & other)*/ {
  const QKeySequence & other = *(const QKeySequence *)this_;
  (void) ((QKeySequence*)this_)->operator>=(other);
  // auto xptr = (bool (QKeySequence::*)(QKeySequence const&) const ) &QKeySequence::operator>=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:221
// [8] QKeySequence::DataPtr & data_ptr() 
// (12)qm2708692779 (28)_ZN12QKeySequence8data_ptrEv
//static
/*void qm2708692779()*/ {
  ;
  (void) ((QKeySequence*)this_)->data_ptr();
   auto xptr = (QKeySequencePrivate *& (QKeySequence::*)() ) &QKeySequence::data_ptr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN12QKeySequenceD2Ev(void *this_)*/ {
  delete (QKeySequence*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qkeysequence
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
