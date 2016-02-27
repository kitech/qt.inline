// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qstylepainter.h
// dst-file: /src/widgets/qstylepainter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstylepainter.h>


// <= header block end

// main block begin =>
void __keep_qstylepainter_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 48, column 21>
//   // proto:  void QStylePainter::QStylePainter(QWidget * w);
if (true) {
  auto f = [](QWidget * arg1) {
    new QStylePainter(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 49, column 12>
//   // proto:  void QStylePainter::QStylePainter(QPaintDevice * pd, QWidget * w);
if (true) {
  auto f = [](QPaintDevice * arg1, QWidget * arg2) {
    new QStylePainter(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 59, column 17>
//   // proto:  void QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex & opt);
if (true) {
  auto f = [](QStylePainter flythis, QStyle::ComplexControl arg1, const QStyleOptionComplex & arg2) {
    ((QStylePainter*)0)->drawComplexControl(arg1, arg2);
    flythis.drawComplexControl(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex drawComplexControl(class QStyle::ComplexControl, const class QStyleOptionComplex &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 47, column 12>
//   // proto:  void QStylePainter::QStylePainter();
if (true) {
  auto f = []() {
    new QStylePainter();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 51, column 17>
//   // proto:  bool QStylePainter::begin(QPaintDevice * pd, QWidget * w);
if (true) {
  auto f = [](QStylePainter flythis, QPaintDevice * arg1, QWidget * arg2) {
    ((QStylePainter*)0)->begin(arg1, arg2);
    flythis.begin(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget begin(class QPaintDevice *, class QWidget *)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 60, column 17>
//   // proto:  void QStylePainter::drawItemText(const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole);
if (true) {
  auto f = [](QStylePainter flythis, const QRect & arg1, int arg2, const QPalette & arg3, bool arg4, const QString & arg5, QPalette::ColorRole arg6) {
    ((QStylePainter*)0)->drawItemText(arg1, arg2, arg3, arg4, arg5, arg6);
    flythis.drawItemText(arg1, arg2, arg3, arg4, arg5, arg6);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE drawItemText(const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 50, column 17>
//   // proto:  bool QStylePainter::begin(QWidget * w);
if (true) {
  auto f = [](QStylePainter flythis, QWidget * arg1) {
    ((QStylePainter*)0)->begin(arg1);
    flythis.begin(arg1);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter5beginEP7QWidget begin(class QWidget *)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 62, column 17>
//   // proto:  void QStylePainter::drawItemPixmap(const QRect & r, int flags, const QPixmap & pixmap);
if (true) {
  auto f = [](QStylePainter flythis, const QRect & arg1, int arg2, const QPixmap & arg3) {
    ((QStylePainter*)0)->drawItemPixmap(arg1, arg2, arg3);
    flythis.drawItemPixmap(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap drawItemPixmap(const class QRect &, int, const class QPixmap &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 63, column 20>
//   // proto:  QStyle * QStylePainter::style();
if (true) {
  auto f = [](QStylePainter flythis) {
    ((QStylePainter*)0)->style();
    flythis.style();
  };
  if (f == nullptr){}
}
// _ZNK13QStylePainter5styleEv style()
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 58, column 17>
//   // proto:  void QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption & opt);
if (true) {
  auto f = [](QStylePainter flythis, QStyle::ControlElement arg1, const QStyleOption & arg2) {
    ((QStylePainter*)0)->drawControl(arg1, arg2);
    flythis.drawControl(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption drawControl(class QStyle::ControlElement, const class QStyleOption &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 57, column 17>
//   // proto:  void QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption & opt);
if (true) {
  auto f = [](QStylePainter flythis, QStyle::PrimitiveElement arg1, const QStyleOption & arg2) {
    ((QStylePainter*)0)->drawPrimitive(arg1, arg2);
    flythis.drawPrimitive(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption drawPrimitive(class QStyle::PrimitiveElement, const class QStyleOption &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStylePainter_Class_Size()
{
  return sizeof(QStylePainter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 48, column 21>
//   // proto:  void QStylePainter::QStylePainter(QWidget * w);
extern "C"
QStylePainter*
C_ZN13QStylePainterC2EP7QWidget(QWidget * arg1) {
  auto ret = new QStylePainter(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 49, column 12>
//   // proto:  void QStylePainter::QStylePainter(QPaintDevice * pd, QWidget * w);
extern "C"
QStylePainter*
C_ZN13QStylePainterC2EP12QPaintDeviceP7QWidget(QPaintDevice * arg1,
QWidget * arg2) {
  auto ret = new QStylePainter(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 59, column 17>
//   // proto:  void QStylePainter::drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex & opt);
// _ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex drawComplexControl(class QStyle::ComplexControl, const class QStyleOptionComplex &)
extern "C"
void
C_ZN13QStylePainter18drawComplexControlEN6QStyle14ComplexControlERK19QStyleOptionComplex(void *qthis,
QStyle::ComplexControl* arg1,
const QStyleOptionComplex* arg2) {
  ((QStylePainter*)qthis)->drawComplexControl(*((QStyle::ComplexControl*)arg1),
*((const QStyleOptionComplex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 47, column 12>
//   // proto:  void QStylePainter::QStylePainter();
extern "C"
QStylePainter*
C_ZN13QStylePainterC2Ev() {
  auto ret = new QStylePainter();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 51, column 17>
//   // proto:  bool QStylePainter::begin(QPaintDevice * pd, QWidget * w);
// _ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget begin(class QPaintDevice *, class QWidget *)
extern "C"
bool
C_ZN13QStylePainter5beginEP12QPaintDeviceP7QWidget(void *qthis,
QPaintDevice * arg1,
QWidget * arg2) {
  auto ret =
  ((QStylePainter*)qthis)->begin(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 60, column 17>
//   // proto:  void QStylePainter::drawItemText(const QRect & r, int flags, const QPalette & pal, bool enabled, const QString & text, QPalette::ColorRole textRole);
// _ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE drawItemText(const class QRect &, int, const class QPalette &, _Bool, const class QString &, class QPalette::ColorRole)
extern "C"
void
C_ZN13QStylePainter12drawItemTextERK5QRectiRK8QPalettebRK7QStringNS3_9ColorRoleE(void *qthis,
const QRect* arg1,
int arg2,
const QPalette* arg3,
bool arg4,
const QString* arg5,
QPalette::ColorRole* arg6) {
  ((QStylePainter*)qthis)->drawItemText(*((const QRect*)arg1),
arg2,
*((const QPalette*)arg3),
arg4,
*((const QString*)arg5),
*((QPalette::ColorRole*)arg6));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 50, column 17>
//   // proto:  bool QStylePainter::begin(QWidget * w);
// _ZN13QStylePainter5beginEP7QWidget begin(class QWidget *)
extern "C"
bool
C_ZN13QStylePainter5beginEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QStylePainter*)qthis)->begin(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 62, column 17>
//   // proto:  void QStylePainter::drawItemPixmap(const QRect & r, int flags, const QPixmap & pixmap);
// _ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap drawItemPixmap(const class QRect &, int, const class QPixmap &)
extern "C"
void
C_ZN13QStylePainter14drawItemPixmapERK5QRectiRK7QPixmap(void *qthis,
const QRect* arg1,
int arg2,
const QPixmap* arg3) {
  ((QStylePainter*)qthis)->drawItemPixmap(*((const QRect*)arg1),
arg2,
*((const QPixmap*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 63, column 20>
//   // proto:  QStyle * QStylePainter::style();
// _ZNK13QStylePainter5styleEv style()
extern "C"
void*
C_ZNK13QStylePainter5styleEv(void *qthis) {
  auto ret =
  ((QStylePainter*)qthis)->style();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 58, column 17>
//   // proto:  void QStylePainter::drawControl(QStyle::ControlElement ce, const QStyleOption & opt);
// _ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption drawControl(class QStyle::ControlElement, const class QStyleOption &)
extern "C"
void
C_ZN13QStylePainter11drawControlEN6QStyle14ControlElementERK12QStyleOption(void *qthis,
QStyle::ControlElement* arg1,
const QStyleOption* arg2) {
  ((QStylePainter*)qthis)->drawControl(*((QStyle::ControlElement*)arg1),
*((const QStyleOption*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qstylepainter.h', line 57, column 17>
//   // proto:  void QStylePainter::drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption & opt);
// _ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption drawPrimitive(class QStyle::PrimitiveElement, const class QStyleOption &)
extern "C"
void
C_ZN13QStylePainter13drawPrimitiveEN6QStyle16PrimitiveElementERK12QStyleOption(void *qthis,
QStyle::PrimitiveElement* arg1,
const QStyleOption* arg2) {
  ((QStylePainter*)qthis)->drawPrimitive(*((QStyle::PrimitiveElement*)arg1),
*((const QStyleOption*)arg2));
}
// <= ext block end

// body block begin =>
// <= body block end

