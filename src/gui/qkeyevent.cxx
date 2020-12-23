//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QKeyEvent is pure virtual: false false
// QKeyEvent has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qkeyevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:380
// [-2] void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, const QString &, bool, ushort) 
// (12)qm3101255376 (75)_ZN9QKeyEventC2EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt
/*void* qm3101255376(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString & text, bool autorep, unsigned short count)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; int key = *(int*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; const QString & text = *(const QString *)this_; bool autorep = *(bool*)this_; unsigned short count = *(unsigned short*)this_;
  this_ =  new QKeyEvent(type_, key, modifiers, text, autorep, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:382
// [-2] void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const QString &, bool, ushort) 
// (12)qm2402215125 (78)_ZN9QKeyEventC2EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEEjjjRK7QStringbt
/*void* qm2402215125(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, unsigned int nativeScanCode, unsigned int nativeVirtualKey, unsigned int nativeModifiers, const QString & text, bool autorep, unsigned short count)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_; int key = *(int*)this_; QFlags<Qt::KeyboardModifier> modifiers = *(QFlags<Qt::KeyboardModifier>*)this_; unsigned int nativeScanCode = *(unsigned int*)this_; unsigned int nativeVirtualKey = *(unsigned int*)this_; unsigned int nativeModifiers = *(unsigned int*)this_; const QString & text = *(const QString *)this_; bool autorep = *(bool*)this_; unsigned short count = *(unsigned short*)this_;
  this_ =  new QKeyEvent(type_, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:387
// [4] int key() const
// (12)qm3921584077 (20)_ZNK9QKeyEvent3keyEv
//static
/*void qm3921584077()*/ {
  ;
  (void) ((QKeyEvent*)this_)->key();
   auto xptr = (int (QKeyEvent::*)() const ) &QKeyEvent::key;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:392
// [8] QString text() const
// (12)qm3489740836 (21)_ZNK9QKeyEvent4textEv
//static
/*void qm3489740836()*/ {
  ;
  (void) ((QKeyEvent*)this_)->text();
   auto xptr = (QString (QKeyEvent::*)() const ) &QKeyEvent::text;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:393
// [1] bool isAutoRepeat() const
// (12)qm3618180515 (30)_ZNK9QKeyEvent12isAutoRepeatEv
//static
/*void qm3618180515()*/ {
  ;
  (void) ((QKeyEvent*)this_)->isAutoRepeat();
   auto xptr = (bool (QKeyEvent::*)() const ) &QKeyEvent::isAutoRepeat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:394
// [4] int count() const
// (12)qm2383005192 (22)_ZNK9QKeyEvent5countEv
//static
/*void qm2383005192()*/ {
  ;
  (void) ((QKeyEvent*)this_)->count();
   auto xptr = (int (QKeyEvent::*)() const ) &QKeyEvent::count;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:396
// [4] quint32 nativeScanCode() const
// (12)qm1110117359 (32)_ZNK9QKeyEvent14nativeScanCodeEv
//static
/*void qm1110117359()*/ {
  ;
  (void) ((QKeyEvent*)this_)->nativeScanCode();
   auto xptr = (unsigned int (QKeyEvent::*)() const ) &QKeyEvent::nativeScanCode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:397
// [4] quint32 nativeVirtualKey() const
// (12)qm3927640315 (34)_ZNK9QKeyEvent16nativeVirtualKeyEv
//static
/*void qm3927640315()*/ {
  ;
  (void) ((QKeyEvent*)this_)->nativeVirtualKey();
   auto xptr = (unsigned int (QKeyEvent::*)() const ) &QKeyEvent::nativeVirtualKey;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:398
// [4] quint32 nativeModifiers() const
// (12)qm2110805296 (33)_ZNK9QKeyEvent15nativeModifiersEv
//static
/*void qm2110805296()*/ {
  ;
  (void) ((QKeyEvent*)this_)->nativeModifiers();
   auto xptr = (unsigned int (QKeyEvent::*)() const ) &QKeyEvent::nativeModifiers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QKeyEventD2Ev(void *this_)*/ {
  delete (QKeyEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qkeyevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
