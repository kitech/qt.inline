//  header block begin
// /usr/include/qt/QtWidgets/qcolordialog.h
#include <qcolordialog.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColorDialog is pure virtual: false
// QColorDialog has virtual projected: true
//  header block end

//  main block begin

class MyQColorDialog : public QColorDialog {
public:
  virtual ~MyQColorDialog() {}
// void QColorDialog(class QWidget *)
MyQColorDialog(QWidget * parent) : QColorDialog(parent) {}
// void QColorDialog(const class QColor &, class QWidget *)
MyQColorDialog(const QColor & initial, QWidget * parent) : QColorDialog(initial, parent) {}
// void changeEvent(class QEvent *)
  virtual void changeEvent(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"changeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColorDialog::changeEvent(event);
  }
  }
// void done(int)
  virtual void done(int result) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"done", &handled, 1, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColorDialog::done(result);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QColorDialog10metaObjectEv(void *this_) {
  return (void*)((QColorDialog*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:71
// [-2] void QColorDialog(class QWidget *)
extern "C"
void* C_ZN12QColorDialogC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQColorDialog*)(0);
  return  new MyQColorDialog(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:72
// [-2] void QColorDialog(const class QColor &, class QWidget *)
extern "C"
void* C_ZN12QColorDialogC2ERK6QColorP7QWidget(QColor* initial, QWidget * parent) {
  auto _nilp = (MyQColorDialog*)(0);
  return  new MyQColorDialog(*initial, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:73
// [-2] void ~QColorDialog()
extern "C"
void C_ZN12QColorDialogD2Ev(void *this_) {
  delete (QColorDialog*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:75
// [-2] void setCurrentColor(const class QColor &)
extern "C"
void C_ZN12QColorDialog15setCurrentColorERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->setCurrentColor(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:76
// [16] QColor currentColor()
extern "C"
void* C_ZNK12QColorDialog12currentColorEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->currentColor();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:78
// [16] QColor selectedColor()
extern "C"
void* C_ZNK12QColorDialog13selectedColorEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->selectedColor();
return new QColor(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:80
// [-2] void setOption(enum QColorDialog::ColorDialogOption, _Bool)
extern "C"
void C_ZN12QColorDialog9setOptionENS_17ColorDialogOptionEb(void *this_, QColorDialog::ColorDialogOption option, bool on) {
  ((QColorDialog*)this_)->setOption(option, on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:81
// [1] bool testOption(enum QColorDialog::ColorDialogOption)
extern "C"
bool C_ZNK12QColorDialog10testOptionENS_17ColorDialogOptionE(void *this_, QColorDialog::ColorDialogOption option) {
  return (bool)((QColorDialog*)this_)->testOption(option);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:82
// [-2] void setOptions(QColorDialog::ColorDialogOptions)
extern "C"
void C_ZN12QColorDialog10setOptionsE6QFlagsINS_17ColorDialogOptionEE(void *this_, QFlags<QColorDialog::ColorDialogOption> options) {
  ((QColorDialog*)this_)->setOptions(options);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:83
// [4] QColorDialog::ColorDialogOptions options()
extern "C"
void C_ZNK12QColorDialog7optionsEv(void *this_) {
  auto rv = ((QColorDialog*)this_)->options();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:86
// [-2] void open(class QObject *, const char *)
extern "C"
void C_ZN12QColorDialog4openEP7QObjectPKc(void *this_, QObject * receiver, const char * member) {
  ((QColorDialog*)this_)->open(receiver, member);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:88
// [-2] void setVisible(_Bool)
extern "C"
void C_ZN12QColorDialog10setVisibleEb(void *this_, bool visible) {
  ((QColorDialog*)this_)->setVisible(visible);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:90
// [16] QColor getColor(const class QColor &, class QWidget *, const class QString &, QColorDialog::ColorDialogOptions)
extern "C"
void* C_ZN12QColorDialog8getColorERK6QColorP7QWidgetRK7QString6QFlagsINS_17ColorDialogOptionEE(QColor* initial, QWidget * parent, QString* title, QFlags<QColorDialog::ColorDialogOption> options) {
  auto rv = QColorDialog::getColor(*initial, parent, *title, options);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:96
// [4] QRgb getRgba(QRgb, _Bool *, class QWidget *)
extern "C"
QRgb C_ZN12QColorDialog7getRgbaEjPbP7QWidget(QRgb rgba, bool * ok, QWidget * parent) {
  return (QRgb)QColorDialog::getRgba(rgba, ok, parent);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:98
// [4] int customCount()
extern "C"
int C_ZN12QColorDialog11customCountEv() {
  return (int)QColorDialog::customCount();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:99
// [16] QColor customColor(int)
extern "C"
void* C_ZN12QColorDialog11customColorEi(int index) {
  auto rv = QColorDialog::customColor(index);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:100
// [-2] void setCustomColor(int, class QColor)
extern "C"
void C_ZN12QColorDialog14setCustomColorEi6QColor(int index, QColor* color) {
  QColorDialog::setCustomColor(index, *color);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:101
// [16] QColor standardColor(int)
extern "C"
void* C_ZN12QColorDialog13standardColorEi(int index) {
  auto rv = QColorDialog::standardColor(index);
return new QColor(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:102
// [-2] void setStandardColor(int, class QColor)
extern "C"
void C_ZN12QColorDialog16setStandardColorEi6QColor(int index, QColor* color) {
  QColorDialog::setStandardColor(index, *color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:105
// [-2] void currentColorChanged(const class QColor &)
extern "C"
void C_ZN12QColorDialog19currentColorChangedERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->currentColorChanged(*color);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:106
// [-2] void colorSelected(const class QColor &)
extern "C"
void C_ZN12QColorDialog13colorSelectedERK6QColor(void *this_, QColor* color) {
  ((QColorDialog*)this_)->colorSelected(*color);
}
//  main block end
