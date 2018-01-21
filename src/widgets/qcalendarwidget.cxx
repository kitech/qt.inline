//  header block begin
// /usr/include/qt/QtWidgets/qcalendarwidget.h
#include <qcalendarwidget.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QCalendarWidget10metaObjectEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:92
// void QCalendarWidget(class QWidget *)
extern "C"
void* C_ZN15QCalendarWidgetC1EP7QWidget(QWidget * parent) {
  return new QCalendarWidget(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qcalendarwidget.h:93
// void ~QCalendarWidget()
extern "C"
void C_ZN15QCalendarWidgetD1Ev(void *this_) {
  delete (QCalendarWidget*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qcalendarwidget.h:95
// QSize sizeHint()
extern "C"
void C_ZNK15QCalendarWidget8sizeHintEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qcalendarwidget.h:96
// QSize minimumSizeHint()
extern "C"
void C_ZNK15QCalendarWidget15minimumSizeHintEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->minimumSizeHint();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:98
// QDate selectedDate()
extern "C"
void C_ZNK15QCalendarWidget12selectedDateEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->selectedDate();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:100
// int yearShown()
extern "C"
void C_ZNK15QCalendarWidget9yearShownEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->yearShown();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:101
// int monthShown()
extern "C"
void C_ZNK15QCalendarWidget10monthShownEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->monthShown();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:103
// QDate minimumDate()
extern "C"
void C_ZNK15QCalendarWidget11minimumDateEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->minimumDate();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:104
// void setMinimumDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget14setMinimumDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setMinimumDate(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:106
// QDate maximumDate()
extern "C"
void C_ZNK15QCalendarWidget11maximumDateEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->maximumDate();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:107
// void setMaximumDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget14setMaximumDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setMaximumDate(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:109
// Qt::DayOfWeek firstDayOfWeek()
extern "C"
void C_ZNK15QCalendarWidget14firstDayOfWeekEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->firstDayOfWeek();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:110
// void setFirstDayOfWeek(Qt::DayOfWeek)
extern "C"
void C_ZN15QCalendarWidget17setFirstDayOfWeekEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  ((QCalendarWidget*)this_)->setFirstDayOfWeek(dayOfWeek);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:112
// bool isNavigationBarVisible()
extern "C"
void C_ZNK15QCalendarWidget22isNavigationBarVisibleEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->isNavigationBarVisible();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:113
// bool isGridVisible()
extern "C"
void C_ZNK15QCalendarWidget13isGridVisibleEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->isGridVisible();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:115
// QCalendarWidget::SelectionMode selectionMode()
extern "C"
void C_ZNK15QCalendarWidget13selectionModeEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->selectionMode();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:116
// void setSelectionMode(enum QCalendarWidget::SelectionMode)
extern "C"
void C_ZN15QCalendarWidget16setSelectionModeENS_13SelectionModeE(void *this_, QCalendarWidget::SelectionMode mode) {
  ((QCalendarWidget*)this_)->setSelectionMode(mode);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:118
// QCalendarWidget::HorizontalHeaderFormat horizontalHeaderFormat()
extern "C"
void C_ZNK15QCalendarWidget22horizontalHeaderFormatEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->horizontalHeaderFormat();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:119
// void setHorizontalHeaderFormat(enum QCalendarWidget::HorizontalHeaderFormat)
extern "C"
void C_ZN15QCalendarWidget25setHorizontalHeaderFormatENS_22HorizontalHeaderFormatE(void *this_, QCalendarWidget::HorizontalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setHorizontalHeaderFormat(format);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:121
// QCalendarWidget::VerticalHeaderFormat verticalHeaderFormat()
extern "C"
void C_ZNK15QCalendarWidget20verticalHeaderFormatEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->verticalHeaderFormat();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:122
// void setVerticalHeaderFormat(enum QCalendarWidget::VerticalHeaderFormat)
extern "C"
void C_ZN15QCalendarWidget23setVerticalHeaderFormatENS_20VerticalHeaderFormatE(void *this_, QCalendarWidget::VerticalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setVerticalHeaderFormat(format);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:124
// QTextCharFormat headerTextFormat()
extern "C"
void C_ZNK15QCalendarWidget16headerTextFormatEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->headerTextFormat();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:125
// void setHeaderTextFormat(const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget19setHeaderTextFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setHeaderTextFormat(format);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:127
// QTextCharFormat weekdayTextFormat(Qt::DayOfWeek)
extern "C"
void C_ZNK15QCalendarWidget17weekdayTextFormatEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  /*return*/ ((QCalendarWidget*)this_)->weekdayTextFormat(dayOfWeek);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:128
// void setWeekdayTextFormat(Qt::DayOfWeek, const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat(void *this_, Qt::DayOfWeek dayOfWeek, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setWeekdayTextFormat(dayOfWeek, format);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:130
// QMap<QDate, QTextCharFormat> dateTextFormat()
extern "C"
void C_ZNK15QCalendarWidget14dateTextFormatEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->dateTextFormat();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:131
// QTextCharFormat dateTextFormat(const class QDate &)
extern "C"
void C_ZNK15QCalendarWidget14dateTextFormatERK5QDate(void *this_, const QDate & date) {
  /*return*/ ((QCalendarWidget*)this_)->dateTextFormat(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:132
// void setDateTextFormat(const class QDate &, const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget17setDateTextFormatERK5QDateRK15QTextCharFormat(void *this_, const QDate & date, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setDateTextFormat(date, format);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:134
// bool isDateEditEnabled()
extern "C"
void C_ZNK15QCalendarWidget17isDateEditEnabledEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->isDateEditEnabled();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:135
// void setDateEditEnabled(_Bool)
extern "C"
void C_ZN15QCalendarWidget18setDateEditEnabledEb(void *this_, bool enable) {
  ((QCalendarWidget*)this_)->setDateEditEnabled(enable);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:137
// int dateEditAcceptDelay()
extern "C"
void C_ZNK15QCalendarWidget19dateEditAcceptDelayEv(void *this_) {
  /*return*/ ((QCalendarWidget*)this_)->dateEditAcceptDelay();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:138
// void setDateEditAcceptDelay(int)
extern "C"
void C_ZN15QCalendarWidget22setDateEditAcceptDelayEi(void *this_, int delay) {
  ((QCalendarWidget*)this_)->setDateEditAcceptDelay(delay);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:152
// void setSelectedDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget15setSelectedDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setSelectedDate(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:153
// void setDateRange(const class QDate &, const class QDate &)
extern "C"
void C_ZN15QCalendarWidget12setDateRangeERK5QDateS2_(void *this_, const QDate & min, const QDate & max) {
  ((QCalendarWidget*)this_)->setDateRange(min, max);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:154
// void setCurrentPage(int, int)
extern "C"
void C_ZN15QCalendarWidget14setCurrentPageEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->setCurrentPage(year, month);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:155
// void setGridVisible(_Bool)
extern "C"
void C_ZN15QCalendarWidget14setGridVisibleEb(void *this_, bool show) {
  ((QCalendarWidget*)this_)->setGridVisible(show);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:156
// void setNavigationBarVisible(_Bool)
extern "C"
void C_ZN15QCalendarWidget23setNavigationBarVisibleEb(void *this_, bool visible) {
  ((QCalendarWidget*)this_)->setNavigationBarVisible(visible);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:157
// void showNextMonth()
extern "C"
void C_ZN15QCalendarWidget13showNextMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextMonth();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:158
// void showPreviousMonth()
extern "C"
void C_ZN15QCalendarWidget17showPreviousMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousMonth();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:159
// void showNextYear()
extern "C"
void C_ZN15QCalendarWidget12showNextYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextYear();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:160
// void showPreviousYear()
extern "C"
void C_ZN15QCalendarWidget16showPreviousYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousYear();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:161
// void showSelectedDate()
extern "C"
void C_ZN15QCalendarWidget16showSelectedDateEv(void *this_) {
  ((QCalendarWidget*)this_)->showSelectedDate();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:162
// void showToday()
extern "C"
void C_ZN15QCalendarWidget9showTodayEv(void *this_) {
  ((QCalendarWidget*)this_)->showToday();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:165
// void selectionChanged()
extern "C"
void C_ZN15QCalendarWidget16selectionChangedEv(void *this_) {
  ((QCalendarWidget*)this_)->selectionChanged();
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:166
// void clicked(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget7clickedERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->clicked(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:167
// void activated(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget9activatedERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->activated(date);
}
// /usr/include/qt/QtWidgets/qcalendarwidget.h:168
// void currentPageChanged(int, int)
extern "C"
void C_ZN15QCalendarWidget18currentPageChangedEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->currentPageChanged(year, month);
}
//  main block end
