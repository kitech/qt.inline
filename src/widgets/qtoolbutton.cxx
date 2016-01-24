// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qtoolbutton.h
// dst-file: /src/widgets/qtoolbutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtoolbutton.h>


#include <qsize.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qtoolbutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QToolButton_Class_Size()
{
  return sizeof(QToolButton);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 88, column 10>
//   // proto:  void QToolButton::setAutoRaise(bool enable);
// _ZN11QToolButton12setAutoRaiseEb setAutoRaise(_Bool)
extern "C"
void
C_ZN11QToolButton12setAutoRaiseEb(void *qthis,
bool arg1) {
  ((QToolButton*)qthis)->setAutoRaise(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 86, column 14>
//   // proto:  QAction * QToolButton::defaultAction();
// _ZNK11QToolButton13defaultActionEv defaultAction()
extern "C"
void*
C_ZNK11QToolButton13defaultActionEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->defaultAction();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 99, column 10>
//   // proto:  void QToolButton::triggered(QAction * );
// _ZN11QToolButton9triggeredEP7QAction triggered(class QAction *)
extern "C"
void
C_ZN11QToolButton9triggeredEP7QAction(void *qthis,
QAction * arg1) {
  ((QToolButton*)qthis)->triggered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 50, column 5>
//   // proto:  const QMetaObject * QToolButton::metaObject();
// _ZNK11QToolButton10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QToolButton10metaObjectEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 71, column 11>
//   // proto:  QSize QToolButton::minimumSizeHint();
// _ZNK11QToolButton15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK11QToolButton15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 76, column 10>
//   // proto:  void QToolButton::setArrowType(Qt::ArrowType type);
// _ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE setArrowType(Qt::ArrowType)
extern "C"
void
C_ZN11QToolButton12setArrowTypeEN2Qt9ArrowTypeE(void *qthis,
Qt::ArrowType* arg1) {
  ((QToolButton*)qthis)->setArrowType(*((Qt::ArrowType*)arg1));
}
//   // proto:  void QToolButton::~QToolButton();
extern "C"
void C_ZN11QToolButtonD2Ev(void *qthis) {
  delete (QToolButton*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 93, column 10>
//   // proto:  void QToolButton::showMenu();
// _ZN11QToolButton8showMenuEv showMenu()
extern "C"
void
C_ZN11QToolButton8showMenuEv(void *qthis) {
  ((QToolButton*)qthis)->showMenu();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 73, column 25>
//   // proto:  Qt::ToolButtonStyle QToolButton::toolButtonStyle();
// _ZNK11QToolButton15toolButtonStyleEv toolButtonStyle()
extern "C"
Qt::ToolButtonStyle
C_ZNK11QToolButton15toolButtonStyleEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->toolButtonStyle();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 95, column 10>
//   // proto:  void QToolButton::setToolButtonStyle(Qt::ToolButtonStyle style);
// _ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE setToolButtonStyle(Qt::ToolButtonStyle)
extern "C"
void
C_ZN11QToolButton18setToolButtonStyleEN2Qt15ToolButtonStyleE(void *qthis,
Qt::ToolButtonStyle* arg1) {
  ((QToolButton*)qthis)->setToolButtonStyle(*((Qt::ToolButtonStyle*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 70, column 11>
//   // proto:  QSize QToolButton::sizeHint();
// _ZNK11QToolButton8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QToolButton8sizeHintEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 89, column 10>
//   // proto:  bool QToolButton::autoRaise();
// _ZNK11QToolButton9autoRaiseEv autoRaise()
extern "C"
bool
C_ZNK11QToolButton9autoRaiseEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->autoRaise();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 82, column 10>
//   // proto:  void QToolButton::setPopupMode(QToolButton::ToolButtonPopupMode mode);
// _ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE setPopupMode(enum QToolButton::ToolButtonPopupMode)
extern "C"
void
C_ZN11QToolButton12setPopupModeENS_19ToolButtonPopupModeE(void *qthis,
QToolButton::ToolButtonPopupMode arg1) {
  ((QToolButton*)qthis)->setPopupMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 80, column 12>
//   // proto:  QMenu * QToolButton::menu();
// _ZNK11QToolButton4menuEv menu()
extern "C"
void*
C_ZNK11QToolButton4menuEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->menu();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 79, column 10>
//   // proto:  void QToolButton::setMenu(QMenu * menu);
// _ZN11QToolButton7setMenuEP5QMenu setMenu(class QMenu *)
extern "C"
void
C_ZN11QToolButton7setMenuEP5QMenu(void *qthis,
QMenu * arg1) {
  ((QToolButton*)qthis)->setMenu(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 67, column 14>
//   // proto:  void QToolButton::QToolButton(QWidget * parent);
extern "C"
QToolButton*
C_ZN11QToolButtonC2EP7QWidget(QWidget * arg1) {
  auto ret = new QToolButton(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 83, column 25>
//   // proto:  QToolButton::ToolButtonPopupMode QToolButton::popupMode();
// _ZNK11QToolButton9popupModeEv popupMode()
extern "C"
QToolButton::ToolButtonPopupMode
C_ZNK11QToolButton9popupModeEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->popupMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 96, column 10>
//   // proto:  void QToolButton::setDefaultAction(QAction * );
// _ZN11QToolButton16setDefaultActionEP7QAction setDefaultAction(class QAction *)
extern "C"
void
C_ZN11QToolButton16setDefaultActionEP7QAction(void *qthis,
QAction * arg1) {
  ((QToolButton*)qthis)->setDefaultAction(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtoolbutton.h', line 75, column 19>
//   // proto:  Qt::ArrowType QToolButton::arrowType();
// _ZNK11QToolButton9arrowTypeEv arrowType()
extern "C"
Qt::ArrowType
C_ZNK11QToolButton9arrowTypeEv(void *qthis) {
  auto ret =
  ((QToolButton*)qthis)->arrowType();
  return ret; // 0 TypeKind.ENUM
}
// <= ext block end

// body block begin =>
// QToolButton_SlotProxy here
class QToolButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QToolButton_SlotProxy():QObject(){}

public slots:
  // triggered(class QAction *)
  void slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0);
public:
  void (*slot_func__ZN11QToolButton9triggeredEP7QAction)(void* rsfptr, QAction * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtoolbutton.moc"

extern "C" {
  QToolButton_SlotProxy* QToolButton_SlotProxy_new()
  {
    return new QToolButton_SlotProxy();
  }
};

void QToolButton_SlotProxy::slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0) {
  if (this->slot_func__ZN11QToolButton9triggeredEP7QAction != NULL) {
    // do smth...
    this->slot_func__ZN11QToolButton9triggeredEP7QAction(this->rsfptr, arg0);
  }
}
extern "C"
void* QToolButton_SlotProxy_connect__ZN11QToolButton9triggeredEP7QAction(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QToolButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QToolButton9triggeredEP7QAction = (decltype(that->slot_func__ZN11QToolButton9triggeredEP7QAction))ffifptr;
  QObject::connect((QToolButton*)sender, SIGNAL(triggered(class QAction *)), that, SLOT(slot_proxy_func__ZN11QToolButton9triggeredEP7QAction(QAction * arg0)));
  return that;
}
extern "C"
void QToolButton_SlotProxy_disconnect__ZN11QToolButton9triggeredEP7QAction(QToolButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

