// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qdatetimeedit.h
// dst-file: /src/widgets/qdatetimeedit.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdatetimeedit.h>


#include <qdatetime.h>
#include <qnamespace.h>
#include <qstring.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qdatetimeedit_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTimeEdit_Class_Size()
{
  return sizeof(QTimeEdit);
}

extern "C"
int QDateEdit_Class_Size()
{
  return sizeof(QDateEdit);
}

extern "C"
int QDateTimeEdit_Class_Size()
{
  return sizeof(QDateTimeEdit);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 201, column 14>
//   // proto:  void QTimeEdit::QTimeEdit(QWidget * parent);
extern "C"
QTimeEdit*
C_ZN9QTimeEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QTimeEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 206, column 10>
//   // proto:  void QTimeEdit::userTimeChanged(const QTime & time);
// _ZN9QTimeEdit15userTimeChangedERK5QTime userTimeChanged(const class QTime &)
extern "C"
void
C_ZN9QTimeEdit15userTimeChangedERK5QTime(void *qthis,
const QTime* arg1) {
  ((QTimeEdit*)qthis)->userTimeChanged(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 198, column 5>
//   // proto:  const QMetaObject * QTimeEdit::metaObject();
// _ZNK9QTimeEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QTimeEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QTimeEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 202, column 14>
//   // proto:  void QTimeEdit::QTimeEdit(const QTime & time, QWidget * parent);
extern "C"
QTimeEdit*
C_ZN9QTimeEditC2ERK5QTimeP7QWidget(const QTime* arg1,
QWidget * arg2) {
  auto ret = new QTimeEdit(*((const QTime*)arg1),
arg2);
  return ret;
}
//   // proto:  void QTimeEdit::~QTimeEdit();
extern "C"
void C_ZN9QTimeEditD2Ev(void *qthis) {
  delete (QTimeEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 215, column 14>
//   // proto:  void QDateEdit::QDateEdit(const QDate & date, QWidget * parent);
extern "C"
QDateEdit*
C_ZN9QDateEditC2ERK5QDateP7QWidget(const QDate* arg1,
QWidget * arg2) {
  auto ret = new QDateEdit(*((const QDate*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 219, column 10>
//   // proto:  void QDateEdit::userDateChanged(const QDate & date);
// _ZN9QDateEdit15userDateChangedERK5QDate userDateChanged(const class QDate &)
extern "C"
void
C_ZN9QDateEdit15userDateChangedERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateEdit*)qthis)->userDateChanged(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 211, column 5>
//   // proto:  const QMetaObject * QDateEdit::metaObject();
// _ZNK9QDateEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QDateEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QDateEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 214, column 14>
//   // proto:  void QDateEdit::QDateEdit(QWidget * parent);
extern "C"
QDateEdit*
C_ZN9QDateEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QDateEdit(arg1);
  return ret;
}
//   // proto:  void QDateEdit::~QDateEdit();
extern "C"
void C_ZN9QDateEditD2Ev(void *qthis) {
  delete (QDateEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 129, column 14>
//   // proto:  Sections QDateTimeEdit::displayedSections();
// _ZNK13QDateTimeEdit17displayedSectionsEv displayedSections()
extern "C"
QFlags<QDateTimeEdit::Section>*
C_ZNK13QDateTimeEdit17displayedSectionsEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->displayedSections();
  return new QFlags<QDateTimeEdit::Section>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 96, column 11>
//   // proto:  QDate QDateTimeEdit::date();
// _ZNK13QDateTimeEdit4dateEv date()
extern "C"
QDate*
C_ZNK13QDateTimeEdit4dateEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->date();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 100, column 10>
//   // proto:  void QDateTimeEdit::clearMinimumDateTime();
// _ZN13QDateTimeEdit20clearMinimumDateTimeEv clearMinimumDateTime()
extern "C"
void
C_ZN13QDateTimeEdit20clearMinimumDateTimeEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMinimumDateTime();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 157, column 18>
//   // proto:  void QDateTimeEdit::clear();
// _ZN13QDateTimeEdit5clearEv clear()
extern "C"
void
C_ZN13QDateTimeEdit5clearEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 132, column 10>
//   // proto:  void QDateTimeEdit::setCurrentSection(QDateTimeEdit::Section section);
// _ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE setCurrentSection(enum QDateTimeEdit::Section)
extern "C"
void
C_ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void *qthis,
QDateTimeEdit::Section arg1) {
  ((QDateTimeEdit*)qthis)->setCurrentSection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 92, column 14>
//   // proto:  void QDateTimeEdit::QDateTimeEdit(const QTime & t, QWidget * parent);
extern "C"
QDateTimeEdit*
C_ZN13QDateTimeEditC2ERK5QTimeP7QWidget(const QTime* arg1,
QWidget * arg2) {
  auto ret = new QDateTimeEdit(*((const QTime*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 168, column 10>
//   // proto:  void QDateTimeEdit::setDate(const QDate & date);
// _ZN13QDateTimeEdit7setDateERK5QDate setDate(const class QDate &)
extern "C"
void
C_ZN13QDateTimeEdit7setDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateTimeEdit*)qthis)->setDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 103, column 15>
//   // proto:  QDateTime QDateTimeEdit::maximumDateTime();
// _ZNK13QDateTimeEdit15maximumDateTimeEv maximumDateTime()
extern "C"
QDateTime*
C_ZNK13QDateTimeEdit15maximumDateTimeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->maximumDateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 110, column 10>
//   // proto:  void QDateTimeEdit::setMinimumDate(const QDate & min);
// _ZN13QDateTimeEdit14setMinimumDateERK5QDate setMinimumDate(const class QDate &)
extern "C"
void
C_ZN13QDateTimeEdit14setMinimumDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateTimeEdit*)qthis)->setMinimumDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 91, column 14>
//   // proto:  void QDateTimeEdit::QDateTimeEdit(const QDate & d, QWidget * parent);
extern "C"
QDateTimeEdit*
C_ZN13QDateTimeEditC2ERK5QDateP7QWidget(const QDate* arg1,
QWidget * arg2) {
  auto ret = new QDateTimeEdit(*((const QDate*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 131, column 13>
//   // proto:  QDateTimeEdit::Section QDateTimeEdit::sectionAt(int index);
// _ZNK13QDateTimeEdit9sectionAtEi sectionAt(int)
extern "C"
QDateTimeEdit::Section
C_ZNK13QDateTimeEdit9sectionAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QDateTimeEdit*)qthis)->sectionAt(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 114, column 10>
//   // proto:  void QDateTimeEdit::setMaximumDate(const QDate & max);
// _ZN13QDateTimeEdit14setMaximumDateERK5QDate setMaximumDate(const class QDate &)
extern "C"
void
C_ZN13QDateTimeEdit14setMaximumDateERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateTimeEdit*)qthis)->setMaximumDate(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 123, column 11>
//   // proto:  QTime QDateTimeEdit::maximumTime();
// _ZNK13QDateTimeEdit11maximumTimeEv maximumTime()
extern "C"
QTime*
C_ZNK13QDateTimeEdit11maximumTimeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->maximumTime();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 130, column 13>
//   // proto:  QDateTimeEdit::Section QDateTimeEdit::currentSection();
// _ZNK13QDateTimeEdit14currentSectionEv currentSection()
extern "C"
QDateTimeEdit::Section
C_ZNK13QDateTimeEdit14currentSectionEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->currentSection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 52, column 5>
//   // proto:  const QMetaObject * QDateTimeEdit::metaObject();
// _ZNK13QDateTimeEdit10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QDateTimeEdit10metaObjectEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 142, column 10>
//   // proto:  void QDateTimeEdit::setSelectedSection(QDateTimeEdit::Section section);
// _ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE setSelectedSection(enum QDateTimeEdit::Section)
extern "C"
void
C_ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE(void *qthis,
QDateTimeEdit::Section arg1) {
  ((QDateTimeEdit*)qthis)->setSelectedSection(arg1);
}
//   // proto:  void QDateTimeEdit::~QDateTimeEdit();
extern "C"
void C_ZN13QDateTimeEditD2Ev(void *qthis) {
  delete (QDateTimeEdit*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 164, column 10>
//   // proto:  void QDateTimeEdit::dateChanged(const QDate & date);
// _ZN13QDateTimeEdit11dateChangedERK5QDate dateChanged(const class QDate &)
extern "C"
void
C_ZN13QDateTimeEdit11dateChangedERK5QDate(void *qthis,
const QDate* arg1) {
  ((QDateTimeEdit*)qthis)->dateChanged(*((const QDate*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 111, column 10>
//   // proto:  void QDateTimeEdit::clearMinimumDate();
// _ZN13QDateTimeEdit16clearMinimumDateEv clearMinimumDate()
extern "C"
void
C_ZN13QDateTimeEdit16clearMinimumDateEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMinimumDate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 117, column 10>
//   // proto:  void QDateTimeEdit::setDateRange(const QDate & min, const QDate & max);
// _ZN13QDateTimeEdit12setDateRangeERK5QDateS2_ setDateRange(const class QDate &, const class QDate &)
extern "C"
void
C_ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void *qthis,
const QDate* arg1,
const QDate* arg2) {
  ((QDateTimeEdit*)qthis)->setDateRange(*((const QDate*)arg1),
*((const QDate*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 120, column 10>
//   // proto:  void QDateTimeEdit::setMinimumTime(const QTime & min);
// _ZN13QDateTimeEdit14setMinimumTimeERK5QTime setMinimumTime(const class QTime &)
extern "C"
void
C_ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void *qthis,
const QTime* arg1) {
  ((QDateTimeEdit*)qthis)->setMinimumTime(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 97, column 11>
//   // proto:  QTime QDateTimeEdit::time();
// _ZNK13QDateTimeEdit4timeEv time()
extern "C"
QTime*
C_ZNK13QDateTimeEdit4timeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->time();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 134, column 9>
//   // proto:  int QDateTimeEdit::currentSectionIndex();
// _ZNK13QDateTimeEdit19currentSectionIndexEv currentSectionIndex()
extern "C"
int
C_ZNK13QDateTimeEdit19currentSectionIndexEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->currentSectionIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 160, column 10>
//   // proto:  bool QDateTimeEdit::event(QEvent * event);
// _ZN13QDateTimeEdit5eventEP6QEvent event(class QEvent *)
extern "C"
bool
C_ZN13QDateTimeEdit5eventEP6QEvent(void *qthis,
QEvent * arg1) {
  auto ret =
  ((QDateTimeEdit*)qthis)->event(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 167, column 10>
//   // proto:  void QDateTimeEdit::setDateTime(const QDateTime & dateTime);
// _ZN13QDateTimeEdit11setDateTimeERK9QDateTime setDateTime(const class QDateTime &)
extern "C"
void
C_ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QDateTimeEdit*)qthis)->setDateTime(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 138, column 10>
//   // proto:  void QDateTimeEdit::setCalendarWidget(QCalendarWidget * calendarWidget);
// _ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget setCalendarWidget(class QCalendarWidget *)
extern "C"
void
C_ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget(void *qthis,
QCalendarWidget * arg1) {
  ((QDateTimeEdit*)qthis)->setCalendarWidget(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 107, column 10>
//   // proto:  void QDateTimeEdit::setDateTimeRange(const QDateTime & min, const QDateTime & max);
// _ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_ setDateTimeRange(const class QDateTime &, const class QDateTime &)
extern "C"
void
C_ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_(void *qthis,
const QDateTime* arg1,
const QDateTime* arg2) {
  ((QDateTimeEdit*)qthis)->setDateTimeRange(*((const QDateTime*)arg1),
*((const QDateTime*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 169, column 10>
//   // proto:  void QDateTimeEdit::setTime(const QTime & time);
// _ZN13QDateTimeEdit7setTimeERK5QTime setTime(const class QTime &)
extern "C"
void
C_ZN13QDateTimeEdit7setTimeERK5QTime(void *qthis,
const QTime* arg1) {
  ((QDateTimeEdit*)qthis)->setTime(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 95, column 15>
//   // proto:  QDateTime QDateTimeEdit::dateTime();
// _ZNK13QDateTimeEdit8dateTimeEv dateTime()
extern "C"
QDateTime*
C_ZNK13QDateTimeEdit8dateTimeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->dateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 124, column 10>
//   // proto:  void QDateTimeEdit::setMaximumTime(const QTime & max);
// _ZN13QDateTimeEdit14setMaximumTimeERK5QTime setMaximumTime(const class QTime &)
extern "C"
void
C_ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void *qthis,
const QTime* arg1) {
  ((QDateTimeEdit*)qthis)->setMaximumTime(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 101, column 10>
//   // proto:  void QDateTimeEdit::setMinimumDateTime(const QDateTime & dt);
// _ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime setMinimumDateTime(const class QDateTime &)
extern "C"
void
C_ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QDateTimeEdit*)qthis)->setMinimumDateTime(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 125, column 10>
//   // proto:  void QDateTimeEdit::clearMaximumTime();
// _ZN13QDateTimeEdit16clearMaximumTimeEv clearMaximumTime()
extern "C"
void
C_ZN13QDateTimeEdit16clearMaximumTimeEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMaximumTime();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 149, column 10>
//   // proto:  bool QDateTimeEdit::calendarPopup();
// _ZNK13QDateTimeEdit13calendarPopupEv calendarPopup()
extern "C"
bool
C_ZNK13QDateTimeEdit13calendarPopupEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->calendarPopup();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 105, column 10>
//   // proto:  void QDateTimeEdit::setMaximumDateTime(const QDateTime & dt);
// _ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime setMaximumDateTime(const class QDateTime &)
extern "C"
void
C_ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QDateTimeEdit*)qthis)->setMaximumDateTime(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 104, column 10>
//   // proto:  void QDateTimeEdit::clearMaximumDateTime();
// _ZN13QDateTimeEdit20clearMaximumDateTimeEv clearMaximumDateTime()
extern "C"
void
C_ZN13QDateTimeEdit20clearMaximumDateTimeEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMaximumDateTime();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 152, column 18>
//   // proto:  Qt::TimeSpec QDateTimeEdit::timeSpec();
// _ZNK13QDateTimeEdit8timeSpecEv timeSpec()
extern "C"
Qt::TimeSpec
C_ZNK13QDateTimeEdit8timeSpecEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->timeSpec();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 89, column 14>
//   // proto:  void QDateTimeEdit::QDateTimeEdit(QWidget * parent);
extern "C"
QDateTimeEdit*
C_ZN13QDateTimeEditC2EP7QWidget(QWidget * arg1) {
  auto ret = new QDateTimeEdit(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 99, column 15>
//   // proto:  QDateTime QDateTimeEdit::minimumDateTime();
// _ZNK13QDateTimeEdit15minimumDateTimeEv minimumDateTime()
extern "C"
QDateTime*
C_ZNK13QDateTimeEdit15minimumDateTimeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->minimumDateTime();
  return new QDateTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 137, column 22>
//   // proto:  QCalendarWidget * QDateTimeEdit::calendarWidget();
// _ZNK13QDateTimeEdit14calendarWidgetEv calendarWidget()
extern "C"
void*
C_ZNK13QDateTimeEdit14calendarWidgetEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->calendarWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 147, column 10>
//   // proto:  void QDateTimeEdit::setDisplayFormat(const QString & format);
// _ZN13QDateTimeEdit16setDisplayFormatERK7QString setDisplayFormat(const class QString &)
extern "C"
void
C_ZN13QDateTimeEdit16setDisplayFormatERK7QString(void *qthis,
const QString* arg1) {
  ((QDateTimeEdit*)qthis)->setDisplayFormat(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 115, column 10>
//   // proto:  void QDateTimeEdit::clearMaximumDate();
// _ZN13QDateTimeEdit16clearMaximumDateEv clearMaximumDate()
extern "C"
void
C_ZN13QDateTimeEdit16clearMaximumDateEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMaximumDate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 150, column 10>
//   // proto:  void QDateTimeEdit::setCalendarPopup(bool enable);
// _ZN13QDateTimeEdit16setCalendarPopupEb setCalendarPopup(_Bool)
extern "C"
void
C_ZN13QDateTimeEdit16setCalendarPopupEb(void *qthis,
bool arg1) {
  ((QDateTimeEdit*)qthis)->setCalendarPopup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 158, column 18>
//   // proto:  void QDateTimeEdit::stepBy(int steps);
// _ZN13QDateTimeEdit6stepByEi stepBy(int)
extern "C"
void
C_ZN13QDateTimeEdit6stepByEi(void *qthis,
int arg1) {
  ((QDateTimeEdit*)qthis)->stepBy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 90, column 14>
//   // proto:  void QDateTimeEdit::QDateTimeEdit(const QDateTime & dt, QWidget * parent);
extern "C"
QDateTimeEdit*
C_ZN13QDateTimeEditC2ERK9QDateTimeP7QWidget(const QDateTime* arg1,
QWidget * arg2) {
  auto ret = new QDateTimeEdit(*((const QDateTime*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 146, column 13>
//   // proto:  QString QDateTimeEdit::displayFormat();
// _ZNK13QDateTimeEdit13displayFormatEv displayFormat()
extern "C"
QString*
C_ZNK13QDateTimeEdit13displayFormatEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->displayFormat();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 144, column 13>
//   // proto:  QString QDateTimeEdit::sectionText(QDateTimeEdit::Section section);
// _ZNK13QDateTimeEdit11sectionTextENS_7SectionE sectionText(enum QDateTimeEdit::Section)
extern "C"
QString*
C_ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void *qthis,
QDateTimeEdit::Section arg1) {
  auto ret =
  ((QDateTimeEdit*)qthis)->sectionText(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 162, column 10>
//   // proto:  void QDateTimeEdit::dateTimeChanged(const QDateTime & dateTime);
// _ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime dateTimeChanged(const class QDateTime &)
extern "C"
void
C_ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void *qthis,
const QDateTime* arg1) {
  ((QDateTimeEdit*)qthis)->dateTimeChanged(*((const QDateTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 119, column 11>
//   // proto:  QTime QDateTimeEdit::minimumTime();
// _ZNK13QDateTimeEdit11minimumTimeEv minimumTime()
extern "C"
QTime*
C_ZNK13QDateTimeEdit11minimumTimeEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->minimumTime();
  return new QTime(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 155, column 11>
//   // proto:  QSize QDateTimeEdit::sizeHint();
// _ZNK13QDateTimeEdit8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK13QDateTimeEdit8sizeHintEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 153, column 10>
//   // proto:  void QDateTimeEdit::setTimeSpec(Qt::TimeSpec spec);
// _ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE setTimeSpec(Qt::TimeSpec)
extern "C"
void
C_ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE(void *qthis,
Qt::TimeSpec* arg1) {
  ((QDateTimeEdit*)qthis)->setTimeSpec(*((Qt::TimeSpec*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 140, column 9>
//   // proto:  int QDateTimeEdit::sectionCount();
// _ZNK13QDateTimeEdit12sectionCountEv sectionCount()
extern "C"
int
C_ZNK13QDateTimeEdit12sectionCountEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->sectionCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 135, column 10>
//   // proto:  void QDateTimeEdit::setCurrentSectionIndex(int index);
// _ZN13QDateTimeEdit22setCurrentSectionIndexEi setCurrentSectionIndex(int)
extern "C"
void
C_ZN13QDateTimeEdit22setCurrentSectionIndexEi(void *qthis,
int arg1) {
  ((QDateTimeEdit*)qthis)->setCurrentSectionIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 121, column 10>
//   // proto:  void QDateTimeEdit::clearMinimumTime();
// _ZN13QDateTimeEdit16clearMinimumTimeEv clearMinimumTime()
extern "C"
void
C_ZN13QDateTimeEdit16clearMinimumTimeEv(void *qthis) {
  ((QDateTimeEdit*)qthis)->clearMinimumTime();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 127, column 10>
//   // proto:  void QDateTimeEdit::setTimeRange(const QTime & min, const QTime & max);
// _ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_ setTimeRange(const class QTime &, const class QTime &)
extern "C"
void
C_ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void *qthis,
const QTime* arg1,
const QTime* arg2) {
  ((QDateTimeEdit*)qthis)->setTimeRange(*((const QTime*)arg1),
*((const QTime*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 163, column 10>
//   // proto:  void QDateTimeEdit::timeChanged(const QTime & time);
// _ZN13QDateTimeEdit11timeChangedERK5QTime timeChanged(const class QTime &)
extern "C"
void
C_ZN13QDateTimeEdit11timeChangedERK5QTime(void *qthis,
const QTime* arg1) {
  ((QDateTimeEdit*)qthis)->timeChanged(*((const QTime*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 109, column 11>
//   // proto:  QDate QDateTimeEdit::minimumDate();
// _ZNK13QDateTimeEdit11minimumDateEv minimumDate()
extern "C"
QDate*
C_ZNK13QDateTimeEdit11minimumDateEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->minimumDate();
  return new QDate(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatetimeedit.h', line 113, column 11>
//   // proto:  QDate QDateTimeEdit::maximumDate();
// _ZNK13QDateTimeEdit11maximumDateEv maximumDate()
extern "C"
QDate*
C_ZNK13QDateTimeEdit11maximumDateEv(void *qthis) {
  auto ret =
  ((QDateTimeEdit*)qthis)->maximumDate();
  return new QDate(ret); // 5
}
// <= ext block end

// body block begin =>
// QTimeEdit_SlotProxy here
class QTimeEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimeEdit_SlotProxy():QObject(){}

public slots:
  // userTimeChanged(const class QTime &)
  void slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0);
public:
  void (*slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime)(void* rsfptr, const QTime & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QTimeEdit_SlotProxy* QTimeEdit_SlotProxy_new()
  {
    return new QTimeEdit_SlotProxy();
  }
};

void QTimeEdit_SlotProxy::slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0) {
  if (this->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime != NULL) {
    // do smth...
    this->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime(this->rsfptr, arg0);
  }
}
extern "C"
void* QTimeEdit_SlotProxy_connect__ZN9QTimeEdit15userTimeChangedERK5QTime(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTimeEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime = (decltype(that->slot_func__ZN9QTimeEdit15userTimeChangedERK5QTime))ffifptr;
  QObject::connect((QTimeEdit*)sender, SIGNAL(userTimeChanged(const class QTime &)), that, SLOT(slot_proxy_func__ZN9QTimeEdit15userTimeChangedERK5QTime(const QTime & arg0)));
  return that;
}
extern "C"
void QTimeEdit_SlotProxy_disconnect__ZN9QTimeEdit15userTimeChangedERK5QTime(QTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDateEdit_SlotProxy here
class QDateEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDateEdit_SlotProxy():QObject(){}

public slots:
  // userDateChanged(const class QDate &)
  void slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN9QDateEdit15userDateChangedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QDateEdit_SlotProxy* QDateEdit_SlotProxy_new()
  {
    return new QDateEdit_SlotProxy();
  }
};

void QDateEdit_SlotProxy::slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN9QDateEdit15userDateChangedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN9QDateEdit15userDateChangedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QDateEdit_SlotProxy_connect__ZN9QDateEdit15userDateChangedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDateEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QDateEdit15userDateChangedERK5QDate = (decltype(that->slot_func__ZN9QDateEdit15userDateChangedERK5QDate))ffifptr;
  QObject::connect((QDateEdit*)sender, SIGNAL(userDateChanged(const class QDate &)), that, SLOT(slot_proxy_func__ZN9QDateEdit15userDateChangedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QDateEdit_SlotProxy_disconnect__ZN9QDateEdit15userDateChangedERK5QDate(QDateEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QDateTimeEdit_SlotProxy here
class QDateTimeEdit_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDateTimeEdit_SlotProxy():QObject(){}

public slots:
  // dateTimeChanged(const class QDateTime &)
  void slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime)(void* rsfptr, const QDateTime & arg0) = NULL;
public slots:
  // dateChanged(const class QDate &)
  void slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate)(void* rsfptr, const QDate & arg0) = NULL;
public slots:
  // timeChanged(const class QTime &)
  void slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0);
public:
  void (*slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime)(void* rsfptr, const QTime & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdatetimeedit.moc"

extern "C" {
  QDateTimeEdit_SlotProxy* QDateTimeEdit_SlotProxy_new()
  {
    return new QDateTimeEdit_SlotProxy();
  }
};

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(this->rsfptr, arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime = (decltype(that->slot_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime))ffifptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(dateTimeChanged(const class QDateTime &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(const QDateTime & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate(this->rsfptr, arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit11dateChangedERK5QDate(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate = (decltype(that->slot_func__ZN13QDateTimeEdit11dateChangedERK5QDate))ffifptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(dateChanged(const class QDate &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit11dateChangedERK5QDate(const QDate & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit11dateChangedERK5QDate(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QDateTimeEdit_SlotProxy::slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0) {
  if (this->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime != NULL) {
    // do smth...
    this->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime(this->rsfptr, arg0);
  }
}
extern "C"
void* QDateTimeEdit_SlotProxy_connect__ZN13QDateTimeEdit11timeChangedERK5QTime(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDateTimeEdit_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime = (decltype(that->slot_func__ZN13QDateTimeEdit11timeChangedERK5QTime))ffifptr;
  QObject::connect((QDateTimeEdit*)sender, SIGNAL(timeChanged(const class QTime &)), that, SLOT(slot_proxy_func__ZN13QDateTimeEdit11timeChangedERK5QTime(const QTime & arg0)));
  return that;
}
extern "C"
void QDateTimeEdit_SlotProxy_disconnect__ZN13QDateTimeEdit11timeChangedERK5QTime(QDateTimeEdit_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

