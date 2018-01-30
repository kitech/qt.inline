//  header block begin
// /usr/include/qt/QtWidgets/qcalendarwidget.h
#include <qcalendarwidget.h>
#include <QtWidgets>

// QCalendarWidget is pure virtual: false
// QCalendarWidget has virtual projected: true
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:141
// [1] bool event(class QEvent *)
extern "C"
void* callback_ZN15QCalendarWidget5eventEP6QEvent = 0;
extern "C" void set_callback_ZN15QCalendarWidget5eventEP6QEvent(void*cbfn)
{ callback_ZN15QCalendarWidget5eventEP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:142
// [1] bool eventFilter(class QObject *, class QEvent *)
extern "C"
void* callback_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent = 0;
extern "C" void set_callback_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent(void*cbfn)
{ callback_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:143
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:144
// [-2] void resizeEvent(class QResizeEvent *)
extern "C"
void* callback_ZN15QCalendarWidget11resizeEventEP12QResizeEvent = 0;
extern "C" void set_callback_ZN15QCalendarWidget11resizeEventEP12QResizeEvent(void*cbfn)
{ callback_ZN15QCalendarWidget11resizeEventEP12QResizeEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:145
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void* callback_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent = 0;
extern "C" void set_callback_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent(void*cbfn)
{ callback_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:147
// [-2] void paintCell(class QPainter *, const class QRect &, const class QDate &)
extern "C"
void* callback_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate = 0;
extern "C" void set_callback_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate(void*cbfn)
{ callback_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:148
// [-2] void updateCell(const class QDate &)
extern "C"
void* callback_ZN15QCalendarWidget10updateCellERK5QDate = 0;
extern "C" void set_callback_ZN15QCalendarWidget10updateCellERK5QDate(void*cbfn)
{ callback_ZN15QCalendarWidget10updateCellERK5QDate = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:149
// [-2] void updateCells()
extern "C"
void* callback_ZN15QCalendarWidget11updateCellsEv = 0;
extern "C" void set_callback_ZN15QCalendarWidget11updateCellsEv(void*cbfn)
{ callback_ZN15QCalendarWidget11updateCellsEv = cbfn; }

class MyQCalendarWidget : public QCalendarWidget {
public:
  virtual ~MyQCalendarWidget() {}
// void QCalendarWidget(class QWidget *)
MyQCalendarWidget(QWidget * parent) : QCalendarWidget(parent) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * event) {
    if (callback_ZN15QCalendarWidget5eventEP6QEvent != 0) {
      // callback_ZN15QCalendarWidget5eventEP6QEvent(event);
    }
    return QCalendarWidget::event(event);
  }
// bool eventFilter(class QObject *, class QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event) {
    if (callback_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent != 0) {
      // callback_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent(watched, event);
    }
    return QCalendarWidget::eventFilter(watched, event);
  }
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    if (callback_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent != 0) {
      // callback_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent(event);
    }
    QCalendarWidget::mousePressEvent(event);
  }
// void resizeEvent(class QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    if (callback_ZN15QCalendarWidget11resizeEventEP12QResizeEvent != 0) {
      // callback_ZN15QCalendarWidget11resizeEventEP12QResizeEvent(event);
    }
    QCalendarWidget::resizeEvent(event);
  }
// void keyPressEvent(class QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    if (callback_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent != 0) {
      // callback_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent(event);
    }
    QCalendarWidget::keyPressEvent(event);
  }
// void paintCell(class QPainter *, const class QRect &, const class QDate &)
  virtual void paintCell(QPainter * painter, const QRect & rect, const QDate & date) {
    if (callback_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate != 0) {
      // callback_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate(painter, rect, date);
    }
    QCalendarWidget::paintCell(painter, rect, date);
  }
// void updateCell(const class QDate &)
  virtual void updateCell(const QDate & date) {
    if (callback_ZN15QCalendarWidget10updateCellERK5QDate != 0) {
      // callback_ZN15QCalendarWidget10updateCellERK5QDate(date);
    }
    QCalendarWidget::updateCell(date);
  }
