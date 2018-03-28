//  header block begin
// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDateTimeEdit is pure virtual: false
// QDateTimeEdit has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDateTimeEdit : public QDateTimeEdit {
public:
  virtual ~MyQDateTimeEdit() {}
// void QDateTimeEdit(QWidget *)
MyQDateTimeEdit(QWidget * parent) : QDateTimeEdit(parent) {}
// void QDateTimeEdit(const QDateTime &, QWidget *)
MyQDateTimeEdit(const QDateTime & dt, QWidget * parent) : QDateTimeEdit(dt, parent) {}
// void QDateTimeEdit(const QDate &, QWidget *)
MyQDateTimeEdit(const QDate & d, QWidget * parent) : QDateTimeEdit(d, parent) {}
// void QDateTimeEdit(const QTime &, QWidget *)
MyQDateTimeEdit(const QTime & t, QWidget * parent) : QDateTimeEdit(t, parent) {}
// Protected virtual Visibility=Default Availability=Available
// void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QDateTimeEdit::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"validate", &handled, 2, (uint64_t)&input, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // ElaboratedEnumQValidator::State
    } else {
    return QDateTimeEdit::validate(input, pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void fixup(QString &)
  virtual void fixup(QString & input) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"fixup", &handled, 1, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::fixup(input);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QDateTime dateTimeFromText(const QString &)
  virtual QDateTime dateTimeFromText(const QString & text) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"dateTimeFromText", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QDateTime*)(irv);
      // RecordRecordQDateTime
    } else {
    return QDateTimeEdit::dateTimeFromText(text);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QString textFromDateTime(const QDateTime &)
  virtual QString textFromDateTime(const QDateTime & dt) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"textFromDateTime", &handled, 1, (uint64_t)&dt, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QString*)(irv);
      // RecordRecordQString
    } else {
    return QDateTimeEdit::textFromDateTime(dt);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QAbstractSpinBox::StepEnabled stepEnabled()
  virtual QAbstractSpinBox::StepEnabled stepEnabled() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"stepEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSpinBox::StepEnabled)(int)(irv);
      // TypedefRecordQFlags<QAbstractSpinBox::StepEnabledFlag>
    } else {
    return QDateTimeEdit::stepEnabled();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::paintEvent(event);
  }
  }

// Protected Visibility=Default Availability=Available
// void initStyleOption(QStyleOptionSpinBox *)
  virtual void initStyleOption(QStyleOptionSpinBox * option) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"initStyleOption", &handled, 1, (uint64_t)option, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QDateTimeEdit::initStyleOption(option);
  }
  }

