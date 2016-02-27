// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qcalendarwidget.h
// dst-file: /src/widgets/qcalendarwidget.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcalendarwidget.h>


#include <qdatetime.h>
#include <qsize.h>
#include <qnamespace.h>
#include <qtextformat.h>
#include <qmap.h>
#include <qjsonobject.h>
// <= header block end

// main block begin =>
void __keep_qcalendarwidget_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCalendarWidget_Class_Size()
{
  return sizeof(QCalendarWidget);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 159, column 10>
//   // proto:  void QCalendarWidget::selectionChanged();
// _ZN15QCalendarWidget16selectionChangedEv selectionChanged()
extern "C"
void
C_ZN15QCalendarWidget16selectionChangedEv(void *qthis) {
  ((QCalendarWidget*)qthis)->selectionChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 154, column 10>
//   // proto:  void QCalendarWidget::showPreviousYear();
// _ZN15QCalendarWidget16showPreviousYearEv showPreviousYear()
extern "C"
void
C_ZN15QCalendarWidget16showPreviousYearEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showPreviousYear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 100, column 11>
//   // proto:  QDate QCalendarWidget::maximumDate();
// _ZNK15QCalendarWidget11maximumDateEv maximumDate()
extern "C"
QDate*
C_ZNK15QCalendarWidget11maximumDateEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->maximumDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 152, column 10>
//   // proto:  void QCalendarWidget::showPreviousMonth();
// _ZN15QCalendarWidget17showPreviousMonthEv showPreviousMonth()
extern "C"
void
C_ZN15QCalendarWidget17showPreviousMonthEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showPreviousMonth();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 155, column 10>
//   // proto:  void QCalendarWidget::showSelectedDate();
// _ZN15QCalendarWidget16showSelectedDateEv showSelectedDate()
extern "C"
void
C_ZN15QCalendarWidget16showSelectedDateEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showSelectedDate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 90, column 19>
//   // proto:  QSize QCalendarWidget::minimumSizeHint();
// _ZNK15QCalendarWidget15minimumSizeHintEv minimumSizeHint()
extern "C"
QSize*
C_ZNK15QCalendarWidget15minimumSizeHintEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->minimumSizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 132, column 10>
//   // proto:  void QCalendarWidget::setDateEditAcceptDelay(int delay);
// _ZN15QCalendarWidget22setDateEditAcceptDelayEi setDateEditAcceptDelay(int)
extern "C"
void
C_ZN15QCalendarWidget22setDateEditAcceptDelayEi(void *qthis,
int arg1) {
  ((QCalendarWidget*)qthis)->setDateEditAcceptDelay(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 149, column 10>
//   // proto:  void QCalendarWidget::setGridVisible(bool show);
// _ZN15QCalendarWidget14setGridVisibleEb setGridVisible(_Bool)
extern "C"
void
C_ZN15QCalendarWidget14setGridVisibleEb(void *qthis,
bool arg1) {
  ((QCalendarWidget*)qthis)->setGridVisible(arg1);
}
//   // proto:  void QCalendarWidget::~QCalendarWidget();
extern "C"
void C_ZN15QCalendarWidgetD2Ev(void *qthis) {
  delete (QCalendarWidget*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 89, column 19>
//   // proto:  QSize QCalendarWidget::sizeHint();
// _ZNK15QCalendarWidget8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK15QCalendarWidget8sizeHintEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 115, column 26>
//   // proto:  QCalendarWidget::VerticalHeaderFormat QCalendarWidget::verticalHeaderFormat();
// _ZNK15QCalendarWidget20verticalHeaderFormatEv verticalHeaderFormat()
extern "C"
QCalendarWidget::VerticalHeaderFormat
C_ZNK15QCalendarWidget20verticalHeaderFormatEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->verticalHeaderFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 95, column 9>
//   // proto:  int QCalendarWidget::monthShown();
// _ZNK15QCalendarWidget10monthShownEv monthShown()
extern "C"
int
C_ZNK15QCalendarWidget10monthShownEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->monthShown();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 146, column 10>
//   // proto:  void QCalendarWidget::setSelectedDate(const QDate & date);
// _ZN15QCalendarWidget15setSelectedDateERK5QDate setSelectedDate(const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget15setSelectedDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QCalendarWidget*)qthis)->setSelectedDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 86, column 14>
//   // proto:  void QCalendarWidget::QCalendarWidget(QWidget * parent);
extern "C"
QCalendarWidget*
C_ZN15QCalendarWidgetC2EP7QWidget(QWidget * arg1) {
  auto ret = new QCalendarWidget(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 103, column 19>
//   // proto:  Qt::DayOfWeek QCalendarWidget::firstDayOfWeek();
// _ZNK15QCalendarWidget14firstDayOfWeekEv firstDayOfWeek()
extern "C"
Qt::DayOfWeek
C_ZNK15QCalendarWidget14firstDayOfWeekEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->firstDayOfWeek();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 109, column 19>
//   // proto:  QCalendarWidget::SelectionMode QCalendarWidget::selectionMode();
// _ZNK15QCalendarWidget13selectionModeEv selectionMode()
extern "C"
QCalendarWidget::SelectionMode
C_ZNK15QCalendarWidget13selectionModeEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->selectionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 162, column 10>
//   // proto:  void QCalendarWidget::currentPageChanged(int year, int month);
// _ZN15QCalendarWidget18currentPageChangedEii currentPageChanged(int, int)
extern "C"
void
C_ZN15QCalendarWidget18currentPageChangedEii(void *qthis,
int arg1,
int arg2) {
  ((QCalendarWidget*)qthis)->currentPageChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 122, column 10>
//   // proto:  void QCalendarWidget::setWeekdayTextFormat(Qt::DayOfWeek dayOfWeek, const QTextCharFormat & format);
// _ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat setWeekdayTextFormat(Qt::DayOfWeek, const class QTextCharFormat &)
extern "C"
void
C_ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat(void *qthis,
Qt::DayOfWeek* arg1,
const QTextCharFormat* arg2) {
  ((QCalendarWidget*)qthis)->setWeekdayTextFormat(*((Qt::DayOfWeek*)arg1),
*((const QTextCharFormat*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 51, column 5>
//   // proto:  const QMetaObject * QCalendarWidget::metaObject();
// _ZNK15QCalendarWidget10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QCalendarWidget10metaObjectEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 150, column 10>
//   // proto:  void QCalendarWidget::setNavigationBarVisible(bool visible);
// _ZN15QCalendarWidget23setNavigationBarVisibleEb setNavigationBarVisible(_Bool)
extern "C"
void
C_ZN15QCalendarWidget23setNavigationBarVisibleEb(void *qthis,
bool arg1) {
  ((QCalendarWidget*)qthis)->setNavigationBarVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 106, column 10>
//   // proto:  bool QCalendarWidget::isNavigationBarVisible();
// _ZNK15QCalendarWidget22isNavigationBarVisibleEv isNavigationBarVisible()
extern "C"
bool
C_ZNK15QCalendarWidget22isNavigationBarVisibleEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->isNavigationBarVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 125, column 21>
//   // proto:  QTextCharFormat QCalendarWidget::dateTextFormat(const QDate & date);
// _ZNK15QCalendarWidget14dateTextFormatERK5QDate dateTextFormat(const class QDate &)
extern "C"
QTextCharFormat*
C_ZNK15QCalendarWidget14dateTextFormatERK5QDate(void *qthis,
const QDate* arg1) {
  auto ret =
  ((QCalendarWidget*)qthis)->dateTextFormat(*((const QDate*)arg1));
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 104, column 10>
//   // proto:  void QCalendarWidget::setFirstDayOfWeek(Qt::DayOfWeek dayOfWeek);
// _ZN15QCalendarWidget17setFirstDayOfWeekEN2Qt9DayOfWeekE setFirstDayOfWeek(Qt::DayOfWeek)
extern "C"
void
C_ZN15QCalendarWidget17setFirstDayOfWeekEN2Qt9DayOfWeekE(void *qthis,
Qt::DayOfWeek* arg1) {
  ((QCalendarWidget*)qthis)->setFirstDayOfWeek(*((Qt::DayOfWeek*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 98, column 10>
//   // proto:  void QCalendarWidget::setMinimumDate(const QDate & date);
// _ZN15QCalendarWidget14setMinimumDateERK5QDate setMinimumDate(const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget14setMinimumDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QCalendarWidget*)qthis)->setMinimumDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 131, column 9>
//   // proto:  int QCalendarWidget::dateEditAcceptDelay();
// _ZNK15QCalendarWidget19dateEditAcceptDelayEv dateEditAcceptDelay()
extern "C"
int
C_ZNK15QCalendarWidget19dateEditAcceptDelayEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->dateEditAcceptDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 97, column 11>
//   // proto:  QDate QCalendarWidget::minimumDate();
// _ZNK15QCalendarWidget11minimumDateEv minimumDate()
extern "C"
QDate*
C_ZNK15QCalendarWidget11minimumDateEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->minimumDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 121, column 21>
//   // proto:  QTextCharFormat QCalendarWidget::weekdayTextFormat(Qt::DayOfWeek dayOfWeek);
// _ZNK15QCalendarWidget17weekdayTextFormatEN2Qt9DayOfWeekE weekdayTextFormat(Qt::DayOfWeek)
extern "C"
QTextCharFormat*
C_ZNK15QCalendarWidget17weekdayTextFormatEN2Qt9DayOfWeekE(void *qthis,
Qt::DayOfWeek* arg1) {
  auto ret =
  ((QCalendarWidget*)qthis)->weekdayTextFormat(*((Qt::DayOfWeek*)arg1));
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 110, column 10>
//   // proto:  void QCalendarWidget::setSelectionMode(QCalendarWidget::SelectionMode mode);
// _ZN15QCalendarWidget16setSelectionModeENS_13SelectionModeE setSelectionMode(enum QCalendarWidget::SelectionMode)
extern "C"
void
C_ZN15QCalendarWidget16setSelectionModeENS_13SelectionModeE(void *qthis,
QCalendarWidget::SelectionMode arg1) {
  ((QCalendarWidget*)qthis)->setSelectionMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 128, column 10>
//   // proto:  bool QCalendarWidget::isDateEditEnabled();
// _ZNK15QCalendarWidget17isDateEditEnabledEv isDateEditEnabled()
extern "C"
bool
C_ZNK15QCalendarWidget17isDateEditEnabledEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->isDateEditEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 124, column 34>
//   // proto:  QMap<QDate, QTextCharFormat> QCalendarWidget::dateTextFormat();
// _ZNK15QCalendarWidget14dateTextFormatEv dateTextFormat()
extern "C"
QMap<QDate, QTextCharFormat>*
C_ZNK15QCalendarWidget14dateTextFormatEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->dateTextFormat();
  return new QMap<QDate, QTextCharFormat>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 160, column 10>
//   // proto:  void QCalendarWidget::clicked(const QDate & date);
// _ZN15QCalendarWidget7clickedERK5QDate clicked(const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget7clickedERK5QDate(void *qthis,
const QDate* arg1) {
  ((QCalendarWidget*)qthis)->clicked(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 129, column 10>
//   // proto:  void QCalendarWidget::setDateEditEnabled(bool enable);
// _ZN15QCalendarWidget18setDateEditEnabledEb setDateEditEnabled(_Bool)
extern "C"
void
C_ZN15QCalendarWidget18setDateEditEnabledEb(void *qthis,
bool arg1) {
  ((QCalendarWidget*)qthis)->setDateEditEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 126, column 10>
//   // proto:  void QCalendarWidget::setDateTextFormat(const QDate & date, const QTextCharFormat & format);
// _ZN15QCalendarWidget17setDateTextFormatERK5QDateRK15QTextCharFormat setDateTextFormat(const class QDate &, const class QTextCharFormat &)
extern "C"
void
C_ZN15QCalendarWidget17setDateTextFormatERK5QDateRK15QTextCharFormat(void *qthis,
const QDate* arg1,
const QTextCharFormat* arg2) {
  ((QCalendarWidget*)qthis)->setDateTextFormat(*((const QDate*)arg1),
*((const QTextCharFormat*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 112, column 28>
//   // proto:  QCalendarWidget::HorizontalHeaderFormat QCalendarWidget::horizontalHeaderFormat();
// _ZNK15QCalendarWidget22horizontalHeaderFormatEv horizontalHeaderFormat()
extern "C"
QCalendarWidget::HorizontalHeaderFormat
C_ZNK15QCalendarWidget22horizontalHeaderFormatEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->horizontalHeaderFormat();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 151, column 10>
//   // proto:  void QCalendarWidget::showNextMonth();
// _ZN15QCalendarWidget13showNextMonthEv showNextMonth()
extern "C"
void
C_ZN15QCalendarWidget13showNextMonthEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showNextMonth();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 147, column 10>
//   // proto:  void QCalendarWidget::setDateRange(const QDate & min, const QDate & max);
// _ZN15QCalendarWidget12setDateRangeERK5QDateS2_ setDateRange(const class QDate &, const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget12setDateRangeERK5QDateS2_(void *qthis,
const QDate* arg1,
const QDate* arg2) {
  ((QCalendarWidget*)qthis)->setDateRange(*((const QDate*)arg1),
*((const QDate*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 92, column 11>
//   // proto:  QDate QCalendarWidget::selectedDate();
// _ZNK15QCalendarWidget12selectedDateEv selectedDate()
extern "C"
QDate*
C_ZNK15QCalendarWidget12selectedDateEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->selectedDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 119, column 10>
//   // proto:  void QCalendarWidget::setHeaderTextFormat(const QTextCharFormat & format);
// _ZN15QCalendarWidget19setHeaderTextFormatERK15QTextCharFormat setHeaderTextFormat(const class QTextCharFormat &)
extern "C"
void
C_ZN15QCalendarWidget19setHeaderTextFormatERK15QTextCharFormat(void *qthis,
const QTextCharFormat* arg1) {
  ((QCalendarWidget*)qthis)->setHeaderTextFormat(*((const QTextCharFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 107, column 10>
//   // proto:  bool QCalendarWidget::isGridVisible();
// _ZNK15QCalendarWidget13isGridVisibleEv isGridVisible()
extern "C"
bool
C_ZNK15QCalendarWidget13isGridVisibleEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->isGridVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 94, column 9>
//   // proto:  int QCalendarWidget::yearShown();
// _ZNK15QCalendarWidget9yearShownEv yearShown()
extern "C"
int
C_ZNK15QCalendarWidget9yearShownEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->yearShown();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 113, column 10>
//   // proto:  void QCalendarWidget::setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat format);
// _ZN15QCalendarWidget25setHorizontalHeaderFormatENS_22HorizontalHeaderFormatE setHorizontalHeaderFormat(enum QCalendarWidget::HorizontalHeaderFormat)
extern "C"
void
C_ZN15QCalendarWidget25setHorizontalHeaderFormatENS_22HorizontalHeaderFormatE(void *qthis,
QCalendarWidget::HorizontalHeaderFormat arg1) {
  ((QCalendarWidget*)qthis)->setHorizontalHeaderFormat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 101, column 10>
//   // proto:  void QCalendarWidget::setMaximumDate(const QDate & date);
// _ZN15QCalendarWidget14setMaximumDateERK5QDate setMaximumDate(const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget14setMaximumDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QCalendarWidget*)qthis)->setMaximumDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 118, column 21>
//   // proto:  QTextCharFormat QCalendarWidget::headerTextFormat();
// _ZNK15QCalendarWidget16headerTextFormatEv headerTextFormat()
extern "C"
QTextCharFormat*
C_ZNK15QCalendarWidget16headerTextFormatEv(void *qthis) {
  auto ret =
  ((QCalendarWidget*)qthis)->headerTextFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 148, column 10>
//   // proto:  void QCalendarWidget::setCurrentPage(int year, int month);
// _ZN15QCalendarWidget14setCurrentPageEii setCurrentPage(int, int)
extern "C"
void
C_ZN15QCalendarWidget14setCurrentPageEii(void *qthis,
int arg1,
int arg2) {
  ((QCalendarWidget*)qthis)->setCurrentPage(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 156, column 10>
//   // proto:  void QCalendarWidget::showToday();
// _ZN15QCalendarWidget9showTodayEv showToday()
extern "C"
void
C_ZN15QCalendarWidget9showTodayEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showToday();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 161, column 10>
//   // proto:  void QCalendarWidget::activated(const QDate & date);
// _ZN15QCalendarWidget9activatedERK5QDate activated(const class QDate &)
extern "C"
void
C_ZN15QCalendarWidget9activatedERK5QDate(void *qthis,
const QDate* arg1) {
  ((QCalendarWidget*)qthis)->activated(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 153, column 10>
//   // proto:  void QCalendarWidget::showNextYear();
// _ZN15QCalendarWidget12showNextYearEv showNextYear()
extern "C"
void
C_ZN15QCalendarWidget12showNextYearEv(void *qthis) {
  ((QCalendarWidget*)qthis)->showNextYear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcalendarwidget.h', line 116, column 10>
//   // proto:  void QCalendarWidget::setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat format);
// _ZN15QCalendarWidget23setVerticalHeaderFormatENS_20VerticalHeaderFormatE setVerticalHeaderFormat(enum QCalendarWidget::VerticalHeaderFormat)
extern "C"
void
C_ZN15QCalendarWidget23setVerticalHeaderFormatENS_20VerticalHeaderFormatE(void *qthis,
QCalendarWidget::VerticalHeaderFormat arg1) {
  ((QCalendarWidget*)qthis)->setVerticalHeaderFormat(arg1);
}
// <= ext block end

// body block begin =>
// QCalendarWidget_SlotProxy here
class QCalendarWidget_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCalendarWidget_SlotProxy():QObject(){}

public slots:
  // clicked(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget7clickedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public slots:
  // selectionChanged()
  void slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv();
public:
  void (*slot_func__ZN15QCalendarWidget16selectionChangedEv)(void* rsfptr) = NULL;
public slots:
  // activated(const class QDate &)
  void slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN15QCalendarWidget9activatedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public slots:
  // currentPageChanged(int, int)
  void slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN15QCalendarWidget18currentPageChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcalendarwidget.moc"

extern "C" {
  QCalendarWidget_SlotProxy* QCalendarWidget_SlotProxy_new()
  {
    return new QCalendarWidget_SlotProxy();
  }
};

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget7clickedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget7clickedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget7clickedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget7clickedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget7clickedERK5QDate))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(clicked(const class QDate &)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget7clickedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget7clickedERK5QDate(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv() {
  if (this->slot_func__ZN15QCalendarWidget16selectionChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget16selectionChangedEv(this->rsfptr);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget16selectionChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget16selectionChangedEv = (decltype(that->slot_func__ZN15QCalendarWidget16selectionChangedEv))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(selectionChanged()), that, SLOT(slot_proxy_func__ZN15QCalendarWidget16selectionChangedEv()));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget16selectionChangedEv(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN15QCalendarWidget9activatedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget9activatedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget9activatedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget9activatedERK5QDate = (decltype(that->slot_func__ZN15QCalendarWidget9activatedERK5QDate))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(activated(const class QDate &)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget9activatedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget9activatedERK5QDate(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCalendarWidget_SlotProxy::slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN15QCalendarWidget18currentPageChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN15QCalendarWidget18currentPageChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QCalendarWidget_SlotProxy_connect__ZN15QCalendarWidget18currentPageChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCalendarWidget_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QCalendarWidget18currentPageChangedEii = (decltype(that->slot_func__ZN15QCalendarWidget18currentPageChangedEii))ffifptr;
  QObject::connect((QCalendarWidget*)sender, SIGNAL(currentPageChanged(int, int)), that, SLOT(slot_proxy_func__ZN15QCalendarWidget18currentPageChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QCalendarWidget_SlotProxy_disconnect__ZN15QCalendarWidget18currentPageChangedEii(QCalendarWidget_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

