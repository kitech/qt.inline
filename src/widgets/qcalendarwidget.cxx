//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(calendarwidget)
// since 0x040200
// /usr/include/qt/QtWidgets/qcalendarwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcalendarwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QCalendarWidget is pure virtual: false
// QCalendarWidget has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCalendarWidget_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCalendarWidget_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCalendarWidget_t qt_meta_stringdata_MyQCalendarWidget = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQCalendarWidget"
  },
  "MyQCalendarWidget"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCalendarWidget[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQCalendarWidget : public QCalendarWidget {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QCalendarWidget::staticMetaObject,
  qt_meta_stringdata_MyQCalendarWidget.data,
  qt_meta_data_MyQCalendarWidget,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQCalendarWidget.stringdata0))
      return static_cast<void*>(this);
  return QCalendarWidget::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QCalendarWidget::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQCalendarWidget() {}
// void QCalendarWidget(QWidget *)
MyQCalendarWidget(QWidget * parent) : QCalendarWidget(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCalendarWidget::event(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * watched, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)watched, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QCalendarWidget::eventFilter(watched, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintCell(QPainter *, const QRect &, const QDate &)
  virtual void paintCell(QPainter * painter, const QRect & rect, const QDate & date) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintCell", &handled, 3, (uint64_t)painter, (uint64_t)&rect, (uint64_t)&date, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QCalendarWidget::paintCell(painter, rect, date);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QCalendarWidget_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQCalendarWidget* qo = (MyQCalendarWidget*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:141
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QCalendarWidget5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QCalendarWidget*)this_)->QCalendarWidget::event(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:142
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QCalendarWidget11eventFilterEP7QObjectP6QEvent(void *this_, QObject * watched, QEvent * event) {
  return (bool)((QCalendarWidget*)this_)->QCalendarWidget::eventFilter(watched, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:143
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:144
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:145
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QCalendarWidget*)this_)->QCalendarWidget::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:147
// [-2] void paintCell(QPainter *, const QRect &, const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZNK15QCalendarWidget9paintCellEP8QPainterRK5QRectRK5QDate(void *this_, QPainter * painter, QRect* rect, QDate* date) {
  ((QCalendarWidget*)this_)->QCalendarWidget::paintCell(painter, *rect, *date);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget10metaObjectEv(void *this_) {
  return (void*)((QCalendarWidget*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN15QCalendarWidget11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCalendarWidget*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN15QCalendarWidget11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCalendarWidget*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QCalendarWidget2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCalendarWidget::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:57
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QCalendarWidget6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCalendarWidget::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:92
// [-2] void QCalendarWidget(QWidget *)
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
// [-2] void setMinimumDate(const QDate &)
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
// [-2] void setMaximumDate(const QDate &)
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
// [-2] void setSelectionMode(QCalendarWidget::SelectionMode)
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
// [-2] void setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat)
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
// [-2] void setVerticalHeaderFormat(QCalendarWidget::VerticalHeaderFormat)
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
// [-2] void setHeaderTextFormat(const QTextCharFormat &)
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
// [-2] void setWeekdayTextFormat(Qt::DayOfWeek, const QTextCharFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget20setWeekdayTextFormatEN2Qt9DayOfWeekERK15QTextCharFormat(void *this_, Qt::DayOfWeek dayOfWeek, QTextCharFormat* format) {
  ((QCalendarWidget*)this_)->setWeekdayTextFormat(dayOfWeek, *format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:130
// [-2] QMap<QDate, QTextCharFormat> dateTextFormat()
extern "C" Q_DECL_EXPORT
void C_ZNK15QCalendarWidget14dateTextFormatEv(void *this_) {
  auto rv = ((QCalendarWidget*)this_)->dateTextFormat();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:131
// [16] QTextCharFormat dateTextFormat(const QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZNK15QCalendarWidget14dateTextFormatERK5QDate(void *this_, QDate* date) {
  auto rv = ((QCalendarWidget*)this_)->dateTextFormat(*date);
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:132
// [-2] void setDateTextFormat(const QDate &, const QTextCharFormat &)
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
// [-2] void setDateEditEnabled(bool)
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
// [-2] void setSelectedDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget15setSelectedDateERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->setSelectedDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:153
// [-2] void setDateRange(const QDate &, const QDate &)
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
// [-2] void setGridVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget14setGridVisibleEb(void *this_, bool show) {
  ((QCalendarWidget*)this_)->setGridVisible(show);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:156
// [-2] void setNavigationBarVisible(bool)
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
// [-2] void clicked(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN15QCalendarWidget7clickedERK5QDate(void *this_, QDate* date) {
  ((QCalendarWidget*)this_)->clicked(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcalendarwidget.h:167
// [-2] void activated(const QDate &)
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

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(calendarwidget)
#endif // #ifndef QT_MINIMAL
//  footer block end
