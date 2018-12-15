//  header block begin

// /usr/include/qt/QtWidgets/qdatetimeedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetimeedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDateTimeEdit is pure virtual: false
// QDateTimeEdit has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDateTimeEdit_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDateTimeEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDateTimeEdit_t qt_meta_stringdata_MyQDateTimeEdit = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQDateTimeEdit"
  },
  "MyQDateTimeEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDateTimeEdit[] = {
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
class Q_DECL_EXPORT MyQDateTimeEdit : public QDateTimeEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QDateTimeEdit::staticMetaObject,
  qt_meta_stringdata_MyQDateTimeEdit.data,
  qt_meta_data_MyQDateTimeEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQDateTimeEdit.stringdata0))
      return static_cast<void*>(this);
  return QDateTimeEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QDateTimeEdit::qt_metacall(_c, _id, _a);
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
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::keyPressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::wheelEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::focusInEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QDateTimeEdit::focusNextPrevChild(next);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] QValidator::State validate(QString &, int &)
  virtual QValidator::State validate(QString & input, int & pos) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"validate", &handled, 2, (uint64_t)&input, (uint64_t)&pos, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QValidator::State)(int)(irv);
      // Elaborated Enum QValidator::State
    } else {
    return QDateTimeEdit::validate(input, pos);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void fixup(QString &)
  virtual void fixup(QString & input) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"fixup", &handled, 1, (uint64_t)&input, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::fixup(input);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QDateTime dateTimeFromText(const QString &)
  virtual QDateTime dateTimeFromText(const QString & text) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dateTimeFromText", &handled, 1, (uint64_t)&text, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QDateTime){};}
    auto prv = (QDateTime*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QDateTime
    } else {
    return QDateTimeEdit::dateTimeFromText(text);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QString textFromDateTime(const QDateTime &)
  virtual QString textFromDateTime(const QDateTime & dt) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textFromDateTime", &handled, 1, (uint64_t)&dt, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return QDateTimeEdit::textFromDateTime(dt);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
  virtual QAbstractSpinBox::StepEnabled stepEnabled() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"stepEnabled", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractSpinBox::StepEnabled)(int)(irv);
      // Typedef Record QFlags<QAbstractSpinBox::StepEnabledFlag>
    } else {
    return QDateTimeEdit::stepEnabled();
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
    QDateTimeEdit::mousePressEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QDateTimeEdit::paintEvent(event);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QDateTimeEdit_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQDateTimeEdit* qo = (MyQDateTimeEdit*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:179
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::keyPressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:181
// [-2] void wheelEvent(QWheelEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit10wheelEventEP11QWheelEvent(void *this_, QWheelEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::wheelEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:183
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::focusInEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:184
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN13QDateTimeEdit18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QDateTimeEdit*)this_)->QDateTimeEdit::focusNextPrevChild(next);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:185
// [4] QValidator::State validate(QString &, int &)
extern "C" Q_DECL_EXPORT
QValidator::State C_ZNK13QDateTimeEdit8validateER7QStringRi(void *this_, QString* input, int & pos) {
  return (QValidator::State)((QDateTimeEdit*)this_)->QDateTimeEdit::validate(*input, pos);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:186
// [-2] void fixup(QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QDateTimeEdit5fixupER7QString(void *this_, QString* input) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::fixup(*input);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:188
// [8] QDateTime dateTimeFromText(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit16dateTimeFromTextERK7QString(void *this_, QString* text) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::dateTimeFromText(*text);
return new QDateTime(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:189
// [8] QString textFromDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit16textFromDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::textFromDateTime(*dt);
return new QString(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:190
// [4] QAbstractSpinBox::StepEnabled stepEnabled()
extern "C" Q_DECL_EXPORT
QAbstractSpinBox::StepEnabled* C_ZNK13QDateTimeEdit11stepEnabledEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->QDateTimeEdit::stepEnabled();
return new QAbstractSpinBox::StepEnabled(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:191
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::mousePressEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:192
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit10paintEventEP11QPaintEvent(void *this_, QPaintEvent * event) {
  ((QDateTimeEdit*)this_)->QDateTimeEdit::paintEvent(event);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit10metaObjectEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEdit11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QDateTimeEdit*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QDateTimeEdit11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QDateTimeEdit*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEdit2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDateTimeEdit::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEdit6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QDateTimeEdit::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:96
// [-2] void QDateTimeEdit(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:97
// [-2] void QDateTimeEdit(const QDateTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK9QDateTimeP7QWidget(QDateTime* dt, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*dt, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:98
// [-2] void QDateTimeEdit(const QDate &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK5QDateP7QWidget(QDate* d, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*d, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:99
// [-2] void QDateTimeEdit(const QTime &, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QDateTimeEditC2ERK5QTimeP7QWidget(QTime* t, QWidget * parent) {
  auto _nilp = (MyQDateTimeEdit*)(0);
  return  new MyQDateTimeEdit(*t, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:100
// [-2] void ~QDateTimeEdit()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEditD2Ev(void *this_) {
  delete (QDateTimeEdit*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:102
// [8] QDateTime dateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit8dateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->dateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:103
// [8] QDate date()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit4dateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->date();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:104
// [4] QTime time()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit4timeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->time();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:106
// [8] QDateTime minimumDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit15minimumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:107
// [-2] void clearMinimumDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit20clearMinimumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:108
// [-2] void setMinimumDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setMinimumDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  ((QDateTimeEdit*)this_)->setMinimumDateTime(*dt);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:110
// [8] QDateTime maximumDateTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit15maximumDateTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDateTime();
return new QDateTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:111
// [-2] void clearMaximumDateTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit20clearMaximumDateTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDateTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:112
// [-2] void setMaximumDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setMaximumDateTimeERK9QDateTime(void *this_, QDateTime* dt) {
  ((QDateTimeEdit*)this_)->setMaximumDateTime(*dt);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:114
// [-2] void setDateTimeRange(const QDateTime &, const QDateTime &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setDateTimeRangeERK9QDateTimeS2_(void *this_, QDateTime* min, QDateTime* max) {
  ((QDateTimeEdit*)this_)->setDateTimeRange(*min, *max);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:116
// [8] QDate minimumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11minimumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:117
// [-2] void setMinimumDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMinimumDateERK5QDate(void *this_, QDate* min) {
  ((QDateTimeEdit*)this_)->setMinimumDate(*min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:118
// [-2] void clearMinimumDate()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMinimumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:120
// [8] QDate maximumDate()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11maximumDateEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumDate();
return new QDate(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:121
// [-2] void setMaximumDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMaximumDateERK5QDate(void *this_, QDate* max) {
  ((QDateTimeEdit*)this_)->setMaximumDate(*max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:122
// [-2] void clearMaximumDate()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMaximumDateEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumDate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:124
// [-2] void setDateRange(const QDate &, const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12setDateRangeERK5QDateS2_(void *this_, QDate* min, QDate* max) {
  ((QDateTimeEdit*)this_)->setDateRange(*min, *max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:126
// [4] QTime minimumTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11minimumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->minimumTime();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:127
// [-2] void setMinimumTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMinimumTimeERK5QTime(void *this_, QTime* min) {
  ((QDateTimeEdit*)this_)->setMinimumTime(*min);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:128
// [-2] void clearMinimumTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMinimumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMinimumTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:130
// [4] QTime maximumTime()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11maximumTimeEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->maximumTime();
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:131
// [-2] void setMaximumTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit14setMaximumTimeERK5QTime(void *this_, QTime* max) {
  ((QDateTimeEdit*)this_)->setMaximumTime(*max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:132
// [-2] void clearMaximumTime()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16clearMaximumTimeEv(void *this_) {
  ((QDateTimeEdit*)this_)->clearMaximumTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:134
// [-2] void setTimeRange(const QTime &, const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit12setTimeRangeERK5QTimeS2_(void *this_, QTime* min, QTime* max) {
  ((QDateTimeEdit*)this_)->setTimeRange(*min, *max);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:136
// [4] QDateTimeEdit::Sections displayedSections()
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Sections* C_ZNK13QDateTimeEdit17displayedSectionsEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayedSections();
return new QDateTimeEdit::Sections(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:137
// [4] QDateTimeEdit::Section currentSection()
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Section C_ZNK13QDateTimeEdit14currentSectionEv(void *this_) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->currentSection();
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtWidgets/qdatetimeedit.h:138
// [4] QDateTimeEdit::Section sectionAt(int)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
QDateTimeEdit::Section C_ZNK13QDateTimeEdit9sectionAtEi(void *this_, int index) {
  return (QDateTimeEdit::Section)((QDateTimeEdit*)this_)->sectionAt(index);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:139
// [-2] void setCurrentSection(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit17setCurrentSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setCurrentSection(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:141
// [4] int currentSectionIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK13QDateTimeEdit19currentSectionIndexEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->currentSectionIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:142
// [-2] void setCurrentSectionIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit22setCurrentSectionIndexEi(void *this_, int index) {
  ((QDateTimeEdit*)this_)->setCurrentSectionIndex(index);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:144
// [8] QCalendarWidget * calendarWidget()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit14calendarWidgetEv(void *this_) {
  return (void*)((QDateTimeEdit*)this_)->calendarWidget();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qdatetimeedit.h:145
// [-2] void setCalendarWidget(QCalendarWidget *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit17setCalendarWidgetEP15QCalendarWidget(void *this_, QCalendarWidget * calendarWidget) {
  ((QDateTimeEdit*)this_)->setCalendarWidget(calendarWidget);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:147
// [4] int sectionCount()
extern "C" Q_DECL_EXPORT
int C_ZNK13QDateTimeEdit12sectionCountEv(void *this_) {
  return (int)((QDateTimeEdit*)this_)->sectionCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:149
// [-2] void setSelectedSection(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit18setSelectedSectionENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  ((QDateTimeEdit*)this_)->setSelectedSection(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:151
// [8] QString sectionText(QDateTimeEdit::Section)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit11sectionTextENS_7SectionE(void *this_, QDateTimeEdit::Section section) {
  auto rv = ((QDateTimeEdit*)this_)->sectionText(section);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:153
// [8] QString displayFormat()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit13displayFormatEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->displayFormat();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:154
// [-2] void setDisplayFormat(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setDisplayFormatERK7QString(void *this_, QString* format) {
  ((QDateTimeEdit*)this_)->setDisplayFormat(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:156
// [1] bool calendarPopup()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QDateTimeEdit13calendarPopupEv(void *this_) {
  return (bool)((QDateTimeEdit*)this_)->calendarPopup();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:157
// [-2] void setCalendarPopup(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit16setCalendarPopupEb(void *this_, bool enable) {
  ((QDateTimeEdit*)this_)->setCalendarPopup(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:159
// [4] Qt::TimeSpec timeSpec()
extern "C" Q_DECL_EXPORT
Qt::TimeSpec C_ZNK13QDateTimeEdit8timeSpecEv(void *this_) {
  return (Qt::TimeSpec)((QDateTimeEdit*)this_)->timeSpec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:160
// [-2] void setTimeSpec(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11setTimeSpecEN2Qt8TimeSpecE(void *this_, Qt::TimeSpec spec) {
  ((QDateTimeEdit*)this_)->setTimeSpec(spec);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:162
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QDateTimeEdit8sizeHintEv(void *this_) {
  auto rv = ((QDateTimeEdit*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:164
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit5clearEv(void *this_) {
  ((QDateTimeEdit*)this_)->clear();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:165
// [-2] void stepBy(int)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit6stepByEi(void *this_, int steps) {
  ((QDateTimeEdit*)this_)->stepBy(steps);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:167
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QDateTimeEdit5eventEP6QEvent(void *this_, QEvent * event) {
  return (bool)((QDateTimeEdit*)this_)->event(event);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:169
// [-2] void dateTimeChanged(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit15dateTimeChangedERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QDateTimeEdit*)this_)->dateTimeChanged(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:170
// [-2] void timeChanged(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11timeChangedERK5QTime(void *this_, QTime* time) {
  ((QDateTimeEdit*)this_)->timeChanged(*time);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:171
// [-2] void dateChanged(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11dateChangedERK5QDate(void *this_, QDate* date) {
  ((QDateTimeEdit*)this_)->dateChanged(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:174
// [-2] void setDateTime(const QDateTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit11setDateTimeERK9QDateTime(void *this_, QDateTime* dateTime) {
  ((QDateTimeEdit*)this_)->setDateTime(*dateTime);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:175
// [-2] void setDate(const QDate &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit7setDateERK5QDate(void *this_, QDate* date) {
  ((QDateTimeEdit*)this_)->setDate(*date);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:176
// [-2] void setTime(const QTime &)
extern "C" Q_DECL_EXPORT
void C_ZN13QDateTimeEdit7setTimeERK5QTime(void *this_, QTime* time) {
  ((QDateTimeEdit*)this_)->setTime(*time);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
