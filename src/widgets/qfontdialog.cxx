// /usr/include/qt/QtWidgets/qfontdialog.h
#include <qfontdialog.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qfontdialog.h:56
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFontDialog10metaObjectEv(void *this_) {
  /*return*/ ((QFontDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qfontdialog.h:74
// void QFontDialog(class QWidget *)
extern "C"
void* C_ZN11QFontDialogC1EP7QWidget(QWidget * parent) {
  return new QFontDialog(parent);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:75
// void QFontDialog(const class QFont &, class QWidget *)
extern "C"
void* C_ZN11QFontDialogC1ERK5QFontP7QWidget(const QFont & initial, QWidget * parent) {
  return new QFontDialog(initial, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfontdialog.h:76
// void ~QFontDialog()
extern "C"
void C_ZN11QFontDialogD1Ev(void *this_) {
  delete (QFontDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:78
// void setCurrentFont(const class QFont &)
extern "C"
void C_ZN11QFontDialog14setCurrentFontERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->setCurrentFont(font);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:79
// QFont currentFont()
extern "C"
void C_ZNK11QFontDialog11currentFontEv(void *this_) {
  /*return*/ ((QFontDialog*)this_)->currentFont();
}
// /usr/include/qt/QtWidgets/qfontdialog.h:81
// QFont selectedFont()
extern "C"
void C_ZNK11QFontDialog12selectedFontEv(void *this_) {
  /*return*/ ((QFontDialog*)this_)->selectedFont();
}
// /usr/include/qt/QtWidgets/qfontdialog.h:83
// void setOption(enum QFontDialog::FontDialogOption, _Bool)
extern "C"
void C_ZN11QFontDialog9setOptionENS_16FontDialogOptionEb(void *this_, QFontDialog::FontDialogOption option, bool on) {
  ((QFontDialog*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:84
// bool testOption(enum QFontDialog::FontDialogOption)
extern "C"
void C_ZNK11QFontDialog10testOptionENS_16FontDialogOptionE(void *this_, QFontDialog::FontDialogOption option) {
  /*return*/ ((QFontDialog*)this_)->testOption(option);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:85
// void setOptions(FontDialogOptions)
extern "C"
void C_ZN11QFontDialog10setOptionsE6QFlagsINS_16FontDialogOptionEE(void *this_, QFlags<QFontDialog::FontDialogOption> options) {
  ((QFontDialog*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:86
// FontDialogOptions options()
extern "C"
void C_ZNK11QFontDialog7optionsEv(void *this_) {
  /*return*/ ((QFontDialog*)this_)->options();
}
// /usr/include/qt/QtWidgets/qfontdialog.h:89
// void open(class QObject *, const char *)
extern "C"
void C_ZN11QFontDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QFontDialog*)this_)->open(receiver, member);
}
// virtual
// /usr/include/qt/QtWidgets/qfontdialog.h:91
// void setVisible(_Bool)
extern "C"
void C_ZN11QFontDialog10setVisibleEb(void *this_, bool visible) {
  ((QFontDialog*)this_)->setVisible(visible);
}
// static
// /usr/include/qt/QtWidgets/qfontdialog.h:93
// QFont getFont(_Bool *, class QWidget *)
extern "C"
void C_ZN11QFontDialog7getFontEPbP7QWidget(bool * ok, QWidget * parent) {
  /*return*/ QFontDialog::getFont(ok, parent);
}
// static
// /usr/include/qt/QtWidgets/qfontdialog.h:94
// QFont getFont(_Bool *, const class QFont &, class QWidget *, const class QString &, FontDialogOptions)
extern "C"
void C_ZN11QFontDialog7getFontEPbRK5QFontP7QWidgetRK7QString6QFlagsINS_16FontDialogOptionEE(bool * ok, const QFont & initial, QWidget * parent, const QString & title, QFlags<QFontDialog::FontDialogOption> options) {
  /*return*/ QFontDialog::getFont(ok, initial, parent, title, options);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:98
// void currentFontChanged(const class QFont &)
extern "C"
void C_ZN11QFontDialog18currentFontChangedERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->currentFontChanged(font);
}
// /usr/include/qt/QtWidgets/qfontdialog.h:99
// void fontSelected(const class QFont &)
extern "C"
void C_ZN11QFontDialog12fontSelectedERK5QFont(void *this_, const QFont & font) {
  ((QFontDialog*)this_)->fontSelected(font);
}