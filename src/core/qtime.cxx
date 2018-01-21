//  header block begin
// /usr/include/qt/QtCore/qdatetime.h
#include <qdatetime.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qdatetime.h:156
// void QTime()
extern "C"
void* C_ZN5QTimeC1Ev() {
  return new QTime();
}
// /usr/include/qt/QtCore/qdatetime.h:161
// void QTime(int, int, int, int)
extern "C"
void* C_ZN5QTimeC1Eiiii(int h, int m, int s, int ms) {
  return new QTime(h, m, s, ms);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:163
// bool isNull()
extern "C"
void C_ZNK5QTime6isNullEv(void *this_) {
  /*return*/ ((QTime*)this_)->isNull();
}
// /usr/include/qt/QtCore/qdatetime.h:164
// bool isValid()
extern "C"
void C_ZNK5QTime7isValidEv(void *this_) {
  /*return*/ ((QTime*)this_)->isValid();
}
// /usr/include/qt/QtCore/qdatetime.h:166
// int hour()
extern "C"
void C_ZNK5QTime4hourEv(void *this_) {
  /*return*/ ((QTime*)this_)->hour();
}
// /usr/include/qt/QtCore/qdatetime.h:167
// int minute()
extern "C"
void C_ZNK5QTime6minuteEv(void *this_) {
  /*return*/ ((QTime*)this_)->minute();
}
// /usr/include/qt/QtCore/qdatetime.h:168
// int second()
extern "C"
void C_ZNK5QTime6secondEv(void *this_) {
  /*return*/ ((QTime*)this_)->second();
}
// /usr/include/qt/QtCore/qdatetime.h:169
// int msec()
extern "C"
void C_ZNK5QTime4msecEv(void *this_) {
  /*return*/ ((QTime*)this_)->msec();
}
// /usr/include/qt/QtCore/qdatetime.h:171
// QString toString(Qt::DateFormat)
extern "C"
void C_ZNK5QTime8toStringEN2Qt10DateFormatE(void *this_, Qt::DateFormat f) {
  /*return*/ ((QTime*)this_)->toString(f);
}
// /usr/include/qt/QtCore/qdatetime.h:172
// QString toString(const class QString &)
extern "C"
void C_ZNK5QTime8toStringERK7QString(void *this_, const QString & format) {
  /*return*/ ((QTime*)this_)->toString(format);
}
// /usr/include/qt/QtCore/qdatetime.h:174
// bool setHMS(int, int, int, int)
extern "C"
void C_ZN5QTime6setHMSEiiii(void *this_, int h, int m, int s, int ms) {
  /*return*/ ((QTime*)this_)->setHMS(h, m, s, ms);
}
// /usr/include/qt/QtCore/qdatetime.h:176
// QTime addSecs(int)
extern "C"
void C_ZNK5QTime7addSecsEi(void *this_, int secs) {
  /*return*/ ((QTime*)this_)->addSecs(secs);
}
// /usr/include/qt/QtCore/qdatetime.h:177
// int secsTo(const class QTime &)
extern "C"
void C_ZNK5QTime6secsToERKS_(void *this_, const QTime & arg0) {
  /*return*/ ((QTime*)this_)->secsTo(arg0);
}
// /usr/include/qt/QtCore/qdatetime.h:178
// QTime addMSecs(int)
extern "C"
void C_ZNK5QTime8addMSecsEi(void *this_, int ms) {
  /*return*/ ((QTime*)this_)->addMSecs(ms);
}
// /usr/include/qt/QtCore/qdatetime.h:179
// int msecsTo(const class QTime &)
extern "C"
void C_ZNK5QTime7msecsToERKS_(void *this_, const QTime & arg0) {
  /*return*/ ((QTime*)this_)->msecsTo(arg0);
}
// static inline
// /usr/include/qt/QtCore/qdatetime.h:188
// QTime fromMSecsSinceStartOfDay(int)
extern "C"
void C_ZN5QTime24fromMSecsSinceStartOfDayEi(int msecs) {
  /*return*/ QTime::fromMSecsSinceStartOfDay(msecs);
}
// inline
// /usr/include/qt/QtCore/qdatetime.h:189
// int msecsSinceStartOfDay()
extern "C"
void C_ZNK5QTime20msecsSinceStartOfDayEv(void *this_) {
  /*return*/ ((QTime*)this_)->msecsSinceStartOfDay();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:191
// QTime currentTime()
extern "C"
void C_ZN5QTime11currentTimeEv() {
  /*return*/ QTime::currentTime();
}
// static
// /usr/include/qt/QtCore/qdatetime.h:193
// QTime fromString(const class QString &, Qt::DateFormat)
extern "C"
void C_ZN5QTime10fromStringERK7QStringN2Qt10DateFormatE(const QString & s, Qt::DateFormat f) {
  /*return*/ QTime::fromString(s, f);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:194
// QTime fromString(const class QString &, const class QString &)
extern "C"
void C_ZN5QTime10fromStringERK7QStringS2_(const QString & s, const QString & format) {
  /*return*/ QTime::fromString(s, format);
}
// static
// /usr/include/qt/QtCore/qdatetime.h:196
// bool isValid(int, int, int, int)
extern "C"
void C_ZN5QTime7isValidEiiii(int h, int m, int s, int ms) {
  /*return*/ QTime::isValid(h, m, s, ms);
}
// /usr/include/qt/QtCore/qdatetime.h:198
// void start()
extern "C"
void C_ZN5QTime5startEv(void *this_) {
  ((QTime*)this_)->start();
}
// /usr/include/qt/QtCore/qdatetime.h:199
// int restart()
extern "C"
void C_ZN5QTime7restartEv(void *this_) {
  /*return*/ ((QTime*)this_)->restart();
}
// /usr/include/qt/QtCore/qdatetime.h:200
// int elapsed()
extern "C"
void C_ZNK5QTime7elapsedEv(void *this_) {
  /*return*/ ((QTime*)this_)->elapsed();
}
//  main block end
