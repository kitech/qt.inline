//  header block begin
// /usr/include/qt/QtWidgets/qcolordialog.h
#include <qcolordialog.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qcolordialog.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QColorDialog10metaObjectEv(void *this_) {
  /*return*/ ((QColorDialog*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcolordialog.h:70
// void QColorDialog(class QWidget *)
extern "C"
void* C_ZN12QColorDialogC1EP7QWidget(QWidget * parent) {
  return new QColorDialog(parent);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:71
// void QColorDialog(const class QColor &, class QWidget *)
extern "C"
void* C_ZN12QColorDialogC1ERK6QColorP7QWidget(const QColor & initial, QWidget * parent) {
  return new QColorDialog(initial, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcolordialog.h:72
// void ~QColorDialog()
extern "C"
void C_ZN12QColorDialogD1Ev(void *this_) {
  delete (QColorDialog*)(this_);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:74
// void setCurrentColor(const class QColor &)
extern "C"
void C_ZN12QColorDialog15setCurrentColorERK6QColor(void *this_, const QColor & color) {
  ((QColorDialog*)this_)->setCurrentColor(color);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:75
// QColor currentColor()
extern "C"
void C_ZNK12QColorDialog12currentColorEv(void *this_) {
  /*return*/ ((QColorDialog*)this_)->currentColor();
}
// /usr/include/qt/QtWidgets/qcolordialog.h:77
// QColor selectedColor()
extern "C"
void C_ZNK12QColorDialog13selectedColorEv(void *this_) {
  /*return*/ ((QColorDialog*)this_)->selectedColor();
}
// /usr/include/qt/QtWidgets/qcolordialog.h:79
// void setOption(enum QColorDialog::ColorDialogOption, _Bool)
extern "C"
void C_ZN12QColorDialog9setOptionENS_17ColorDialogOptionEb(void *this_, QColorDialog::ColorDialogOption option, bool on) {
  ((QColorDialog*)this_)->setOption(option, on);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:80
// bool testOption(enum QColorDialog::ColorDialogOption)
extern "C"
void C_ZNK12QColorDialog10testOptionENS_17ColorDialogOptionE(void *this_, QColorDialog::ColorDialogOption option) {
  /*return*/ ((QColorDialog*)this_)->testOption(option);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:81
// void setOptions(ColorDialogOptions)
extern "C"
void C_ZN12QColorDialog10setOptionsE6QFlagsINS_17ColorDialogOptionEE(void *this_, QFlags<QColorDialog::ColorDialogOption> options) {
  ((QColorDialog*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:82
// ColorDialogOptions options()
extern "C"
void C_ZNK12QColorDialog7optionsEv(void *this_) {
  /*return*/ ((QColorDialog*)this_)->options();
}
// /usr/include/qt/QtWidgets/qcolordialog.h:85
// void open(class QObject *, const char *)
extern "C"
void C_ZN12QColorDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QColorDialog*)this_)->open(receiver, member);
}
// virtual
// /usr/include/qt/QtWidgets/qcolordialog.h:87
// void setVisible(_Bool)
extern "C"
void C_ZN12QColorDialog10setVisibleEb(void *this_, bool visible) {
  ((QColorDialog*)this_)->setVisible(visible);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:89
// QColor getColor(const class QColor &, class QWidget *, const class QString &, ColorDialogOptions)
extern "C"
void C_ZN12QColorDialog8getColorERK6QColorP7QWidgetRK7QString6QFlagsINS_17ColorDialogOptionEE(const QColor & initial, QWidget * parent, const QString & title, QFlags<QColorDialog::ColorDialogOption> options) {
  /*return*/ QColorDialog::getColor(initial, parent, title, options);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:95
// QRgb getRgba(QRgb, _Bool *, class QWidget *)
extern "C"
void C_ZN12QColorDialog7getRgbaEjPbP7QWidget(QRgb rgba, bool * ok, QWidget * parent) {
  /*return*/ QColorDialog::getRgba(rgba, ok, parent);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:97
// int customCount()
extern "C"
void C_ZN12QColorDialog11customCountEv() {
  /*return*/ QColorDialog::customCount();
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:98
// QColor customColor(int)
extern "C"
void C_ZN12QColorDialog11customColorEi(int index) {
  /*return*/ QColorDialog::customColor(index);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:99
// void setCustomColor(int, class QColor)
extern "C"
void C_ZN12QColorDialog14setCustomColorEi6QColor(int index, QColor color) {
  QColorDialog::setCustomColor(index, color);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:100
// QColor standardColor(int)
extern "C"
void C_ZN12QColorDialog13standardColorEi(int index) {
  /*return*/ QColorDialog::standardColor(index);
}
// static
// /usr/include/qt/QtWidgets/qcolordialog.h:101
// void setStandardColor(int, class QColor)
extern "C"
void C_ZN12QColorDialog16setStandardColorEi6QColor(int index, QColor color) {
  QColorDialog::setStandardColor(index, color);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:104
// void currentColorChanged(const class QColor &)
extern "C"
void C_ZN12QColorDialog19currentColorChangedERK6QColor(void *this_, const QColor & color) {
  ((QColorDialog*)this_)->currentColorChanged(color);
}
// /usr/include/qt/QtWidgets/qcolordialog.h:105
// void colorSelected(const class QColor &)
extern "C"
void C_ZN12QColorDialog13colorSelectedERK6QColor(void *this_, const QColor & color) {
  ((QColorDialog*)this_)->colorSelected(color);
}
//  main block end
