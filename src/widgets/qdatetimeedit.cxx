//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#include <qdatetimeedit.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:58
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QDateTimeEdit10metaObjectEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:95
// void QDateTimeEdit(class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1EP7QWidget(QWidget * parent) {
  return new QDateTimeEdit(parent);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:96
// void QDateTimeEdit(const class QDateTime &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK9QDateTimeP7QWidget(const QDateTime & dt, QWidget * parent) {
  return new QDateTimeEdit(dt, parent);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:97
// void QDateTimeEdit(const class QDate &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK5QDateP7QWidget(const QDate & d, QWidget * parent) {
  return new QDateTimeEdit(d, parent);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:98
// void QDateTimeEdit(const class QTime &, class QWidget *)
extern "C"
void* C_ZN13QDateTimeEditC1ERK5QTimeP7QWidget(const QTime & t, QWidget * parent) {
  return new QDateTimeEdit(t, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:99
// void ~QDateTimeEdit()
extern "C"
void C_ZN13QDateTimeEditD1Ev(void *this_) {
  delete (QDateTimeEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:101
// QDateTime dateTime()
extern "C"
void C_ZNK13QDateTimeEdit8dateTimeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->dateTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:102
// QDate date()
extern "C"
void C_ZNK13QDateTimeEdit4dateEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->date();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:103
// QTime time()
extern "C"
void C_ZNK13QDateTimeEdit4timeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->time();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:105
// QDateTime minimumDateTime()
extern "C"
void C_ZNK13QDateTimeEdit15minimumDateTimeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->minimumDateTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:106
// void clearMinimumDateTime()
extern "C"
void C_ZN13QDateTimeEdit20clearMinimumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDateTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:107
// void setMinimumDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime(void *this_, const QDateTime & dt) {
  ((QDateTimeEdit*)this_)->setMinimumDateTime(dt);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:109
// QDateTime maximumDateTime()
extern "C"
void C_ZNK13QDateTimeEdit15maximumDateTimeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->maximumDateTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:110
// void clearMaximumDateTime()
extern "C"
void C_ZN13QDateTimeEdit20clearMaximumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDateTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:111
// void setMaximumDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime(void *this_, const QDateTime & dt) {
  ((QDateTimeEdit*)this_)->setMaximumDateTime(dt);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:113
// void setDateTimeRange(const class QDateTime &, const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_(void *this_, const QDateTime & min, const QDateTime & max) {
  ((QDateTimeEdit*)this_)->setDateTimeRange(min, max);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:115
// QDate minimumDate()
extern "C"
void C_ZNK13QDateTimeEdit11minimumDateEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->minimumDate();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:116
// void setMinimumDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit14setMinimumDateERK5QDate(void *this_, const QDate & min) {
  ((QDateTimeEdit*)this_)->setMinimumDate(min);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:117
// void clearMinimumDate()
extern "C"
void C_ZN13QDateTimeEdit16clearMinimumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDate();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:119
// QDate maximumDate()
extern "C"
void C_ZNK13QDateTimeEdit11maximumDateEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->maximumDate();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:120
// void setMaximumDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit14setMaximumDateERK5QDate(void *this_, const QDate & max) {
  ((QDateTimeEdit*)this_)->setMaximumDate(max);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:121
// void clearMaximumDate()
extern "C"
void C_ZN13QDateTimeEdit16clearMaximumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDate();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:123
// void setDateRange(const class QDate &, const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void *this_, const QDate & min, const QDate & max) {
  ((QDateTimeEdit*)this_)->setDateRange(min, max);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:125
// QTime minimumTime()
extern "C"
void C_ZNK13QDateTimeEdit11minimumTimeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->minimumTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:126
// void setMinimumTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void *this_, const QTime & min) {
  ((QDateTimeEdit*)this_)->setMinimumTime(min);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:127
// void clearMinimumTime()
extern "C"
void C_ZN13QDateTimeEdit16clearMinimumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:129
// QTime maximumTime()
extern "C"
void C_ZNK13QDateTimeEdit11maximumTimeEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->maximumTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:130
// void setMaximumTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void *this_, const QTime & max) {
  ((QDateTimeEdit*)this_)->setMaximumTime(max);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:131
// void clearMaximumTime()
extern "C"
void C_ZN13QDateTimeEdit16clearMaximumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumTime();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:133
// void setTimeRange(const class QTime &, const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void *this_, const QTime & min, const QTime & max) {
  ((QDateTimeEdit*)this_)->setTimeRange(min, max);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:135
// Sections displayedSections()
extern "C"
void C_ZNK13QDateTimeEdit17displayedSectionsEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->displayedSections();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:136
// QDateTimeEdit::Section currentSection()
extern "C"
void C_ZNK13QDateTimeEdit14currentSectionEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->currentSection();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:137
// QDateTimeEdit::Section sectionAt(int)
extern "C"
void C_ZNK13QDateTimeEdit9sectionAtEi(void *this_, int index) {
  /*return*/ ((QDateTimeEdit*)this_)->sectionAt(index);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:138
// void setCurrentSection(enum QDateTimeEdit::Section)
extern "C"
void C_ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setCurrentSection(section);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:140
// int currentSectionIndex()
extern "C"
void C_ZNK13QDateTimeEdit19currentSectionIndexEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->currentSectionIndex();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:141
// void setCurrentSectionIndex(int)
extern "C"
void C_ZN13QDateTimeEdit22setCurrentSectionIndexEi(void *this_, int index) {
  ((QDateTimeEdit*)this_)->setCurrentSectionIndex(index);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:143
// QCalendarWidget * calendarWidget()
extern "C"
void C_ZNK13QDateTimeEdit14calendarWidgetEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->calendarWidget();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:144
// void setCalendarWidget(class QCalendarWidget *)
extern "C"
void C_ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget(void *this_, QCalendarWidget * calendarWidget) {
  ((QDateTimeEdit*)this_)->setCalendarWidget(calendarWidget);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:146
// int sectionCount()
extern "C"
void C_ZNK13QDateTimeEdit12sectionCountEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->sectionCount();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:148
// void setSelectedSection(enum QDateTimeEdit::Section)
extern "C"
void C_ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setSelectedSection(section);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:150
// QString sectionText(enum QDateTimeEdit::Section)
extern "C"
void C_ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  /*return*/ ((QDateTimeEdit*)this_)->sectionText(section);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:152
// QString displayFormat()
extern "C"
void C_ZNK13QDateTimeEdit13displayFormatEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->displayFormat();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:153
// void setDisplayFormat(const class QString &)
extern "C"
void C_ZN13QDateTimeEdit16setDisplayFormatERK7QString(void *this_, const QString & format) {
  ((QDateTimeEdit*)this_)->setDisplayFormat(format);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:155
// bool calendarPopup()
extern "C"
void C_ZNK13QDateTimeEdit13calendarPopupEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->calendarPopup();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:156
// void setCalendarPopup(_Bool)
extern "C"
void C_ZN13QDateTimeEdit16setCalendarPopupEb(void *this_, bool enable) {
  ((QDateTimeEdit*)this_)->setCalendarPopup(enable);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:158
// Qt::TimeSpec timeSpec()
extern "C"
void C_ZNK13QDateTimeEdit8timeSpecEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->timeSpec();
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:159
// void setTimeSpec(Qt::TimeSpec)
extern "C"
void C_ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTimeEdit*)this_)->setTimeSpec(spec);
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:161
// QSize sizeHint()
extern "C"
void C_ZNK13QDateTimeEdit8sizeHintEv(void *this_) {
  /*return*/ ((QDateTimeEdit*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:163
// void clear()
extern "C"
void C_ZN13QDateTimeEdit5clearEv(void *this_) {
  ((QDateTimeEdit*)this_)->clear();
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:164
// void stepBy(int)
extern "C"
void C_ZN13QDateTimeEdit6stepByEi(void *this_, int steps) {
  ((QDateTimeEdit*)this_)->stepBy(steps);
}
// virtual
// /usr/include/qt/QtWidgets/qdatetimeedit.h:166
// bool event(class QEvent *)
extern "C"
void C_ZN13QDateTimeEdit5eventEP6QEvent(void *this_, QEvent * event) {
  /*return*/ ((QDateTimeEdit*)this_)->event(event);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:168
// void dateTimeChanged(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void *this_, const QDateTime & dateTime) {
  ((QDateTimeEdit*)this_)->dateTimeChanged(dateTime);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:169
// void timeChanged(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit11timeChangedERK5QTime(void *this_, const QTime & time) {
  ((QDateTimeEdit*)this_)->timeChanged(time);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:170
// void dateChanged(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit11dateChangedERK5QDate(void *this_, const QDate & date) {
  ((QDateTimeEdit*)this_)->dateChanged(date);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:173
// void setDateTime(const class QDateTime &)
extern "C"
void C_ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void *this_, const QDateTime & dateTime) {
  ((QDateTimeEdit*)this_)->setDateTime(dateTime);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:174
// void setDate(const class QDate &)
extern "C"
void C_ZN13QDateTimeEdit7setDateERK5QDate(void *this_, const QDate & date) {
  ((QDateTimeEdit*)this_)->setDate(date);
}
// /usr/include/qt/QtWidgets/qdatetimeedit.h:175
// void setTime(const class QTime &)
extern "C"
void C_ZN13QDateTimeEdit7setTimeERK5QTime(void *this_, const QTime & time) {
  ((QDateTimeEdit*)this_)->setTime(time);
}
//  main block end