// void QDateTimeEdit(const QVariant &, QVariant::Type, QWidget *)
MyQDateTimeEdit(const QVariant & val, QVariant::Type parserType, QWidget * parent) : QDateTimeEdit(val, parserType, parent) {}
};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:178
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:180
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:182
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:183
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN13QDateTimeEdit18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QDateTimeEdit*)this_)->QDateTimeEdit::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:184
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK13QDateTimeEdit8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QDateTimeEdit*)this_)->QDateTimeEdit::validate(*input, pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:185
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QDateTimeEdit5fixupER7QString(void *this_, QString* input) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::fixup(*input);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:187
// [8] QDateTime dateTimeFromText(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString(void *this_, QString* text) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::dateTimeFromText(*text);
return new QDateTime(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:188
// [8] QString textFromDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::textFromDateTime(*dt);
return new QString(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:189
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
extern "C" Q_DECL_EXPORT
QAbstractSpinBox::StepEnabled* C_ZNK13QDateTimeEdit11stepEnabledEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::stepEnabled();
return new QAbstractSpinBox::StepEnabled(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:190
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:191
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::paintEvent(event);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:192
// [-2] void initStyleOption(QStyleOptionSpinBox *)
extern "C" Q_DECL_EXPORT
void C_ZNK13QDateTimeEdit15initStyleOptionEP19QStyleOptionSpinBox(void *this_, QStyleOptionSpinBox * option) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::initStyleOption(option);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:95
// [-2] void QDateTimeEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:96
// [-2] void QDateTimeEdit(const QDateTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK9QDateTimeP7QWidget(QDateTime* dt, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*dt, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:97
// [-2] void QDateTimeEdit(const QDate &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK5QDateP7QWidget(QDate* d, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*d, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:98
// [-2] void QDateTimeEdit(const QTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK5QTimeP7QWidget(QTime* t, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*t, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:99
// [-2] void ~QDateTimeEdit()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEditD2Ev(void *this_) {
  delete (QDateTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:101
// [8] QDateTime dateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit8dateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->dateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:102
// [8] QDate date()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit4dateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->date();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:103
// [4] QTime time()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit4timeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->time();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:105
// [8] QDateTime minimumDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit15minimumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:106
// [-2] void clearMinimumDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit20clearMinimumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:107
// [-2] void setMinimumDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  ((QDateTimeEdit*)this_)->setMinimumDateTime(*dt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:109
// [8] QDateTime maximumDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit15maximumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:110
// [-2] void clearMaximumDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit20clearMaximumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:111
// [-2] void setMaximumDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  ((QDateTimeEdit*)this_)->setMaximumDateTime(*dt);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:113
// [-2] void setDateTimeRange(const QDateTime &, const QDateTime &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_(void *this_, QDateTime* min, QDateTime* max) {
  ((QDateTimeEdit*)this_)->setDateTimeRange(*min, *max);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:115
// [8] QDate minimumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11minimumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:116
// [-2] void setMinimumDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMinimumDateERK5QDate(void *this_, QDate* min) {
  ((QDateTimeEdit*)this_)->setMinimumDate(*min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:117
// [-2] void clearMinimumDate()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMinimumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:119
// [8] QDate maximumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11maximumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:120
// [-2] void setMaximumDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMaximumDateERK5QDate(void *this_, QDate* max) {
  ((QDateTimeEdit*)this_)->setMaximumDate(*max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:121
// [-2] void clearMaximumDate()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMaximumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:123
// [-2] void setDateRange(const QDate &, const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void *this_, QDate* min, QDate* max) {
  ((QDateTimeEdit*)this_)->setDateRange(*min, *max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:125
// [4] QTime minimumTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11minimumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumTime();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:126
// [-2] void setMinimumTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void *this_, QTime* min) {
  ((QDateTimeEdit*)this_)->setMinimumTime(*min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:127
// [-2] void clearMinimumTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMinimumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:129
// [4] QTime maximumTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11maximumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumTime();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:130
// [-2] void setMaximumTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void *this_, QTime* max) {
  ((QDateTimeEdit*)this_)->setMaximumTime(*max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:131
// [-2] void clearMaximumTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMaximumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:133
// [-2] void setTimeRange(const QTime &, const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void *this_, QTime* min, QTime* max) {
  ((QDateTimeEdit*)this_)->setTimeRange(*min, *max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:135
// [4] QDateTimeEdit::Sections displayedSections()
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Sections* C_ZNK13QDateTimeEdit17displayedSectionsEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayedSections();
return new QDateTimeEdit::Sections(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:136
// [4] QDateTimeEdit::Section currentSection()
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Section C_ZNK13QDateTimeEdit14currentSectionEv(void *this_) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->currentSection();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdatetimeedit.h:137
// [4] QDateTimeEdit::Section sectionAt(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Section C_ZNK13QDateTimeEdit9sectionAtEi(void *this_, int index) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->sectionAt(index);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:138
// [-2] void setCurrentSection(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setCurrentSection(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:140
// [4] int currentSectionIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK13QDateTimeEdit19currentSectionIndexEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->currentSectionIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:141
// [-2] void setCurrentSectionIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit22setCurrentSectionIndexEi(void *this_, int index) {
  ((QDateTimeEdit*)this_)->setCurrentSectionIndex(index);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:143
// [8] QCalendarWidget * calendarWidget()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit14calendarWidgetEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->calendarWidget();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:144
// [-2] void setCalendarWidget(QCalendarWidget *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget(void *this_, QCalendarWidget * calendarWidget) {
  ((QDateTimeEdit*)this_)->setCalendarWidget(calendarWidget);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:146
// [4] int sectionCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QDateTimeEdit12sectionCountEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->sectionCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:148
// [-2] void setSelectedSection(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setSelectedSection(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:150
// [8] QString sectionText(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  auto rv = ((QDateTimeEdit*)this_)->sectionText(section);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:152
// [8] QString displayFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit13displayFormatEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayFormat();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:153
// [-2] void setDisplayFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setDisplayFormatERK7QString(void *this_, QString* format) {
  ((QDateTimeEdit*)this_)->setDisplayFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:155
// [1] bool calendarPopup()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QDateTimeEdit13calendarPopupEv(void *this_) {
  return (bool)((QDateTimeEdit*)this_)->calendarPopup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:156
// [-2] void setCalendarPopup(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setCalendarPopupEb(void *this_, bool enable) {
  ((QDateTimeEdit*)this_)->setCalendarPopup(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:158
// [4] Qt::TimeSpec timeSpec()
extern "C" Q_DECL_EXPORT
Qt::TimeSpec C_ZNK13QDateTimeEdit8timeSpecEv(void *this_) {
  return (Qt::TimeSpec)((QDateTimeEdit*)this_)->timeSpec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:159
// [-2] void setTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTimeEdit*)this_)->setTimeSpec(spec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:161
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit8sizeHintEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:163
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit5clearEv(void *this_) {
  ((QDateTimeEdit*)this_)->clear();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:164
// [-2] void stepBy(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit6stepByEi(void *this_, int steps) {
  ((QDateTimeEdit*)this_)->stepBy(steps);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:166
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QDateTimeEdit5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDateTimeEdit*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:168
// [-2] void dateTimeChanged(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QDateTimeEdit*)this_)->dateTimeChanged(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:169
// [-2] void timeChanged(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11timeChangedERK5QTime(void *this_, QTime* time) {
  ((QDateTimeEdit*)this_)->timeChanged(*time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:170
// [-2] void dateChanged(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11dateChangedERK5QDate(void *this_, QDate* date) {
  ((QDateTimeEdit*)this_)->dateChanged(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:173
// [-2] void setDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QDateTimeEdit*)this_)->setDateTime(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:174
// [-2] void setDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit7setDateERK5QDate(void *this_, QDate* date) {
  ((QDateTimeEdit*)this_)->setDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:175
// [-2] void setTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit7setTimeERK5QTime(void *this_, QTime* time) {
  ((QDateTimeEdit*)this_)->setTime(*time);
}

//  main block end
