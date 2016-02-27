// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qcolordialog.h
// dst-file: /src/widgets/qcolordialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcolordialog.h>


#include <qcolor.h>
#include <qrgb.h>
// <= header block end

// main block begin =>
void __keep_qcolordialog_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QColorDialog_Class_Size()
{
  return sizeof(QColorDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 98, column 10>
//   // proto:  void QColorDialog::currentColorChanged(const QColor & color);
// _ZN12QColorDialog19currentColorChangedERK6QColor currentColorChanged(const class QColor &)
extern "C"
void
C_ZN12QColorDialog19currentColorChangedERK6QColor(void *qthis,
const QColor* arg1) {
  ((QColorDialog*)qthis)->currentColorChanged(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 69, column 12>
//   // proto:  QColor QColorDialog::currentColor();
// _ZNK12QColorDialog12currentColorEv currentColor()
extern "C"
QColor*
C_ZNK12QColorDialog12currentColorEv(void *qthis) {
  auto ret =
  ((QColorDialog*)qthis)->currentColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 92, column 19>
//   // proto: static QColor QColorDialog::customColor(int index);
// _ZN12QColorDialog11customColorEi customColor(int)
extern "C"
QColor*
C_ZN12QColorDialog11customColorEi(int arg1) {
  auto ret =
  QColorDialog::customColor(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 48, column 5>
//   // proto:  const QMetaObject * QColorDialog::metaObject();
// _ZNK12QColorDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QColorDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QColorDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 65, column 14>
//   // proto:  void QColorDialog::QColorDialog(const QColor & initial, QWidget * parent);
extern "C"
QColorDialog*
C_ZN12QColorDialogC2ERK6QColorP7QWidget(const QColor* arg1,
QWidget * arg2) {
  auto ret = new QColorDialog(*((const QColor*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 95, column 17>
//   // proto: static void QColorDialog::setStandardColor(int index, QColor color);
// _ZN12QColorDialog16setStandardColorEi6QColor setStandardColor(int, class QColor)
extern "C"
void
C_ZN12QColorDialog16setStandardColorEi6QColor(int arg1,
QColor* arg2) {
  QColorDialog::setStandardColor(arg1,
*((QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 79, column 10>
//   // proto:  void QColorDialog::open(QObject * receiver, const char * member);
// _ZN12QColorDialog4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN12QColorDialog4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QColorDialog*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 71, column 12>
//   // proto:  QColor QColorDialog::selectedColor();
// _ZNK12QColorDialog13selectedColorEv selectedColor()
extern "C"
QColor*
C_ZNK12QColorDialog13selectedColorEv(void *qthis) {
  auto ret =
  ((QColorDialog*)qthis)->selectedColor();
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 83, column 19>
//   // proto: static QColor QColorDialog::getColor(const QColor & initial, QWidget * parent, const QString & title, ColorDialogOptions options);
// _ZN12QColorDialog8getColorERK6QColorP7QWidgetRK7QString6QFlagsINS_17ColorDialogOptionEE getColor(const class QColor &, class QWidget *, const class QString &, ColorDialogOptions)
extern "C"
QColor*
C_ZN12QColorDialog8getColorERK6QColorP7QWidgetRK7QString6QFlagsINS_17ColorDialogOptionEE(const QColor* arg1,
QWidget * arg2,
const QString* arg3,
QColorDialog::ColorDialogOptions arg4) {
  auto ret =
  QColorDialog::getColor(*((const QColor*)arg1),
arg2,
*((const QString*)arg3),
arg4);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 75, column 10>
//   // proto:  void QColorDialog::setOptions(ColorDialogOptions options);
// _ZN12QColorDialog10setOptionsE6QFlagsINS_17ColorDialogOptionEE setOptions(ColorDialogOptions)
extern "C"
void
C_ZN12QColorDialog10setOptionsE6QFlagsINS_17ColorDialogOptionEE(void *qthis,
QColorDialog::ColorDialogOptions arg1) {
  ((QColorDialog*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 73, column 10>
//   // proto:  void QColorDialog::setOption(QColorDialog::ColorDialogOption option, bool on);
// _ZN12QColorDialog9setOptionENS_17ColorDialogOptionEb setOption(enum QColorDialog::ColorDialogOption, _Bool)
extern "C"
void
C_ZN12QColorDialog9setOptionENS_17ColorDialogOptionEb(void *qthis,
QColorDialog::ColorDialogOption arg1,
bool arg2) {
  ((QColorDialog*)qthis)->setOption(arg1,
arg2);
}
//   // proto:  void QColorDialog::~QColorDialog();
extern "C"
void C_ZN12QColorDialogD2Ev(void *qthis) {
  delete (QColorDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 81, column 10>
//   // proto:  void QColorDialog::setVisible(bool visible);
// _ZN12QColorDialog10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN12QColorDialog10setVisibleEb(void *qthis,
bool arg1) {
  ((QColorDialog*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 76, column 24>
//   // proto:  ColorDialogOptions QColorDialog::options();
// _ZNK12QColorDialog7optionsEv options()
extern "C"
QFlags<QColorDialog::ColorDialogOption>*
C_ZNK12QColorDialog7optionsEv(void *qthis) {
  auto ret =
  ((QColorDialog*)qthis)->options();
  return new QFlags<QColorDialog::ColorDialogOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 99, column 10>
//   // proto:  void QColorDialog::colorSelected(const QColor & color);
// _ZN12QColorDialog13colorSelectedERK6QColor colorSelected(const class QColor &)
extern "C"
void
C_ZN12QColorDialog13colorSelectedERK6QColor(void *qthis,
const QColor* arg1) {
  ((QColorDialog*)qthis)->colorSelected(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 68, column 10>
//   // proto:  void QColorDialog::setCurrentColor(const QColor & color);
// _ZN12QColorDialog15setCurrentColorERK6QColor setCurrentColor(const class QColor &)
extern "C"
void
C_ZN12QColorDialog15setCurrentColorERK6QColor(void *qthis,
const QColor* arg1) {
  ((QColorDialog*)qthis)->setCurrentColor(*((const QColor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 94, column 19>
//   // proto: static QColor QColorDialog::standardColor(int index);
// _ZN12QColorDialog13standardColorEi standardColor(int)
extern "C"
QColor*
C_ZN12QColorDialog13standardColorEi(int arg1) {
  auto ret =
  QColorDialog::standardColor(arg1);
  return new QColor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 89, column 17>
//   // proto: static QRgb QColorDialog::getRgba(QRgb rgba, bool * ok, QWidget * parent);
// _ZN12QColorDialog7getRgbaEjPbP7QWidget getRgba(QRgb, _Bool *, class QWidget *)
extern "C"
unsigned int
C_ZN12QColorDialog7getRgbaEjPbP7QWidget(QRgb arg1,
bool * arg2,
QWidget * arg3) {
  auto ret =
  QColorDialog::getRgba(arg1,
arg2,
arg3);
  return ret; // 0 TypeKind.UINT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 93, column 17>
//   // proto: static void QColorDialog::setCustomColor(int index, QColor color);
// _ZN12QColorDialog14setCustomColorEi6QColor setCustomColor(int, class QColor)
extern "C"
void
C_ZN12QColorDialog14setCustomColorEi6QColor(int arg1,
QColor* arg2) {
  QColorDialog::setCustomColor(arg1,
*((QColor*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 64, column 14>
//   // proto:  void QColorDialog::QColorDialog(QWidget * parent);
extern "C"
QColorDialog*
C_ZN12QColorDialogC2EP7QWidget(QWidget * arg1) {
  auto ret = new QColorDialog(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 91, column 16>
//   // proto: static int QColorDialog::customCount();
// _ZN12QColorDialog11customCountEv customCount()
extern "C"
int
C_ZN12QColorDialog11customCountEv() {
  auto ret =
  QColorDialog::customCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcolordialog.h', line 74, column 10>
//   // proto:  bool QColorDialog::testOption(QColorDialog::ColorDialogOption option);
// _ZNK12QColorDialog10testOptionENS_17ColorDialogOptionE testOption(enum QColorDialog::ColorDialogOption)
extern "C"
bool
C_ZNK12QColorDialog10testOptionENS_17ColorDialogOptionE(void *qthis,
QColorDialog::ColorDialogOption arg1) {
  auto ret =
  ((QColorDialog*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QColorDialog_SlotProxy here
class QColorDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QColorDialog_SlotProxy():QObject(){}

public slots:
  // currentColorChanged(const class QColor &)
  void slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN12QColorDialog19currentColorChangedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public slots:
  // colorSelected(const class QColor &)
  void slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0);
public:
  void (*slot_func__ZN12QColorDialog13colorSelectedERK6QColor)(void* rsfptr, const QColor & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcolordialog.moc"

extern "C" {
  QColorDialog_SlotProxy* QColorDialog_SlotProxy_new()
  {
    return new QColorDialog_SlotProxy();
  }
};

void QColorDialog_SlotProxy::slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QColorDialog_SlotProxy_connect__ZN12QColorDialog19currentColorChangedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColorDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor = (decltype(that->slot_func__ZN12QColorDialog19currentColorChangedERK6QColor))ffifptr;
  QObject::connect((QColorDialog*)sender, SIGNAL(currentColorChanged(const class QColor &)), that, SLOT(slot_proxy_func__ZN12QColorDialog19currentColorChangedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QColorDialog_SlotProxy_disconnect__ZN12QColorDialog19currentColorChangedERK6QColor(QColorDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QColorDialog_SlotProxy::slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0) {
  if (this->slot_func__ZN12QColorDialog13colorSelectedERK6QColor != NULL) {
    // do smth...
    this->slot_func__ZN12QColorDialog13colorSelectedERK6QColor(this->rsfptr, arg0);
  }
}
extern "C"
void* QColorDialog_SlotProxy_connect__ZN12QColorDialog13colorSelectedERK6QColor(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QColorDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QColorDialog13colorSelectedERK6QColor = (decltype(that->slot_func__ZN12QColorDialog13colorSelectedERK6QColor))ffifptr;
  QObject::connect((QColorDialog*)sender, SIGNAL(colorSelected(const class QColor &)), that, SLOT(slot_proxy_func__ZN12QColorDialog13colorSelectedERK6QColor(const QColor & arg0)));
  return that;
}
extern "C"
void QColorDialog_SlotProxy_disconnect__ZN12QColorDialog13colorSelectedERK6QColor(QColorDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

