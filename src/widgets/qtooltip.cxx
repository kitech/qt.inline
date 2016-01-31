// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtWidgets/qtooltip.h
// dst-file: /src/widgets/qtooltip.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtooltip.h>


#include <qpalette.h>
#include <qstring.h>
#include <qfont.h>
// <= header block end

// main block begin =>
void __keep_qtooltip_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 52, column 24>
//   // proto: static void QToolTip::hideText();
if (true) {
  auto f = [](QToolTip flythis) {
    ((QToolTip*)0)->hideText();
    flythis.hideText();
  };
  if (f == nullptr){}
}
// _ZN8QToolTip8hideTextEv hideText()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QToolTip_Class_Size()
{
  return sizeof(QToolTip);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 60, column 17>
//   // proto: static void QToolTip::setFont(const QFont & );
// _ZN8QToolTip7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN8QToolTip7setFontERK5QFont(const QFont* arg1) {
  QToolTip::setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 57, column 21>
//   // proto: static QPalette QToolTip::palette();
// _ZN8QToolTip7paletteEv palette()
extern "C"
QPalette*
C_ZN8QToolTip7paletteEv() {
  auto ret =
  QToolTip::palette();
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 52, column 24>
//   // proto: static void QToolTip::hideText();
// _ZN8QToolTip8hideTextEv hideText()
extern "C"
void
C_ZN8QToolTip8hideTextEv() {
  QToolTip::hideText();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 50, column 17>
//   // proto: static void QToolTip::showText(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect);
// _ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRect showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &)
extern "C"
void
C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRect(const QPoint* arg1,
const QString* arg2,
QWidget * arg3,
const QRect* arg4) {
  QToolTip::showText(*((const QPoint*)arg1),
*((const QString*)arg2),
arg3,
*((const QRect*)arg4));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 51, column 17>
//   // proto: static void QToolTip::showText(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect, int msecShowTime);
// _ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRecti showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &, int)
extern "C"
void
C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRecti(const QPoint* arg1,
const QString* arg2,
QWidget * arg3,
const QRect* arg4,
int arg5) {
  QToolTip::showText(*((const QPoint*)arg1),
*((const QString*)arg2),
arg3,
*((const QRect*)arg4),
arg5);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 55, column 20>
//   // proto: static QString QToolTip::text();
// _ZN8QToolTip4textEv text()
extern "C"
QString*
C_ZN8QToolTip4textEv() {
  auto ret =
  QToolTip::text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 59, column 18>
//   // proto: static QFont QToolTip::font();
// _ZN8QToolTip4fontEv font()
extern "C"
QFont*
C_ZN8QToolTip4fontEv() {
  auto ret =
  QToolTip::font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 58, column 17>
//   // proto: static void QToolTip::setPalette(const QPalette & );
// _ZN8QToolTip10setPaletteERK8QPalette setPalette(const class QPalette &)
extern "C"
void
C_ZN8QToolTip10setPaletteERK8QPalette(const QPalette* arg1) {
  QToolTip::setPalette(*((const QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 49, column 17>
//   // proto: static void QToolTip::showText(const QPoint & pos, const QString & text, QWidget * w);
// _ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidget showText(const class QPoint &, const class QString &, class QWidget *)
extern "C"
void
C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidget(const QPoint* arg1,
const QString* arg2,
QWidget * arg3) {
  QToolTip::showText(*((const QPoint*)arg1),
*((const QString*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtooltip.h', line 54, column 17>
//   // proto: static bool QToolTip::isVisible();
// _ZN8QToolTip9isVisibleEv isVisible()
extern "C"
bool
C_ZN8QToolTip9isVisibleEv() {
  auto ret =
  QToolTip::isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// <= body block end

