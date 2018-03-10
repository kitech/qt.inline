//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qcalendarwidget.h
#ifndef protected
#define protected public
#endif
#include <qcalendarwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCalendarWidget is pure virtual: false
// QCalendarWidget has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCalendarWidget : public QCalendarWidget {
public:
  virtual ~MyQCalendarWidget() {}
// void QCalendarWidget(class QWidget *)
MyQCalendarWidget(QWidget * parent) : QCalendarWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCalendarWidget::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"eventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QCalendarWidget::eventFilter(watched, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintCell(class QPainter *, const class QRect &, const class QDate &)
  virtual void paintCell(QPainter * painter, const QRect & rect, const QDate & date) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintCell", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&date, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::paintCell(painter, rect, date);
  }
  }

// Protected Visibility=Default Availability=Available
// void updateCell(const class QDate &)
  virtual void updateCell(const QDate & date) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCell", &handled, 1, (uint64_t)&date, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::updateCell(date);
  }
  }

// Protected Visibility=Default Availability=Available
// void updateCells()
  virtual void updateCells() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateCells", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QCalendarWidget::updateCells();
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:141
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QCalendarWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QCalendarWidget*)this_)->QCalendarWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:142
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QCalendarWidget*)this_)->QCalendarWidget::eventFilter(watched, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:143
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:144
// [-2] void resizeEvent(class QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:145
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:147
// [-2] void paintCell(class QPainter *, const class QRect &, const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate(void *this_, QPainter * painter, QRect* rect, QDate* date) {
  ((QCalendarWidget*)this_)->QCalendarWidget::paintCell(painter, *rect, *date);
}

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qcalendarwidget.h:148
// [-2] void updateCell(const class QDate &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget10updateCellERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->QCalendarWidget::updateCell(*date);
}
#endif // QT_VERSION >= 0x040400

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qcalendarwidget.h:149
// [-2] void updateCells()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget11updateCellsEv(void *this_) {
  ((QCalendarWidget*)this_)->QCalendarWidget::updateCells();
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget10metaObjectEv(void *this_) {
  return (void*)((QCalendarWidget*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:92
// [-2] void QCalendarWidget(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QCalendarWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCalendarWidget*)(0);
  return  new MyQCalendarWidget(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:93
// [-2] void ~QCalendarWidget()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidgetD2Ev(void *this_) {
  delete (QCalendarWidget*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:95
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget8sizeHintEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:96
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget15minimumSizeHintEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:98
// [8] QDate selectedDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget12selectedDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->selectedDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:100
// [4] int yearShown()
extern "C" Q_DECL_EXPORT
int C_ZNK15QCalendarWidget9yearShownEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->yearShown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:101
// [4] int monthShown()
extern "C" Q_DECL_EXPORT
int C_ZNK15QCalendarWidget10monthShownEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->monthShown();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:103
// [8] QDate minimumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget11minimumDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->minimumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:104
// [-2] void setMinimumDate(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget14setMinimumDateERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->setMinimumDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:106
// [8] QDate maximumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget11maximumDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->maximumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:107
// [-2] void setMaximumDate(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget14setMaximumDateERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->setMaximumDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:109
// [4] Qt::DayOfWeek firstDayOfWeek()
extern "C" Q_DECL_EXPORT
Qt::DayOfWeek C_ZNK15QCalendarWidget14firstDayOfWeekEv(void *this_) {
  return (Qt::DayOfWeek)((QCalendarWidget*)this_)->firstDayOfWeek();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:110
// [-2] void setFirstDayOfWeek(Qt::DayOfWeek)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget17setFirstDayOfWeekEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  ((QCalendarWidget*)this_)->setFirstDayOfWeek(dayOfWeek);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:112
// [1] bool isNavigationBarVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCalendarWidget22isNavigationBarVisibleEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isNavigationBarVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:113
// [1] bool isGridVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCalendarWidget13isGridVisibleEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isGridVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:115
// [4] QCalendarWidget::SelectionMode selectionMode()
extern "C" Q_DECL_EXPORT
QCalendarWidget::SelectionMode C_ZNK15QCalendarWidget13selectionModeEv(void *this_) {
  return (QCalendarWidget::SelectionMode)((QCalendarWidget*)this_)->selectionMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:116
// [-2] void setSelectionMode(enum QCalendarWidget::SelectionMode)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget16setSelectionModeENS_13SelectionModeE(void *this_, QCalendarWidget::SelectionMode mode) {
  ((QCalendarWidget*)this_)->setSelectionMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:118
// [4] QCalendarWidget::HorizontalHeaderFormat horizontalHeaderFormat()
extern "C" Q_DECL_EXPORT
QCalendarWidget::HorizontalHeaderFormat C_ZNK15QCalendarWidget22horizontalHeaderFormatEv(void *this_) {
  return (QCalendarWidget::HorizontalHeaderFormat)((QCalendarWidget*)this_)->horizontalHeaderFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:119
// [-2] void setHorizontalHeaderFormat(enum QCalendarWidget::HorizontalHeaderFormat)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget25setHorizontalHeaderFormatENS_22HorizontalHeaderFormatE(void *this_, QCalendarWidget::HorizontalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setHorizontalHeaderFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:121
// [4] QCalendarWidget::VerticalHeaderFormat verticalHeaderFormat()
extern "C" Q_DECL_EXPORT
QCalendarWidget::VerticalHeaderFormat C_ZNK15QCalendarWidget20verticalHeaderFormatEv(void *this_) {
  return (QCalendarWidget::VerticalHeaderFormat)((QCalendarWidget*)this_)->verticalHeaderFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:122
// [-2] void setVerticalHeaderFormat(enum QCalendarWidget::VerticalHeaderFormat)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget23setVerticalHeaderFormatENS_20VerticalHeaderFormatE(void *this_, QCalendarWidget::VerticalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setVerticalHeaderFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:124
// [16] QTextCharFormat headerTextFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget16headerTextFormatEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->headerTextFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:125
// [-2] void setHeaderTextFormat(const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget19setHeaderTextFormatERK15QTextCharFormat(void *this_, QTextCharFormat* format) {
  ((QCalendarWidget*)this_)->setHeaderTextFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:127
// [16] QTextCharFormat weekdayTextFormat(Qt::DayOfWeek)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget17weekdayTextFormatEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  auto rv = ((QCalendarWidget*)this_)->weekdayTextFormat(dayOfWeek);
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:128
// [-2] void setWeekdayTextFormat(Qt::DayOfWeek, const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat(void *this_, Qt::DayOfWeek dayOfWeek, QTextCharFormat* format) {
  ((QCalendarWidget*)this_)->setWeekdayTextFormat(dayOfWeek, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:131
// [16] QTextCharFormat dateTextFormat(const class QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget14dateTextFormatERK5QDate(void *this_, QDate* date) {
  auto rv = ((QCalendarWidget*)this_)->dateTextFormat(*date);
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:132
// [-2] void setDateTextFormat(const class QDate &, const class QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget17setDateTextFormatERK5QDateRK15QTextCharFormat(void *this_, QDate* date, QTextCharFormat* format) {
  ((QCalendarWidget*)this_)->setDateTextFormat(*date, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:134
// [1] bool isDateEditEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QCalendarWidget17isDateEditEnabledEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isDateEditEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:135
// [-2] void setDateEditEnabled(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget18setDateEditEnabledEb(void *this_, bool enable) {
  ((QCalendarWidget*)this_)->setDateEditEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:137
// [4] int dateEditAcceptDelay()
extern "C" Q_DECL_EXPORT
int C_ZNK15QCalendarWidget19dateEditAcceptDelayEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->dateEditAcceptDelay();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:138
// [-2] void setDateEditAcceptDelay(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget22setDateEditAcceptDelayEi(void *this_, int delay) {
  ((QCalendarWidget*)this_)->setDateEditAcceptDelay(delay);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:152
// [-2] void setSelectedDate(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget15setSelectedDateERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->setSelectedDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:153
// [-2] void setDateRange(const class QDate &, const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget12setDateRangeERK5QDateS2_(void *this_, QDate* min, QDate* max) {
  ((QCalendarWidget*)this_)->setDateRange(*min, *max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:154
// [-2] void setCurrentPage(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget14setCurrentPageEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->setCurrentPage(year, month);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:155
// [-2] void setGridVisible(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget14setGridVisibleEb(void *this_, bool show) {
  ((QCalendarWidget*)this_)->setGridVisible(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:156
// [-2] void setNavigationBarVisible(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget23setNavigationBarVisibleEb(void *this_, bool visible) {
  ((QCalendarWidget*)this_)->setNavigationBarVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:157
// [-2] void showNextMonth()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget13showNextMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextMonth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:158
// [-2] void showPreviousMonth()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget17showPreviousMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousMonth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:159
// [-2] void showNextYear()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget12showNextYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextYear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:160
// [-2] void showPreviousYear()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget16showPreviousYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousYear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:161
// [-2] void showSelectedDate()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget16showSelectedDateEv(void *this_) {
  ((QCalendarWidget*)this_)->showSelectedDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:162
// [-2] void showToday()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget9showTodayEv(void *this_) {
  ((QCalendarWidget*)this_)->showToday();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:165
// [-2] void selectionChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget16selectionChangedEv(void *this_) {
  ((QCalendarWidget*)this_)->selectionChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:166
// [-2] void clicked(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget7clickedERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->clicked(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:167
// [-2] void activated(const class QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget9activatedERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->activated(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:168
// [-2] void currentPageChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget18currentPageChangedEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->currentPageChanged(year, month);
}

//  main block end