// void updateCells()
  virtual void updateCells() {
    if (callback_ZN15QCalendarWidget11updateCellsEv != 0) {
      // callback_ZN15QCalendarWidget11updateCellsEv();
    }
    QCalendarWidget::updateCells();
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK15QCalendarWidget10metaObjectEv(void *this_) {
  return (void*)((QCalendarWidget*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:92
// [-2] void QCalendarWidget(class QWidget *)
extern "C"
void* C_ZN15QCalendarWidgetC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQCalendarWidget*)(0);
  return  new MyQCalendarWidget(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:93
// [-2] void ~QCalendarWidget()
extern "C"
void C_ZN15QCalendarWidgetD2Ev(void *this_) {
  delete (QCalendarWidget*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:95
// [8] QSize sizeHint()
extern "C"
void* C_ZNK15QCalendarWidget8sizeHintEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:96
// [8] QSize minimumSizeHint()
extern "C"
void* C_ZNK15QCalendarWidget15minimumSizeHintEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->minimumSizeHint();
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:98
// [8] QDate selectedDate()
extern "C"
void* C_ZNK15QCalendarWidget12selectedDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->selectedDate();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:100
// [4] int yearShown()
extern "C"
int C_ZNK15QCalendarWidget9yearShownEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->yearShown();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:101
// [4] int monthShown()
extern "C"
int C_ZNK15QCalendarWidget10monthShownEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->monthShown();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:103
// [8] QDate minimumDate()
extern "C"
void* C_ZNK15QCalendarWidget11minimumDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->minimumDate();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:104
// [-2] void setMinimumDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget14setMinimumDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setMinimumDate(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:106
// [8] QDate maximumDate()
extern "C"
void* C_ZNK15QCalendarWidget11maximumDateEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->maximumDate();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:107
// [-2] void setMaximumDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget14setMaximumDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setMaximumDate(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:109
// [4] Qt::DayOfWeek firstDayOfWeek()
extern "C"
Qt::DayOfWeek C_ZNK15QCalendarWidget14firstDayOfWeekEv(void *this_) {
  return (Qt::DayOfWeek)((QCalendarWidget*)this_)->firstDayOfWeek();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:110
// [-2] void setFirstDayOfWeek(Qt::DayOfWeek)
extern "C"
void C_ZN15QCalendarWidget17setFirstDayOfWeekEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  ((QCalendarWidget*)this_)->setFirstDayOfWeek(dayOfWeek);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:112
// [1] bool isNavigationBarVisible()
extern "C"
bool C_ZNK15QCalendarWidget22isNavigationBarVisibleEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isNavigationBarVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:113
// [1] bool isGridVisible()
extern "C"
bool C_ZNK15QCalendarWidget13isGridVisibleEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isGridVisible();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:115
// [4] QCalendarWidget::SelectionMode selectionMode()
extern "C"
QCalendarWidget::SelectionMode C_ZNK15QCalendarWidget13selectionModeEv(void *this_) {
  return (QCalendarWidget::SelectionMode)((QCalendarWidget*)this_)->selectionMode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:116
// [-2] void setSelectionMode(enum QCalendarWidget::SelectionMode)
extern "C"
void C_ZN15QCalendarWidget16setSelectionModeENS_13SelectionModeE(void *this_, QCalendarWidget::SelectionMode mode) {
  ((QCalendarWidget*)this_)->setSelectionMode(mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:118
// [4] QCalendarWidget::HorizontalHeaderFormat horizontalHeaderFormat()
extern "C"
QCalendarWidget::HorizontalHeaderFormat C_ZNK15QCalendarWidget22horizontalHeaderFormatEv(void *this_) {
  return (QCalendarWidget::HorizontalHeaderFormat)((QCalendarWidget*)this_)->horizontalHeaderFormat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:119
// [-2] void setHorizontalHeaderFormat(enum QCalendarWidget::HorizontalHeaderFormat)
extern "C"
void C_ZN15QCalendarWidget25setHorizontalHeaderFormatENS_22HorizontalHeaderFormatE(void *this_, QCalendarWidget::HorizontalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setHorizontalHeaderFormat(format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:121
// [4] QCalendarWidget::VerticalHeaderFormat verticalHeaderFormat()
extern "C"
QCalendarWidget::VerticalHeaderFormat C_ZNK15QCalendarWidget20verticalHeaderFormatEv(void *this_) {
  return (QCalendarWidget::VerticalHeaderFormat)((QCalendarWidget*)this_)->verticalHeaderFormat();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:122
// [-2] void setVerticalHeaderFormat(enum QCalendarWidget::VerticalHeaderFormat)
extern "C"
void C_ZN15QCalendarWidget23setVerticalHeaderFormatENS_20VerticalHeaderFormatE(void *this_, QCalendarWidget::VerticalHeaderFormat format) {
  ((QCalendarWidget*)this_)->setVerticalHeaderFormat(format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:124
// [16] QTextCharFormat headerTextFormat()
extern "C"
void* C_ZNK15QCalendarWidget16headerTextFormatEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->headerTextFormat();
return new QTextCharFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:125
// [-2] void setHeaderTextFormat(const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget19setHeaderTextFormatERK15QTextCharFormat(void *this_, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setHeaderTextFormat(format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:127
// [16] QTextCharFormat weekdayTextFormat(Qt::DayOfWeek)
extern "C"
void* C_ZNK15QCalendarWidget17weekdayTextFormatEN2Qt9DayOfWeekE(void *this_, Qt::DayOfWeek dayOfWeek) {
  auto rv = ((QCalendarWidget*)this_)->weekdayTextFormat(dayOfWeek);
return new QTextCharFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:128
// [-2] void setWeekdayTextFormat(Qt::DayOfWeek, const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat(void *this_, Qt::DayOfWeek dayOfWeek, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setWeekdayTextFormat(dayOfWeek, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:131
// [16] QTextCharFormat dateTextFormat(const class QDate &)
extern "C"
void* C_ZNK15QCalendarWidget14dateTextFormatERK5QDate(void *this_, const QDate & date) {
  auto rv = ((QCalendarWidget*)this_)->dateTextFormat(date);
return new QTextCharFormat(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:132
// [-2] void setDateTextFormat(const class QDate &, const class QTextCharFormat &)
extern "C"
void C_ZN15QCalendarWidget17setDateTextFormatERK5QDateRK15QTextCharFormat(void *this_, const QDate & date, const QTextCharFormat & format) {
  ((QCalendarWidget*)this_)->setDateTextFormat(date, format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:134
// [1] bool isDateEditEnabled()
extern "C"
bool C_ZNK15QCalendarWidget17isDateEditEnabledEv(void *this_) {
  return (bool)((QCalendarWidget*)this_)->isDateEditEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:135
// [-2] void setDateEditEnabled(_Bool)
extern "C"
void C_ZN15QCalendarWidget18setDateEditEnabledEb(void *this_, bool enable) {
  ((QCalendarWidget*)this_)->setDateEditEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:137
// [4] int dateEditAcceptDelay()
extern "C"
int C_ZNK15QCalendarWidget19dateEditAcceptDelayEv(void *this_) {
  return (int)((QCalendarWidget*)this_)->dateEditAcceptDelay();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:138
// [-2] void setDateEditAcceptDelay(int)
extern "C"
void C_ZN15QCalendarWidget22setDateEditAcceptDelayEi(void *this_, int delay) {
  ((QCalendarWidget*)this_)->setDateEditAcceptDelay(delay);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:152
// [-2] void setSelectedDate(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget15setSelectedDateERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->setSelectedDate(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:153
// [-2] void setDateRange(const class QDate &, const class QDate &)
extern "C"
void C_ZN15QCalendarWidget12setDateRangeERK5QDateS2_(void *this_, const QDate & min, const QDate & max) {
  ((QCalendarWidget*)this_)->setDateRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:154
// [-2] void setCurrentPage(int, int)
extern "C"
void C_ZN15QCalendarWidget14setCurrentPageEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->setCurrentPage(year, month);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:155
// [-2] void setGridVisible(_Bool)
extern "C"
void C_ZN15QCalendarWidget14setGridVisibleEb(void *this_, bool show) {
  ((QCalendarWidget*)this_)->setGridVisible(show);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:156
// [-2] void setNavigationBarVisible(_Bool)
extern "C"
void C_ZN15QCalendarWidget23setNavigationBarVisibleEb(void *this_, bool visible) {
  ((QCalendarWidget*)this_)->setNavigationBarVisible(visible);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:157
// [-2] void showNextMonth()
extern "C"
void C_ZN15QCalendarWidget13showNextMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextMonth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:158
// [-2] void showPreviousMonth()
extern "C"
void C_ZN15QCalendarWidget17showPreviousMonthEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousMonth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:159
// [-2] void showNextYear()
extern "C"
void C_ZN15QCalendarWidget12showNextYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showNextYear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:160
// [-2] void showPreviousYear()
extern "C"
void C_ZN15QCalendarWidget16showPreviousYearEv(void *this_) {
  ((QCalendarWidget*)this_)->showPreviousYear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:161
// [-2] void showSelectedDate()
extern "C"
void C_ZN15QCalendarWidget16showSelectedDateEv(void *this_) {
  ((QCalendarWidget*)this_)->showSelectedDate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:162
// [-2] void showToday()
extern "C"
void C_ZN15QCalendarWidget9showTodayEv(void *this_) {
  ((QCalendarWidget*)this_)->showToday();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:165
// [-2] void selectionChanged()
extern "C"
void C_ZN15QCalendarWidget16selectionChangedEv(void *this_) {
  ((QCalendarWidget*)this_)->selectionChanged();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:166
// [-2] void clicked(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget7clickedERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->clicked(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:167
// [-2] void activated(const class QDate &)
extern "C"
void C_ZN15QCalendarWidget9activatedERK5QDate(void *this_, const QDate & date) {
  ((QCalendarWidget*)this_)->activated(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:168
// [-2] void currentPageChanged(int, int)
extern "C"
void C_ZN15QCalendarWidget18currentPageChangedEii(void *this_, int year, int month) {
  ((QCalendarWidget*)this_)->currentPageChanged(year, month);
}
//  main block end
