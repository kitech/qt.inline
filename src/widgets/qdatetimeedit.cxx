//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

// QDateTimeEdit is pure virtual: false
//  header block end

//  main block begin
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:178
// [-2] void keyPressEvent(class QKeyEvent *)
extern "C"
void* callback_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent = 0;
extern "C" void set_callback_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent(void*cbfn)
{ callback_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:180
// [-2] void wheelEvent(class QWheelEvent *)
extern "C"
void* callback_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent = 0;
extern "C" void set_callback_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent(void*cbfn)
{ callback_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:182
// [-2] void focusInEvent(class QFocusEvent *)
extern "C"
void* callback_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent = 0;
extern "C" void set_callback_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent(void*cbfn)
{ callback_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:183
// [1] bool focusNextPrevChild(_Bool)
extern "C"
void* callback_ZN13QDateTimeEdit18focusNextPrevChildEb = 0;
extern "C" void set_callback_ZN13QDateTimeEdit18focusNextPrevChildEb(void*cbfn)
{ callback_ZN13QDateTimeEdit18focusNextPrevChildEb = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:184
// [4] QValidator::State validate(class QString &, int &)
extern "C"
void* callback_ZNK13QDateTimeEdit8validateER7QStringRi = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit8validateER7QStringRi(void*cbfn)
{ callback_ZNK13QDateTimeEdit8validateER7QStringRi = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:185
// [-2] void fixup(class QString &)
extern "C"
void* callback_ZNK13QDateTimeEdit5fixupER7QString = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit5fixupER7QString(void*cbfn)
{ callback_ZNK13QDateTimeEdit5fixupER7QString = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:187
// [8] QDateTime dateTimeFromText(const class QString &)
extern "C"
void* callback_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString(void*cbfn)
{ callback_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:188
// [8] QString textFromDateTime(const class QDateTime &)
extern "C"
void* callback_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime(void*cbfn)
{ callback_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:189
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
extern "C"
void* callback_ZNK13QDateTimeEdit11stepEnabledEv = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit11stepEnabledEv(void*cbfn)
{ callback_ZNK13QDateTimeEdit11stepEnabledEv = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:190
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void* callback_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent = 0;
extern "C" void set_callback_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent(void*cbfn)
{ callback_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:191
// [-2] void paintEvent(class QPaintEvent *)
extern "C"
void* callback_ZN13QDateTimeEdit10paintEventEP11QPaintEvent = 0;
extern "C" void set_callback_ZN13QDateTimeEdit10paintEventEP11QPaintEvent(void*cbfn)
{ callback_ZN13QDateTimeEdit10paintEventEP11QPaintEvent = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:192
// [-2] void initStyleOption(class QStyleOptionSpinBox *)
extern "C"
void* callback_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox = 0;
extern "C" void set_callback_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox(void*cbfn)
{ callback_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:194
// [-2] void QDateTimeEdit(const class QVariant &, class QVariant::Type, class QWidget *)
extern "C"
void* callback_ZN13QDateTimeEditC1ERK8QVariantNS0_4TypeEP7QWidget = 0;
extern "C" void set_callback_ZN13QDateTimeEditC1ERK8QVariantNS0_4TypeEP7QWidget(void*cbfn)
{ callback_ZN13QDateTimeEditC1ERK8QVariantNS0_4TypeEP7QWidget = cbfn; }

class MyQDateTimeEdit : public QDateTimeEdit {
public:
MyQDateTimeEdit(QWidget * parent) : QDateTimeEdit(parent) {}
MyQDateTimeEdit(const QDateTime & dt, QWidget * parent) : QDateTimeEdit(dt, parent) {}
MyQDateTimeEdit(const QDate & d, QWidget * parent) : QDateTimeEdit(d, parent) {}
MyQDateTimeEdit(const QTime & t, QWidget * parent) : QDateTimeEdit(t, parent) {}
// void keyPressEvent(class QKeyEvent *)
// void keyPressEvent(class QKeyEvent *)
virtual void keyPressEvent(QKeyEvent * event) {
  if (callback_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent != 0) {
  // callback_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent(event);
}}
// void wheelEvent(class QWheelEvent *)
// void wheelEvent(class QWheelEvent *)
virtual void wheelEvent(QWheelEvent * event) {
  if (callback_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent != 0) {
  // callback_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent(event);
}}
// void focusInEvent(class QFocusEvent *)
// void focusInEvent(class QFocusEvent *)
virtual void focusInEvent(QFocusEvent * event) {
  if (callback_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent != 0) {
  // callback_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent(event);
}}
// bool focusNextPrevChild(_Bool)
// bool focusNextPrevChild(_Bool)
virtual bool focusNextPrevChild(bool next) {
  if (callback_ZN13QDateTimeEdit18focusNextPrevChildEb != 0) {
  // callback_ZN13QDateTimeEdit18focusNextPrevChildEb(next);
}}
// QValidator::State validate(class QString &, int &)
// QValidator::State validate(class QString &, int &)
virtual QValidator::State validate(QString & input, int & pos) {
  if (callback_ZNK13QDateTimeEdit8validateER7QStringRi != 0) {
  // callback_ZNK13QDateTimeEdit8validateER7QStringRi(input, pos);
}}
// void fixup(class QString &)
// void fixup(class QString &)
virtual void fixup(QString & input) {
  if (callback_ZNK13QDateTimeEdit5fixupER7QString != 0) {
  // callback_ZNK13QDateTimeEdit5fixupER7QString(input);
}}
// QDateTime dateTimeFromText(const class QString &)
// QDateTime dateTimeFromText(const class QString &)
virtual QDateTime dateTimeFromText(const QString & text) {
  if (callback_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString != 0) {
  // callback_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString(text);
}}
// QString textFromDateTime(const class QDateTime &)
// QString textFromDateTime(const class QDateTime &)
virtual QString textFromDateTime(const QDateTime & dt) {
  if (callback_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime != 0) {
  // callback_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime(dt);
}}
// QAbstractSpinBox::StepEnabled stepEnabled()
// QAbstractSpinBox::StepEnabled stepEnabled()
virtual QAbstractSpinBox::StepEnabled stepEnabled() {
  if (callback_ZNK13QDateTimeEdit11stepEnabledEv != 0) {
  // callback_ZNK13QDateTimeEdit11stepEnabledEv();
}}
// void mousePressEvent(class QMouseEvent *)
// void mousePressEvent(class QMouseEvent *)
virtual void mousePressEvent(QMouseEvent * event) {
  if (callback_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent != 0) {
  // callback_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent(event);
}}
// void paintEvent(class QPaintEvent *)
// void paintEvent(class QPaintEvent *)
virtual void paintEvent(QPaintEvent * event) {
  if (callback_ZN13QDateTimeEdit10paintEventEP11QPaintEvent != 0) {
  // callback_ZN13QDateTimeEdit10paintEventEP11QPaintEvent(event);
}}
// void initStyleOption(class QStyleOptionSpinBox *)
// void initStyleOption(class QStyleOptionSpinBox *)
virtual void initStyleOption(QStyleOptionSpinBox * option) {
  if (callback_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox != 0) {
  // callback_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox(option);
}}
MyQDateTimeEdit(const QVariant & val, QVariant::Type parserType, QWidget * parent) : QDateTimeEdit(val, parserType, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:58
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QDateTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:95
// [-2] void QDateTimeEdit(class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1EP7QWidget(QWidget * parent) {
  (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:96
// [-2] void QDateTimeEdit(const class QDateTime &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK9QDateTimeP7QWidget(const QDateTime & dt, QWidget * parent) {
  (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(dt, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:97
// [-2] void QDateTimeEdit(const class QDate &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK5QDateP7QWidget(const QDate & d, QWidget * parent) {
  (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(d, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:98
// [-2] void QDateTimeEdit(const class QTime &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK5QTimeP7QWidget(const QTime & t, QWidget * parent) {
  (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(t, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:99
// [-2] void ~QDateTimeEdit()
extern "C"
void C_ZN13QDateTimeEditD1Ev(void *this_) {
  delete (QDateTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:101
// [8] QDateTime dateTime()
extern "C"
void* C_ZNK13QDateTimeEdit8dateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->dateTime();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:102
// [8] QDate date()
extern "C"
void* C_ZNK13QDateTimeEdit4dateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->date();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:103
// [4] QTime time()
extern "C"
void* C_ZNK13QDateTimeEdit4timeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->time();
return new QTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:105
// [8] QDateTime minimumDateTime()
extern "C"
void* C_ZNK13QDateTimeEdit15minimumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDateTime();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:106
// [-2] void clearMinimumDateTime()
extern "C"
void C_ZN13QDateTimeEdit20clearMinimumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDateTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:107
// [-2] void setMinimumDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime(void *this_, const QDateTime & dt) {
  ((QDateTimeEdit*)this_)->setMinimumDateTime(dt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:109
// [8] QDateTime maximumDateTime()
extern "C"
void* C_ZNK13QDateTimeEdit15maximumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDateTime();
return new QDateTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:110
// [-2] void clearMaximumDateTime()
extern "C"
void C_ZN13QDateTimeEdit20clearMaximumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDateTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:111
// [-2] void setMaximumDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime(void *this_, const QDateTime & dt) {
  ((QDateTimeEdit*)this_)->setMaximumDateTime(dt);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:113
// [-2] void setDateTimeRange(const class QDateTime &, const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_(void *this_, const QDateTime & min, const QDateTime & max) {
  ((QDateTimeEdit*)this_)->setDateTimeRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:115
// [8] QDate minimumDate()
extern "C"
void* C_ZNK13QDateTimeEdit11minimumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDate();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:116
// [-2] void setMinimumDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit14setMinimumDateERK5QDate(void *this_, const QDate & min) {
  ((QDateTimeEdit*)this_)->setMinimumDate(min);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:117
// [-2] void clearMinimumDate()
extern "C"
void C_ZN13QDateTimeEdit16clearMinimumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:119
// [8] QDate maximumDate()
extern "C"
void* C_ZNK13QDateTimeEdit11maximumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDate();
return new QDate(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:120
// [-2] void setMaximumDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit14setMaximumDateERK5QDate(void *this_, const QDate & max) {
  ((QDateTimeEdit*)this_)->setMaximumDate(max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:121
// [-2] void clearMaximumDate()
extern "C"
void C_ZN13QDateTimeEdit16clearMaximumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:123
// [-2] void setDateRange(const class QDate &, const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void *this_, const QDate & min, const QDate & max) {
  ((QDateTimeEdit*)this_)->setDateRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:125
// [4] QTime minimumTime()
extern "C"
void* C_ZNK13QDateTimeEdit11minimumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumTime();
return new QTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:126
// [-2] void setMinimumTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void *this_, const QTime & min) {
  ((QDateTimeEdit*)this_)->setMinimumTime(min);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:127
// [-2] void clearMinimumTime()
extern "C"
void C_ZN13QDateTimeEdit16clearMinimumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:129
// [4] QTime maximumTime()
extern "C"
void* C_ZNK13QDateTimeEdit11maximumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumTime();
return new QTime(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:130
// [-2] void setMaximumTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void *this_, const QTime & max) {
  ((QDateTimeEdit*)this_)->setMaximumTime(max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:131
// [-2] void clearMaximumTime()
extern "C"
void C_ZN13QDateTimeEdit16clearMaximumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:133
// [-2] void setTimeRange(const class QTime &, const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void *this_, const QTime & min, const QTime & max) {
  ((QDateTimeEdit*)this_)->setTimeRange(min, max);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:135
// [4] QDateTimeEdit::Sections displayedSections()
extern "C"
void C_ZNK13QDateTimeEdit17displayedSectionsEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayedSections();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:136
// [4] QDateTimeEdit::Section currentSection()
extern "C"
QDateTimeEdit::Section C_ZNK13QDateTimeEdit14currentSectionEv(void *this_) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->currentSection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:137
// [4] QDateTimeEdit::Section sectionAt(int)
extern "C"
QDateTimeEdit::Section C_ZNK13QDateTimeEdit9sectionAtEi(void *this_, int index) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->sectionAt(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:138
// [-2] void setCurrentSection(enum QDateTimeEdit::Section)
extern "C"
void C_ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setCurrentSection(section);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:140
// [4] int currentSectionIndex()
extern "C"
int C_ZNK13QDateTimeEdit19currentSectionIndexEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->currentSectionIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:141
// [-2] void setCurrentSectionIndex(int)
extern "C"
void C_ZN13QDateTimeEdit22setCurrentSectionIndexEi(void *this_, int index) {
  ((QDateTimeEdit*)this_)->setCurrentSectionIndex(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:143
// [8] QCalendarWidget * calendarWidget()
extern "C"
void* C_ZNK13QDateTimeEdit14calendarWidgetEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->calendarWidget();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:144
// [-2] void setCalendarWidget(class QCalendarWidget *)
extern "C"
void C_ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget(void *this_, QCalendarWidget * calendarWidget) {
  ((QDateTimeEdit*)this_)->setCalendarWidget(calendarWidget);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:146
// [4] int sectionCount()
extern "C"
int C_ZNK13QDateTimeEdit12sectionCountEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->sectionCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:148
// [-2] void setSelectedSection(enum QDateTimeEdit::Section)
extern "C"
void C_ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setSelectedSection(section);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:150
// [8] QString sectionText(enum QDateTimeEdit::Section)
extern "C"
void* C_ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  auto rv = ((QDateTimeEdit*)this_)->sectionText(section);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:152
// [8] QString displayFormat()
extern "C"
void* C_ZNK13QDateTimeEdit13displayFormatEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayFormat();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:153
// [-2] void setDisplayFormat(const class QString &)
extern "C"
void C_ZN13QDateTimeEdit16setDisplayFormatERK7QString(void *this_, const QString & format) {
  ((QDateTimeEdit*)this_)->setDisplayFormat(format);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:155
// [1] bool calendarPopup()
extern "C"
bool C_ZNK13QDateTimeEdit13calendarPopupEv(void *this_) {
  return (bool)((QDateTimeEdit*)this_)->calendarPopup();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:156
// [-2] void setCalendarPopup(_Bool)
extern "C"
void C_ZN13QDateTimeEdit16setCalendarPopupEb(void *this_, bool enable) {
  ((QDateTimeEdit*)this_)->setCalendarPopup(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:158
// [4] Qt::TimeSpec timeSpec()
extern "C"
Qt::TimeSpec C_ZNK13QDateTimeEdit8timeSpecEv(void *this_) {
  return (Qt::TimeSpec)((QDateTimeEdit*)this_)->timeSpec();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:159
// [-2] void setTimeSpec(Qt::TimeSpec)
extern "C"
void C_ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTimeEdit*)this_)->setTimeSpec(spec);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:161
// [8] QSize sizeHint()
extern "C"
void* C_ZNK13QDateTimeEdit8sizeHintEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->sizeHint();
return new QSize(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:163
// [-2] void clear()
extern "C"
void C_ZN13QDateTimeEdit5clearEv(void *this_) {
  ((QDateTimeEdit*)this_)->clear();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:164
// [-2] void stepBy(int)
extern "C"
void C_ZN13QDateTimeEdit6stepByEi(void *this_, int steps) {
  ((QDateTimeEdit*)this_)->stepBy(steps);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:166
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN13QDateTimeEdit5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDateTimeEdit*)this_)->event(event);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:168
// [-2] void dateTimeChanged(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void *this_, const QDateTime & dateTime) {
  ((QDateTimeEdit*)this_)->dateTimeChanged(dateTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:169
// [-2] void timeChanged(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit11timeChangedERK5QTime(void *this_, const QTime & time) {
  ((QDateTimeEdit*)this_)->timeChanged(time);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:170
// [-2] void dateChanged(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit11dateChangedERK5QDate(void *this_, const QDate & date) {
  ((QDateTimeEdit*)this_)->dateChanged(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:173
// [-2] void setDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void *this_, const QDateTime & dateTime) {
  ((QDateTimeEdit*)this_)->setDateTime(dateTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:174
// [-2] void setDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit7setDateERK5QDate(void *this_, const QDate & date) {
  ((QDateTimeEdit*)this_)->setDate(date);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:175
// [-2] void setTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit7setTimeERK5QTime(void *this_, const QTime & time) {
  ((QDateTimeEdit*)this_)->setTime(time);
}
//  main block end
