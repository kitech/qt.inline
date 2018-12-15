//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QKeyEvent is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:331
// [-2] void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, const QString &, bool, ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN9QKeyEventC2EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, QString* text, bool autorep, ushort count) {
  return  new QKeyEvent(type_, key, modifiers, *text, autorep, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:333
// [-2] void QKeyEvent(QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const QString &, bool, ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN9QKeyEventC2EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEEjjjRK7QStringbt(QEvent::Type type_, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, QString* text, bool autorep, ushort count) {
  return  new QKeyEvent(type_, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, *text, autorep, count);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:336
// [-2] void ~QKeyEvent()
extern "C" Q_DECL_EXPORT
void C_ZN9QKeyEventD2Ev(void *this_) {
  delete (QKeyEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:338
// [4] int key()
extern "C" Q_DECL_EXPORT
int C_ZNK9QKeyEvent3keyEv(void *this_) {
  return (int)((QKeyEvent*)this_)->key();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qevent.h:340
// [1] bool matches(QKeySequence::StandardKey)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
bool C_ZNK9QKeyEvent7matchesEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey key) {
  return (bool)((QKeyEvent*)this_)->matches(key);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:342
// [4] Qt::KeyboardModifiers modifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZNK9QKeyEvent9modifiersEv(void *this_) {
  return (Qt::KeyboardModifiers)((QKeyEvent*)this_)->modifiers();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:343
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QKeyEvent4textEv(void *this_) {
  auto rv = ((QKeyEvent*)this_)->text();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:344
// [1] bool isAutoRepeat()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QKeyEvent12isAutoRepeatEv(void *this_) {
  return (bool)((QKeyEvent*)this_)->isAutoRepeat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:345
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK9QKeyEvent5countEv(void *this_) {
  return (int)((QKeyEvent*)this_)->count();
}

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qevent.h:347
// [4] quint32 nativeScanCode()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
quint32 C_ZNK9QKeyEvent14nativeScanCodeEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeScanCode();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qevent.h:348
// [4] quint32 nativeVirtualKey()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
quint32 C_ZNK9QKeyEvent16nativeVirtualKeyEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeVirtualKey();
}
#endif // QT_VERSION >= 0x040200

// Public inline Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qevent.h:349
// [4] quint32 nativeModifiers()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
quint32 C_ZNK9QKeyEvent15nativeModifiersEv(void *this_) {
  return (quint32)((QKeyEvent*)this_)->nativeModifiers();
}
#endif // QT_VERSION >= 0x040200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
