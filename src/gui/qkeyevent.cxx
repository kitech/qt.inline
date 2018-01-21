//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:328
// void QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, const class QString &, _Bool, ushort)
extern "C"
void* C_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEERK7QStringbt(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, const QString & text, bool autorep, ushort count) {
  return new QKeyEvent(type, key, modifiers, text, autorep, count);
}
// /usr/include/qt/QtGui/qevent.h:330
// void QKeyEvent(enum QEvent::Type, int, Qt::KeyboardModifiers, quint32, quint32, quint32, const class QString &, _Bool, ushort)
extern "C"
void* C_ZN9QKeyEventC1EN6QEvent4TypeEi6QFlagsIN2Qt16KeyboardModifierEEjjjRK7QStringbt(QEvent::Type type, int key, QFlags<Qt::KeyboardModifier> modifiers, quint32 nativeScanCode, quint32 nativeVirtualKey, quint32 nativeModifiers, const QString & text, bool autorep, ushort count) {
  return new QKeyEvent(type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, text, autorep, count);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:333
// void ~QKeyEvent()
extern "C"
void C_ZN9QKeyEventD1Ev(void *this_) {
  delete (QKeyEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:335
// int key()
extern "C"
void C_ZNK9QKeyEvent3keyEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->key();
}
// /usr/include/qt/QtGui/qevent.h:337
// bool matches(class QKeySequence::StandardKey)
extern "C"
void C_ZNK9QKeyEvent7matchesEN12QKeySequence11StandardKeyE(void *this_, QKeySequence::StandardKey key) {
  /*return*/ ((QKeyEvent*)this_)->matches(key);
}
// /usr/include/qt/QtGui/qevent.h:339
// Qt::KeyboardModifiers modifiers()
extern "C"
void C_ZNK9QKeyEvent9modifiersEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->modifiers();
}
// inline
// /usr/include/qt/QtGui/qevent.h:340
// QString text()
extern "C"
void C_ZNK9QKeyEvent4textEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->text();
}
// inline
// /usr/include/qt/QtGui/qevent.h:341
// bool isAutoRepeat()
extern "C"
void C_ZNK9QKeyEvent12isAutoRepeatEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->isAutoRepeat();
}
// inline
// /usr/include/qt/QtGui/qevent.h:342
// int count()
extern "C"
void C_ZNK9QKeyEvent5countEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->count();
}
// inline
// /usr/include/qt/QtGui/qevent.h:344
// quint32 nativeScanCode()
extern "C"
void C_ZNK9QKeyEvent14nativeScanCodeEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->nativeScanCode();
}
// inline
// /usr/include/qt/QtGui/qevent.h:345
// quint32 nativeVirtualKey()
extern "C"
void C_ZNK9QKeyEvent16nativeVirtualKeyEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->nativeVirtualKey();
}
// inline
// /usr/include/qt/QtGui/qevent.h:346
// quint32 nativeModifiers()
extern "C"
void C_ZNK9QKeyEvent15nativeModifiersEv(void *this_) {
  /*return*/ ((QKeyEvent*)this_)->nativeModifiers();
}
//  main block end
