// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qpushbutton.h
// dst-file: /src/widgets/qpushbutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qpushbutton.h>


#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qpushbutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QPushButton_Class_Size()
{
  return sizeof(QPushButton);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 69, column 10>
//   // proto:  void QPushButton::setMenu(QMenu * menu);
// _ZN11QPushButton7setMenuEP5QMenu setMenu(class QMenu *)
extern "C"
void
C_ZN11QPushButton7setMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  ((QPushButton*)qthis)->setMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 73, column 10>
//   // proto:  void QPushButton::setFlat(bool );
// _ZN11QPushButton7setFlatEb setFlat(_Bool)
extern "C"
void
C_ZN11QPushButton7setFlatEb(void *qthis,
bool arg1) {
  ((QPushButton*)qthis)->setFlat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 64, column 10>
//   // proto:  void QPushButton::setAutoDefault(bool );
// _ZN11QPushButton14setAutoDefaultEb setAutoDefault(_Bool)
extern "C"
void
C_ZN11QPushButton14setAutoDefaultEb(void *qthis,
bool arg1) {
  ((QPushButton*)qthis)->setAutoDefault(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 61, column 11>
//   // proto:  QSize QPushButton::minimumSizeHint();
// _ZNK11QPushButton15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK11QPushButton15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 66, column 10>
//   // proto:  void QPushButton::setDefault(bool );
// _ZN11QPushButton10setDefaultEb setDefault(_Bool)
extern "C"
void
C_ZN11QPushButton10setDefaultEb(void *qthis,
bool arg1) {
  ((QPushButton*)qthis)->setDefault(arg1);
}
//   // proto:  void QPushButton::~QPushButton();
extern "C"
void C_ZN11QPushButtonD2Ev(void *qthis) {
  delete (QPushButton*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 65, column 10>
//   // proto:  bool QPushButton::isDefault();
// _ZNK11QPushButton9isDefaultEv isDefault()
extern "C"
bool
C_ZNK11QPushButton9isDefaultEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->isDefault();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 57, column 5>
//   // proto:  void QPushButton::QPushButton(const QIcon & icon, const QString & text, QWidget * parent);
extern "C"
QPushButton*
C_ZN11QPushButtonC2ERK5QIconRK7QStringP7QWidget(const QIcon* arg1,
const QString* arg2,
QWidget * arg3) {
  auto ret = new QPushButton(*((const QIcon*)arg1),
*((const QString*)arg2),
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 63, column 10>
//   // proto:  bool QPushButton::autoDefault();
// _ZNK11QPushButton11autoDefaultEv autoDefault()
extern "C"
bool
C_ZNK11QPushButton11autoDefaultEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->autoDefault();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 60, column 11>
//   // proto:  QSize QPushButton::sizeHint();
// _ZNK11QPushButton8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QPushButton8sizeHintEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 48, column 5>
//   // proto:  const QMetaObject * QPushButton::metaObject();
// _ZNK11QPushButton10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QPushButton10metaObjectEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 70, column 12>
//   // proto:  QMenu * QPushButton::menu();
// _ZNK11QPushButton4menuEv menu()
extern "C"
void*
C_ZNK11QPushButton4menuEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->menu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 55, column 14>
//   // proto:  void QPushButton::QPushButton(QWidget * parent);
extern "C"
QPushButton*
C_ZN11QPushButtonC2EP7QWidget(QWidget * arg1) {
  auto ret = new QPushButton(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 78, column 10>
//   // proto:  void QPushButton::showMenu();
// _ZN11QPushButton8showMenuEv showMenu()
extern "C"
void
C_ZN11QPushButton8showMenuEv(void *qthis) {
  ((QPushButton*)qthis)->showMenu();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 56, column 14>
//   // proto:  void QPushButton::QPushButton(const QString & text, QWidget * parent);
extern "C"
QPushButton*
C_ZN11QPushButtonC2ERK7QStringP7QWidget(const QString* arg1,
QWidget * arg2) {
  auto ret = new QPushButton(*((const QString*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qpushbutton.h', line 74, column 10>
//   // proto:  bool QPushButton::isFlat();
// _ZNK11QPushButton6isFlatEv isFlat()
extern "C"
bool
C_ZNK11QPushButton6isFlatEv(void *qthis) {
  auto ret =
  ((QPushButton*)qthis)->isFlat();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QPushButton_SlotProxy here
class QPushButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QPushButton_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qpushbutton.moc"

extern "C" {
  QPushButton_SlotProxy* QPushButton_SlotProxy_new()
  {
    return new QPushButton_SlotProxy();
  }
};

// <= body block end

