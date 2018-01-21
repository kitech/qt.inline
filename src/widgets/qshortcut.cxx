//  header block begin
// /usr/include/qt/QtWidgets/qshortcut.h
#include <qshortcut.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qshortcut.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK9QShortcut10metaObjectEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qshortcut.h:62
// void QShortcut(class QWidget *)
extern "C"
void* C_ZN9QShortcutC1EP7QWidget(QWidget * parent) {
  return new QShortcut(parent);
}
// /usr/include/qt/QtWidgets/qshortcut.h:63
// void QShortcut(const class QKeySequence &, class QWidget *, const char *, const char *, Qt::ShortcutContext)
extern "C"
void* C_ZN9QShortcutC1ERK12QKeySequenceP7QWidgetPKcS6_N2Qt15ShortcutContextE(const QKeySequence & key, QWidget * parent, const char * member, const char * ambiguousMember, Qt::ShortcutContext context) {
  return new QShortcut(key, parent, member, ambiguousMember, context);
}
// virtual
// /usr/include/qt/QtWidgets/qshortcut.h:66
// void ~QShortcut()
extern "C"
void C_ZN9QShortcutD1Ev(void *this_) {
  delete (QShortcut*)(this_);
}
// /usr/include/qt/QtWidgets/qshortcut.h:68
// void setKey(const class QKeySequence &)
extern "C"
void C_ZN9QShortcut6setKeyERK12QKeySequence(void *this_, const QKeySequence & key) {
  ((QShortcut*)this_)->setKey(key);
}
// /usr/include/qt/QtWidgets/qshortcut.h:69
// QKeySequence key()
extern "C"
void C_ZNK9QShortcut3keyEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->key();
}
// /usr/include/qt/QtWidgets/qshortcut.h:71
// void setEnabled(_Bool)
extern "C"
void C_ZN9QShortcut10setEnabledEb(void *this_, bool enable) {
  ((QShortcut*)this_)->setEnabled(enable);
}
// /usr/include/qt/QtWidgets/qshortcut.h:72
// bool isEnabled()
extern "C"
void C_ZNK9QShortcut9isEnabledEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->isEnabled();
}
// /usr/include/qt/QtWidgets/qshortcut.h:74
// void setContext(Qt::ShortcutContext)
extern "C"
void C_ZN9QShortcut10setContextEN2Qt15ShortcutContextE(void *this_, Qt::ShortcutContext context) {
  ((QShortcut*)this_)->setContext(context);
}
// /usr/include/qt/QtWidgets/qshortcut.h:75
// Qt::ShortcutContext context()
extern "C"
void C_ZNK9QShortcut7contextEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->context();
}
// /usr/include/qt/QtWidgets/qshortcut.h:77
// void setWhatsThis(const class QString &)
extern "C"
void C_ZN9QShortcut12setWhatsThisERK7QString(void *this_, const QString & text) {
  ((QShortcut*)this_)->setWhatsThis(text);
}
// /usr/include/qt/QtWidgets/qshortcut.h:78
// QString whatsThis()
extern "C"
void C_ZNK9QShortcut9whatsThisEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->whatsThis();
}
// /usr/include/qt/QtWidgets/qshortcut.h:80
// void setAutoRepeat(_Bool)
extern "C"
void C_ZN9QShortcut13setAutoRepeatEb(void *this_, bool on) {
  ((QShortcut*)this_)->setAutoRepeat(on);
}
// /usr/include/qt/QtWidgets/qshortcut.h:81
// bool autoRepeat()
extern "C"
void C_ZNK9QShortcut10autoRepeatEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->autoRepeat();
}
// /usr/include/qt/QtWidgets/qshortcut.h:83
// int id()
extern "C"
void C_ZNK9QShortcut2idEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->id();
}
// inline
// /usr/include/qt/QtWidgets/qshortcut.h:85
// QWidget * parentWidget()
extern "C"
void C_ZNK9QShortcut12parentWidgetEv(void *this_) {
  /*return*/ ((QShortcut*)this_)->parentWidget();
}
// /usr/include/qt/QtWidgets/qshortcut.h:89
// void activated()
extern "C"
void C_ZN9QShortcut9activatedEv(void *this_) {
  ((QShortcut*)this_)->activated();
}
// /usr/include/qt/QtWidgets/qshortcut.h:90
// void activatedAmbiguously()
extern "C"
void C_ZN9QShortcut20activatedAmbiguouslyEv(void *this_) {
  ((QShortcut*)this_)->activatedAmbiguously();
}
//  main block end
