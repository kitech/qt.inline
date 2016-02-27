// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qfontdialog.h
// dst-file: /src/widgets/qfontdialog.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qfontdialog.h>


#include <qfont.h>
// <= header block end

// main block begin =>
void __keep_qfontdialog_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFontDialog_Class_Size()
{
  return sizeof(QFontDialog);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 68, column 14>
//   // proto:  void QFontDialog::QFontDialog(QWidget * parent);
extern "C"
QFontDialog*
C_ZN11QFontDialogC2EP7QWidget(QWidget * arg1) {
  auto ret = new QFontDialog(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 79, column 10>
//   // proto:  void QFontDialog::setOptions(FontDialogOptions options);
// _ZN11QFontDialog10setOptionsE6QFlagsINS_16FontDialogOptionEE setOptions(FontDialogOptions)
extern "C"
void
C_ZN11QFontDialog10setOptionsE6QFlagsINS_16FontDialogOptionEE(void *qthis,
QFontDialog::FontDialogOptions arg1) {
  ((QFontDialog*)qthis)->setOptions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 78, column 10>
//   // proto:  bool QFontDialog::testOption(QFontDialog::FontDialogOption option);
// _ZNK11QFontDialog10testOptionENS_16FontDialogOptionE testOption(enum QFontDialog::FontDialogOption)
extern "C"
bool
C_ZNK11QFontDialog10testOptionENS_16FontDialogOptionE(void *qthis,
QFontDialog::FontDialogOption arg1) {
  auto ret =
  ((QFontDialog*)qthis)->testOption(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 80, column 23>
//   // proto:  FontDialogOptions QFontDialog::options();
// _ZNK11QFontDialog7optionsEv options()
extern "C"
QFlags<QFontDialog::FontDialogOption>*
C_ZNK11QFontDialog7optionsEv(void *qthis) {
  auto ret =
  ((QFontDialog*)qthis)->options();
  return new QFlags<QFontDialog::FontDialogOption>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 92, column 10>
//   // proto:  void QFontDialog::currentFontChanged(const QFont & font);
// _ZN11QFontDialog18currentFontChangedERK5QFont currentFontChanged(const class QFont &)
extern "C"
void
C_ZN11QFontDialog18currentFontChangedERK5QFont(void *qthis,
const QFont* arg1) {
  ((QFontDialog*)qthis)->currentFontChanged(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 83, column 10>
//   // proto:  void QFontDialog::open(QObject * receiver, const char * member);
// _ZN11QFontDialog4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN11QFontDialog4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QFontDialog*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 69, column 14>
//   // proto:  void QFontDialog::QFontDialog(const QFont & initial, QWidget * parent);
extern "C"
QFontDialog*
C_ZN11QFontDialogC2ERK5QFontP7QWidget(const QFont* arg1,
QWidget * arg2) {
  auto ret = new QFontDialog(*((const QFont*)arg1), arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 73, column 11>
//   // proto:  QFont QFontDialog::currentFont();
// _ZNK11QFontDialog11currentFontEv currentFont()
extern "C"
QFont*
C_ZNK11QFontDialog11currentFontEv(void *qthis) {
  auto ret =
  ((QFontDialog*)qthis)->currentFont();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 85, column 10>
//   // proto:  void QFontDialog::setVisible(bool visible);
// _ZN11QFontDialog10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN11QFontDialog10setVisibleEb(void *qthis,
bool arg1) {
  ((QFontDialog*)qthis)->setVisible(arg1);
}
//   // proto:  void QFontDialog::~QFontDialog();
extern "C"
void C_ZN11QFontDialogD2Ev(void *qthis) {
  delete (QFontDialog*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 88, column 18>
//   // proto: static QFont QFontDialog::getFont(bool * ok, const QFont & initial, QWidget * parent, const QString & title, FontDialogOptions options);
// _ZN11QFontDialog7getFontEPbRK5QFontP7QWidgetRK7QString6QFlagsINS_16FontDialogOptionEE getFont(_Bool *, const class QFont &, class QWidget *, const class QString &, FontDialogOptions)
extern "C"
QFont*
C_ZN11QFontDialog7getFontEPbRK5QFontP7QWidgetRK7QString6QFlagsINS_16FontDialogOptionEE(bool * arg1,
const QFont* arg2,
QWidget * arg3,
const QString* arg4,
QFontDialog::FontDialogOptions arg5) {
  auto ret =
  QFontDialog::getFont(arg1,
*((const QFont*)arg2),
arg3,
*((const QString*)arg4),
arg5);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 93, column 10>
//   // proto:  void QFontDialog::fontSelected(const QFont & font);
// _ZN11QFontDialog12fontSelectedERK5QFont fontSelected(const class QFont &)
extern "C"
void
C_ZN11QFontDialog12fontSelectedERK5QFont(void *qthis,
const QFont* arg1) {
  ((QFontDialog*)qthis)->fontSelected(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 87, column 18>
//   // proto: static QFont QFontDialog::getFont(bool * ok, QWidget * parent);
// _ZN11QFontDialog7getFontEPbP7QWidget getFont(_Bool *, class QWidget *)
extern "C"
QFont*
C_ZN11QFontDialog7getFontEPbP7QWidget(bool * arg1,
QWidget * arg2) {
  auto ret =
  QFontDialog::getFont(arg1,
arg2);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 50, column 5>
//   // proto:  const QMetaObject * QFontDialog::metaObject();
// _ZNK11QFontDialog10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFontDialog10metaObjectEv(void *qthis) {
  auto ret =
  ((QFontDialog*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 77, column 10>
//   // proto:  void QFontDialog::setOption(QFontDialog::FontDialogOption option, bool on);
// _ZN11QFontDialog9setOptionENS_16FontDialogOptionEb setOption(enum QFontDialog::FontDialogOption, _Bool)
extern "C"
void
C_ZN11QFontDialog9setOptionENS_16FontDialogOptionEb(void *qthis,
QFontDialog::FontDialogOption arg1,
bool arg2) {
  ((QFontDialog*)qthis)->setOption(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 75, column 11>
//   // proto:  QFont QFontDialog::selectedFont();
// _ZNK11QFontDialog12selectedFontEv selectedFont()
extern "C"
QFont*
C_ZNK11QFontDialog12selectedFontEv(void *qthis) {
  auto ret =
  ((QFontDialog*)qthis)->selectedFont();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qfontdialog.h', line 72, column 10>
//   // proto:  void QFontDialog::setCurrentFont(const QFont & font);
// _ZN11QFontDialog14setCurrentFontERK5QFont setCurrentFont(const class QFont &)
extern "C"
void
C_ZN11QFontDialog14setCurrentFontERK5QFont(void *qthis,
const QFont* arg1) {
  ((QFontDialog*)qthis)->setCurrentFont(*((const QFont*)arg1));
}
// <= ext block end

// body block begin =>
// QFontDialog_SlotProxy here
class QFontDialog_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFontDialog_SlotProxy():QObject(){}

public slots:
  // currentFontChanged(const class QFont &)
  void slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN11QFontDialog18currentFontChangedERK5QFont)(void* rsfptr, const QFont & arg0) = NULL;
public slots:
  // fontSelected(const class QFont &)
  void slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0);
public:
  void (*slot_func__ZN11QFontDialog12fontSelectedERK5QFont)(void* rsfptr, const QFont & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qfontdialog.moc"

extern "C" {
  QFontDialog_SlotProxy* QFontDialog_SlotProxy_new()
  {
    return new QFontDialog_SlotProxy();
  }
};

void QFontDialog_SlotProxy::slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont(this->rsfptr, arg0);
  }
}
extern "C"
void* QFontDialog_SlotProxy_connect__ZN11QFontDialog18currentFontChangedERK5QFont(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFontDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont = (decltype(that->slot_func__ZN11QFontDialog18currentFontChangedERK5QFont))ffifptr;
  QObject::connect((QFontDialog*)sender, SIGNAL(currentFontChanged(const class QFont &)), that, SLOT(slot_proxy_func__ZN11QFontDialog18currentFontChangedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontDialog_SlotProxy_disconnect__ZN11QFontDialog18currentFontChangedERK5QFont(QFontDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFontDialog_SlotProxy::slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0) {
  if (this->slot_func__ZN11QFontDialog12fontSelectedERK5QFont != NULL) {
    // do smth...
    this->slot_func__ZN11QFontDialog12fontSelectedERK5QFont(this->rsfptr, arg0);
  }
}
extern "C"
void* QFontDialog_SlotProxy_connect__ZN11QFontDialog12fontSelectedERK5QFont(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFontDialog_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QFontDialog12fontSelectedERK5QFont = (decltype(that->slot_func__ZN11QFontDialog12fontSelectedERK5QFont))ffifptr;
  QObject::connect((QFontDialog*)sender, SIGNAL(fontSelected(const class QFont &)), that, SLOT(slot_proxy_func__ZN11QFontDialog12fontSelectedERK5QFont(const QFont & arg0)));
  return that;
}
extern "C"
void QFontDialog_SlotProxy_disconnect__ZN11QFontDialog12fontSelectedERK5QFont(QFontDialog_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

