// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qmessagebox.h
// dst-file: /src/widgets/qmessagebox.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qmessagebox.h>


#include <qstring.h>
#include <qnamespace.h>
#include <qabstractbutton.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qpixmap.h>
// <= header block end

// main block begin =>
void __keep_qmessagebox_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 229, column 23>
//   // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (true) {
  auto f = [](QMessageBox flythis, QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->question(arg1, arg2, arg3, arg4, arg5);
    flythis.question(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ question(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 244, column 23>
//   // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (true) {
  auto f = [](QMessageBox flythis, QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->warning(arg1, arg2, arg3, arg4, arg5);
    flythis.warning(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ warning(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 259, column 23>
//   // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (true) {
  auto f = [](QMessageBox flythis, QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->critical(arg1, arg2, arg3, arg4, arg5);
    flythis.critical(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ critical(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 214, column 34>
//   // proto: static QMessageBox::StandardButton QMessageBox::information(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
if (true) {
  auto f = [](QMessageBox flythis, QWidget * arg1, const QString & arg2, const QString & arg3, QMessageBox::StandardButton arg4, QMessageBox::StandardButton arg5) {
    ((QMessageBox*)0)->information(arg1, arg2, arg3, arg4, arg5);
    flythis.information(arg1, arg2, arg3, arg4, arg5);
  };
  if (f == nullptr){}
}
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ information(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QMessageBox_Class_Size()
{
  return sizeof(QMessageBox);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 249, column 16>
//   // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2);
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii critical(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
int
C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_iii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
int arg4,
int arg5,
int arg6) {
  auto ret =
  QMessageBox::critical(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 282, column 10>
//   // proto:  void QMessageBox::buttonClicked(QAbstractButton * button);
// _ZN11QMessageBox13buttonClickedEP15QAbstractButton buttonClicked(class QAbstractButton *)
extern "C"
void
C_ZN11QMessageBox13buttonClickedEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QMessageBox*)qthis)->buttonClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 265, column 10>
//   // proto:  void QMessageBox::setButtonText(int button, const QString & text);
// _ZN11QMessageBox13setButtonTextEiRK7QString setButtonText(int, const class QString &)
extern "C"
void
C_ZN11QMessageBox13setButtonTextEiRK7QString(void *qthis,
int arg1,
const QString* arg2) {
  ((QMessageBox*)qthis)->setButtonText(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 191, column 27>
//   // proto: static QMessageBox::StandardButton QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, StandardButtons buttons, QMessageBox::StandardButton defaultButton);
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_ critical(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
QMessageBox::StandardButton
C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButtons arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::critical(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 134, column 10>
//   // proto:  void QMessageBox::addButton(QAbstractButton * button, QMessageBox::ButtonRole role);
// _ZN11QMessageBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE addButton(class QAbstractButton *, enum QMessageBox::ButtonRole)
extern "C"
void
C_ZN11QMessageBox9addButtonEP15QAbstractButtonNS_10ButtonRoleE(void *qthis,
QAbstractButton * arg1,
QMessageBox::ButtonRole arg2) {
  ((QMessageBox*)qthis)->addButton(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 135, column 18>
//   // proto:  QPushButton * QMessageBox::addButton(const QString & text, QMessageBox::ButtonRole role);
// _ZN11QMessageBox9addButtonERK7QStringNS_10ButtonRoleE addButton(const class QString &, enum QMessageBox::ButtonRole)
extern "C"
void*
C_ZN11QMessageBox9addButtonERK7QStringNS_10ButtonRoleE(void *qthis,
const QString* arg1,
QMessageBox::ButtonRole arg2) {
  auto ret =
  ((QMessageBox*)qthis)->addButton(*((const QString*)arg1),
arg2);
  return (void*)ret;
}
//   // proto:  void QMessageBox::~QMessageBox();
extern "C"
void C_ZN11QMessageBoxD2Ev(void *qthis) {
  delete (QMessageBox*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 165, column 10>
//   // proto:  void QMessageBox::setText(const QString & text);
// _ZN11QMessageBox7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN11QMessageBox7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QMessageBox*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 229, column 23>
//   // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ question(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
int
C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButton arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::question(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 171, column 10>
//   // proto:  void QMessageBox::setIconPixmap(const QPixmap & pixmap);
// _ZN11QMessageBox13setIconPixmapERK7QPixmap setIconPixmap(const class QPixmap &)
extern "C"
void
C_ZN11QMessageBox13setIconPixmapERK7QPixmap(void *qthis,
const QPixmap* arg1) {
  ((QMessageBox*)qthis)->setIconPixmap(*((const QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 194, column 17>
//   // proto: static void QMessageBox::about(QWidget * parent, const QString & title, const QString & text);
// _ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_ about(class QWidget *, const class QString &, const class QString &)
extern "C"
void
C_ZN11QMessageBox5aboutEP7QWidgetRK7QStringS4_(QWidget * arg1,
const QString* arg2,
const QString* arg3) {
  QMessageBox::about(arg1,
*((const QString*)arg2),
*((const QString*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 152, column 22>
//   // proto:  QAbstractButton * QMessageBox::button(QMessageBox::StandardButton which);
// _ZNK11QMessageBox6buttonENS_14StandardButtonE button(enum QMessageBox::StandardButton)
extern "C"
void*
C_ZNK11QMessageBox6buttonENS_14StandardButtonE(void *qthis,
QMessageBox::StandardButton arg1) {
  auto ret =
  ((QMessageBox*)qthis)->button(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 164, column 13>
//   // proto:  QString QMessageBox::text();
// _ZNK11QMessageBox4textEv text()
extern "C"
QString*
C_ZNK11QMessageBox4textEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 173, column 20>
//   // proto:  Qt::TextFormat QMessageBox::textFormat();
// _ZNK11QMessageBox10textFormatEv textFormat()
extern "C"
Qt::TextFormat
C_ZNK11QMessageBox10textFormatEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->textFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 222, column 16>
//   // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber);
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii question(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
int
C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
const QString* arg5,
const QString* arg6,
int arg7,
int arg8) {
  auto ret =
  QMessageBox::question(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
*((const QString*)arg5),
*((const QString*)arg6),
arg7,
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 136, column 18>
//   // proto:  QPushButton * QMessageBox::addButton(QMessageBox::StandardButton button);
// _ZN11QMessageBox9addButtonENS_14StandardButtonE addButton(enum QMessageBox::StandardButton)
extern "C"
void*
C_ZN11QMessageBox9addButtonENS_14StandardButtonE(void *qthis,
QMessageBox::StandardButton arg1) {
  auto ret =
  ((QMessageBox*)qthis)->addButton(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 234, column 16>
//   // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2);
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii warning(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
int
C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_iii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
int arg4,
int arg5,
int arg6) {
  auto ret =
  QMessageBox::warning(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 151, column 20>
//   // proto:  QMessageBox::StandardButton QMessageBox::standardButton(QAbstractButton * button);
// _ZNK11QMessageBox14standardButtonEP15QAbstractButton standardButton(class QAbstractButton *)
extern "C"
QMessageBox::StandardButton
C_ZNK11QMessageBox14standardButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  auto ret =
  ((QMessageBox*)qthis)->standardButton(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 51, column 5>
//   // proto:  const QMetaObject * QMessageBox::metaObject();
// _ZNK11QMessageBox10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QMessageBox10metaObjectEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 219, column 16>
//   // proto: static int QMessageBox::question(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2);
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii question(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
int
C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_iii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
int arg4,
int arg5,
int arg6) {
  auto ret =
  QMessageBox::question(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 174, column 10>
//   // proto:  void QMessageBox::setTextFormat(Qt::TextFormat format);
// _ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE setTextFormat(Qt::TextFormat)
extern "C"
void
C_ZN11QMessageBox13setTextFormatEN2Qt10TextFormatE(void *qthis,
Qt::TextFormat* arg1) {
  ((QMessageBox*)qthis)->setTextFormat(*((Qt::TextFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 154, column 18>
//   // proto:  QPushButton * QMessageBox::defaultButton();
// _ZNK11QMessageBox13defaultButtonEv defaultButton()
extern "C"
void*
C_ZNK11QMessageBox13defaultButtonEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->defaultButton();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 144, column 10>
//   // proto:  void QMessageBox::open(QObject * receiver, const char * member);
// _ZN11QMessageBox4openEP7QObjectPKc open(class QObject *, const char *)
extern "C"
void
C_ZN11QMessageBox4openEP7QObjectPKc(void *qthis,
QObject * arg1,
const char * arg2) {
  ((QMessageBox*)qthis)->open(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 146, column 30>
//   // proto:  QList<QAbstractButton *> QMessageBox::buttons();
// _ZNK11QMessageBox7buttonsEv buttons()
extern "C"
QList<QAbstractButton *>*
C_ZNK11QMessageBox7buttonsEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->buttons();
  return new QList<QAbstractButton *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 195, column 17>
//   // proto: static void QMessageBox::aboutQt(QWidget * parent, const QString & title);
// _ZN11QMessageBox7aboutQtEP7QWidgetRK7QString aboutQt(class QWidget *, const class QString &)
extern "C"
void
C_ZN11QMessageBox7aboutQtEP7QWidgetRK7QString(QWidget * arg1,
const QString* arg2) {
  QMessageBox::aboutQt(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 176, column 10>
//   // proto:  void QMessageBox::setTextInteractionFlags(Qt::TextInteractionFlags flags);
// _ZN11QMessageBox23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C"
void
C_ZN11QMessageBox23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *qthis,
Qt::TextInteractionFlags* arg1) {
  ((QMessageBox*)qthis)->setTextInteractionFlags(*((Qt::TextInteractionFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 267, column 13>
//   // proto:  QString QMessageBox::informativeText();
// _ZNK11QMessageBox15informativeTextEv informativeText()
extern "C"
QString*
C_ZNK11QMessageBox15informativeTextEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->informativeText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 268, column 10>
//   // proto:  void QMessageBox::setInformativeText(const QString & text);
// _ZN11QMessageBox18setInformativeTextERK7QString setInformativeText(const class QString &)
extern "C"
void
C_ZN11QMessageBox18setInformativeTextERK7QString(void *qthis,
const QString* arg1) {
  ((QMessageBox*)qthis)->setInformativeText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 272, column 10>
//   // proto:  void QMessageBox::setDetailedText(const QString & text);
// _ZN11QMessageBox15setDetailedTextERK7QString setDetailedText(const class QString &)
extern "C"
void
C_ZN11QMessageBox15setDetailedTextERK7QString(void *qthis,
const QString* arg1) {
  ((QMessageBox*)qthis)->setDetailedText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 128, column 14>
//   // proto:  void QMessageBox::QMessageBox(QWidget * parent);
extern "C"
QMessageBox*
C_ZN11QMessageBoxC2EP7QWidget(QWidget * arg1) {
  auto ret = new QMessageBox(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 156, column 10>
//   // proto:  void QMessageBox::setDefaultButton(QMessageBox::StandardButton button);
// _ZN11QMessageBox16setDefaultButtonENS_14StandardButtonE setDefaultButton(enum QMessageBox::StandardButton)
extern "C"
void
C_ZN11QMessageBox16setDefaultButtonENS_14StandardButtonE(void *qthis,
QMessageBox::StandardButton arg1) {
  ((QMessageBox*)qthis)->setDefaultButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 182, column 27>
//   // proto: static QMessageBox::StandardButton QMessageBox::information(QWidget * parent, const QString & title, const QString & text, StandardButtons buttons, QMessageBox::StandardButton defaultButton);
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_ information(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
QMessageBox::StandardButton
C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButtons arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::information(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 252, column 16>
//   // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber);
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii critical(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
int
C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
const QString* arg5,
const QString* arg6,
int arg7,
int arg8) {
  auto ret =
  QMessageBox::critical(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
*((const QString*)arg5),
*((const QString*)arg6),
arg7,
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 147, column 16>
//   // proto:  QMessageBox::ButtonRole QMessageBox::buttonRole(QAbstractButton * button);
// _ZNK11QMessageBox10buttonRoleEP15QAbstractButton buttonRole(class QAbstractButton *)
extern "C"
QMessageBox::ButtonRole
C_ZNK11QMessageBox10buttonRoleEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  auto ret =
  ((QMessageBox*)qthis)->buttonRole(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 162, column 22>
//   // proto:  QAbstractButton * QMessageBox::clickedButton();
// _ZNK11QMessageBox13clickedButtonEv clickedButton()
extern "C"
void*
C_ZNK11QMessageBox13clickedButtonEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->clickedButton();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 149, column 10>
//   // proto:  void QMessageBox::setStandardButtons(StandardButtons buttons);
// _ZN11QMessageBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE setStandardButtons(StandardButtons)
extern "C"
void
C_ZN11QMessageBox18setStandardButtonsE6QFlagsINS_14StandardButtonEE(void *qthis,
QMessageBox::StandardButtons arg1) {
  ((QMessageBox*)qthis)->setStandardButtons(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 168, column 10>
//   // proto:  void QMessageBox::setIcon(QMessageBox::Icon );
// _ZN11QMessageBox7setIconENS_4IconE setIcon(enum QMessageBox::Icon)
extern "C"
void
C_ZN11QMessageBox7setIconENS_4IconE(void *qthis,
QMessageBox::Icon arg1) {
  ((QMessageBox*)qthis)->setIcon(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 155, column 10>
//   // proto:  void QMessageBox::setDefaultButton(QPushButton * button);
// _ZN11QMessageBox16setDefaultButtonEP11QPushButton setDefaultButton(class QPushButton *)
extern "C"
void
C_ZN11QMessageBox16setDefaultButtonEP11QPushButton(void *qthis,
QPushButton * arg1) {
  ((QMessageBox*)qthis)->setDefaultButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 185, column 27>
//   // proto: static QMessageBox::StandardButton QMessageBox::question(QWidget * parent, const QString & title, const QString & text, StandardButtons buttons, QMessageBox::StandardButton defaultButton);
// _ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_ question(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
QMessageBox::StandardButton
C_ZN11QMessageBox8questionEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButtons arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::question(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 237, column 16>
//   // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber);
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii warning(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
int
C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
const QString* arg5,
const QString* arg6,
int arg7,
int arg8) {
  auto ret =
  QMessageBox::warning(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
*((const QString*)arg5),
*((const QString*)arg6),
arg7,
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 150, column 21>
//   // proto:  StandardButtons QMessageBox::standardButtons();
// _ZNK11QMessageBox15standardButtonsEv standardButtons()
extern "C"
QFlags<QMessageBox::StandardButton>*
C_ZNK11QMessageBox15standardButtonsEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->standardButtons();
  return new QFlags<QMessageBox::StandardButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 159, column 10>
//   // proto:  void QMessageBox::setEscapeButton(QAbstractButton * button);
// _ZN11QMessageBox15setEscapeButtonEP15QAbstractButton setEscapeButton(class QAbstractButton *)
extern "C"
void
C_ZN11QMessageBox15setEscapeButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QMessageBox*)qthis)->setEscapeButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 204, column 16>
//   // proto: static int QMessageBox::information(QWidget * parent, const QString & title, const QString & text, int button0, int button1, int button2);
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii information(class QWidget *, const class QString &, const class QString &, int, int, int)
extern "C"
int
C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_iii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
int arg4,
int arg5,
int arg6) {
  auto ret =
  QMessageBox::information(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5,
arg6);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 179, column 10>
//   // proto:  void QMessageBox::setCheckBox(QCheckBox * cb);
// _ZN11QMessageBox11setCheckBoxEP9QCheckBox setCheckBox(class QCheckBox *)
extern "C"
void
C_ZN11QMessageBox11setCheckBoxEP9QCheckBox(void *qthis,
QCheckBox * arg1) {
  ((QMessageBox*)qthis)->setCheckBox(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 275, column 10>
//   // proto:  void QMessageBox::setWindowTitle(const QString & title);
// _ZN11QMessageBox14setWindowTitleERK7QString setWindowTitle(const class QString &)
extern "C"
void
C_ZN11QMessageBox14setWindowTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QMessageBox*)qthis)->setWindowTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 188, column 27>
//   // proto: static QMessageBox::StandardButton QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, StandardButtons buttons, QMessageBox::StandardButton defaultButton);
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_ warning(class QWidget *, const class QString &, const class QString &, StandardButtons, enum QMessageBox::StandardButton)
extern "C"
QMessageBox::StandardButton
C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_6QFlagsINS_14StandardButtonEES6_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButtons arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::warning(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 158, column 22>
//   // proto:  QAbstractButton * QMessageBox::escapeButton();
// _ZNK11QMessageBox12escapeButtonEv escapeButton()
extern "C"
void*
C_ZNK11QMessageBox12escapeButtonEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->escapeButton();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 199, column 5>
//   // proto:  void QMessageBox::QMessageBox(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent, Qt::WindowFlags f);
extern "C"
QMessageBox*
C_ZN11QMessageBoxC2ERK7QStringS2_NS_4IconEiiiP7QWidget6QFlagsIN2Qt10WindowTypeEE(const QString* arg1,
const QString* arg2,
QMessageBox::Icon arg3,
int arg4,
int arg5,
int arg6,
QWidget * arg7,
Qt::WindowFlags* arg8) {
  auto ret = new QMessageBox(*((const QString*)arg1), *((const QString*)arg2), arg3, arg4, arg5, arg6, arg7, *((Qt::WindowFlags*)arg8));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 276, column 10>
//   // proto:  void QMessageBox::setWindowModality(Qt::WindowModality windowModality);
// _ZN11QMessageBox17setWindowModalityEN2Qt14WindowModalityE setWindowModality(Qt::WindowModality)
extern "C"
void
C_ZN11QMessageBox17setWindowModalityEN2Qt14WindowModalityE(void *qthis,
Qt::WindowModality* arg1) {
  ((QMessageBox*)qthis)->setWindowModality(*((Qt::WindowModality*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 170, column 13>
//   // proto:  QPixmap QMessageBox::iconPixmap();
// _ZNK11QMessageBox10iconPixmapEv iconPixmap()
extern "C"
QPixmap*
C_ZNK11QMessageBox10iconPixmapEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->iconPixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 160, column 10>
//   // proto:  void QMessageBox::setEscapeButton(QMessageBox::StandardButton button);
// _ZN11QMessageBox15setEscapeButtonENS_14StandardButtonE setEscapeButton(enum QMessageBox::StandardButton)
extern "C"
void
C_ZN11QMessageBox15setEscapeButtonENS_14StandardButtonE(void *qthis,
QMessageBox::StandardButton arg1) {
  ((QMessageBox*)qthis)->setEscapeButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 244, column 23>
//   // proto: static int QMessageBox::warning(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
// _ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ warning(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
int
C_ZN11QMessageBox7warningEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButton arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::warning(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 167, column 10>
//   // proto:  QMessageBox::Icon QMessageBox::icon();
// _ZNK11QMessageBox4iconEv icon()
extern "C"
QMessageBox::Icon
C_ZNK11QMessageBox4iconEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->icon();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 259, column 23>
//   // proto: static int QMessageBox::critical(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
// _ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ critical(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
int
C_ZN11QMessageBox8criticalEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButton arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::critical(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 137, column 10>
//   // proto:  void QMessageBox::removeButton(QAbstractButton * button);
// _ZN11QMessageBox12removeButtonEP15QAbstractButton removeButton(class QAbstractButton *)
extern "C"
void
C_ZN11QMessageBox12removeButtonEP15QAbstractButton(void *qthis,
QAbstractButton * arg1) {
  ((QMessageBox*)qthis)->removeButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 271, column 13>
//   // proto:  QString QMessageBox::detailedText();
// _ZNK11QMessageBox12detailedTextEv detailedText()
extern "C"
QString*
C_ZNK11QMessageBox12detailedTextEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->detailedText();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 180, column 16>
//   // proto:  QCheckBox * QMessageBox::checkBox();
// _ZNK11QMessageBox8checkBoxEv checkBox()
extern "C"
void*
C_ZNK11QMessageBox8checkBoxEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->checkBox();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 264, column 13>
//   // proto:  QString QMessageBox::buttonText(int button);
// _ZNK11QMessageBox10buttonTextEi buttonText(int)
extern "C"
QString*
C_ZNK11QMessageBox10buttonTextEi(void *qthis,
int arg1) {
  auto ret =
  ((QMessageBox*)qthis)->buttonText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 279, column 20>
//   // proto: static QPixmap QMessageBox::standardIcon(QMessageBox::Icon icon);
// _ZN11QMessageBox12standardIconENS_4IconE standardIcon(enum QMessageBox::Icon)
extern "C"
QPixmap*
C_ZN11QMessageBox12standardIconENS_4IconE(QMessageBox::Icon arg1) {
  auto ret =
  QMessageBox::standardIcon(arg1);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 207, column 16>
//   // proto: static int QMessageBox::information(QWidget * parent, const QString & title, const QString & text, const QString & button0Text, const QString & button1Text, const QString & button2Text, int defaultButtonNumber, int escapeButtonNumber);
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii information(class QWidget *, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, int, int)
extern "C"
int
C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_S4_S4_S4_ii(QWidget * arg1,
const QString* arg2,
const QString* arg3,
const QString* arg4,
const QString* arg5,
const QString* arg6,
int arg7,
int arg8) {
  auto ret =
  QMessageBox::information(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
*((const QString*)arg4),
*((const QString*)arg5),
*((const QString*)arg6),
arg7,
arg8);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 214, column 34>
//   // proto: static QMessageBox::StandardButton QMessageBox::information(QWidget * parent, const QString & title, const QString & text, QMessageBox::StandardButton button0, QMessageBox::StandardButton button1);
// _ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_ information(class QWidget *, const class QString &, const class QString &, enum QMessageBox::StandardButton, enum QMessageBox::StandardButton)
extern "C"
QMessageBox::StandardButton
C_ZN11QMessageBox11informationEP7QWidgetRK7QStringS4_NS_14StandardButtonES5_(QWidget * arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButton arg4,
QMessageBox::StandardButton arg5) {
  auto ret =
  QMessageBox::information(arg1,
*((const QString*)arg2),
*((const QString*)arg3),
arg4,
arg5);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 129, column 5>
//   // proto:  void QMessageBox::QMessageBox(QMessageBox::Icon icon, const QString & title, const QString & text, StandardButtons buttons, QWidget * parent, Qt::WindowFlags flags);
extern "C"
QMessageBox*
C_ZN11QMessageBoxC2ENS_4IconERK7QStringS3_6QFlagsINS_14StandardButtonEEP7QWidgetS4_IN2Qt10WindowTypeEE(QMessageBox::Icon arg1,
const QString* arg2,
const QString* arg3,
QMessageBox::StandardButtons arg4,
QWidget * arg5,
Qt::WindowFlags* arg6) {
  auto ret = new QMessageBox(arg1, *((const QString*)arg2), *((const QString*)arg3), arg4, arg5, *((Qt::WindowFlags*)arg6));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qmessagebox.h', line 177, column 30>
//   // proto:  Qt::TextInteractionFlags QMessageBox::textInteractionFlags();
// _ZNK11QMessageBox20textInteractionFlagsEv textInteractionFlags()
extern "C"
QFlags<Qt::TextInteractionFlag>*
C_ZNK11QMessageBox20textInteractionFlagsEv(void *qthis) {
  auto ret =
  ((QMessageBox*)qthis)->textInteractionFlags();
  return new QFlags<Qt::TextInteractionFlag>(ret); // 5
}
// <= ext block end

// body block begin =>
// QMessageBox_SlotProxy here
class QMessageBox_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QMessageBox_SlotProxy():QObject(){}

public slots:
  // buttonClicked(class QAbstractButton *)
  void slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0);
public:
  void (*slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton)(void* rsfptr, QAbstractButton * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qmessagebox.moc"

extern "C" {
  QMessageBox_SlotProxy* QMessageBox_SlotProxy_new()
  {
    return new QMessageBox_SlotProxy();
  }
};

void QMessageBox_SlotProxy::slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0) {
  if (this->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton != NULL) {
    // do smth...
    this->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(this->rsfptr, arg0);
  }
}
extern "C"
void* QMessageBox_SlotProxy_connect__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QMessageBox_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton = (decltype(that->slot_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton))ffifptr;
  QObject::connect((QMessageBox*)sender, SIGNAL(buttonClicked(class QAbstractButton *)), that, SLOT(slot_proxy_func__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QAbstractButton * arg0)));
  return that;
}
extern "C"
void QMessageBox_SlotProxy_disconnect__ZN11QMessageBox13buttonClickedEP15QAbstractButton(QMessageBox_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

