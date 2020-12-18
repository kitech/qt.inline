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


struct qt_meta_stringdata_MyQKeyEvent_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQKeyEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQKeyEvent_t qt_meta_stringdata_MyQKeyEvent = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQKeyEvent"
  },
  "MyQKeyEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQKeyEvent[] = {
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
class Q_DECL_EXPORT MyQKeyEvent : public QKeyEvent {
public:
  virtual ~MyQKeyEvent() {}
// void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, const QString &, bool, ushort)
MyQKeyEvent(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString & text, bool autorep, ushort count) : QKeyEvent(type_, key, modifiers, text, autorep, count) {}
// void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const QString &, bool, ushort)
MyQKeyEvent(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString & text, bool autorep, ushort count) : QKeyEvent(type_, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qkeyevent(void* this_) {
  uint64_t fnptrsumval = 0;

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
