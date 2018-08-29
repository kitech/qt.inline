//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdatetime.h>
#include <QtCore>
#include "callback_inherit.h"

// QTime is pure virtual: false
// QTime has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTime_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTime_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTime_t qt_meta_stringdata_MyQTime = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQTime"
  },
  "MyQTime"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTime[] = {
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
class Q_DECL_EXPORT MyQTime : public QTime {
public:
  virtual ~MyQTime() {}
// void QTime()
MyQTime() : QTime() {}
// void QTime(int, int, int, int)
MyQTime(int h, int m, int s, int ms) : QTime(h, m, s, ms) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:159
// [-2] void QTime()
extern "C" Q_DECL_EXPORT
void* C_ZN5QTimeC2Ev() {
  return  new QTime();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:161
// [-2] void QTime(int, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QTimeC2Eiiii(int h, int m, int s, int ms) {
  return  new QTime(h, m, s, ms);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:163
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTime6isNullEv(void *this_) {
  return (bool)((QTime*)this_)->isNull();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:164
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTime7isValidEv(void *this_) {
  return (bool)((QTime*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:166
// [4] int hour()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime4hourEv(void *this_) {
  return (int)((QTime*)this_)->hour();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:167
// [4] int minute()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime6minuteEv(void *this_) {
  return (int)((QTime*)this_)->minute();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:168
// [4] int second()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime6secondEv(void *this_) {
  return (int)((QTime*)this_)->second();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:169
// [4] int msec()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime4msecEv(void *this_) {
  return (int)((QTime*)this_)->msec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:171
// [8] QString toString(Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QTime8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  auto rv = ((QTime*)this_)->toString(f);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:173
// [8] QString toString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QTime8toStringERK7QString(void *this_, QString* format) {
  auto rv = ((QTime*)this_)->toString(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:175
// [8] QString toString(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QTime8toStringE11QStringView(void *this_, QStringView* format) {
  auto rv = ((QTime*)this_)->toString(*format);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:177
// [1] bool setHMS(int, int, int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN5QTime6setHMSEiiii(void *this_, int h, int m, int s, int ms) {
  return (bool)((QTime*)this_)->setHMS(h, m, s, ms);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:179
// [4] QTime addSecs(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QTime7addSecsEi(void *this_, int secs) {
  auto rv = ((QTime*)this_)->addSecs(secs);
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:180
// [4] int secsTo(const QTime &)
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime6secsToERKS_(void *this_, QTime* arg0) {
  return (int)((QTime*)this_)->secsTo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:181
// [4] QTime addMSecs(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK5QTime8addMSecsEi(void *this_, int ms) {
  auto rv = ((QTime*)this_)->addMSecs(ms);
return new QTime(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:182
// [4] int msecsTo(const QTime &)
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime7msecsToERKS_(void *this_, QTime* arg0) {
  return (int)((QTime*)this_)->msecsTo(*arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:184
// [1] bool operator==(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimeeqERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:185
// [1] bool operator!=(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimeneERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator!=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:186
// [1] bool operator<(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimeltERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator<(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:187
// [1] bool operator<=(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimeleERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator<=(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:188
// [1] bool operator>(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimegtERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator>(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:189
// [1] bool operator>=(const QTime &)
extern "C" Q_DECL_EXPORT
bool C_ZNK5QTimegeERKS_(void *this_, QTime* other) {
  return (bool)((QTime*)this_)->operator>=(*other);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:191
// [4] QTime fromMSecsSinceStartOfDay(int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QTime24fromMSecsSinceStartOfDayEi(int msecs) {
  auto rv = QTime::fromMSecsSinceStartOfDay(msecs);
return new QTime(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:192
// [4] int msecsSinceStartOfDay()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime20msecsSinceStartOfDayEv(void *this_) {
  return (int)((QTime*)this_)->msecsSinceStartOfDay();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:194
// [4] QTime currentTime()
extern "C" Q_DECL_EXPORT
void* C_ZN5QTime11currentTimeEv() {
  auto rv = QTime::currentTime();
return new QTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:196
// [4] QTime fromString(const QString &, Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN5QTime10fromStringERK7QStringN2Qt10DateFormatE(QString* s, Qt::DateFormat f) {
  auto rv = QTime::fromString(*s, f);
return new QTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:197
// [4] QTime fromString(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN5QTime10fromStringERK7QStringS2_(QString* s, QString* format) {
  auto rv = QTime::fromString(*s, *format);
return new QTime(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:199
// [1] bool isValid(int, int, int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN5QTime7isValidEiiii(int h, int m, int s, int ms) {
  return (bool)QTime::isValid(h, m, s, ms);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:201
// [-2] void start()
extern "C" Q_DECL_EXPORT
void C_ZN5QTime5startEv(void *this_) {
  ((QTime*)this_)->start();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:202
// [4] int restart()
extern "C" Q_DECL_EXPORT
int C_ZN5QTime7restartEv(void *this_) {
  return (int)((QTime*)this_)->restart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:203
// [4] int elapsed()
extern "C" Q_DECL_EXPORT
int C_ZNK5QTime7elapsedEv(void *this_) {
  return (int)((QTime*)this_)->elapsed();
}


extern "C" Q_DECL_EXPORT
void C_ZN5QTimeD2Ev(void *this_) {
  delete (QTime*)(this_);
}
//  main block end
