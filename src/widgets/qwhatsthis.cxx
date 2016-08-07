// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qwhatsthis.h
// dst-file: /src/widgets/qwhatsthis.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qwhatsthis.h>


// <= header block end

// main block begin =>
void __keep_qwhatsthis_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWhatsThis_Class_Size()
{
  return sizeof(QWhatsThis);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 63, column 17>
//   // proto: static void QWhatsThis::hideText();
// _ZN10QWhatsThis8hideTextEv hideText()
extern "C"
void
C_ZN10QWhatsThis8hideTextEv() {
  QWhatsThis::hideText();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 58, column 17>
//   // proto: static void QWhatsThis::enterWhatsThisMode();
// _ZN10QWhatsThis18enterWhatsThisModeEv enterWhatsThisMode()
extern "C"
void
C_ZN10QWhatsThis18enterWhatsThisModeEv() {
  QWhatsThis::enterWhatsThisMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 59, column 17>
//   // proto: static bool QWhatsThis::inWhatsThisMode();
// _ZN10QWhatsThis15inWhatsThisModeEv inWhatsThisMode()
extern "C"
bool
C_ZN10QWhatsThis15inWhatsThisModeEv() {
  auto ret =
  QWhatsThis::inWhatsThisMode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 60, column 17>
//   // proto: static void QWhatsThis::leaveWhatsThisMode();
// _ZN10QWhatsThis18leaveWhatsThisModeEv leaveWhatsThisMode()
extern "C"
void
C_ZN10QWhatsThis18leaveWhatsThisModeEv() {
  QWhatsThis::leaveWhatsThisMode();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 62, column 17>
//   // proto: static void QWhatsThis::showText(const QPoint & pos, const QString & text, QWidget * w);
// _ZN10QWhatsThis8showTextERK6QPointRK7QStringP7QWidget showText(const class QPoint &, const class QString &, class QWidget *)
extern "C"
void
C_ZN10QWhatsThis8showTextERK6QPointRK7QStringP7QWidget(const QPoint* arg1,
const QString* arg2,
QWidget * arg3) {
  QWhatsThis::showText(*((const QPoint*)arg1),
*((const QString*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qwhatsthis.h', line 65, column 21>
//   // proto: static QAction * QWhatsThis::createAction(QObject * parent);
// _ZN10QWhatsThis12createActionEP7QObject createAction(class QObject *)
extern "C"
void*
C_ZN10QWhatsThis12createActionEP7QObject(QObject * arg1) {
  auto ret =
  QWhatsThis::createAction(arg1);
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// <= body block end

