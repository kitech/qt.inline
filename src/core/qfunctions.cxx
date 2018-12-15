
#include <QtCore>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:406
// [8] const char * qVersion()
extern "C" Q_DECL_EXPORT
void* CqVersion() {
  return (void*)qVersion();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:227
// [16] QTextStream & operator>>(QTextStream &, QTextStreamFunction)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QTextStreamPFS0_S0_E(QTextStream* s, QTextStreamFunction f) {
  auto& rv = operator>>(*s, f);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:564
// [32] QDataStream & operator>>(QDataStream &, QVariant::Type &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamRN8QVariant4TypeE_1(QDataStream* s, QVariant::Type & p) {
  auto& rv = operator>>(*s, p);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:181
// [32] QDataStream & operator>>(QDataStream &, QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR9QTimeZone_2(QDataStream* ds, QTimeZone* tz) {
  auto& rv = operator>>(*ds, *tz);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:328
// [32] QDataStream & operator>>(QDataStream &, QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR9QMarginsF_3(QDataStream* arg0, QMarginsF* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:401
// [32] QDataStream & operator>>(QDataStream &, QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR9QDateTime_4(QDataStream* arg0, QDateTime* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:168
// [32] QDataStream & operator>>(QDataStream &, QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR9QBitArray_5(QDataStream* arg0, QBitArray* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:562
// [32] QDataStream & operator>>(QDataStream &, QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR8QVariant_6(QDataStream* s, QVariant* p) {
  auto& rv = operator>>(*s, *p);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:95
// [32] QDataStream & operator>>(QDataStream &, QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR8QMargins_7(QDataStream* arg0, QMargins* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1416
// [32] QDataStream & operator>>(QDataStream &, QString &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR7QString_8(QDataStream* arg0, QString* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:125
// [32] QDataStream & operator>>(QDataStream &, QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR7QRegExp_9(QDataStream* in, QRegExp* regExp) {
  auto& rv = operator>>(*in, *regExp);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:278
// [32] QDataStream & operator>>(QDataStream &, QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR7QPointF_10(QDataStream* arg0, QPointF* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1123
// [32] QDataStream & operator>>(QDataStream &, QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR7QLocale_11(QDataStream* arg0, QLocale* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:277
// [32] QDataStream & operator>>(QDataStream &, QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR6QSizeF_12(QDataStream* arg0, QSizeF* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:637
// [32] QDataStream & operator>>(QDataStream &, QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR6QRectF_13(QDataStream* arg0, QRectF* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:113
// [32] QDataStream & operator>>(QDataStream &, QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR6QPoint_14(QDataStream* arg0, QPoint* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:429
// [32] QDataStream & operator>>(QDataStream &, QLineF &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR6QLineF_15(QDataStream* arg0, QLineF* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:239
// [32] QDataStream & operator>>(QDataStream &, QUuid &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QUuid_16(QDataStream* arg0, QUuid* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:399
// [32] QDataStream & operator>>(QDataStream &, QTime &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QTime_17(QDataStream* arg0, QTime* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:109
// [32] QDataStream & operator>>(QDataStream &, QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QSize_18(QDataStream* arg0, QSize* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:177
// [32] QDataStream & operator>>(QDataStream &, QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QRect_19(QDataStream* arg0, QRect* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:208
// [32] QDataStream & operator>>(QDataStream &, QLine &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QLine_20(QDataStream* arg0, QLine* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:397
// [32] QDataStream & operator>>(QDataStream &, QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QDate_21(QDataStream* arg0, QDate* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:626
// [32] QDataStream & operator>>(QDataStream &, QChar &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR5QChar_22(QDataStream* arg0, QChar* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:411
// [32] QDataStream & operator>>(QDataStream &, QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR4QUrl_23(QDataStream* arg0, QUrl* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:172
// [32] QDataStream & operator>>(QDataStream &, QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR18QRegularExpression_24(QDataStream* in, QRegularExpression* re) {
  auto& rv = operator>>(*in, *re);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:58
// [32] QDataStream & operator>>(QDataStream &, QVersionNumber &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR14QVersionNumber_25(QDataStream* in, QVersionNumber* version) {
  auto& rv = operator>>(*in, *version);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:136
// [32] QDataStream & operator>>(QDataStream &, QEasingCurve &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR12QEasingCurve_26(QDataStream* arg0, QEasingCurve* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:696
// [32] QDataStream & operator>>(QDataStream &, QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR10QByteArray_27(QDataStream* arg0, QByteArray* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:471
// [32] QMarginsF operator+(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZpsRK9QMarginsF(QMarginsF* margins) {
  auto rv = operator+(*margins);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:267
// [16] QMargins operator+(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZpsRK8QMargins_1(QMargins* margins) {
  auto rv = operator+(*margins);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:385
// [16] const QPointF operator+(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZpsRK7QPointF_2(QPointF* p) {
  auto rv = operator+(*p);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:193
// [8] const QPoint operator+(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZpsRK6QPoint_3(QPoint* p) {
  auto rv = operator+(*p);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:171
// [16] QMargins operator+(int, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZpliRK8QMargins_4(int lhs, QMargins* rhs) {
  auto rv = operator+(lhs, *rhs);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:202
// [8] double operator+(int, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zpli8qfloat16_5(int lhs, qfloat16* rhs) {
  return (double)operator+(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator+(float, qfloat16)
extern "C" Q_DECL_EXPORT
float C_Zplf8qfloat16_6(float lhs, qfloat16* rhs) {
  return (float)operator+(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator+(long double, qfloat16)
extern "C" Q_DECL_EXPORT
void C_Zple8qfloat16_7(long double lhs, qfloat16* rhs) {
  auto rv = operator+(lhs, *rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:403
// [32] QMarginsF operator+(qreal, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZpldRK9QMarginsF_8(qreal lhs, QMarginsF* rhs) {
  auto rv = operator+(lhs, *rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator+(double, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zpld8qfloat16_9(double lhs, qfloat16* rhs) {
  return (double)operator+(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1360
// [8] const QString operator+(char, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZplcRK7QString_10(char c, QString* s) {
  auto rv = operator+(c, *s);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:665
// [8] const QByteArray operator+(char, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZplcRK10QByteArray_11(char a1, QByteArray* a2) {
  auto rv = operator+(a1, *a2);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:397
// [32] QMarginsF operator+(const QMarginsF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZplRK9QMarginsFd_12(QMarginsF* lhs, qreal rhs) {
  auto rv = operator+(*lhs, rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:385
// [32] QMarginsF operator+(const QMarginsF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK9QMarginsFS1__13(QMarginsF* lhs, QMarginsF* rhs) {
  auto rv = operator+(*lhs, *rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:882
// [32] QRectF operator+(const QMarginsF &, const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK9QMarginsFRK6QRectF_14(QMarginsF* lhs, QRectF* rhs) {
  auto rv = operator+(*lhs, *rhs);
return new QRectF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:165
// [16] QMargins operator+(const QMargins &, int)
extern "C" Q_DECL_EXPORT
void* C_ZplRK8QMarginsi_15(QMargins* lhs, int rhs) {
  auto rv = operator+(*lhs, rhs);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:153
// [16] QMargins operator+(const QMargins &, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK8QMarginsS1__16(QMargins* m1, QMargins* m2) {
  auto rv = operator+(*m1, *m2);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:470
// [16] QRect operator+(const QMargins &, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK8QMarginsRK5QRect_17(QMargins* margins, QRect* rectangle) {
  auto rv = operator+(*margins, *rectangle);
return new QRect(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1362
// [8] const QString operator+(const QString &, char)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QStringc_18(QString* s, char c) {
  auto rv = operator+(*s, c);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1349
// [8] const QString operator+(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QStringS1__19(QString* s1, QString* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1845
// [8] QString operator+(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QStringRK10QStringRef_20(QString* s1, QStringRef* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1366
// [8] const QString operator+(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QStringRK10QByteArray_21(QString* s, QByteArray* ba) {
  auto rv = operator+(*s, *ba);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1356
// [8] const QString operator+(const QString &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QStringPKc_22(QString* s1, const char * s2) {
  auto rv = operator+(*s1, s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1351
// [8] const QString operator+(const QString &, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QString5QChar_23(QString* s1, QChar* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:365
// [16] const QPointF operator+(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK7QPointFS1__24(QPointF* p1, QPointF* p2) {
  auto rv = operator+(*p1, *p2);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:345
// [16] const QSizeF operator+(const QSizeF &, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK6QSizeFS1__25(QSizeF* s1, QSizeF* s2) {
  auto rv = operator+(*s1, *s2);
return new QSizeF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:876
// [32] QRectF operator+(const QRectF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK6QRectFRK9QMarginsF_26(QRectF* lhs, QMarginsF* rhs) {
  auto rv = operator+(*lhs, *rhs);
return new QRectF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:169
// [8] const QPoint operator+(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK6QPointS1__27(QPoint* p1, QPoint* p2) {
  auto rv = operator+(*p1, *p2);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:175
// [8] const QSize operator+(const QSize &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK5QSizeS1__28(QSize* s1, QSize* s2) {
  auto rv = operator+(*s1, *s2);
return new QSize(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:464
// [16] QRect operator+(const QRect &, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK5QRectRK8QMargins_29(QRect* rectangle, QMargins* margins) {
  auto rv = operator+(*rectangle, *margins);
return new QRect(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:245
// [8] QStringList operator+(const QList<QString> &, const QStringList &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK5QListI7QStringERK11QStringList_30(QList<QString>* one, QStringList* other) {
  auto rv = operator+(*one, *other);
return new QStringList(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1853
// [8] QString operator+(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QStringRefS1__31(QStringRef* s1, QStringRef* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1847
// [8] QString operator+(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QStringRefRK7QString_32(QStringRef* s1, QString* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1855
// [8] QString operator+(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QStringRef5QChar_33(QStringRef* s1, QChar* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1849
// [8] QString operator+(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QStringRef13QLatin1String_34(QStringRef* s1, QLatin1String* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:661
// [8] const QByteArray operator+(const QByteArray &, char)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QByteArrayc_35(QByteArray* a1, char a2) {
  auto rv = operator+(*a1, a2);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:657
// [8] const QByteArray operator+(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QByteArrayS1__36(QByteArray* a1, QByteArray* a2) {
  auto rv = operator+(*a1, *a2);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1364
// [8] const QString operator+(const QByteArray &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QByteArrayRK7QString_37(QByteArray* ba, QString* s) {
  auto rv = operator+(*ba, *s);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:659
// [8] const QByteArray operator+(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
void* C_ZplRK10QByteArrayPKc_38(QByteArray* a1, const char * a2) {
  auto rv = operator+(*a1, a2);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1358
// [8] const QString operator+(const char *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZplPKcRK7QString_39(const char * s1, QString* s2) {
  auto rv = operator+(s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:663
// [8] const QByteArray operator+(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZplPKcRK10QByteArray_40(const char * a1, QByteArray* a2) {
  auto rv = operator+(a1, *a2);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:202
// [8] double operator+(qfloat16, int)
extern "C" Q_DECL_EXPORT
double C_Zpl8qfloat16i_41(qfloat16* lhs, int rhs) {
  return (double)operator+(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator+(qfloat16, float)
extern "C" Q_DECL_EXPORT
float C_Zpl8qfloat16f_42(qfloat16* lhs, float rhs) {
  return (float)operator+(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator+(qfloat16, long double)
extern "C" Q_DECL_EXPORT
void C_Zpl8qfloat16e_43(qfloat16* lhs, long double rhs) {
  auto rv = operator+(*lhs, rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator+(qfloat16, double)
extern "C" Q_DECL_EXPORT
double C_Zpl8qfloat16d_44(qfloat16* lhs, double rhs) {
  return (double)operator+(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:173
// [2] qfloat16 operator+(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
void* C_Zpl8qfloat16S__45(qfloat16* a, qfloat16* b) {
  auto rv = operator+(*a, *b);
return new qfloat16(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1353
// [8] const QString operator+(QChar, const QString &)
extern "C" Q_DECL_EXPORT
void* C_Zpl5QCharRK7QString_46(QChar* s1, QString* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1857
// [8] QString operator+(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_Zpl5QCharRK10QStringRef_47(QChar* s1, QStringRef* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1851
// [8] QString operator+(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_Zpl13QLatin1StringRK10QStringRef_48(QLatin1String* s1, QStringRef* s2) {
  auto rv = operator+(*s1, *s2);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [2] qfloat16 & operator+=(qfloat16 &, float)
extern "C" Q_DECL_EXPORT
void* C_ZpLR8qfloat16f(qfloat16* lhs, float rhs) {
  auto& rv = operator+=(*lhs, rhs);
return &rv;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [2] qfloat16 & operator+=(qfloat16 &, long double)
extern "C" Q_DECL_EXPORT
void* C_ZpLR8qfloat16e_1(qfloat16* lhs, long double rhs) {
  auto& rv = operator+=(*lhs, rhs);
return &rv;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [2] qfloat16 & operator+=(qfloat16 &, double)
extern "C" Q_DECL_EXPORT
void* C_ZpLR8qfloat16d_2(qfloat16* lhs, double rhs) {
  auto& rv = operator+=(*lhs, rhs);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:119
// [8] QBitArray operator|(const QBitArray &, const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZorRK9QBitArrayS1_(QBitArray* arg0, QBitArray* arg1) {
  auto rv = operator|(*arg0, *arg1);
return new QBitArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:765
// [4] QIncompatibleFlag operator|(QMetaType::TypeFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN9QMetaType8TypeFlagEi_1(QMetaType::TypeFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:765
// [4] QFlags<QMetaType::TypeFlags::enum_type> operator|(QMetaType::TypeFlags::enum_type, QMetaType::TypeFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN9QMetaType8TypeFlagES0__2(QMetaType::TypeFlags::enum_type f1, QMetaType::TypeFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:765
// [4] QFlags<QMetaType::TypeFlags::enum_type> operator|(QMetaType::TypeFlags::enum_type, QFlags<QMetaType::TypeFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN9QMetaType8TypeFlagE6QFlagsIS0_E_3(QMetaType::TypeFlags::enum_type f1, QFlags<QMetaType::TypeFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QIncompatibleFlag operator|(QIODevice::OpenMode::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN9QIODevice12OpenModeFlagEi_4(QIODevice::OpenMode::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QFlags<QIODevice::OpenMode::enum_type> operator|(QIODevice::OpenMode::enum_type, QIODevice::OpenMode::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN9QIODevice12OpenModeFlagES0__5(QIODevice::OpenMode::enum_type f1, QIODevice::OpenMode::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QFlags<QIODevice::OpenMode::enum_type> operator|(QIODevice::OpenMode::enum_type, QFlags<QIODevice::OpenMode::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN9QIODevice12OpenModeFlagE6QFlagsIS0_E_6(QIODevice::OpenMode::enum_type f1, QFlags<QIODevice::OpenModeFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QIncompatibleFlag operator|(QLibrary::LoadHints::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN8QLibrary8LoadHintEi_7(QLibrary::LoadHints::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QFlags<QLibrary::LoadHints::enum_type> operator|(QLibrary::LoadHints::enum_type, QLibrary::LoadHints::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN8QLibrary8LoadHintES0__8(QLibrary::LoadHints::enum_type f1, QLibrary::LoadHints::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QFlags<QLibrary::LoadHints::enum_type> operator|(QLibrary::LoadHints::enum_type, QFlags<QLibrary::LoadHints::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN8QLibrary8LoadHintE6QFlagsIS0_E_9(QLibrary::LoadHints::enum_type f1, QFlags<QLibrary::LoadHint> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1420
// [4] QIncompatibleFlag operator|(QString::SectionFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN7QString11SectionFlagEi_10(QString::SectionFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1420
// [4] QFlags<QString::SectionFlags::enum_type> operator|(QString::SectionFlags::enum_type, QString::SectionFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN7QString11SectionFlagES0__11(QString::SectionFlags::enum_type f1, QString::SectionFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1420
// [4] QFlags<QString::SectionFlags::enum_type> operator|(QString::SectionFlags::enum_type, QFlags<QString::SectionFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN7QString11SectionFlagE6QFlagsIS0_E_12(QString::SectionFlags::enum_type f1, QFlags<QString::SectionFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1099
// [4] QIncompatibleFlag operator|(QLocale::NumberOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN7QLocale12NumberOptionEi_13(QLocale::NumberOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1099
// [4] QFlags<QLocale::NumberOptions::enum_type> operator|(QLocale::NumberOptions::enum_type, QLocale::NumberOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN7QLocale12NumberOptionES0__14(QLocale::NumberOptions::enum_type f1, QLocale::NumberOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1099
// [4] QFlags<QLocale::NumberOptions::enum_type> operator|(QLocale::NumberOptions::enum_type, QFlags<QLocale::NumberOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN7QLocale12NumberOptionE6QFlagsIS0_E_15(QLocale::NumberOptions::enum_type f1, QFlags<QLocale::NumberOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QIncompatibleFlag operator|(QUrl::ComponentFormattingOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN4QUrl25ComponentFormattingOptionEi_16(QUrl::ComponentFormattingOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QFlags<QUrl::ComponentFormattingOptions::enum_type> operator|(QUrl::ComponentFormattingOptions::enum_type, QUrl::ComponentFormattingOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN4QUrl25ComponentFormattingOptionES0__17(QUrl::ComponentFormattingOptions::enum_type f1, QUrl::ComponentFormattingOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:394
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOption, QUrl::UrlFormattingOption)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl25ComponentFormattingOptionENS_19UrlFormattingOptionE_18(QUrl::ComponentFormattingOption f, QUrl::UrlFormattingOption i) {
  return (QUrl::FormattingOptions)operator|(f, i);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QFlags<QUrl::ComponentFormattingOptions::enum_type> operator|(QUrl::ComponentFormattingOptions::enum_type, QFlags<QUrl::ComponentFormattingOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN4QUrl25ComponentFormattingOptionE6QFlagsIS0_E_19(QUrl::ComponentFormattingOptions::enum_type f1, QFlags<QUrl::ComponentFormattingOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:400
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOption, QUrl::FormattingOptions)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl25ComponentFormattingOptionE12QUrlTwoFlagsINS_19UrlFormattingOptionES0_E_20(QUrl::ComponentFormattingOption f, QUrl::FormattingOptions i) {
  return (QUrl::FormattingOptions)operator|(f, i);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:384
// [4] QIncompatibleFlag operator|(QUrl::UrlFormattingOption, int)
extern "C" Q_DECL_EXPORT
void C_ZorN4QUrl19UrlFormattingOptionEi_21(QUrl::UrlFormattingOption f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:380
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::UrlFormattingOption)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl19UrlFormattingOptionES0__22(QUrl::UrlFormattingOption f1, QUrl::UrlFormattingOption f2) {
  return (QUrl::FormattingOptions)operator|(f1, f2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:390
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl19UrlFormattingOptionENS_25ComponentFormattingOptionE_23(QUrl::UrlFormattingOption i, QUrl::ComponentFormattingOption f) {
  return (QUrl::FormattingOptions)operator|(i, f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:392
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl19UrlFormattingOptionE6QFlagsINS_25ComponentFormattingOptionEE_24(QUrl::UrlFormattingOption i, QFlags<QUrl::ComponentFormattingOption> f) {
  return (QUrl::FormattingOptions)operator|(i, f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:382
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::FormattingOptions)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_ZorN4QUrl19UrlFormattingOptionE12QUrlTwoFlagsIS0_NS_25ComponentFormattingOptionEE_25(QUrl::UrlFormattingOption f1, QUrl::FormattingOptions f2) {
  return (QUrl::FormattingOptions)operator|(f1, f2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:235
// [4] QIncompatibleFlag operator|(QDir::SortFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir8SortFlagEi_26(QDir::SortFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:235
// [4] QFlags<QDir::SortFlags::enum_type> operator|(QDir::SortFlags::enum_type, QDir::SortFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir8SortFlagES0__27(QDir::SortFlags::enum_type f1, QDir::SortFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:235
// [4] QFlags<QDir::SortFlags::enum_type> operator|(QDir::SortFlags::enum_type, QFlags<QDir::SortFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir8SortFlagE6QFlagsIS0_E_28(QDir::SortFlags::enum_type f1, QFlags<QDir::SortFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:234
// [4] QIncompatibleFlag operator|(QDir::Filters::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir6FilterEi_29(QDir::Filters::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:234
// [4] QFlags<QDir::Filters::enum_type> operator|(QDir::Filters::enum_type, QDir::Filters::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir6FilterES0__30(QDir::Filters::enum_type f1, QDir::Filters::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:234
// [4] QFlags<QDir::Filters::enum_type> operator|(QDir::Filters::enum_type, QFlags<QDir::Filters::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN4QDir6FilterE6QFlagsIS0_E_31(QDir::Filters::enum_type f1, QFlags<QDir::Filter> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QIncompatibleFlag operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN19QTextBoundaryFinder14BoundaryReasonEi_32(QTextBoundaryFinder::BoundaryReasons::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type> operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, QTextBoundaryFinder::BoundaryReasons::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN19QTextBoundaryFinder14BoundaryReasonES0__33(QTextBoundaryFinder::BoundaryReasons::enum_type f1, QTextBoundaryFinder::BoundaryReasons::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type> operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN19QTextBoundaryFinder14BoundaryReasonE6QFlagsIS0_E_34(QTextBoundaryFinder::BoundaryReasons::enum_type f1, QFlags<QTextBoundaryFinder::BoundaryReason> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QIncompatibleFlag operator|(QItemSelectionModel::SelectionFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN19QItemSelectionModel13SelectionFlagEi_35(QItemSelectionModel::SelectionFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QFlags<QItemSelectionModel::SelectionFlags::enum_type> operator|(QItemSelectionModel::SelectionFlags::enum_type, QItemSelectionModel::SelectionFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN19QItemSelectionModel13SelectionFlagES0__36(QItemSelectionModel::SelectionFlags::enum_type f1, QItemSelectionModel::SelectionFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QFlags<QItemSelectionModel::SelectionFlags::enum_type> operator|(QItemSelectionModel::SelectionFlags::enum_type, QFlags<QItemSelectionModel::SelectionFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN19QItemSelectionModel13SelectionFlagE6QFlagsIS0_E_37(QItemSelectionModel::SelectionFlags::enum_type f1, QFlags<QItemSelectionModel::SelectionFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:167
// [4] QIncompatibleFlag operator|(QRegularExpression::PatternOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression13PatternOptionEi_38(QRegularExpression::PatternOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:167
// [4] QFlags<QRegularExpression::PatternOptions::enum_type> operator|(QRegularExpression::PatternOptions::enum_type, QRegularExpression::PatternOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression13PatternOptionES0__39(QRegularExpression::PatternOptions::enum_type f1, QRegularExpression::PatternOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:167
// [4] QFlags<QRegularExpression::PatternOptions::enum_type> operator|(QRegularExpression::PatternOptions::enum_type, QFlags<QRegularExpression::PatternOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression13PatternOptionE6QFlagsIS0_E_40(QRegularExpression::PatternOptions::enum_type f1, QFlags<QRegularExpression::PatternOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:168
// [4] QIncompatibleFlag operator|(QRegularExpression::MatchOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression11MatchOptionEi_41(QRegularExpression::MatchOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:168
// [4] QFlags<QRegularExpression::MatchOptions::enum_type> operator|(QRegularExpression::MatchOptions::enum_type, QRegularExpression::MatchOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression11MatchOptionES0__42(QRegularExpression::MatchOptions::enum_type f1, QRegularExpression::MatchOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:168
// [4] QFlags<QRegularExpression::MatchOptions::enum_type> operator|(QRegularExpression::MatchOptions::enum_type, QFlags<QRegularExpression::MatchOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN18QRegularExpression11MatchOptionE6QFlagsIS0_E_43(QRegularExpression::MatchOptions::enum_type f1, QFlags<QRegularExpression::MatchOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:109
// [4] QIncompatibleFlag operator|(QCommandLineOption::Flags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN18QCommandLineOption4FlagEi_44(QCommandLineOption::Flags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:109
// [4] QFlags<QCommandLineOption::Flags::enum_type> operator|(QCommandLineOption::Flags::enum_type, QCommandLineOption::Flags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN18QCommandLineOption4FlagES0__45(QCommandLineOption::Flags::enum_type f1, QCommandLineOption::Flags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:109
// [4] QFlags<QCommandLineOption::Flags::enum_type> operator|(QCommandLineOption::Flags::enum_type, QFlags<QCommandLineOption::Flags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN18QCommandLineOption4FlagE6QFlagsIS0_E_46(QCommandLineOption::Flags::enum_type f1, QFlags<QCommandLineOption::Flag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:364
// [4] QIncompatibleFlag operator|(QAbstractItemModel::CheckIndexOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN18QAbstractItemModel16CheckIndexOptionEi_47(QAbstractItemModel::CheckIndexOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:364
// [4] QFlags<QAbstractItemModel::CheckIndexOptions::enum_type> operator|(QAbstractItemModel::CheckIndexOptions::enum_type, QAbstractItemModel::CheckIndexOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN18QAbstractItemModel16CheckIndexOptionES0__48(QAbstractItemModel::CheckIndexOptions::enum_type f1, QAbstractItemModel::CheckIndexOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:364
// [4] QFlags<QAbstractItemModel::CheckIndexOptions::enum_type> operator|(QAbstractItemModel::CheckIndexOptions::enum_type, QFlags<QAbstractItemModel::CheckIndexOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN18QAbstractItemModel16CheckIndexOptionE6QFlagsIS0_E_49(QAbstractItemModel::CheckIndexOptions::enum_type f1, QFlags<QAbstractItemModel::CheckIndexOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QIncompatibleFlag operator|(QStandardPaths::LocateOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN14QStandardPaths12LocateOptionEi_50(QStandardPaths::LocateOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QFlags<QStandardPaths::LocateOptions::enum_type> operator|(QStandardPaths::LocateOptions::enum_type, QStandardPaths::LocateOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN14QStandardPaths12LocateOptionES0__51(QStandardPaths::LocateOptions::enum_type f1, QStandardPaths::LocateOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QFlags<QStandardPaths::LocateOptions::enum_type> operator|(QStandardPaths::LocateOptions::enum_type, QFlags<QStandardPaths::LocateOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN14QStandardPaths12LocateOptionE6QFlagsIS0_E_52(QStandardPaths::LocateOptions::enum_type f1, QFlags<QStandardPaths::LocateOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QIncompatibleFlag operator|(QDirIterator::IteratorFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN12QDirIterator12IteratorFlagEi_53(QDirIterator::IteratorFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QFlags<QDirIterator::IteratorFlags::enum_type> operator|(QDirIterator::IteratorFlags::enum_type, QDirIterator::IteratorFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN12QDirIterator12IteratorFlagES0__54(QDirIterator::IteratorFlags::enum_type f1, QDirIterator::IteratorFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QFlags<QDirIterator::IteratorFlags::enum_type> operator|(QDirIterator::IteratorFlags::enum_type, QFlags<QDirIterator::IteratorFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN12QDirIterator12IteratorFlagE6QFlagsIS0_E_55(QDirIterator::IteratorFlags::enum_type f1, QFlags<QDirIterator::IteratorFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QIncompatibleFlag operator|(QTextStream::NumberFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN11QTextStream10NumberFlagEi_56(QTextStream::NumberFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QFlags<QTextStream::NumberFlags::enum_type> operator|(QTextStream::NumberFlags::enum_type, QTextStream::NumberFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN11QTextStream10NumberFlagES0__57(QTextStream::NumberFlags::enum_type f1, QTextStream::NumberFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QFlags<QTextStream::NumberFlags::enum_type> operator|(QTextStream::NumberFlags::enum_type, QFlags<QTextStream::NumberFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN11QTextStream10NumberFlagE6QFlagsIS0_E_58(QTextStream::NumberFlags::enum_type f1, QFlags<QTextStream::NumberFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QIncompatibleFlag operator|(QFileDevice::Permissions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN11QFileDevice10PermissionEi_59(QFileDevice::Permissions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QFlags<QFileDevice::Permissions::enum_type> operator|(QFileDevice::Permissions::enum_type, QFileDevice::Permissions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN11QFileDevice10PermissionES0__60(QFileDevice::Permissions::enum_type f1, QFileDevice::Permissions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QFlags<QFileDevice::Permissions::enum_type> operator|(QFileDevice::Permissions::enum_type, QFlags<QFileDevice::Permissions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN11QFileDevice10PermissionE6QFlagsIS0_E_61(QFileDevice::Permissions::enum_type f1, QFlags<QFileDevice::Permission> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:136
// [4] QIncompatibleFlag operator|(QTextCodec::ConversionFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN10QTextCodec14ConversionFlagEi_62(QTextCodec::ConversionFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:136
// [4] QFlags<QTextCodec::ConversionFlags::enum_type> operator|(QTextCodec::ConversionFlags::enum_type, QTextCodec::ConversionFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN10QTextCodec14ConversionFlagES0__63(QTextCodec::ConversionFlags::enum_type f1, QTextCodec::ConversionFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:136
// [4] QFlags<QTextCodec::ConversionFlags::enum_type> operator|(QTextCodec::ConversionFlags::enum_type, QFlags<QTextCodec::ConversionFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN10QTextCodec14ConversionFlagE6QFlagsIS0_E_64(QTextCodec::ConversionFlags::enum_type f1, QFlags<QTextCodec::ConversionFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QIncompatibleFlag operator|(QEventLoop::ProcessEventsFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN10QEventLoop17ProcessEventsFlagEi_65(QEventLoop::ProcessEventsFlags::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QFlags<QEventLoop::ProcessEventsFlags::enum_type> operator|(QEventLoop::ProcessEventsFlags::enum_type, QEventLoop::ProcessEventsFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN10QEventLoop17ProcessEventsFlagES0__66(QEventLoop::ProcessEventsFlags::enum_type f1, QEventLoop::ProcessEventsFlags::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QFlags<QEventLoop::ProcessEventsFlags::enum_type> operator|(QEventLoop::ProcessEventsFlags::enum_type, QFlags<QEventLoop::ProcessEventsFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN10QEventLoop17ProcessEventsFlagE6QFlagsIS0_E_67(QEventLoop::ProcessEventsFlags::enum_type f1, QFlags<QEventLoop::ProcessEventsFlag> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:473
// [4] QIncompatibleFlag operator|(QByteArray::Base64Options::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN10QByteArray12Base64OptionEi_68(QByteArray::Base64Options::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:473
// [4] QFlags<QByteArray::Base64Options::enum_type> operator|(QByteArray::Base64Options::enum_type, QByteArray::Base64Options::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN10QByteArray12Base64OptionES0__69(QByteArray::Base64Options::enum_type f1, QByteArray::Base64Options::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:473
// [4] QFlags<QByteArray::Base64Options::enum_type> operator|(QByteArray::Base64Options::enum_type, QFlags<QByteArray::Base64Options::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN10QByteArray12Base64OptionE6QFlagsIS0_E_70(QByteArray::Base64Options::enum_type f1, QFlags<QByteArray::Base64Option> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QIncompatibleFlag operator|(QArrayData::AllocationOptions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN10QArrayData16AllocationOptionEi_71(QArrayData::AllocationOptions::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QFlags<QArrayData::AllocationOptions::enum_type> operator|(QArrayData::AllocationOptions::enum_type, QArrayData::AllocationOptions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN10QArrayData16AllocationOptionES0__72(QArrayData::AllocationOptions::enum_type f1, QArrayData::AllocationOptions::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QFlags<QArrayData::AllocationOptions::enum_type> operator|(QArrayData::AllocationOptions::enum_type, QFlags<QArrayData::AllocationOptions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN10QArrayData16AllocationOptionE6QFlagsIS0_E_73(QArrayData::AllocationOptions::enum_type f1, QFlags<QArrayData::AllocationOption> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:396
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOptions, QUrl::UrlFormattingOption)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_Zor6QFlagsIN4QUrl25ComponentFormattingOptionEENS0_19UrlFormattingOptionE_74(QFlags<QUrl::ComponentFormattingOption> f, QUrl::UrlFormattingOption i) {
  return (QUrl::FormattingOptions)operator|(f, i);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:402
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOptions, QUrl::FormattingOptions)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_Zor6QFlagsIN4QUrl25ComponentFormattingOptionEE12QUrlTwoFlagsINS0_19UrlFormattingOptionES1_E_75(QFlags<QUrl::ComponentFormattingOption> f, QUrl::FormattingOptions i) {
  return (QUrl::FormattingOptions)operator|(f, i);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:398
// [4] QUrl::FormattingOptions operator|(QUrl::FormattingOptions, QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
QUrl::FormattingOptions C_Zor12QUrlTwoFlagsIN4QUrl19UrlFormattingOptionENS0_25ComponentFormattingOptionEE6QFlagsIS2_E_76(QUrl::FormattingOptions i, QFlags<QUrl::ComponentFormattingOption> f) {
  return (QUrl::FormattingOptions)operator|(i, f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:388
// [4] QUrl::FormattingOptions & operator|=(QUrl::FormattingOptions &, QUrl::ComponentFormattingOptions)
extern "C" Q_DECL_EXPORT
void* C_ZoRR12QUrlTwoFlagsIN4QUrl19UrlFormattingOptionENS0_25ComponentFormattingOptionEE6QFlagsIS2_E(QUrl::FormattingOptions & i, QFlags<QUrl::ComponentFormattingOption> f) {
  auto& rv = operator|=(i, f);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:476
// [32] QMarginsF operator-(const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZngRK9QMarginsF(QMarginsF* margins) {
  auto rv = operator-(*margins);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:272
// [16] QMargins operator-(const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZngRK8QMargins_1(QMargins* margins) {
  auto rv = operator-(*margins);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:390
// [16] const QPointF operator-(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZngRK7QPointF_2(QPointF* p) {
  auto rv = operator-(*p);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:196
// [8] const QPoint operator-(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZngRK6QPoint_3(QPoint* p) {
  auto rv = operator-(*p);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:166
// [2] qfloat16 operator-(qfloat16)
extern "C" Q_DECL_EXPORT
void* C_Zng8qfloat16_4(qfloat16* a) {
  auto rv = operator-(*a);
return new qfloat16(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:243
// [1] bool operator!=(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Znei8qfloat16_1(int a, qfloat16* b) {
  return (bool)operator!=(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator!=(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Znef8qfloat16_2(float lhs, qfloat16* rhs) {
  return (bool)operator!=(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator!=(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Znee8qfloat16_3(long double lhs, qfloat16* rhs) {
  return (bool)operator!=(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator!=(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zned8qfloat16_4(double lhs, qfloat16* rhs) {
  return (bool)operator!=(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:380
// [1] bool operator!=(const QMarginsF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK9QMarginsFS1__5(QMarginsF* lhs, QMarginsF* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:595
// [1] bool operator!=(const QVariant &, const QVariantComparisonHelper &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK8QVariantRK24QVariantComparisonHelper_6(QVariant* v1, QVariantComparisonHelper* v2) {
  return (bool)operator!=(*v1, *v2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:144
// [1] bool operator!=(const QMargins &, const QMargins &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK8QMarginsS1__7(QMargins* m1, QMargins* m2) {
  return (bool)operator!=(*m1, *m2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1631
// [1] bool operator!=(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK7QStringRK10QStringRef_8(QString* lhs, QStringRef* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1203
// [1] bool operator!=(const QString &, QString::Null)
extern "C" Q_DECL_EXPORT
bool C_ZneRK7QStringNS_4NullE_9(QString* s, QString::Null arg1) {
  return (bool)operator!=(*s, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1693
// [1] bool operator!=(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZneRK7QString5QChar_10(QString* lhs, QChar* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:358
// [1] bool operator!=(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK7QPointFS1__11(QPointF* p1, QPointF* p2) {
  return (bool)operator!=(*p1, *p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:342
// [1] bool operator!=(const QSizeF &, const QSizeF &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK6QSizeFS1__12(QSizeF* s1, QSizeF* s2) {
  return (bool)operator!=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:865
// [1] bool operator!=(const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK6QRectFS1__13(QRectF* r1, QRectF* r2) {
  return (bool)operator!=(*r1, *r2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:166
// [1] bool operator!=(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK6QPointS1__14(QPoint* p1, QPoint* p2) {
  return (bool)operator!=(*p1, *p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:172
// [1] bool operator!=(const QSize &, const QSize &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK5QSizeS1__15(QSize* s1, QSize* s2) {
  return (bool)operator!=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:459
// [1] bool operator!=(const QRect &, const QRect &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK5QRectS1__16(QRect* r1, QRect* r2) {
  return (bool)operator!=(*r1, *r2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:317
// [1] bool operator!=(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK14QVersionNumberS1__17(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:110
// [1] bool operator!=(const QStorageInfo &, const QStorageInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK12QStorageInfoS1__18(QStorageInfo* first, QStorageInfo* second) {
  return (bool)operator!=(*first, *second);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:203
// [1] bool operator!=(const QMetaMethod &, const QMetaMethod &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK11QMetaMethodS1__19(QMetaMethod* m1, QMetaMethod* m2) {
  return (bool)operator!=(*m1, *m2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1619
// [1] bool operator!=(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QStringRefS1__20(QStringRef* s1, QStringRef* s2) {
  return (bool)operator!=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1638
// [1] bool operator!=(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QStringRefRK7QString_21(QStringRef* lhs, QString* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1778
// [1] bool operator!=(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QStringRefRK10QByteArray_22(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1712
// [1] bool operator!=(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QStringRef5QChar_23(QStringRef* lhs, QChar* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1674
// [1] bool operator!=(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QStringRef13QLatin1String_24(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:626
// [1] bool operator!=(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QByteArrayS1__25(QByteArray* a1, QByteArray* a2) {
  return (bool)operator!=(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1785
// [1] bool operator!=(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QByteArrayRK10QStringRef_26(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:628
// [1] bool operator!=(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZneRK10QByteArrayPKc_27(QByteArray* a1, const char * a2) {
  return (bool)operator!=(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1252
// [1] bool operator!=(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZnePKcRK7QString_28(const char * s1, QString* s2) {
  return (bool)operator!=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1807
// [1] bool operator!=(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZnePKcRK10QStringRef_29(const char * s1, QStringRef* s2) {
  return (bool)operator!=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:630
// [1] bool operator!=(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZnePKcRK10QByteArray_30(const char * a1, QByteArray* a2) {
  return (bool)operator!=(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1265
// [1] bool operator!=(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZnePKc13QLatin1String_31(const char * s1, QLatin1String* s2) {
  return (bool)operator!=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1199
// [1] bool operator!=(QString::Null, QString::Null)
extern "C" Q_DECL_EXPORT
bool C_ZneN7QString4NullES0__32(QString::Null arg0, QString::Null arg1) {
  return (bool)operator!=(arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1201
// [1] bool operator!=(QString::Null, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZneN7QString4NullERKS__33(QString::Null arg0, QString* s) {
  return (bool)operator!=(arg0, *s);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:619
// [1] bool operator!=(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZneDn5QChar_34(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator!=(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:243
// [1] bool operator!=(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zne8qfloat16i_35(qfloat16* a, int b) {
  return (bool)operator!=(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator!=(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zne8qfloat16f_36(qfloat16* lhs, float rhs) {
  return (bool)operator!=(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator!=(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zne8qfloat16e_37(qfloat16* lhs, long double rhs) {
  return (bool)operator!=(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator!=(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zne8qfloat16d_38(qfloat16* lhs, double rhs) {
  return (bool)operator!=(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:217
// [1] bool operator!=(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zne8qfloat16S__39(qfloat16* a, qfloat16* b) {
  return (bool)operator!=(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:96
// [1] bool operator!=(QCborTag, QCborKnownTags)
extern "C" Q_DECL_EXPORT
bool C_Zne8QCborTag14QCborKnownTags_40(QCborTag t, QCborKnownTags kt) {
  return (bool)operator!=(t, kt);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:603
// [1] bool operator!=(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zne5QCharS__41(QChar* c1, QChar* c2) {
  return (bool)operator!=(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1688
// [1] bool operator!=(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zne5QCharRK7QString_42(QChar* lhs, QString* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1707
// [1] bool operator!=(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zne5QCharRK10QStringRef_43(QChar* lhs, QStringRef* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:614
// [1] bool operator!=(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zne5QCharDn_44(QChar* lhs, std::nullptr_t arg1) {
  return (bool)operator!=(*lhs, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1726
// [1] bool operator!=(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zne5QChar13QLatin1String_45(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1754
// [1] bool operator!=(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zne5QChar11QStringView_46(QChar* lhs, QStringView* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:97
// [1] bool operator!=(QCborKnownTags, QCborTag)
extern "C" Q_DECL_EXPORT
bool C_Zne14QCborKnownTags8QCborTag_47(QCborKnownTags kt, QCborTag t) {
  return (bool)operator!=(kt, t);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1208
// [1] bool operator!=(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zne13QLatin1StringS__48(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator!=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1667
// [1] bool operator!=(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zne13QLatin1StringRK10QStringRef_49(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1731
// [1] bool operator!=(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zne13QLatin1String5QChar_50(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1769
// [1] bool operator!=(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zne13QLatin1String11QStringView_51(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1739
// [1] bool operator!=(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zne11QStringViewS__52(QStringView* lhs, QStringView* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1747
// [1] bool operator!=(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zne11QStringView5QChar_53(QStringView* lhs, QChar* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1762
// [1] bool operator!=(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zne11QStringView13QLatin1String_54(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator!=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:189
// [16] QMargins operator*(int, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZmliRK8QMargins(int factor, QMargins* margins) {
  auto rv = operator*(factor, *margins);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:190
// [8] const QPoint operator*(int, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZmliRK6QPoint_1(int factor, QPoint* p) {
  auto rv = operator*(factor, *p);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:204
// [8] double operator*(int, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zmli8qfloat16_2(int lhs, qfloat16* rhs) {
  return (double)operator*(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:184
// [8] const QPoint operator*(float, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZmlfRK6QPoint_3(float factor, QPoint* p) {
  auto rv = operator*(factor, *p);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator*(float, qfloat16)
extern "C" Q_DECL_EXPORT
float C_Zmlf8qfloat16_4(float lhs, qfloat16* rhs) {
  return (float)operator*(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator*(long double, qfloat16)
extern "C" Q_DECL_EXPORT
void C_Zmle8qfloat16_5(long double lhs, qfloat16* rhs) {
  auto rv = operator*(lhs, *rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:421
// [32] QMarginsF operator*(qreal, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK9QMarginsF_6(qreal lhs, QMarginsF* rhs) {
  auto rv = operator*(lhs, *rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:201
// [16] QMargins operator*(qreal, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK8QMargins_7(qreal factor, QMargins* margins) {
  auto rv = operator*(factor, *margins);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:380
// [16] const QPointF operator*(qreal, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK7QPointF_8(qreal c, QPointF* p) {
  auto rv = operator*(c, *p);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:354
// [16] const QSizeF operator*(qreal, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK6QSizeF_9(qreal c, QSizeF* s) {
  auto rv = operator*(c, *s);
return new QSizeF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:187
// [8] const QPoint operator*(double, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK6QPoint_10(double factor, QPoint* p) {
  auto rv = operator*(factor, *p);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:184
// [8] const QSize operator*(qreal, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZmldRK5QSize_11(qreal c, QSize* s) {
  auto rv = operator*(c, *s);
return new QSize(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator*(double, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zmld8qfloat16_12(double lhs, qfloat16* rhs) {
  return (double)operator*(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:415
// [32] QMarginsF operator*(const QMarginsF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK9QMarginsFd_13(QMarginsF* lhs, qreal rhs) {
  auto rv = operator*(*lhs, rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:183
// [16] QMargins operator*(const QMargins &, int)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK8QMarginsi_14(QMargins* margins, int factor) {
  auto rv = operator*(*margins, factor);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:195
// [16] QMargins operator*(const QMargins &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK8QMarginsd_15(QMargins* margins, qreal factor) {
  auto rv = operator*(*margins, factor);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:375
// [16] const QPointF operator*(const QPointF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK7QPointFd_16(QPointF* p, qreal c) {
  auto rv = operator*(*p, c);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:351
// [16] const QSizeF operator*(const QSizeF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK6QSizeFd_17(QSizeF* s, qreal c) {
  auto rv = operator*(*s, c);
return new QSizeF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:181
// [8] const QPoint operator*(const QPoint &, int)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK6QPointi_18(QPoint* p, int factor) {
  auto rv = operator*(*p, factor);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:175
// [8] const QPoint operator*(const QPoint &, float)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK6QPointf_19(QPoint* p, float factor) {
  auto rv = operator*(*p, factor);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:178
// [8] const QPoint operator*(const QPoint &, double)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK6QPointd_20(QPoint* p, double factor) {
  auto rv = operator*(*p, factor);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:181
// [8] const QSize operator*(const QSize &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmlRK5QSized_21(QSize* s, qreal c) {
  auto rv = operator*(*s, c);
return new QSize(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:204
// [8] double operator*(qfloat16, int)
extern "C" Q_DECL_EXPORT
double C_Zml8qfloat16i_22(qfloat16* lhs, int rhs) {
  return (double)operator*(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator*(qfloat16, float)
extern "C" Q_DECL_EXPORT
float C_Zml8qfloat16f_23(qfloat16* lhs, float rhs) {
  return (float)operator*(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator*(qfloat16, long double)
extern "C" Q_DECL_EXPORT
void C_Zml8qfloat16e_24(qfloat16* lhs, long double rhs) {
  auto rv = operator*(*lhs, rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator*(qfloat16, double)
extern "C" Q_DECL_EXPORT
double C_Zml8qfloat16d_25(qfloat16* lhs, double rhs) {
  return (double)operator*(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:175
// [2] qfloat16 operator*(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
void* C_Zml8qfloat16S__26(qfloat16* a, qfloat16* b) {
  auto rv = operator*(*a, *b);
return new qfloat16(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:203
// [8] double operator-(int, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zmii8qfloat16_5(int lhs, qfloat16* rhs) {
  return (double)operator-(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator-(float, qfloat16)
extern "C" Q_DECL_EXPORT
float C_Zmif8qfloat16_6(float lhs, qfloat16* rhs) {
  return (float)operator-(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator-(long double, qfloat16)
extern "C" Q_DECL_EXPORT
void C_Zmie8qfloat16_7(long double lhs, qfloat16* rhs) {
  auto rv = operator-(lhs, *rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator-(double, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zmid8qfloat16_8(double lhs, qfloat16* rhs) {
  return (double)operator-(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:409
// [32] QMarginsF operator-(const QMarginsF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK9QMarginsFd_9(QMarginsF* lhs, qreal rhs) {
  auto rv = operator-(*lhs, rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:391
// [32] QMarginsF operator-(const QMarginsF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK9QMarginsFS1__10(QMarginsF* lhs, QMarginsF* rhs) {
  auto rv = operator-(*lhs, *rhs);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:177
// [16] QMargins operator-(const QMargins &, int)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK8QMarginsi_11(QMargins* lhs, int rhs) {
  auto rv = operator-(*lhs, rhs);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:159
// [16] QMargins operator-(const QMargins &, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK8QMarginsS1__12(QMargins* m1, QMargins* m2) {
  auto rv = operator-(*m1, *m2);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:370
// [16] const QPointF operator-(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK7QPointFS1__13(QPointF* p1, QPointF* p2) {
  auto rv = operator-(*p1, *p2);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:348
// [16] const QSizeF operator-(const QSizeF &, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK6QSizeFS1__14(QSizeF* s1, QSizeF* s2) {
  auto rv = operator-(*s1, *s2);
return new QSizeF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:888
// [32] QRectF operator-(const QRectF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK6QRectFRK9QMarginsF_15(QRectF* lhs, QMarginsF* rhs) {
  auto rv = operator-(*lhs, *rhs);
return new QRectF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:172
// [8] const QPoint operator-(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK6QPointS1__16(QPoint* p1, QPoint* p2) {
  auto rv = operator-(*p1, *p2);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:178
// [8] const QSize operator-(const QSize &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK5QSizeS1__17(QSize* s1, QSize* s2) {
  auto rv = operator-(*s1, *s2);
return new QSize(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:476
// [16] QRect operator-(const QRect &, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZmiRK5QRectRK8QMargins_18(QRect* lhs, QMargins* rhs) {
  auto rv = operator-(*lhs, *rhs);
return new QRect(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:203
// [8] double operator-(qfloat16, int)
extern "C" Q_DECL_EXPORT
double C_Zmi8qfloat16i_19(qfloat16* lhs, int rhs) {
  return (double)operator-(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator-(qfloat16, float)
extern "C" Q_DECL_EXPORT
float C_Zmi8qfloat16f_20(qfloat16* lhs, float rhs) {
  return (float)operator-(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator-(qfloat16, long double)
extern "C" Q_DECL_EXPORT
void C_Zmi8qfloat16e_21(qfloat16* lhs, long double rhs) {
  auto rv = operator-(*lhs, rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator-(qfloat16, double)
extern "C" Q_DECL_EXPORT
double C_Zmi8qfloat16d_22(qfloat16* lhs, double rhs) {
  return (double)operator-(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:174
// [2] qfloat16 operator-(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
void* C_Zmi8qfloat16S__23(qfloat16* a, qfloat16* b) {
  auto rv = operator-(*a, *b);
return new qfloat16(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [2] qfloat16 & operator*=(qfloat16 &, float)
extern "C" Q_DECL_EXPORT
void* C_ZmLR8qfloat16f(qfloat16* lhs, float rhs) {
  auto& rv = operator*=(*lhs, rhs);
return &rv;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [2] qfloat16 & operator*=(qfloat16 &, long double)
extern "C" Q_DECL_EXPORT
void* C_ZmLR8qfloat16e_1(qfloat16* lhs, long double rhs) {
  auto& rv = operator*=(*lhs, rhs);
return &rv;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [2] qfloat16 & operator*=(qfloat16 &, double)
extern "C" Q_DECL_EXPORT
void* C_ZmLR8qfloat16d_2(qfloat16* lhs, double rhs) {
  auto& rv = operator*=(*lhs, rhs);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [2] qfloat16 & operator-=(qfloat16 &, float)
extern "C" Q_DECL_EXPORT
void* C_ZmIR8qfloat16f(qfloat16* lhs, float rhs) {
  auto& rv = operator-=(*lhs, rhs);
return &rv;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [2] qfloat16 & operator-=(qfloat16 &, long double)
extern "C" Q_DECL_EXPORT
void* C_ZmIR8qfloat16e_1(qfloat16* lhs, long double rhs) {
  auto& rv = operator-=(*lhs, rhs);
return &rv;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [2] qfloat16 & operator-=(qfloat16 &, double)
extern "C" Q_DECL_EXPORT
void* C_ZmIR8qfloat16d_2(qfloat16* lhs, double rhs) {
  auto& rv = operator-=(*lhs, rhs);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:239
// [1] bool operator<(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlti8qfloat16(int a, qfloat16* b) {
  return (bool)operator<(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator<(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zltf8qfloat16_1(float lhs, qfloat16* rhs) {
  return (bool)operator<(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator<(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlte8qfloat16_2(long double lhs, qfloat16* rhs) {
  return (bool)operator<(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator<(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zltd8qfloat16_3(double lhs, qfloat16* rhs) {
  return (bool)operator<(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1632
// [1] bool operator<(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK7QStringRK10QStringRef_4(QString* lhs, QStringRef* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1694
// [1] bool operator<(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZltRK7QString5QChar_5(QString* lhs, QChar* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:78
// [1] bool operator<(const QCollatorSortKey &, const QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK16QCollatorSortKeyS1__6(QCollatorSortKey* lhs, QCollatorSortKey* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:308
// [1] bool operator<(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK14QVersionNumberS1__7(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1621
// [1] bool operator<(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QStringRefS1__8(QStringRef* s1, QStringRef* s2) {
  return (bool)operator<(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1639
// [1] bool operator<(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QStringRefRK7QString_9(QStringRef* lhs, QString* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1779
// [1] bool operator<(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QStringRefRK10QByteArray_10(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1713
// [1] bool operator<(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QStringRef5QChar_11(QStringRef* lhs, QChar* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1675
// [1] bool operator<(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QStringRef13QLatin1String_12(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:632
// [1] bool operator<(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QByteArrayS1__13(QByteArray* a1, QByteArray* a2) {
  return (bool)operator<(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1786
// [1] bool operator<(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QByteArrayRK10QStringRef_14(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:634
// [1] bool operator<(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZltRK10QByteArrayPKc_15(QByteArray* a1, const char * a2) {
  return (bool)operator<(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1254
// [1] bool operator<(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZltPKcRK7QString_16(const char * s1, QString* s2) {
  return (bool)operator<(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1809
// [1] bool operator<(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZltPKcRK10QStringRef_17(const char * s1, QStringRef* s2) {
  return (bool)operator<(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:636
// [1] bool operator<(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZltPKcRK10QByteArray_18(const char * a1, QByteArray* a2) {
  return (bool)operator<(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1267
// [1] bool operator<(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZltPKc13QLatin1String_19(const char * s1, QLatin1String* s2) {
  return (bool)operator<(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:612
// [1] bool operator<(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZltDn5QChar_20(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator<(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:239
// [1] bool operator<(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zlt8qfloat16i_21(qfloat16* a, int b) {
  return (bool)operator<(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator<(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zlt8qfloat16f_22(qfloat16* lhs, float rhs) {
  return (bool)operator<(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator<(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zlt8qfloat16e_23(qfloat16* lhs, long double rhs) {
  return (bool)operator<(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator<(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zlt8qfloat16d_24(qfloat16* lhs, double rhs) {
  return (bool)operator<(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:213
// [1] bool operator<(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlt8qfloat16S__25(qfloat16* a, qfloat16* b) {
  return (bool)operator<(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:601
// [1] bool operator<(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QCharS__26(QChar* c1, QChar* c2) {
  return (bool)operator<(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1683
// [1] bool operator<(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QCharRK7QString_27(QChar* lhs, QString* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1702
// [1] bool operator<(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QCharRK10QStringRef_28(QChar* lhs, QStringRef* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:610
// [1] bool operator<(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QCharDn_29(QChar* arg0, std::nullptr_t arg1) {
  return (bool)operator<(*arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1721
// [1] bool operator<(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QChar13QLatin1String_30(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1755
// [1] bool operator<(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zlt5QChar11QStringView_31(QChar* lhs, QStringView* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1210
// [1] bool operator<(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zlt13QLatin1StringS__32(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator<(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1668
// [1] bool operator<(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zlt13QLatin1StringRK10QStringRef_33(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1732
// [1] bool operator<(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zlt13QLatin1String5QChar_34(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1770
// [1] bool operator<(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zlt13QLatin1String11QStringView_35(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1740
// [1] bool operator<(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zlt11QStringViewS__36(QStringView* lhs, QStringView* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1748
// [1] bool operator<(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zlt11QStringView5QChar_37(QStringView* lhs, QChar* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1763
// [1] bool operator<(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zlt11QStringView13QLatin1String_38(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator<(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:230
// [16] QTextStream & operator<<(QTextStream &, QTextStreamFunction)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QTextStreamPFS0_S0_E(QTextStream* s, QTextStreamFunction f) {
  auto& rv = operator<<(*s, f);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:233
// [16] QTextStream & operator<<(QTextStream &, QTextStreamManipulator)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QTextStream22QTextStreamManipulator_1(QTextStream* s, QTextStreamManipulator* m) {
  auto& rv = operator<<(*s, *m);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:180
// [32] QDataStream & operator<<(QDataStream &, const QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK9QTimeZone_2(QDataStream* ds, QTimeZone* tz) {
  auto& rv = operator<<(*ds, *tz);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:327
// [32] QDataStream & operator<<(QDataStream &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK9QMarginsF_3(QDataStream* arg0, QMarginsF* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:400
// [32] QDataStream & operator<<(QDataStream &, const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK9QDateTime_4(QDataStream* arg0, QDateTime* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:167
// [32] QDataStream & operator<<(QDataStream &, const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK9QBitArray_5(QDataStream* arg0, QBitArray* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:563
// [32] QDataStream & operator<<(QDataStream &, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK8QVariant_6(QDataStream* s, QVariant* p) {
  auto& rv = operator<<(*s, *p);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:94
// [32] QDataStream & operator<<(QDataStream &, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK8QMargins_7(QDataStream* arg0, QMargins* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1415
// [32] QDataStream & operator<<(QDataStream &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK7QString_8(QDataStream* arg0, QString* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:124
// [32] QDataStream & operator<<(QDataStream &, const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK7QRegExp_9(QDataStream* out_, QRegExp* regExp) {
  auto& rv = operator<<(*out_, *regExp);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:277
// [32] QDataStream & operator<<(QDataStream &, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK7QPointF_10(QDataStream* arg0, QPointF* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1122
// [32] QDataStream & operator<<(QDataStream &, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK7QLocale_11(QDataStream* arg0, QLocale* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:276
// [32] QDataStream & operator<<(QDataStream &, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK6QSizeF_12(QDataStream* arg0, QSizeF* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:636
// [32] QDataStream & operator<<(QDataStream &, const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK6QRectF_13(QDataStream* arg0, QRectF* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:112
// [32] QDataStream & operator<<(QDataStream &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK6QPoint_14(QDataStream* arg0, QPoint* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:428
// [32] QDataStream & operator<<(QDataStream &, const QLineF &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK6QLineF_15(QDataStream* arg0, QLineF* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:238
// [32] QDataStream & operator<<(QDataStream &, const QUuid &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QUuid_16(QDataStream* arg0, QUuid* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:398
// [32] QDataStream & operator<<(QDataStream &, const QTime &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QTime_17(QDataStream* arg0, QTime* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:108
// [32] QDataStream & operator<<(QDataStream &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QSize_18(QDataStream* arg0, QSize* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:176
// [32] QDataStream & operator<<(QDataStream &, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QRect_19(QDataStream* arg0, QRect* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:207
// [32] QDataStream & operator<<(QDataStream &, const QLine &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QLine_20(QDataStream* arg0, QLine* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:396
// [32] QDataStream & operator<<(QDataStream &, const QDate &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK5QDate_21(QDataStream* arg0, QDate* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:410
// [32] QDataStream & operator<<(QDataStream &, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK4QUrl_22(QDataStream* arg0, QUrl* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:171
// [32] QDataStream & operator<<(QDataStream &, const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK18QRegularExpression_23(QDataStream* out_, QRegularExpression* re) {
  auto& rv = operator<<(*out_, *re);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:57
// [32] QDataStream & operator<<(QDataStream &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK14QVersionNumber_24(QDataStream* out_, QVersionNumber* version) {
  auto& rv = operator<<(*out_, *version);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:135
// [32] QDataStream & operator<<(QDataStream &, const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK12QEasingCurve_25(QDataStream* arg0, QEasingCurve* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:695
// [32] QDataStream & operator<<(QDataStream &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK10QByteArray_26(QDataStream* arg0, QByteArray* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:565
// [32] QDataStream & operator<<(QDataStream &, const QVariant::Type)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamN8QVariant4TypeE_27(QDataStream* s, const QVariant::Type p) {
  auto& rv = operator<<(*s, p);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:625
// [32] QDataStream & operator<<(QDataStream &, QChar)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStream5QChar_28(QDataStream* arg0, QChar* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:185
// [8] QDebug operator<<(QDebug, const QTimeZone &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QTimeZone_29(QDebug* dbg, QTimeZone* tz) {
  auto rv = operator<<(*dbg, *tz);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:133
// [8] QDebug operator<<(QDebug, const QMimeType &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QMimeType_30(QDebug* debug, QMimeType* mime) {
  auto rv = operator<<(*debug, *mime);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:487
// [8] QDebug operator<<(QDebug, const QMarginsF &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QMarginsF_31(QDebug* arg0, QMarginsF* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:162
// [8] QDebug operator<<(QDebug, const QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QFileInfo_32(QDebug* arg0, QFileInfo* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:407
// [8] QDebug operator<<(QDebug, const QDateTime &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QDateTime_33(QDebug* arg0, QDateTime* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:172
// [8] QDebug operator<<(QDebug, const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QBitArray_34(QDebug* arg0, QBitArray* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:883
// [8] QDebug operator<<(QDebug, const QVariant &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK8QVariant_35(QDebug* arg0, QVariant* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:278
// [8] QDebug operator<<(QDebug, const QMargins &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK8QMargins_36(QDebug* arg0, QMargins* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:352
// [8] QDebug operator<<(QDebug, const QCborMap &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK8QCborMap_37(QDebug* arg0, QCborMap* m) {
  auto rv = operator<<(*arg0, *m);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:129
// [8] QDebug operator<<(QDebug, const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK7QRegExp_38(QDebug* arg0, QRegExp* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:413
// [8] QDebug operator<<(QDebug, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK7QPointF_39(QDebug* d, QPointF* p) {
  auto rv = operator<<(*d, *p);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1127
// [8] QDebug operator<<(QDebug, const QLocale &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK7QLocale_40(QDebug* arg0, QLocale* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:386
// [8] QDebug operator<<(QDebug, const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK6QSizeF_41(QDebug* arg0, QSizeF* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:919
// [8] QDebug operator<<(QDebug, const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK6QRectF_42(QDebug* arg0, QRectF* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:212
// [8] QDebug operator<<(QDebug, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK6QPoint_43(QDebug* arg0, QPoint* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:424
// [8] QDebug operator<<(QDebug, const QLineF &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK6QLineF_44(QDebug* d, QLineF* p) {
  auto rv = operator<<(*d, *p);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:243
// [8] QDebug operator<<(QDebug, const QUuid &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QUuid_45(QDebug* arg0, QUuid* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:406
// [8] QDebug operator<<(QDebug, const QTime &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QTime_46(QDebug* arg0, QTime* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:211
// [8] QDebug operator<<(QDebug, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QSize_47(QDebug* arg0, QSize* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:507
// [8] QDebug operator<<(QDebug, const QRect &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QRect_48(QDebug* arg0, QRect* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:203
// [8] QDebug operator<<(QDebug, const QLine &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QLine_49(QDebug* d, QLine* p) {
  auto rv = operator<<(*d, *p);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:405
// [8] QDebug operator<<(QDebug, const QDate &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK5QDate_50(QDebug* arg0, QDate* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:415
// [8] QDebug operator<<(QDebug, const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK4QUrl_51(QDebug* arg0, QUrl* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:240
// [8] QDebug operator<<(QDebug, const QDir &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK4QDir_52(QDebug* debug, QDir* dir) {
  auto rv = operator<<(*debug, *dir);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:248
// [8] QDebug operator<<(QDebug, const QRegularExpressionMatch &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK23QRegularExpressionMatch_53(QDebug* debug, QRegularExpressionMatch* match_) {
  auto rv = operator<<(*debug, *match_);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qoperatingsystemversion.h:153
// [8] QDebug operator<<(QDebug, const QOperatingSystemVersion &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK23QOperatingSystemVersion_54(QDebug* debug, QOperatingSystemVersion* ov) {
  auto rv = operator<<(*debug, *ov);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:158
// [8] QDebug operator<<(QDebug, const QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK21QPersistentModelIndex_55(QDebug* arg0, QPersistentModelIndex* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:268
// [8] QDebug operator<<(QDebug, const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK19QItemSelectionRange_56(QDebug* arg0, QItemSelectionRange* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:176
// [8] QDebug operator<<(QDebug, const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK18QRegularExpression_57(QDebug* debug, QRegularExpression* re) {
  auto rv = operator<<(*debug, *re);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:299
// [8] QDebug operator<<(QDebug, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK14QVersionNumber_58(QDebug* arg0, QVersionNumber* version) {
  auto rv = operator<<(*arg0, *version);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:172
// [8] QDebug operator<<(QDebug, const QJsonDocument &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK13QJsonDocument_59(QDebug* arg0, QJsonDocument* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:121
// [8] QDebug operator<<(QDebug, const QStorageInfo &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK12QStorageInfo_60(QDebug* debug, QStorageInfo* arg1) {
  auto rv = operator<<(*debug, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:131
// [8] QDebug operator<<(QDebug, const QEasingCurve &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK12QEasingCurve_61(QDebug* debug, QEasingCurve* item) {
  auto rv = operator<<(*debug, *item);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:100
// [8] QDebug operator<<(QDebug, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK11QModelIndex_62(QDebug* arg0, QModelIndex* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:268
// [8] QDebug operator<<(QDebug, const QJsonObject &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK11QJsonObject_63(QDebug* arg0, QJsonObject* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:253
// [8] QDebug operator<<(QDebug, const QJsonValue &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK10QJsonValue_64(QDebug* arg0, QJsonValue* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:271
// [8] QDebug operator<<(QDebug, const QJsonArray &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK10QJsonArray_65(QDebug* arg0, QJsonArray* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:457
// [8] QDebug operator<<(QDebug, const QCborValue &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK10QCborValue_66(QDebug* arg0, QCborValue* v) {
  auto rv = operator<<(*arg0, *v);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:298
// [8] QDebug operator<<(QDebug, const QCborArray &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK10QCborArray_67(QDebug* arg0, QCborArray* a) {
  auto rv = operator<<(*arg0, *a);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:531
// [8] QDebug operator<<(QDebug, const QObject *)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugPK7QObject_68(QDebug* arg0, const QObject * arg1) {
  auto rv = operator<<(*arg0, arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:884
// [8] QDebug operator<<(QDebug, const QVariant::Type)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugN8QVariant4TypeE_69(QDebug* arg0, const QVariant::Type arg1) {
  auto rv = operator<<(*arg0, arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:133
// [8] QDebug operator<<(QDebug, QCborTag)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug8QCborTag_70(QDebug* arg0, QCborTag tg) {
  auto rv = operator<<(*arg0, tg);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:189
// [8] QDebug operator<<(QDebug, QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug6QFlagsIN9QIODevice12OpenModeFlagEE_71(QDebug* debug, QFlags<QIODevice::OpenModeFlag> modes) {
  auto rv = operator<<(*debug, modes);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:239
// [8] QDebug operator<<(QDebug, QDir::Filters)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug6QFlagsIN4QDir6FilterEE_72(QDebug* debug, QFlags<QDir::Filter> filters) {
  auto rv = operator<<(*debug, filters);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:177
// [8] QDebug operator<<(QDebug, QRegularExpression::PatternOptions)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug6QFlagsIN18QRegularExpression13PatternOptionEE_73(QDebug* debug, QFlags<QRegularExpression::PatternOption> patternOptions) {
  auto rv = operator<<(*debug, patternOptions);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:131
// [8] QDebug operator<<(QDebug, QCborSimpleType)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug15QCborSimpleType_74(QDebug* arg0, QCborSimpleType st) {
  auto rv = operator<<(*arg0, st);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:132
// [8] QDebug operator<<(QDebug, QCborKnownTags)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebug14QCborKnownTags_75(QDebug* arg0, QCborKnownTags tg) {
  auto rv = operator<<(*arg0, tg);
return new QDebug(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:241
// [1] bool operator<=(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlei8qfloat16(int a, qfloat16* b) {
  return (bool)operator<=(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator<=(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlef8qfloat16_1(float lhs, qfloat16* rhs) {
  return (bool)operator<=(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator<=(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zlee8qfloat16_2(long double lhs, qfloat16* rhs) {
  return (bool)operator<=(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator<=(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zled8qfloat16_3(double lhs, qfloat16* rhs) {
  return (bool)operator<=(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1634
// [1] bool operator<=(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK7QStringRK10QStringRef_4(QString* lhs, QStringRef* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1696
// [1] bool operator<=(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZleRK7QString5QChar_5(QString* lhs, QChar* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:248
// [1] bool operator<=(const QUuid &, const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK5QUuidS1__6(QUuid* lhs, QUuid* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:311
// [1] bool operator<=(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK14QVersionNumberS1__7(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1624
// [1] bool operator<=(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QStringRefS1__8(QStringRef* s1, QStringRef* s2) {
  return (bool)operator<=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1641
// [1] bool operator<=(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QStringRefRK7QString_9(QStringRef* lhs, QString* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1781
// [1] bool operator<=(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QStringRefRK10QByteArray_10(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1715
// [1] bool operator<=(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QStringRef5QChar_11(QStringRef* lhs, QChar* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1677
// [1] bool operator<=(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QStringRef13QLatin1String_12(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:638
// [1] bool operator<=(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QByteArrayS1__13(QByteArray* a1, QByteArray* a2) {
  return (bool)operator<=(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1788
// [1] bool operator<=(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QByteArrayRK10QStringRef_14(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:640
// [1] bool operator<=(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZleRK10QByteArrayPKc_15(QByteArray* a1, const char * a2) {
  return (bool)operator<=(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1258
// [1] bool operator<=(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZlePKcRK7QString_16(const char * s1, QString* s2) {
  return (bool)operator<=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1811
// [1] bool operator<=(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZlePKcRK10QStringRef_17(const char * s1, QStringRef* s2) {
  return (bool)operator<=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:642
// [1] bool operator<=(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZlePKcRK10QByteArray_18(const char * a1, QByteArray* a2) {
  return (bool)operator<=(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1271
// [1] bool operator<=(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZlePKc13QLatin1String_19(const char * s1, QLatin1String* s2) {
  return (bool)operator<=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:622
// [1] bool operator<=(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZleDn5QChar_20(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator<=(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:241
// [1] bool operator<=(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zle8qfloat16i_21(qfloat16* a, int b) {
  return (bool)operator<=(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator<=(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zle8qfloat16f_22(qfloat16* lhs, float rhs) {
  return (bool)operator<=(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator<=(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zle8qfloat16e_23(qfloat16* lhs, long double rhs) {
  return (bool)operator<=(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator<=(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zle8qfloat16d_24(qfloat16* lhs, double rhs) {
  return (bool)operator<=(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:215
// [1] bool operator<=(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zle8qfloat16S__25(qfloat16* a, qfloat16* b) {
  return (bool)operator<=(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:606
// [1] bool operator<=(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zle5QCharS__26(QChar* c1, QChar* c2) {
  return (bool)operator<=(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1689
// [1] bool operator<=(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zle5QCharRK7QString_27(QChar* lhs, QString* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1708
// [1] bool operator<=(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zle5QCharRK10QStringRef_28(QChar* lhs, QStringRef* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:617
// [1] bool operator<=(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zle5QCharDn_29(QChar* lhs, std::nullptr_t arg1) {
  return (bool)operator<=(*lhs, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1727
// [1] bool operator<=(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zle5QChar13QLatin1String_30(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1756
// [1] bool operator<=(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zle5QChar11QStringView_31(QChar* lhs, QStringView* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1218
// [1] bool operator<=(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zle13QLatin1StringS__32(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator<=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1670
// [1] bool operator<=(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zle13QLatin1StringRK10QStringRef_33(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1734
// [1] bool operator<=(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zle13QLatin1String5QChar_34(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1771
// [1] bool operator<=(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zle13QLatin1String11QStringView_35(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1741
// [1] bool operator<=(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zle11QStringViewS__36(QStringView* lhs, QStringView* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1749
// [1] bool operator<=(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zle11QStringView5QChar_37(QStringView* lhs, QChar* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1764
// [1] bool operator<=(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zle11QStringView13QLatin1String_38(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator<=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:238
// [1] bool operator>(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgti8qfloat16(int a, qfloat16* b) {
  return (bool)operator>(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator>(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgtf8qfloat16_1(float lhs, qfloat16* rhs) {
  return (bool)operator>(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator>(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgte8qfloat16_2(long double lhs, qfloat16* rhs) {
  return (bool)operator>(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator>(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgtd8qfloat16_3(double lhs, qfloat16* rhs) {
  return (bool)operator>(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1633
// [1] bool operator>(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK7QStringRK10QStringRef_4(QString* lhs, QStringRef* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1695
// [1] bool operator>(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK7QString5QChar_5(QString* lhs, QChar* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:302
// [1] bool operator>(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK14QVersionNumberS1__6(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1622
// [1] bool operator>(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QStringRefS1__7(QStringRef* s1, QStringRef* s2) {
  return (bool)operator>(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1640
// [1] bool operator>(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QStringRefRK7QString_8(QStringRef* lhs, QString* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1780
// [1] bool operator>(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QStringRefRK10QByteArray_9(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1714
// [1] bool operator>(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QStringRef5QChar_10(QStringRef* lhs, QChar* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1676
// [1] bool operator>(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QStringRef13QLatin1String_11(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:644
// [1] bool operator>(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QByteArrayS1__12(QByteArray* a1, QByteArray* a2) {
  return (bool)operator>(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1787
// [1] bool operator>(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QByteArrayRK10QStringRef_13(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:646
// [1] bool operator>(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZgtRK10QByteArrayPKc_14(QByteArray* a1, const char * a2) {
  return (bool)operator>(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1256
// [1] bool operator>(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZgtPKcRK7QString_15(const char * s1, QString* s2) {
  return (bool)operator>(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1813
// [1] bool operator>(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgtPKcRK10QStringRef_16(const char * s1, QStringRef* s2) {
  return (bool)operator>(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:648
// [1] bool operator>(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgtPKcRK10QByteArray_17(const char * a1, QByteArray* a2) {
  return (bool)operator>(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1269
// [1] bool operator>(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZgtPKc13QLatin1String_18(const char * s1, QLatin1String* s2) {
  return (bool)operator>(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:621
// [1] bool operator>(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgtDn5QChar_19(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator>(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:238
// [1] bool operator>(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zgt8qfloat16i_20(qfloat16* a, int b) {
  return (bool)operator>(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator>(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zgt8qfloat16f_21(qfloat16* lhs, float rhs) {
  return (bool)operator>(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator>(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zgt8qfloat16e_22(qfloat16* lhs, long double rhs) {
  return (bool)operator>(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator>(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zgt8qfloat16d_23(qfloat16* lhs, double rhs) {
  return (bool)operator>(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:212
// [1] bool operator>(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgt8qfloat16S__24(qfloat16* a, qfloat16* b) {
  return (bool)operator>(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:605
// [1] bool operator>(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QCharS__25(QChar* c1, QChar* c2) {
  return (bool)operator>(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1685
// [1] bool operator>(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QCharRK7QString_26(QChar* lhs, QString* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1704
// [1] bool operator>(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QCharRK10QStringRef_27(QChar* lhs, QStringRef* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:616
// [1] bool operator>(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QCharDn_28(QChar* lhs, std::nullptr_t arg1) {
  return (bool)operator>(*lhs, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1723
// [1] bool operator>(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QChar13QLatin1String_29(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1757
// [1] bool operator>(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zgt5QChar11QStringView_30(QChar* lhs, QStringView* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1216
// [1] bool operator>(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zgt13QLatin1StringS__31(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator>(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1669
// [1] bool operator>(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zgt13QLatin1StringRK10QStringRef_32(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1733
// [1] bool operator>(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zgt13QLatin1String5QChar_33(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1772
// [1] bool operator>(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zgt13QLatin1String11QStringView_34(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1742
// [1] bool operator>(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zgt11QStringViewS__35(QStringView* lhs, QStringView* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1750
// [1] bool operator>(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zgt11QStringView5QChar_36(QStringView* lhs, QChar* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1765
// [1] bool operator>(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zgt11QStringView13QLatin1String_37(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator>(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:240
// [1] bool operator>=(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgei8qfloat16(int a, qfloat16* b) {
  return (bool)operator>=(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator>=(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgef8qfloat16_1(float lhs, qfloat16* rhs) {
  return (bool)operator>=(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator>=(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zgee8qfloat16_2(long double lhs, qfloat16* rhs) {
  return (bool)operator>=(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator>=(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zged8qfloat16_3(double lhs, qfloat16* rhs) {
  return (bool)operator>=(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1635
// [1] bool operator>=(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK7QStringRK10QStringRef_4(QString* lhs, QStringRef* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1697
// [1] bool operator>=(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK7QString5QChar_5(QString* lhs, QChar* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:250
// [1] bool operator>=(const QUuid &, const QUuid &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK5QUuidS1__6(QUuid* lhs, QUuid* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:305
// [1] bool operator>=(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK14QVersionNumberS1__7(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1626
// [1] bool operator>=(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QStringRefS1__8(QStringRef* s1, QStringRef* s2) {
  return (bool)operator>=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1642
// [1] bool operator>=(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QStringRefRK7QString_9(QStringRef* lhs, QString* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1782
// [1] bool operator>=(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QStringRefRK10QByteArray_10(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1716
// [1] bool operator>=(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QStringRef5QChar_11(QStringRef* lhs, QChar* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1678
// [1] bool operator>=(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QStringRef13QLatin1String_12(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:650
// [1] bool operator>=(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QByteArrayS1__13(QByteArray* a1, QByteArray* a2) {
  return (bool)operator>=(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1789
// [1] bool operator>=(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QByteArrayRK10QStringRef_14(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:652
// [1] bool operator>=(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZgeRK10QByteArrayPKc_15(QByteArray* a1, const char * a2) {
  return (bool)operator>=(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1260
// [1] bool operator>=(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZgePKcRK7QString_16(const char * s1, QString* s2) {
  return (bool)operator>=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1815
// [1] bool operator>=(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZgePKcRK10QStringRef_17(const char * s1, QStringRef* s2) {
  return (bool)operator>=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:654
// [1] bool operator>=(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZgePKcRK10QByteArray_18(const char * a1, QByteArray* a2) {
  return (bool)operator>=(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1273
// [1] bool operator>=(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZgePKc13QLatin1String_19(const char * s1, QLatin1String* s2) {
  return (bool)operator>=(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:620
// [1] bool operator>=(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZgeDn5QChar_20(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator>=(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:240
// [1] bool operator>=(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zge8qfloat16i_21(qfloat16* a, int b) {
  return (bool)operator>=(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator>=(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zge8qfloat16f_22(qfloat16* lhs, float rhs) {
  return (bool)operator>=(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator>=(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zge8qfloat16e_23(qfloat16* lhs, long double rhs) {
  return (bool)operator>=(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator>=(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zge8qfloat16d_24(qfloat16* lhs, double rhs) {
  return (bool)operator>=(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:214
// [1] bool operator>=(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zge8qfloat16S__25(qfloat16* a, qfloat16* b) {
  return (bool)operator>=(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:604
// [1] bool operator>=(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zge5QCharS__26(QChar* c1, QChar* c2) {
  return (bool)operator>=(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1690
// [1] bool operator>=(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zge5QCharRK7QString_27(QChar* lhs, QString* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1709
// [1] bool operator>=(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zge5QCharRK10QStringRef_28(QChar* lhs, QStringRef* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:615
// [1] bool operator>=(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zge5QCharDn_29(QChar* lhs, std::nullptr_t arg1) {
  return (bool)operator>=(*lhs, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1728
// [1] bool operator>=(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zge5QChar13QLatin1String_30(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1758
// [1] bool operator>=(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zge5QChar11QStringView_31(QChar* lhs, QStringView* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1220
// [1] bool operator>=(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zge13QLatin1StringS__32(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator>=(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1671
// [1] bool operator>=(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zge13QLatin1StringRK10QStringRef_33(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1735
// [1] bool operator>=(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zge13QLatin1String5QChar_34(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1773
// [1] bool operator>=(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zge13QLatin1String11QStringView_35(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1743
// [1] bool operator>=(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zge11QStringViewS__36(QStringView* lhs, QStringView* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1751
// [1] bool operator>=(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zge11QStringView5QChar_37(QStringView* lhs, QChar* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1766
// [1] bool operator>=(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zge11QStringView13QLatin1String_38(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator>=(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:242
// [1] bool operator==(int, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zeqi8qfloat16_1(int a, qfloat16* b) {
  return (bool)operator==(a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator==(float, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zeqf8qfloat16_2(float lhs, qfloat16* rhs) {
  return (bool)operator==(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator==(long double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zeqe8qfloat16_3(long double lhs, qfloat16* rhs) {
  return (bool)operator==(lhs, *rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator==(double, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zeqd8qfloat16_4(double lhs, qfloat16* rhs) {
  return (bool)operator==(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:372
// [1] bool operator==(const QMarginsF &, const QMarginsF &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK9QMarginsFS1__5(QMarginsF* lhs, QMarginsF* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:590
// [1] bool operator==(const QVariant &, const QVariantComparisonHelper &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK8QVariantRK24QVariantComparisonHelper_6(QVariant* v1, QVariantComparisonHelper* v2) {
  return (bool)operator==(*v1, *v2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:135
// [1] bool operator==(const QMargins &, const QMargins &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK8QMarginsS1__7(QMargins* m1, QMargins* m2) {
  return (bool)operator==(*m1, *m2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1630
// [1] bool operator==(const QString &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK7QStringRK10QStringRef_8(QString* lhs, QStringRef* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1198
// [1] bool operator==(const QString &, QString::Null)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK7QStringNS_4NullE_9(QString* s, QString::Null arg1) {
  return (bool)operator==(*s, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1692
// [1] bool operator==(const QString &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK7QString5QChar_10(QString* lhs, QChar* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:352
// [1] bool operator==(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK7QPointFS1__11(QPointF* p1, QPointF* p2) {
  return (bool)operator==(*p1, *p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:339
// [1] bool operator==(const QSizeF &, const QSizeF &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK6QSizeFS1__12(QSizeF* s1, QSizeF* s2) {
  return (bool)operator==(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:859
// [1] bool operator==(const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK6QRectFS1__13(QRectF* r1, QRectF* r2) {
  return (bool)operator==(*r1, *r2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:163
// [1] bool operator==(const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK6QPointS1__14(QPoint* p1, QPoint* p2) {
  return (bool)operator==(*p1, *p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:169
// [1] bool operator==(const QSize &, const QSize &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK5QSizeS1__15(QSize* s1, QSize* s2) {
  return (bool)operator==(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:454
// [1] bool operator==(const QRect &, const QRect &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK5QRectS1__16(QRect* r1, QRect* r2) {
  return (bool)operator==(*r1, *r2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:141
// [1] bool operator==(const QHashDummyValue &, const QHashDummyValue &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK15QHashDummyValueS1__17(QHashDummyValue* arg0, QHashDummyValue* arg1) {
  return (bool)operator==(*arg0, *arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:314
// [1] bool operator==(const QVersionNumber &, const QVersionNumber &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK14QVersionNumberS1__18(QVersionNumber* lhs, QVersionNumber* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:103
// [1] bool operator==(const QStorageInfo &, const QStorageInfo &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK12QStorageInfoS1__19(QStorageInfo* first, QStorageInfo* second) {
  return (bool)operator==(*first, *second);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:201
// [1] bool operator==(const QMetaMethod &, const QMetaMethod &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK11QMetaMethodS1__20(QMetaMethod* m1, QMetaMethod* m2) {
  return (bool)operator==(*m1, *m2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1618
// [1] bool operator==(const QStringRef &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QStringRefS1__21(QStringRef* s1, QStringRef* s2) {
  return (bool)operator==(*s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1637
// [1] bool operator==(const QStringRef &, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QStringRefRK7QString_22(QStringRef* lhs, QString* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1777
// [1] bool operator==(const QStringRef &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QStringRefRK10QByteArray_23(QStringRef* lhs, QByteArray* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1711
// [1] bool operator==(const QStringRef &, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QStringRef5QChar_24(QStringRef* lhs, QChar* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1673
// [1] bool operator==(const QStringRef &, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QStringRef13QLatin1String_25(QStringRef* lhs, QLatin1String* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:620
// [1] bool operator==(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QByteArrayS1__26(QByteArray* a1, QByteArray* a2) {
  return (bool)operator==(*a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1784
// [1] bool operator==(const QByteArray &, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QByteArrayRK10QStringRef_27(QByteArray* lhs, QStringRef* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:622
// [1] bool operator==(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK10QByteArrayPKc_28(QByteArray* a1, const char * a2) {
  return (bool)operator==(*a1, a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1250
// [1] bool operator==(const char *, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZeqPKcRK7QString_29(const char * s1, QString* s2) {
  return (bool)operator==(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1805
// [1] bool operator==(const char *, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_ZeqPKcRK10QStringRef_30(const char * s1, QStringRef* s2) {
  return (bool)operator==(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:624
// [1] bool operator==(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZeqPKcRK10QByteArray_31(const char * a1, QByteArray* a2) {
  return (bool)operator==(a1, *a2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1263
// [1] bool operator==(const char *, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZeqPKc13QLatin1String_32(const char * s1, QLatin1String* s2) {
  return (bool)operator==(s1, *s2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1194
// [1] bool operator==(QString::Null, QString::Null)
extern "C" Q_DECL_EXPORT
bool C_ZeqN7QString4NullES0__33(QString::Null arg0, QString::Null arg1) {
  return (bool)operator==(arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1196
// [1] bool operator==(QString::Null, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZeqN7QString4NullERKS__34(QString::Null arg0, QString* s) {
  return (bool)operator==(arg0, *s);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:611
// [1] bool operator==(std::nullptr_t, QChar)
extern "C" Q_DECL_EXPORT
bool C_ZeqDn5QChar_35(std::nullptr_t arg0, QChar* rhs) {
  return (bool)operator==(arg0, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:242
// [1] bool operator==(qfloat16, int)
extern "C" Q_DECL_EXPORT
bool C_Zeq8qfloat16i_36(qfloat16* a, int b) {
  return (bool)operator==(*a, b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [1] bool operator==(qfloat16, float)
extern "C" Q_DECL_EXPORT
bool C_Zeq8qfloat16f_37(qfloat16* lhs, float rhs) {
  return (bool)operator==(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [1] bool operator==(qfloat16, long double)
extern "C" Q_DECL_EXPORT
bool C_Zeq8qfloat16e_38(qfloat16* lhs, long double rhs) {
  return (bool)operator==(*lhs, rhs);
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [1] bool operator==(qfloat16, double)
extern "C" Q_DECL_EXPORT
bool C_Zeq8qfloat16d_39(qfloat16* lhs, double rhs) {
  return (bool)operator==(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:216
// [1] bool operator==(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Zeq8qfloat16S__40(qfloat16* a, qfloat16* b) {
  return (bool)operator==(*a, *b);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:94
// [1] bool operator==(QCborTag, QCborKnownTags)
extern "C" Q_DECL_EXPORT
bool C_Zeq8QCborTag14QCborKnownTags_41(QCborTag t, QCborKnownTags kt) {
  return (bool)operator==(t, kt);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:600
// [1] bool operator==(QChar, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QCharS__42(QChar* c1, QChar* c2) {
  return (bool)operator==(*c1, *c2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1681
// [1] bool operator==(QChar, const QString &)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QCharRK7QString_43(QChar* lhs, QString* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1700
// [1] bool operator==(QChar, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QCharRK10QStringRef_44(QChar* lhs, QStringRef* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:609
// [1] bool operator==(QChar, std::nullptr_t)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QCharDn_45(QChar* lhs, std::nullptr_t arg1) {
  return (bool)operator==(*lhs, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1719
// [1] bool operator==(QChar, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QChar13QLatin1String_46(QChar* lhs, QLatin1String* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1753
// [1] bool operator==(QChar, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zeq5QChar11QStringView_47(QChar* lhs, QStringView* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:95
// [1] bool operator==(QCborKnownTags, QCborTag)
extern "C" Q_DECL_EXPORT
bool C_Zeq14QCborKnownTags8QCborTag_48(QCborKnownTags kt, QCborTag t) {
  return (bool)operator==(kt, t);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1206
// [1] bool operator==(QLatin1String, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zeq13QLatin1StringS__49(QLatin1String* s1, QLatin1String* s2) {
  return (bool)operator==(*s1, *s2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1666
// [1] bool operator==(QLatin1String, const QStringRef &)
extern "C" Q_DECL_EXPORT
bool C_Zeq13QLatin1StringRK10QStringRef_50(QLatin1String* lhs, QStringRef* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1730
// [1] bool operator==(QLatin1String, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zeq13QLatin1String5QChar_51(QLatin1String* lhs, QChar* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1768
// [1] bool operator==(QLatin1String, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zeq13QLatin1String11QStringView_52(QLatin1String* lhs, QStringView* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1738
// [1] bool operator==(QStringView, QStringView)
extern "C" Q_DECL_EXPORT
bool C_Zeq11QStringViewS__53(QStringView* lhs, QStringView* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1746
// [1] bool operator==(QStringView, QChar)
extern "C" Q_DECL_EXPORT
bool C_Zeq11QStringView5QChar_54(QStringView* lhs, QChar* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1761
// [1] bool operator==(QStringView, QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_Zeq11QStringView13QLatin1String_55(QStringView* lhs, QLatin1String* rhs) {
  return (bool)operator==(*lhs, *rhs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:120
// [8] QBitArray operator^(const QBitArray &, const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZeoRK9QBitArrayS1_(QBitArray* arg0, QBitArray* arg1) {
  auto rv = operator^(*arg0, *arg1);
return new QBitArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:205
// [8] double operator/(int, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zdvi8qfloat16(int lhs, qfloat16* rhs) {
  return (double)operator/(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator/(float, qfloat16)
extern "C" Q_DECL_EXPORT
float C_Zdvf8qfloat16_1(float lhs, qfloat16* rhs) {
  return (float)operator/(lhs, *rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator/(long double, qfloat16)
extern "C" Q_DECL_EXPORT
void C_Zdve8qfloat16_2(long double lhs, qfloat16* rhs) {
  auto rv = operator/(lhs, *rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator/(double, qfloat16)
extern "C" Q_DECL_EXPORT
double C_Zdvd8qfloat16_3(double lhs, qfloat16* rhs) {
  return (double)operator/(lhs, *rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:427
// [32] QMarginsF operator/(const QMarginsF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK9QMarginsFd_4(QMarginsF* lhs, qreal divisor) {
  auto rv = operator/(*lhs, divisor);
return new QMarginsF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:207
// [16] QMargins operator/(const QMargins &, int)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK8QMarginsi_5(QMargins* margins, int divisor) {
  auto rv = operator/(*margins, divisor);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:213
// [16] QMargins operator/(const QMargins &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK8QMarginsd_6(QMargins* margins, qreal divisor) {
  auto rv = operator/(*margins, divisor);
return new QMargins(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:402
// [16] const QPointF operator/(const QPointF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK7QPointFd_7(QPointF* p, qreal divisor) {
  auto rv = operator/(*p, divisor);
return new QPointF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:364
// [16] const QSizeF operator/(const QSizeF &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK6QSizeFd_8(QSizeF* s, qreal c) {
  auto rv = operator/(*s, c);
return new QSizeF(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:206
// [8] const QPoint operator/(const QPoint &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK6QPointd_9(QPoint* p, qreal c) {
  auto rv = operator/(*p, c);
return new QPoint(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:194
// [8] const QSize operator/(const QSize &, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZdvRK5QSized_10(QSize* s, qreal c) {
  auto rv = operator/(*s, c);
return new QSize(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:205
// [8] double operator/(qfloat16, int)
extern "C" Q_DECL_EXPORT
double C_Zdv8qfloat16i_11(qfloat16* lhs, int rhs) {
  return (double)operator/(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [4] float operator/(qfloat16, float)
extern "C" Q_DECL_EXPORT
float C_Zdv8qfloat16f_12(qfloat16* lhs, float rhs) {
  return (float)operator/(*lhs, rhs);
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [16] long double operator/(qfloat16, long double)
extern "C" Q_DECL_EXPORT
void C_Zdv8qfloat16e_13(qfloat16* lhs, long double rhs) {
  auto rv = operator/(*lhs, rhs);
/*return rv;*/
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [8] double operator/(qfloat16, double)
extern "C" Q_DECL_EXPORT
double C_Zdv8qfloat16d_14(qfloat16* lhs, double rhs) {
  return (double)operator/(*lhs, rhs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:176
// [2] qfloat16 operator/(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
void* C_Zdv8qfloat16S__15(qfloat16* a, qfloat16* b) {
  auto rv = operator/(*a, *b);
return new qfloat16(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:195
// [2] qfloat16 & operator/=(qfloat16 &, float)
extern "C" Q_DECL_EXPORT
void* C_ZdVR8qfloat16f(qfloat16* lhs, float rhs) {
  auto& rv = operator/=(*lhs, rhs);
return &rv;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:193
// [2] qfloat16 & operator/=(qfloat16 &, long double)
extern "C" Q_DECL_EXPORT
void* C_ZdVR8qfloat16e_1(qfloat16* lhs, long double rhs) {
  auto& rv = operator/=(*lhs, rhs);
return &rv;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:194
// [2] qfloat16 & operator/=(qfloat16 &, double)
extern "C" Q_DECL_EXPORT
void* C_ZdVR8qfloat16d_2(qfloat16* lhs, double rhs) {
  auto& rv = operator/=(*lhs, rhs);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:118
// [8] QBitArray operator&(const QBitArray &, const QBitArray &)
extern "C" Q_DECL_EXPORT
void* C_ZanRK9QBitArrayS1_(QBitArray* arg0, QBitArray* arg1) {
  auto rv = operator&(*arg0, *arg1);
return new QBitArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:58
// [8] qsizetype qustrlen(const ushort *)
extern "C" Q_DECL_EXPORT
qsizetype C_ZN9QtPrivate8qustrlenEPKt(const ushort * str) {
  return (qsizetype)QtPrivate::qustrlen(str);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:59
// [8] const ushort * qustrchr(QStringView, ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate8qustrchrE11QStringViewt(QStringView* str, ushort ch) {
  return (void*)QtPrivate::qustrchr(*str, ch);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:88
// [1] bool isLatin1(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8isLatin1E13QLatin1String(QLatin1String* s) {
  return (bool)QtPrivate::isLatin1(*s);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:207
// [1] bool isLatin1(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8isLatin1E13QLatin1String_1(QLatin1String* arg0) {
  return (bool)QtPrivate::isLatin1(*arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:89
// [1] bool isLatin1(QStringView)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8isLatin1E11QStringView_2(QStringView* s) {
  return (bool)QtPrivate::isLatin1(*s);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:75
// [1] bool endsWith(QLatin1String, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8endsWithE13QLatin1StringS0_N2Qt15CaseSensitivityE(QLatin1String* haystack, QLatin1String* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::endsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:74
// [1] bool endsWith(QLatin1String, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8endsWithE13QLatin1String11QStringViewN2Qt15CaseSensitivityE_1(QLatin1String* haystack, QStringView* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::endsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:72
// [1] bool endsWith(QStringView, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8endsWithE11QStringViewS0_N2Qt15CaseSensitivityE_2(QStringView* haystack, QStringView* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::endsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:73
// [1] bool endsWith(QStringView, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate8endsWithE11QStringView13QLatin1StringN2Qt15CaseSensitivityE_3(QStringView* haystack, QLatin1String* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::endsWith(*haystack, *needle, cs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1871
// [8] const QString & asString(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate8asStringERK7QString(QString* s) {
  auto& rv = QtPrivate::asString(*s);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1872
// [8] QString && asString(QString &&)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate8asStringEO7QString_1(QString && s) {
  auto rv = QtPrivate::asString(s);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:78
// [16] QLatin1String trimmed(QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate7trimmedE13QLatin1String(QLatin1String* s) {
  auto rv = QtPrivate::trimmed(*s);
return new QLatin1String(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:77
// [16] QStringView trimmed(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate7trimmedE11QStringView_1(QStringView* s) {
  auto rv = QtPrivate::trimmed(*s);
return new QStringView(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:86
// [1] bool isAscii(QLatin1String)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate7isAsciiE13QLatin1String(QLatin1String* s) {
  return (bool)QtPrivate::isAscii(*s);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:87
// [1] bool isAscii(QStringView)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate7isAsciiE11QStringView_1(QStringView* s) {
  return (bool)QtPrivate::isAscii(*s);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:172
// [-2] void QStringList_replaceInStrings(QStringList *, const QString &, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate28QStringList_replaceInStringsEP11QStringListRK7QStringS4_N2Qt15CaseSensitivityE(QStringList * that, QString* before, QString* after, Qt::CaseSensitivity cs) {
  QtPrivate::QStringList_replaceInStrings(that, *before, *after, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:176
// [-2] void QStringList_replaceInStrings(QStringList *, const QRegExp &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate28QStringList_replaceInStringsEP11QStringListRK7QRegExpRK7QString_1(QStringList * that, QRegExp* rx, QString* after) {
  QtPrivate::QStringList_replaceInStrings(that, *rx, *after);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:185
// [-2] void QStringList_replaceInStrings(QStringList *, const QRegularExpression &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate28QStringList_replaceInStringsEP11QStringListRK18QRegularExpressionRK7QString_2(QStringList * that, QRegularExpression* rx, QString* after) {
  QtPrivate::QStringList_replaceInStrings(that, *rx, *after);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:161
// [4] int QStringList_removeDuplicates(QStringList *)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate28QStringList_removeDuplicatesEP11QStringList(QStringList * that) {
  return (int)QtPrivate::QStringList_removeDuplicates(that);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:179
// [4] int QStringList_lastIndexOf(const QStringList *, const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate23QStringList_lastIndexOfEPK11QStringListRK7QRegExpi(const QStringList * that, QRegExp* rx, int from) {
  return (int)QtPrivate::QStringList_lastIndexOf(that, *rx, from);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:188
// [4] int QStringList_lastIndexOf(const QStringList *, const QRegularExpression &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate23QStringList_lastIndexOfEPK11QStringListRK18QRegularExpressioni_1(const QStringList * that, QRegularExpression* re, int from) {
  return (int)QtPrivate::QStringList_lastIndexOf(that, *re, from);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:181
// [4] int QStringList_lastIndexOf(const QStringList *, QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate23QStringList_lastIndexOfEPK11QStringListR7QRegExpi_2(const QStringList * that, QRegExp* rx, int from) {
  return (int)QtPrivate::QStringList_lastIndexOf(that, *rx, from);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:612
// [16] QObject & deref_for_methodcall(QObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate20deref_for_methodcallER7QObject(QObject* o) {
  auto& rv = QtPrivate::deref_for_methodcall(*o);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:613
// [16] QObject & deref_for_methodcall(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate20deref_for_methodcallEP7QObject_1(QObject * o) {
  auto& rv = QtPrivate::deref_for_methodcall(o);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:168
// [1] bool QStringList_contains(const QStringList *, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate20QStringList_containsEPK11QStringListRK7QStringN2Qt15CaseSensitivityE(const QStringList * that, QString* str, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::QStringList_contains(that, *str, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:171
// [1] bool QStringList_contains(const QStringList *, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate20QStringList_containsEPK11QStringList13QLatin1StringN2Qt15CaseSensitivityE_1(const QStringList * that, QLatin1String* str, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::QStringList_contains(that, *str, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:170
// [1] bool QStringList_contains(const QStringList *, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate20QStringList_containsEPK11QStringList11QStringViewN2Qt15CaseSensitivityE_2(const QStringList * that, QStringView* str, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::QStringList_contains(that, *str, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:178
// [4] int QStringList_indexOf(const QStringList *, const QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate19QStringList_indexOfEPK11QStringListRK7QRegExpi(const QStringList * that, QRegExp* rx, int from) {
  return (int)QtPrivate::QStringList_indexOf(that, *rx, from);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:187
// [4] int QStringList_indexOf(const QStringList *, const QRegularExpression &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate19QStringList_indexOfEPK11QStringListRK18QRegularExpressioni_1(const QStringList * that, QRegularExpression* re, int from) {
  return (int)QtPrivate::QStringList_indexOf(that, *re, from);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:180
// [4] int QStringList_indexOf(const QStringList *, QRegExp &, int)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate19QStringList_indexOfEPK11QStringListR7QRegExpi_2(const QStringList * that, QRegExp* rx, int from) {
  return (int)QtPrivate::QStringList_indexOf(that, *rx, from);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearraylist.h:57
// [8] QByteArray QByteArrayList_join(const QByteArrayList *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate19QByteArrayList_joinEPK5QListI10QByteArrayEPKci(const QByteArrayList * that, const char * separator, int separatorLength) {
  auto rv = QtPrivate::QByteArrayList_join(that, separator, separatorLength);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:82
// [8] QByteArray convertToLocal8Bit(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate18convertToLocal8BitE11QStringView(QStringView* str) {
  auto rv = QtPrivate::convertToLocal8Bit(*str);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:164
// [8] QStringList QStringList_filter(const QStringList *, const QString &, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate18QStringList_filterEPK11QStringListRK7QStringN2Qt15CaseSensitivityE(const QStringList * that, QString* str, Qt::CaseSensitivity cs) {
  auto rv = QtPrivate::QStringList_filter(that, *str, cs);
return new QStringList(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:177
// [8] QStringList QStringList_filter(const QStringList *, const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate18QStringList_filterEPK11QStringListRK7QRegExp_1(const QStringList * that, QRegExp* re) {
  auto rv = QtPrivate::QStringList_filter(that, *re);
return new QStringList(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:186
// [8] QStringList QStringList_filter(const QStringList *, const QRegularExpression &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate18QStringList_filterEPK11QStringListRK18QRegularExpression_2(const QStringList * that, QRegularExpression* re) {
  auto rv = QtPrivate::QStringList_filter(that, *re);
return new QStringList(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:160
// [-2] void QStringList_sort(QStringList *, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate16QStringList_sortEP11QStringListN2Qt15CaseSensitivityE(QStringList * that, Qt::CaseSensitivity cs) {
  QtPrivate::QStringList_sort(that, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:163
// [8] QString QStringList_join(const QStringList &, QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate16QStringList_joinERK11QStringList13QLatin1String(QStringList* list, QLatin1String* sep) {
  auto rv = QtPrivate::QStringList_join(*list, *sep);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:162
// [8] QString QStringList_join(const QStringList *, const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate16QStringList_joinEPK11QStringListPK5QChari_1(const QStringList * that, const QChar * sep, int seplen) {
  auto rv = QtPrivate::QStringList_join(that, sep, seplen);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:80
// [8] QByteArray convertToLatin1(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate15convertToLatin1E11QStringView(QStringView* str) {
  auto rv = QtPrivate::convertToLatin1(*str);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:64
// [4] int compareStrings(QLatin1String, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate14compareStringsE13QLatin1StringS0_N2Qt15CaseSensitivityE(QLatin1String* lhs, QLatin1String* rhs, Qt::CaseSensitivity cs) {
  return (int)QtPrivate::compareStrings(*lhs, *rhs, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:63
// [4] int compareStrings(QLatin1String, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate14compareStringsE13QLatin1String11QStringViewN2Qt15CaseSensitivityE_1(QLatin1String* lhs, QStringView* rhs, Qt::CaseSensitivity cs) {
  return (int)QtPrivate::compareStrings(*lhs, *rhs, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:61
// [4] int compareStrings(QStringView, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate14compareStringsE11QStringViewS0_N2Qt15CaseSensitivityE_2(QStringView* lhs, QStringView* rhs, Qt::CaseSensitivity cs) {
  return (int)QtPrivate::compareStrings(*lhs, *rhs, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:62
// [4] int compareStrings(QStringView, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
int C_ZN9QtPrivate14compareStringsE11QStringView13QLatin1StringN2Qt15CaseSensitivityE_3(QStringView* lhs, QLatin1String* rhs, Qt::CaseSensitivity cs) {
  return (int)QtPrivate::compareStrings(*lhs, *rhs, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:84
// [1] bool isRightToLeft(QStringView)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate13isRightToLeftE11QStringView(QStringView* string) {
  return (bool)QtPrivate::isRightToLeft(*string);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:1638
// [1] bool isBuiltinType(const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate13isBuiltinTypeERK10QByteArray(QByteArray* type_) {
  return (bool)QtPrivate::isBuiltinType(*type_);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:81
// [8] QByteArray convertToUtf8(QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZN9QtPrivate13convertToUtf8E11QStringView(QStringView* str) {
  auto rv = QtPrivate::convertToUtf8(*str);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:83
// [8] QVector<uint> convertToUcs4(QStringView)
extern "C" Q_DECL_EXPORT
void C_ZN9QtPrivate13convertToUcs4E11QStringView(QStringView* str) {
  auto rv = QtPrivate::convertToUcs4(*str);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:70
// [1] bool startsWith(QLatin1String, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate10startsWithE13QLatin1StringS0_N2Qt15CaseSensitivityE(QLatin1String* haystack, QLatin1String* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::startsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:69
// [1] bool startsWith(QLatin1String, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate10startsWithE13QLatin1String11QStringViewN2Qt15CaseSensitivityE_1(QLatin1String* haystack, QStringView* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::startsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:67
// [1] bool startsWith(QStringView, QStringView, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate10startsWithE11QStringViewS0_N2Qt15CaseSensitivityE_2(QStringView* haystack, QStringView* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::startsWith(*haystack, *needle, cs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringalgorithms.h:68
// [1] bool startsWith(QStringView, QLatin1String, Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtPrivate10startsWithE11QStringView13QLatin1StringN2Qt15CaseSensitivityE_3(QStringView* haystack, QLatin1String* needle, Qt::CaseSensitivity cs) {
  return (bool)QtPrivate::startsWith(*haystack, *needle, cs);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1559
// [4] QIncompatibleFlag operator|(MatchFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_9MatchFlagEi_77(Qt::MatchFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1559
// [4] QFlags<MatchFlags::enum_type> operator|(MatchFlags::enum_type, MatchFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_9MatchFlagES0__78(Qt::MatchFlags::enum_type f1, Qt::MatchFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1559
// [4] QFlags<MatchFlags::enum_type> operator|(MatchFlags::enum_type, QFlags<MatchFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_9MatchFlagE6QFlagsIS0_E_79(Qt::MatchFlags::enum_type f1, QFlags<Qt::MatchFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1544
// [4] QIncompatibleFlag operator|(ItemFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_8ItemFlagEi_80(Qt::ItemFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1544
// [4] QFlags<ItemFlags::enum_type> operator|(ItemFlags::enum_type, ItemFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_8ItemFlagES0__81(Qt::ItemFlags::enum_type f1, Qt::ItemFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1544
// [4] QFlags<ItemFlags::enum_type> operator|(ItemFlags::enum_type, QFlags<ItemFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_8ItemFlagE6QFlagsIS0_E_82(Qt::ItemFlags::enum_type f1, QFlags<Qt::ItemFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1300
// [4] QIncompatibleFlag operator|(Edges::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_4EdgeEi_83(Qt::Edges::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1300
// [4] QFlags<Edges::enum_type> operator|(Edges::enum_type, Edges::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_4EdgeES0__84(Qt::Edges::enum_type f1, Qt::Edges::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1300
// [4] QFlags<Edges::enum_type> operator|(Edges::enum_type, QFlags<Edges::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_4EdgeE6QFlagsIS0_E_85(Qt::Edges::enum_type f1, QFlags<Qt::Edge> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1584
// [4] QIncompatibleFlag operator|(TextInteractionFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19TextInteractionFlagEi_86(Qt::TextInteractionFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1584
// [4] QFlags<TextInteractionFlags::enum_type> operator|(TextInteractionFlags::enum_type, TextInteractionFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19TextInteractionFlagES0__87(Qt::TextInteractionFlags::enum_type f1, Qt::TextInteractionFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1584
// [4] QFlags<TextInteractionFlags::enum_type> operator|(TextInteractionFlags::enum_type, QFlags<TextInteractionFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19TextInteractionFlagE6QFlagsIS0_E_88(Qt::TextInteractionFlags::enum_type f1, QFlags<Qt::TextInteractionFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:565
// [4] QIncompatibleFlag operator|(ImageConversionFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19ImageConversionFlagEi_89(Qt::ImageConversionFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:565
// [4] QFlags<ImageConversionFlags::enum_type> operator|(ImageConversionFlags::enum_type, ImageConversionFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19ImageConversionFlagES0__90(Qt::ImageConversionFlags::enum_type f1, Qt::ImageConversionFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:565
// [4] QFlags<ImageConversionFlags::enum_type> operator|(ImageConversionFlags::enum_type, QFlags<ImageConversionFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_19ImageConversionFlagE6QFlagsIS0_E_91(Qt::ImageConversionFlags::enum_type f1, QFlags<Qt::ImageConversionFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:346
// [4] QIncompatibleFlag operator|(ScreenOrientations::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_17ScreenOrientationEi_92(Qt::ScreenOrientations::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:346
// [4] QFlags<ScreenOrientations::enum_type> operator|(ScreenOrientations::enum_type, ScreenOrientations::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_17ScreenOrientationES0__93(Qt::ScreenOrientations::enum_type f1, Qt::ScreenOrientations::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:346
// [4] QFlags<ScreenOrientations::enum_type> operator|(ScreenOrientations::enum_type, QFlags<ScreenOrientations::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_17ScreenOrientationE6QFlagsIS0_E_94(Qt::ScreenOrientations::enum_type f1, QFlags<Qt::ScreenOrientation> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QIncompatibleFlag operator|(KeyboardModifiers::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16KeyboardModifierEi_95(Qt::KeyboardModifiers::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QFlags<KeyboardModifiers::enum_type> operator|(KeyboardModifiers::enum_type, KeyboardModifiers::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16KeyboardModifierES0__96(Qt::KeyboardModifiers::enum_type f1, Qt::KeyboardModifiers::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QFlags<KeyboardModifiers::enum_type> operator|(KeyboardModifiers::enum_type, QFlags<KeyboardModifiers::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16KeyboardModifierE6QFlagsIS0_E_97(Qt::KeyboardModifiers::enum_type f1, QFlags<Qt::KeyboardModifier> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1403
// [4] QIncompatibleFlag operator|(InputMethodQueries::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16InputMethodQueryEi_98(Qt::InputMethodQueries::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1403
// [4] QFlags<InputMethodQueries::enum_type> operator|(InputMethodQueries::enum_type, InputMethodQueries::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16InputMethodQueryES0__99(Qt::InputMethodQueries::enum_type f1, Qt::InputMethodQueries::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1403
// [4] QFlags<InputMethodQueries::enum_type> operator|(InputMethodQueries::enum_type, QFlags<InputMethodQueries::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_16InputMethodQueryE6QFlagsIS0_E_100(Qt::InputMethodQueries::enum_type f1, QFlags<Qt::InputMethodQuery> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1636
// [4] QIncompatibleFlag operator|(TouchPointStates::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15TouchPointStateEi_101(Qt::TouchPointStates::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1636
// [4] QFlags<TouchPointStates::enum_type> operator|(TouchPointStates::enum_type, TouchPointStates::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15TouchPointStateES0__102(Qt::TouchPointStates::enum_type f1, Qt::TouchPointStates::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1636
// [4] QFlags<TouchPointStates::enum_type> operator|(TouchPointStates::enum_type, QFlags<TouchPointStates::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15TouchPointStateE6QFlagsIS0_E_103(Qt::TouchPointStates::enum_type f1, QFlags<Qt::TouchPointState> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1438
// [4] QIncompatibleFlag operator|(InputMethodHints::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15InputMethodHintEi_104(Qt::InputMethodHints::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1438
// [4] QFlags<InputMethodHints::enum_type> operator|(InputMethodHints::enum_type, InputMethodHints::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15InputMethodHintES0__105(Qt::InputMethodHints::enum_type f1, Qt::InputMethodHints::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1438
// [4] QFlags<InputMethodHints::enum_type> operator|(InputMethodHints::enum_type, QFlags<InputMethodHints::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_15InputMethodHintE6QFlagsIS0_E_106(Qt::InputMethodHints::enum_type f1, QFlags<Qt::InputMethodHint> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1723
// [4] QIncompatibleFlag operator|(MouseEventFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14MouseEventFlagEi_107(Qt::MouseEventFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1723
// [4] QFlags<MouseEventFlags::enum_type> operator|(MouseEventFlags::enum_type, MouseEventFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14MouseEventFlagES0__108(Qt::MouseEventFlags::enum_type f1, Qt::MouseEventFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1723
// [4] QFlags<MouseEventFlags::enum_type> operator|(MouseEventFlags::enum_type, QFlags<MouseEventFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14MouseEventFlagE6QFlagsIS0_E_109(Qt::MouseEventFlags::enum_type f1, QFlags<Qt::MouseEventFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1223
// [4] QIncompatibleFlag operator|(DockWidgetAreas::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14DockWidgetAreaEi_110(Qt::DockWidgetAreas::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1223
// [4] QFlags<DockWidgetAreas::enum_type> operator|(DockWidgetAreas::enum_type, DockWidgetAreas::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14DockWidgetAreaES0__111(Qt::DockWidgetAreas::enum_type f1, Qt::DockWidgetAreas::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1223
// [4] QFlags<DockWidgetAreas::enum_type> operator|(DockWidgetAreas::enum_type, QFlags<DockWidgetAreas::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_14DockWidgetAreaE6QFlagsIS0_E_112(Qt::DockWidgetAreas::enum_type f1, QFlags<Qt::DockWidgetArea> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:231
// [4] QIncompatibleFlag operator|(Alignment::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_13AlignmentFlagEi_113(Qt::Alignment::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:231
// [4] QFlags<Alignment::enum_type> operator|(Alignment::enum_type, Alignment::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_13AlignmentFlagES0__114(Qt::Alignment::enum_type f1, Qt::Alignment::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:231
// [4] QFlags<Alignment::enum_type> operator|(Alignment::enum_type, QFlags<Alignment::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_13AlignmentFlagE6QFlagsIS0_E_115(Qt::Alignment::enum_type f1, QFlags<Qt::AlignmentFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:326
// [4] QIncompatibleFlag operator|(WindowStates::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11WindowStateEi_116(Qt::WindowStates::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:326
// [4] QFlags<WindowStates::enum_type> operator|(WindowStates::enum_type, WindowStates::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11WindowStateES0__117(Qt::WindowStates::enum_type f1, Qt::WindowStates::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:326
// [4] QFlags<WindowStates::enum_type> operator|(WindowStates::enum_type, QFlags<WindowStates::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11WindowStateE6QFlagsIS0_E_118(Qt::WindowStates::enum_type f1, QFlags<Qt::WindowState> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1241
// [4] QIncompatibleFlag operator|(ToolBarAreas::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11ToolBarAreaEi_119(Qt::ToolBarAreas::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1241
// [4] QFlags<ToolBarAreas::enum_type> operator|(ToolBarAreas::enum_type, ToolBarAreas::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11ToolBarAreaES0__120(Qt::ToolBarAreas::enum_type f1, Qt::ToolBarAreas::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1241
// [4] QFlags<ToolBarAreas::enum_type> operator|(ToolBarAreas::enum_type, QFlags<ToolBarAreas::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11ToolBarAreaE6QFlagsIS0_E_121(Qt::ToolBarAreas::enum_type f1, QFlags<Qt::ToolBarArea> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:175
// [4] QIncompatibleFlag operator|(Orientations::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11OrientationEi_122(Qt::Orientations::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:175
// [4] QFlags<Orientations::enum_type> operator|(Orientations::enum_type, Orientations::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11OrientationES0__123(Qt::Orientations::enum_type f1, Qt::Orientations::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:175
// [4] QFlags<Orientations::enum_type> operator|(Orientations::enum_type, QFlags<Orientations::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11OrientationE6QFlagsIS0_E_124(Qt::Orientations::enum_type f1, QFlags<Qt::Orientation> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:167
// [4] QIncompatibleFlag operator|(MouseButtons::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11MouseButtonEi_125(Qt::MouseButtons::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:167
// [4] QFlags<MouseButtons::enum_type> operator|(MouseButtons::enum_type, MouseButtons::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11MouseButtonES0__126(Qt::MouseButtons::enum_type f1, Qt::MouseButtons::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:167
// [4] QFlags<MouseButtons::enum_type> operator|(MouseButtons::enum_type, QFlags<MouseButtons::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11MouseButtonE6QFlagsIS0_E_127(Qt::MouseButtons::enum_type f1, QFlags<Qt::MouseButton> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1668
// [4] QIncompatibleFlag operator|(GestureFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11GestureFlagEi_128(Qt::GestureFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1668
// [4] QFlags<GestureFlags::enum_type> operator|(GestureFlags::enum_type, GestureFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11GestureFlagES0__129(Qt::GestureFlags::enum_type f1, Qt::GestureFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1668
// [4] QFlags<GestureFlags::enum_type> operator|(GestureFlags::enum_type, QFlags<GestureFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_11GestureFlagE6QFlagsIS0_E_130(Qt::GestureFlags::enum_type f1, QFlags<Qt::GestureFlag> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:315
// [4] QIncompatibleFlag operator|(WindowFlags::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10WindowTypeEi_131(Qt::WindowFlags::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:315
// [4] QFlags<WindowFlags::enum_type> operator|(WindowFlags::enum_type, WindowFlags::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10WindowTypeES0__132(Qt::WindowFlags::enum_type f1, Qt::WindowFlags::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:315
// [4] QFlags<WindowFlags::enum_type> operator|(WindowFlags::enum_type, QFlags<WindowFlags::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10WindowTypeE6QFlagsIS0_E_133(Qt::WindowFlags::enum_type f1, QFlags<Qt::WindowType> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1489
// [4] QIncompatibleFlag operator|(DropActions::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10DropActionEi_134(Qt::DropActions::enum_type f1, int f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1489
// [4] QFlags<DropActions::enum_type> operator|(DropActions::enum_type, DropActions::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10DropActionES0__135(Qt::DropActions::enum_type f1, Qt::DropActions::enum_type f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1489
// [4] QFlags<DropActions::enum_type> operator|(DropActions::enum_type, QFlags<DropActions::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZN2QtorENS_10DropActionE6QFlagsIS0_E_136(Qt::DropActions::enum_type f1, QFlags<Qt::DropAction> f2) {
  auto rv = Qt::operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1810
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_9TimerTypeE(Qt::TimerType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1781
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_9SortOrderE_1(Qt::SortOrder arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1766
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DayOfWeek)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_9DayOfWeekE_2(Qt::DayOfWeek arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1735
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ArrowType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_9ArrowTypeE_3(Qt::ArrowType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1765
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8TimeSpecE_4(Qt::TimeSpec arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1754
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8TextFlagE_5(Qt::TextFlag arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1745
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SizeMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8SizeModeE_6(Qt::SizeMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1750
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SizeHint)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8SizeHintE_7(Qt::SizeHint arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1737
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8PenStyleE_8(Qt::PenStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1742
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MaskMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8MaskModeE_9(Qt::MaskMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1741
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FillRule)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_8FillRuleE_10(Qt::FillRule arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1747
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Corner)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_6CornerE_11(Qt::Corner arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1743
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::BGMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_6BGModeE_12(Qt::BGMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1748
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Edge)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_4EdgeE_13(Qt::Edge arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1746
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Axis)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_4AxisE_14(Qt::Axis arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1772
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Key)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_3KeyE_15(Qt::Key arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1777
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemSelectionOperation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_22ItemSelectionOperationE_16(Qt::ItemSelectionOperation arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1790
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ApplicationAttribute)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_20ApplicationAttributeE_17(Qt::ApplicationAttribute arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1774
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextInteractionFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_19TextInteractionFlagE_18(Qt::TextInteractionFlag arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1770
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_18TransformationModeE_19(Qt::TransformationMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1800
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_17ScreenOrientationE_20(Qt::ScreenOrientation arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1807
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::NativeGestureType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_17NativeGestureTypeE_21(Qt::NativeGestureType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1776
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_17ItemSelectionModeE_22(Qt::ItemSelectionMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1734
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ContextMenuPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_17ContextMenuPolicyE_23(Qt::ContextMenuPolicy arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1815
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TabFocusBehavior)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_16TabFocusBehaviorE_24(Qt::TabFocusBehavior arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1812
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_16MouseEventSourceE_25(Qt::MouseEventSource arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1795
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_16InputMethodQueryE_26(Qt::InputMethodQuery arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1803
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ApplicationState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_16ApplicationStateE_27(Qt::ApplicationState arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1789
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WidgetAttribute)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15WidgetAttributeE_28(Qt::WidgetAttribute arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1736
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15ToolButtonStyleE_29(Qt::ToolButtonStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1773
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15ShortcutContextE_30(Qt::ShortcutContext arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1732
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15ScrollBarPolicyE_31(Qt::ScrollBarPolicy arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1749
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15LayoutDirectionE_32(Qt::LayoutDirection arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1794
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodHint)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15InputMethodHintE_33(Qt::InputMethodHint arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1809
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CursorMoveStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15CursorMoveStyleE_34(Qt::CursorMoveStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1782
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15CaseSensitivityE_35(Qt::CaseSensitivity arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1769
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_15AspectRatioModeE_36(Qt::AspectRatioMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1788
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowModality)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_14WindowModalityE_37(Qt::WindowModality arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1813
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseEventFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_14MouseEventFlagE_38(Qt::MouseEventFlag arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1760
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DockWidgetArea)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_14DockWidgetAreaE_39(Qt::DockWidgetArea arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1802
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_14ConnectionTypeE_40(Qt::ConnectionType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1763
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextElideMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_13TextElideModeE_41(Qt::TextElideMode arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1744
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_13ClipOperationE_42(Qt::ClipOperation arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1739
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenJoinStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_12PenJoinStyleE_43(Qt::PenJoinStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1780
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemDataRole)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_12ItemDataRoleE_44(Qt::ItemDataRole arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1805
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GestureState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_12GestureStateE_45(Qt::GestureState arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1797
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::EnterKeyType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_12EnterKeyTypeE_46(Qt::EnterKeyType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1814
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ChecksumType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_12ChecksumTypeE_47(Qt::ChecksumType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1787
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11WindowStateE_48(Qt::WindowState arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1761
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolBarArea)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11ToolBarAreaE_49(Qt::ToolBarArea arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1811
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScrollPhase)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11ScrollPhaseE_50(Qt::ScrollPhase arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1738
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenCapStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11PenCapStyleE_51(Qt::PenCapStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1751
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11OrientationE_52(Qt::Orientation arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1768
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11GlobalColorE_53(Qt::GlobalColor arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1806
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11GestureTypeE_54(Qt::GestureType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1793
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11FocusReasonE_55(Qt::FocusReason arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1733
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FocusPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11FocusPolicyE_56(Qt::FocusPolicy arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1767
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CursorShape)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_11CursorShapeE_57(Qt::CursorShape arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1786
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10WindowTypeE_58(Qt::WindowType arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1762
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10TextFormatE_59(Qt::TextFormat arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1752
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10DropActionE_60(Qt::DropAction arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1764
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10DateFormatE_61(Qt::DateFormat arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1779
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10CheckStateE_62(Qt::CheckState arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1740
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectENS_10BrushStyleE_63(Qt::BrushStyle arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1783
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_9MatchFlagEE_64(QFlags<Qt::MatchFlag> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1778
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_8ItemFlagEE_65(QFlags<Qt::ItemFlag> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1757
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Edges)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_4EdgeEE_66(QFlags<Qt::Edge> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1775
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_19TextInteractionFlagEE_67(QFlags<Qt::TextInteractionFlag> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1771
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_19ImageConversionFlagEE_68(QFlags<Qt::ImageConversionFlag> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1801
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScreenOrientations)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_17ScreenOrientationEE_69(QFlags<Qt::ScreenOrientation> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1784
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_16KeyboardModifierEE_70(QFlags<Qt::KeyboardModifier> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1798
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodQueries)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_16InputMethodQueryEE_71(QFlags<Qt::InputMethodQuery> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1799
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TouchPointStates)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_15TouchPointStateEE_72(QFlags<Qt::TouchPointState> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1796
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_15InputMethodHintEE_73(QFlags<Qt::InputMethodHint> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1758
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DockWidgetAreas)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_14DockWidgetAreaEE_74(QFlags<Qt::DockWidgetArea> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1753
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_13AlignmentFlagEE_75(QFlags<Qt::AlignmentFlag> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1792
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowStates)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11WindowStateEE_76(QFlags<Qt::WindowState> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1759
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolBarAreas)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11ToolBarAreaEE_77(QFlags<Qt::ToolBarArea> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1755
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Orientations)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11OrientationEE_78(QFlags<Qt::Orientation> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1785
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11MouseButtonEE_79(QFlags<Qt::MouseButton> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1791
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_10WindowTypeEE_80(QFlags<Qt::WindowType> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1756
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DropActions)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_10DropActionEE_81(QFlags<Qt::DropAction> arg0) {
  return (void*)Qt::qt_getEnumMetaObject(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1810
// [8] const char * qt_getEnumName(Qt::TimerType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_9TimerTypeE(Qt::TimerType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1781
// [8] const char * qt_getEnumName(Qt::SortOrder)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_9SortOrderE_1(Qt::SortOrder arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1766
// [8] const char * qt_getEnumName(Qt::DayOfWeek)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_9DayOfWeekE_2(Qt::DayOfWeek arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1735
// [8] const char * qt_getEnumName(Qt::ArrowType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_9ArrowTypeE_3(Qt::ArrowType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1765
// [8] const char * qt_getEnumName(Qt::TimeSpec)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8TimeSpecE_4(Qt::TimeSpec arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1754
// [8] const char * qt_getEnumName(Qt::TextFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8TextFlagE_5(Qt::TextFlag arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1745
// [8] const char * qt_getEnumName(Qt::SizeMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8SizeModeE_6(Qt::SizeMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1750
// [8] const char * qt_getEnumName(Qt::SizeHint)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8SizeHintE_7(Qt::SizeHint arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1737
// [8] const char * qt_getEnumName(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8PenStyleE_8(Qt::PenStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1742
// [8] const char * qt_getEnumName(Qt::MaskMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8MaskModeE_9(Qt::MaskMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1741
// [8] const char * qt_getEnumName(Qt::FillRule)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_8FillRuleE_10(Qt::FillRule arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1747
// [8] const char * qt_getEnumName(Qt::Corner)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_6CornerE_11(Qt::Corner arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1743
// [8] const char * qt_getEnumName(Qt::BGMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_6BGModeE_12(Qt::BGMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1748
// [8] const char * qt_getEnumName(Qt::Edge)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_4EdgeE_13(Qt::Edge arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1746
// [8] const char * qt_getEnumName(Qt::Axis)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_4AxisE_14(Qt::Axis arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1772
// [8] const char * qt_getEnumName(Qt::Key)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_3KeyE_15(Qt::Key arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1777
// [8] const char * qt_getEnumName(Qt::ItemSelectionOperation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_22ItemSelectionOperationE_16(Qt::ItemSelectionOperation arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1790
// [8] const char * qt_getEnumName(Qt::ApplicationAttribute)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_20ApplicationAttributeE_17(Qt::ApplicationAttribute arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1774
// [8] const char * qt_getEnumName(Qt::TextInteractionFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_19TextInteractionFlagE_18(Qt::TextInteractionFlag arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1770
// [8] const char * qt_getEnumName(Qt::TransformationMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_18TransformationModeE_19(Qt::TransformationMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1800
// [8] const char * qt_getEnumName(Qt::ScreenOrientation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_17ScreenOrientationE_20(Qt::ScreenOrientation arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1807
// [8] const char * qt_getEnumName(Qt::NativeGestureType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_17NativeGestureTypeE_21(Qt::NativeGestureType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1776
// [8] const char * qt_getEnumName(Qt::ItemSelectionMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_17ItemSelectionModeE_22(Qt::ItemSelectionMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1734
// [8] const char * qt_getEnumName(Qt::ContextMenuPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_17ContextMenuPolicyE_23(Qt::ContextMenuPolicy arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1815
// [8] const char * qt_getEnumName(Qt::TabFocusBehavior)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_16TabFocusBehaviorE_24(Qt::TabFocusBehavior arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1812
// [8] const char * qt_getEnumName(Qt::MouseEventSource)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_16MouseEventSourceE_25(Qt::MouseEventSource arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1795
// [8] const char * qt_getEnumName(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_16InputMethodQueryE_26(Qt::InputMethodQuery arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1803
// [8] const char * qt_getEnumName(Qt::ApplicationState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_16ApplicationStateE_27(Qt::ApplicationState arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1789
// [8] const char * qt_getEnumName(Qt::WidgetAttribute)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15WidgetAttributeE_28(Qt::WidgetAttribute arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1736
// [8] const char * qt_getEnumName(Qt::ToolButtonStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15ToolButtonStyleE_29(Qt::ToolButtonStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1773
// [8] const char * qt_getEnumName(Qt::ShortcutContext)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15ShortcutContextE_30(Qt::ShortcutContext arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1732
// [8] const char * qt_getEnumName(Qt::ScrollBarPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15ScrollBarPolicyE_31(Qt::ScrollBarPolicy arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1749
// [8] const char * qt_getEnumName(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15LayoutDirectionE_32(Qt::LayoutDirection arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1794
// [8] const char * qt_getEnumName(Qt::InputMethodHint)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15InputMethodHintE_33(Qt::InputMethodHint arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1809
// [8] const char * qt_getEnumName(Qt::CursorMoveStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15CursorMoveStyleE_34(Qt::CursorMoveStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1782
// [8] const char * qt_getEnumName(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15CaseSensitivityE_35(Qt::CaseSensitivity arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1769
// [8] const char * qt_getEnumName(Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_15AspectRatioModeE_36(Qt::AspectRatioMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1788
// [8] const char * qt_getEnumName(Qt::WindowModality)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_14WindowModalityE_37(Qt::WindowModality arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1813
// [8] const char * qt_getEnumName(Qt::MouseEventFlag)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_14MouseEventFlagE_38(Qt::MouseEventFlag arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1760
// [8] const char * qt_getEnumName(Qt::DockWidgetArea)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_14DockWidgetAreaE_39(Qt::DockWidgetArea arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1802
// [8] const char * qt_getEnumName(Qt::ConnectionType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_14ConnectionTypeE_40(Qt::ConnectionType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1763
// [8] const char * qt_getEnumName(Qt::TextElideMode)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_13TextElideModeE_41(Qt::TextElideMode arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1744
// [8] const char * qt_getEnumName(Qt::ClipOperation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_13ClipOperationE_42(Qt::ClipOperation arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1739
// [8] const char * qt_getEnumName(Qt::PenJoinStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_12PenJoinStyleE_43(Qt::PenJoinStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1780
// [8] const char * qt_getEnumName(Qt::ItemDataRole)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_12ItemDataRoleE_44(Qt::ItemDataRole arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1805
// [8] const char * qt_getEnumName(Qt::GestureState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_12GestureStateE_45(Qt::GestureState arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1797
// [8] const char * qt_getEnumName(Qt::EnterKeyType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_12EnterKeyTypeE_46(Qt::EnterKeyType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1814
// [8] const char * qt_getEnumName(Qt::ChecksumType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_12ChecksumTypeE_47(Qt::ChecksumType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1787
// [8] const char * qt_getEnumName(Qt::WindowState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11WindowStateE_48(Qt::WindowState arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1761
// [8] const char * qt_getEnumName(Qt::ToolBarArea)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11ToolBarAreaE_49(Qt::ToolBarArea arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1811
// [8] const char * qt_getEnumName(Qt::ScrollPhase)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11ScrollPhaseE_50(Qt::ScrollPhase arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1738
// [8] const char * qt_getEnumName(Qt::PenCapStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11PenCapStyleE_51(Qt::PenCapStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1751
// [8] const char * qt_getEnumName(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11OrientationE_52(Qt::Orientation arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1768
// [8] const char * qt_getEnumName(Qt::GlobalColor)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11GlobalColorE_53(Qt::GlobalColor arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1806
// [8] const char * qt_getEnumName(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11GestureTypeE_54(Qt::GestureType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1793
// [8] const char * qt_getEnumName(Qt::FocusReason)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11FocusReasonE_55(Qt::FocusReason arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1733
// [8] const char * qt_getEnumName(Qt::FocusPolicy)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11FocusPolicyE_56(Qt::FocusPolicy arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1767
// [8] const char * qt_getEnumName(Qt::CursorShape)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_11CursorShapeE_57(Qt::CursorShape arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1786
// [8] const char * qt_getEnumName(Qt::WindowType)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10WindowTypeE_58(Qt::WindowType arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1762
// [8] const char * qt_getEnumName(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10TextFormatE_59(Qt::TextFormat arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1752
// [8] const char * qt_getEnumName(Qt::DropAction)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10DropActionE_60(Qt::DropAction arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1764
// [8] const char * qt_getEnumName(Qt::DateFormat)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10DateFormatE_61(Qt::DateFormat arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1779
// [8] const char * qt_getEnumName(Qt::CheckState)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10CheckStateE_62(Qt::CheckState arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1740
// [8] const char * qt_getEnumName(Qt::BrushStyle)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameENS_10BrushStyleE_63(Qt::BrushStyle arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1783
// [8] const char * qt_getEnumName(Qt::MatchFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_9MatchFlagEE_64(QFlags<Qt::MatchFlag> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1778
// [8] const char * qt_getEnumName(Qt::ItemFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_8ItemFlagEE_65(QFlags<Qt::ItemFlag> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1757
// [8] const char * qt_getEnumName(Qt::Edges)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_4EdgeEE_66(QFlags<Qt::Edge> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1775
// [8] const char * qt_getEnumName(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_19TextInteractionFlagEE_67(QFlags<Qt::TextInteractionFlag> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1771
// [8] const char * qt_getEnumName(Qt::ImageConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_19ImageConversionFlagEE_68(QFlags<Qt::ImageConversionFlag> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1801
// [8] const char * qt_getEnumName(Qt::ScreenOrientations)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_17ScreenOrientationEE_69(QFlags<Qt::ScreenOrientation> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1784
// [8] const char * qt_getEnumName(Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_16KeyboardModifierEE_70(QFlags<Qt::KeyboardModifier> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1798
// [8] const char * qt_getEnumName(Qt::InputMethodQueries)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_16InputMethodQueryEE_71(QFlags<Qt::InputMethodQuery> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1799
// [8] const char * qt_getEnumName(Qt::TouchPointStates)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_15TouchPointStateEE_72(QFlags<Qt::TouchPointState> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1796
// [8] const char * qt_getEnumName(Qt::InputMethodHints)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_15InputMethodHintEE_73(QFlags<Qt::InputMethodHint> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1758
// [8] const char * qt_getEnumName(Qt::DockWidgetAreas)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_14DockWidgetAreaEE_74(QFlags<Qt::DockWidgetArea> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1753
// [8] const char * qt_getEnumName(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_13AlignmentFlagEE_75(QFlags<Qt::AlignmentFlag> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1792
// [8] const char * qt_getEnumName(Qt::WindowStates)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_11WindowStateEE_76(QFlags<Qt::WindowState> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1759
// [8] const char * qt_getEnumName(Qt::ToolBarAreas)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_11ToolBarAreaEE_77(QFlags<Qt::ToolBarArea> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1755
// [8] const char * qt_getEnumName(Qt::Orientations)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_11OrientationEE_78(QFlags<Qt::Orientation> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1785
// [8] const char * qt_getEnumName(Qt::MouseButtons)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_11MouseButtonEE_79(QFlags<Qt::MouseButton> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1791
// [8] const char * qt_getEnumName(Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_10WindowTypeEE_80(QFlags<Qt::WindowType> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1756
// [8] const char * qt_getEnumName(Qt::DropActions)
extern "C" Q_DECL_EXPORT
void* C_ZN2Qt14qt_getEnumNameE6QFlagsINS_10DropActionEE_81(QFlags<Qt::DropAction> arg0) {
  return (void*)Qt::qt_getEnumName(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:587
// [4] uint qt_builtin_popcountll(quint64)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate21qt_builtin_popcountllEy(quint64 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_popcountll(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:582
// [4] uint qt_builtin_popcount(quint16)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate19qt_builtin_popcountEt(quint16 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_popcount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:574
// [4] uint qt_builtin_popcount(quint32)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate19qt_builtin_popcountEj_1(quint32 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_popcount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:578
// [4] uint qt_builtin_popcount(quint8)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate19qt_builtin_popcountEh_2(quint8 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_popcount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:564
// [4] uint qt_builtin_ctzll(quint64)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate16qt_builtin_ctzllEy(quint64 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_ctzll(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:569
// [4] uint qt_builtin_clzll(quint64)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate16qt_builtin_clzllEy(quint64 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_clzll(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:536
// [4] uint qt_builtin_ctzs(quint16)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate15qt_builtin_ctzsEt(quint16 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_ctzs(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:545
// [4] uint qt_builtin_clzs(quint16)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate15qt_builtin_clzsEt(quint16 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_clzs(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:554
// [4] uint qt_builtin_ctz(quint32)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate14qt_builtin_ctzEj(quint32 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_ctz(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:559
// [4] uint qt_builtin_clz(quint32)
extern "C" Q_DECL_EXPORT
uint C_ZN18QAlgorithmsPrivate14qt_builtin_clzEj(quint32 v) {
  return (uint)QAlgorithmsPrivate::qt_builtin_clz(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:288
// [16] QSharedPointer<QObject> sharedPointerFromVariant_internal(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer33sharedPointerFromVariant_internalERK8QVariant(QVariant* variant) {
  auto rv = QtSharedPointer::sharedPointerFromVariant_internal(*variant);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:287
// [16] QWeakPointer<QObject> weakPointerFromVariant_internal(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer31weakPointerFromVariant_internalERK8QVariant(QVariant* variant) {
  auto rv = QtSharedPointer::weakPointerFromVariant_internal(*variant);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:115
// [-2] void internalSafetyCheckRemove(const void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer25internalSafetyCheckRemoveEPKv(const void * arg0) {
  QtSharedPointer::internalSafetyCheckRemove(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:114
// [-2] void internalSafetyCheckAdd(const void *, const volatile void *)
extern "C" Q_DECL_EXPORT
void C_ZN15QtSharedPointer22internalSafetyCheckAddEPKvPVKv(const void * arg0, const volatile void * arg1) {
  QtSharedPointer::internalSafetyCheckAdd(arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:92
// [4] int qstrcmp(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZL7qstrcmpPKcRK10QByteArray(const char * str1, QByteArray* str2) {
  return (int)qstrcmp(str1, *str2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:868
// [1] bool qIsNull(float)
extern "C" Q_DECL_EXPORT
bool C_ZL7qIsNullf(float f) {
  return (bool)qIsNull(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:852
// [1] bool qIsNull(double)
extern "C" Q_DECL_EXPORT
bool C_ZL7qIsNulld_1(double d) {
  return (bool)qIsNull(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:832
// [1] bool qFuzzyCompare(float, float)
extern "C" Q_DECL_EXPORT
bool C_ZL13qFuzzyCompareff(float p1, float p2) {
  return (bool)qFuzzyCompare(p1, p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:827
// [1] bool qFuzzyCompare(double, double)
extern "C" Q_DECL_EXPORT
bool C_ZL13qFuzzyComparedd_1(double p1, double p2) {
  return (bool)qFuzzyCompare(p1, p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:842
// [1] bool qFuzzyIsNull(float)
extern "C" Q_DECL_EXPORT
bool C_ZL12qFuzzyIsNullf(float f) {
  return (bool)qFuzzyIsNull(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:837
// [1] bool qFuzzyIsNull(double)
extern "C" Q_DECL_EXPORT
bool C_ZL12qFuzzyIsNulld_1(double d) {
  return (bool)qFuzzyIsNull(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1162
// [1] bool qunsetenv(const char *)
extern "C" Q_DECL_EXPORT
bool C_Z9qunsetenvPKc(const char * varName) {
  return (bool)qunsetenv(varName);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:776
// [-2] void qt_assert(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void C_Z9qt_assertPKcS0_i(const char * assertion, const char * file, int line) {
  qt_assert(assertion, file, line);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:102
// [4] int qstrnicmp(const char *, qsizetype, const char *, qsizetype)
extern "C" Q_DECL_EXPORT
int C_Z9qstrnicmpPKcxS0_x(const char * arg0, qsizetype arg1, const char * arg2, qsizetype arg3) {
  return (int)qstrnicmp(arg0, arg1, arg2, arg3);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:101
// [4] int qstrnicmp(const char *, const char *, uint)
extern "C" Q_DECL_EXPORT
int C_Z9qstrnicmpPKcS0_j_1(const char * arg0, const char * arg1, uint len_) {
  return (int)qstrnicmp(arg0, arg1, len_);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:106
// [4] int qsnprintf(char *, size_t, const char *, ...)
extern "C" Q_DECL_EXPORT
int C_Z9qsnprintfPcmPKcz(char * str, size_t n, const char * fmt_) {
  return (int)qsnprintf(str, n, fmt_);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:53
// [1] bool qIsFinite(float)
extern "C" Q_DECL_EXPORT
bool C_Z9qIsFinitef(float f) {
  return (bool)qIsFinite(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:50
// [1] bool qIsFinite(double)
extern "C" Q_DECL_EXPORT
bool C_Z9qIsFinited_1(double d) {
  return (bool)qIsFinite(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:96
// [1] bool qIsFinite(qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z9qIsFinite8qfloat16_2(qfloat16* f) {
  return (bool)qIsFinite(*f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:70
// [4] uint qHashBits(const void *, size_t, uint)
extern "C" Q_DECL_EXPORT
uint C_Z9qHashBitsPKvmj(const void * p, size_t size, uint seed) {
  return (uint)qHashBits(p, size, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:702
// [8] QByteArray qCompress(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
void* C_Z9qCompressRK10QByteArrayi(QByteArray* data, int compressionLevel) {
  auto rv = qCompress(*data, compressionLevel);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:700
// [8] QByteArray qCompress(const uchar *, int, int)
extern "C" Q_DECL_EXPORT
void* C_Z9qCompressPKhii_1(const uchar * data, int nbytes, int compressionLevel) {
  auto rv = qCompress(data, nbytes, compressionLevel);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:110
// [2] quint16 qChecksum(const char *, uint, Qt::ChecksumType)
extern "C" Q_DECL_EXPORT
quint16 C_Z9qChecksumPKcjN2Qt12ChecksumTypeE(const char * s, uint len_, Qt::ChecksumType standard) {
  return (quint16)qChecksum(s, len_, standard);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:109
// [2] quint16 qChecksum(const char *, uint)
extern "C" Q_DECL_EXPORT
quint16 C_Z9qChecksumPKcj_1(const char * s, uint len_) {
  return (quint16)qChecksum(s, len_);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:806
// [-2] void qBadAlloc()
extern "C" Q_DECL_EXPORT
void C_Z9qBadAllocv() {
  qBadAlloc();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:242
// [16] QTextStream & forcesign(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z9forcesignR11QTextStream(QTextStream* s) {
  auto& rv = forcesign(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:241
// [16] QTextStream & showbase(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z8showbaseR11QTextStream(QTextStream* s) {
  auto& rv = showbase(*s);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:76
// [4] uint qstrnlen(const char *, uint)
extern "C" Q_DECL_EXPORT
uint C_Z8qstrnlenPKcj(const char * str, uint maxlen) {
  return (uint)qstrnlen(str, maxlen);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:87
// [8] char * qstrncpy(char *, const char *, uint)
extern "C" Q_DECL_EXPORT
void* C_Z8qstrncpyPcPKcj(char * dst, const char * src, uint len_) {
  return (void*)qstrncpy(dst, src, len_);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:95
// [4] int qstrncmp(const char *, const char *, uint)
extern "C" Q_DECL_EXPORT
int C_Z8qstrncmpPKcS0_j(const char * str1, const char * str2, uint len_) {
  return (int)qstrncmp(str1, str2, len_);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:100
// [4] int qstricmp(const char *, const char *)
extern "C" Q_DECL_EXPORT
int C_Z8qstricmpPKcS0_(const char * arg0, const char * arg1) {
  return (int)qstricmp(arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:590
// [8] qint64 qRound64(float)
extern "C" Q_DECL_EXPORT
qint64 C_Z8qRound64f(float d) {
  return (qint64)qRound64(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:588
// [8] qint64 qRound64(double)
extern "C" Q_DECL_EXPORT
qint64 C_Z8qRound64d_1(double d) {
  return (qint64)qRound64(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:102
// [8] qint64 qRound64(qfloat16)
extern "C" Q_DECL_EXPORT
qint64 C_Z8qRound648qfloat16_2(qfloat16* d) {
  return (qint64)qRound64(*d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1169
// [4] int qIntCast(float)
extern "C" Q_DECL_EXPORT
int C_Z8qIntCastf(float f) {
  return (int)qIntCast(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1168
// [4] int qIntCast(double)
extern "C" Q_DECL_EXPORT
int C_Z8qIntCastd_1(double f) {
  return (int)qIntCast(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:123
// [4] int qIntCast(qfloat16)
extern "C" Q_DECL_EXPORT
int C_Z8qIntCast8qfloat16_2(qfloat16* f) {
  return (int)qIntCast(*f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:206
// [8] qreal qFastSin(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z8qFastSind(qreal x) {
  return (qreal)qFastSin(x);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:216
// [8] qreal qFastCos(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z8qFastCosd(qreal x) {
  return (qreal)qFastCos(x);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:253
// [8] QString qAppName()
extern "C" Q_DECL_EXPORT
void* C_Z8qAppNamev() {
  auto rv = qAppName();
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:693
// [-2] void qt_noop()
extern "C" Q_DECL_EXPORT
void C_Z7qt_noopv() {
  qt_noop();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:105
// [4] uint qt_hash(QStringView, uint)
extern "C" Q_DECL_EXPORT
uint C_Z7qt_hash11QStringViewj(QStringView* key, uint chained) {
  return (uint)qt_hash(*key, chained);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:73
// [4] uint qstrlen(const char *)
extern "C" Q_DECL_EXPORT
uint C_Z7qstrlenPKc(const char * str) {
  return (uint)qstrlen(str);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:71
// [8] char * qstrdup(const char *)
extern "C" Q_DECL_EXPORT
void* C_Z7qstrdupPKc(const char * arg0) {
  return (void*)qstrdup(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:86
// [8] char * qstrcpy(char *, const char *)
extern "C" Q_DECL_EXPORT
void* C_Z7qstrcpyPcPKc(char * dst, const char * src) {
  return (void*)qstrcpy(dst, src);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:90
// [4] int qstrcmp(const QByteArray &, const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_Z7qstrcmpRK10QByteArrayS1__1(QByteArray* str1, QByteArray* str2) {
  return (int)qstrcmp(*str1, *str2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:91
// [4] int qstrcmp(const QByteArray &, const char *)
extern "C" Q_DECL_EXPORT
int C_Z7qstrcmpRK10QByteArrayPKc_2(QByteArray* str1, const char * str2) {
  return (int)qstrcmp(*str1, str2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:89
// [4] int qstrcmp(const char *, const char *)
extern "C" Q_DECL_EXPORT
int C_Z7qstrcmpPKcS0__3(const char * str1, const char * str2) {
  return (int)qstrcmp(str1, str2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1161
// [1] bool qputenv(const char *, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_Z7qputenvPKcRK10QByteArray(const char * varName, QByteArray* value) {
  return (bool)qputenv(varName, *value);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1157
// [8] QByteArray qgetenv(const char *)
extern "C" Q_DECL_EXPORT
void* C_Z7qgetenvPKc(const char * varName) {
  auto rv = qgetenv(varName);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:118
// [1] bool qIsNull(qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z7qIsNull8qfloat16_2(qfloat16* f) {
  return (bool)qIsNull(*f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1074
// [8] QString qtTrId(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_Z6qtTrIdPKci(const char * id, int n) {
  auto rv = qtTrId(id, n);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1174
// [-2] void qsrand(uint)
extern "C" Q_DECL_EXPORT
void C_Z6qsrandj(uint seed) {
  qsrand(seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:585
// [4] int qRound(float)
extern "C" Q_DECL_EXPORT
int C_Z6qRoundf(float d) {
  return (int)qRound(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:583
// [4] int qRound(double)
extern "C" Q_DECL_EXPORT
int C_Z6qRoundd_1(double d) {
  return (int)qRound(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:99
// [4] int qRound(qfloat16)
extern "C" Q_DECL_EXPORT
int C_Z6qRound8qfloat16_2(qfloat16* d) {
  return (int)qRound(*d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:52
// [1] bool qIsNaN(float)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsNaNf(float f) {
  return (bool)qIsNaN(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:49
// [1] bool qIsNaN(double)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsNaNd_1(double d) {
  return (bool)qIsNaN(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:95
// [1] bool qIsNaN(qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsNaN8qfloat16_2(qfloat16* f) {
  return (bool)qIsNaN(*f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:51
// [1] bool qIsInf(float)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsInff(float f) {
  return (bool)qIsInf(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:48
// [1] bool qIsInf(double)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsInfd_1(double d) {
  return (bool)qIsInf(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:94
// [1] bool qIsInf(qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z6qIsInf8qfloat16_2(qfloat16* f) {
  return (bool)qIsInf(*f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:74
// [4] int qFloor(qreal)
extern "C" Q_DECL_EXPORT
int C_Z6qFloord(qreal v) {
  return (int)qFloor(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:122
// [8] qreal qAtan2(qreal, qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z6qAtan2dd(qreal y, qreal x) {
  return (qreal)qAtan2(y, x);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:258
// [16] QTextStream & center(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z6centerR11QTextStream(QTextStream* s) {
  auto& rv = center(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:257
// [16] QTextStream & right(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z5rightR11QTextStream(QTextStream* s) {
  auto& rv = right(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:262
// [16] QTextStream & reset(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z5resetR11QTextStream(QTextStream* s) {
  auto& rv = reset(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1175
// [4] int qrand()
extern "C" Q_DECL_EXPORT
int C_Z5qrandv() {
  return (int)qrand();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:128
// [8] qreal qSqrt(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z5qSqrtd(qreal v) {
  return (qreal)qSqrt(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:54
// [8] double qSNaN()
extern "C" Q_DECL_EXPORT
double C_Z5qSNaNv() {
  return (double)qSNaN();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:55
// [8] double qQNaN()
extern "C" Q_DECL_EXPORT
double C_Z5qQNaNv() {
  return (double)qQNaN();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:86
// [4] uint qHash(quint64, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashyj(quint64 key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:90
// [4] uint qHash(qint64, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashxj_1(qint64 key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:75
// [4] uint qHash(ushort, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashtj_2(ushort key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:76
// [4] uint qHash(short, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashsj_3(short key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:79
// [4] uint qHash(ulong, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashmj_4(ulong key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:85
// [4] uint qHash(long, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashlj_5(long key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:77
// [4] uint qHash(uint, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashjj_6(uint key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:78
// [4] uint qHash(int, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashij_7(int key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:73
// [4] uint qHash(uchar, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashhj_8(uchar key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:91
// [4] uint qHash(float, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashfj_9(float key, uint seed) {
  return (uint)qHash(key, seed);
}

#ifndef Q_OS_DARWIN
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:94
// [4] uint qHash(long double, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashej_10(long double key, uint seed) {
  return (uint)qHash(key, seed);
}
#endif

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:92
// [4] uint qHash(double, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashdj_11(double key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:72
// [4] uint qHash(char, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashcj_12(char key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:74
// [4] uint qHash(signed char, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashaj_13(signed char key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:53
// [4] uint qHash(const QUrlQuery &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK9QUrlQueryj_14(QUrlQuery* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:58
// [4] uint qHash(const QMimeType &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK9QMimeTypej_15(QMimeType* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:412
// [4] uint qHash(const QDateTime &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK9QDateTimej_16(QDateTime* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:103
// [4] uint qHash(const QBitArray &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK9QBitArrayj_17(QBitArray* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:349
// [4] uint qHash(const QCborMap &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK8QCborMapj_18(QCborMap* map_, uint seed) {
  return (uint)qHash(*map_, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:99
// [4] uint qHash(const QString &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK7QStringj_19(QString* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:56
// [4] uint qHash(const QRegExp &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK7QRegExpj_20(QRegExp* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:62
// [4] uint qHash(const QLocale &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK7QLocalej_21(QLocale* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:246
// [4] uint qHash(const QUuid &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK5QUuidj_22(QUuid* uuid, uint seed) {
  return (uint)qHash(*uuid, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:414
// [4] uint qHash(const QTime &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK5QTimej_23(QTime* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:413
// [4] uint qHash(const QDate &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK5QDatej_24(QDate* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:122
// [4] uint qHash(const QUrl &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK4QUrlj_25(QUrl* url, uint seed) {
  return (uint)qHash(*url, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:106
// [4] uint qHash(const QPersistentModelIndex &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK21QPersistentModelIndexj_26(QPersistentModelIndex* index, uint seed) {
  return (uint)qHash(*index, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:153
// [4] uint qHash(const QPersistentModelIndex &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK21QPersistentModelIndexj_27(QPersistentModelIndex* index, uint seed) {
  return (uint)qHash(*index, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:229
// [4] uint qHash(const QItemSelectionRange &)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK19QItemSelectionRange_28(QItemSelectionRange* arg0) {
  return (uint)qHash(*arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:62
// [4] uint qHash(const QRegularExpression &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK18QRegularExpressionj_29(QRegularExpression* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:54
// [4] uint qHash(const QVersionNumber &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK14QVersionNumberj_30(QVersionNumber* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:463
// [4] uint qHash(const QModelIndex &)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK11QModelIndex_31(QModelIndex* index) {
  return (uint)qHash(*index);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:265
// [4] uint qHash(const QJsonObject &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK11QJsonObjectj_32(QJsonObject* object, uint seed) {
  return (uint)qHash(*object, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:100
// [4] uint qHash(const QStringRef &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QStringRefj_33(QStringRef* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:250
// [4] uint qHash(const QJsonValue &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QJsonValuej_34(QJsonValue* value, uint seed) {
  return (uint)qHash(*value, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:268
// [4] uint qHash(const QJsonArray &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QJsonArrayj_35(QJsonArray* array, uint seed) {
  return (uint)qHash(*array, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:454
// [4] uint qHash(const QCborValue &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QCborValuej_36(QCborValue* value, uint seed) {
  return (uint)qHash(*value, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:295
// [4] uint qHash(const QCborArray &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QCborArrayj_37(QCborArray* array, uint seed) {
  return (uint)qHash(*array, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:97
// [4] uint qHash(const QByteArray &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK10QByteArrayj_38(QByteArray* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:107
// [4] uint qHash(std::nullptr_t, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashDnj_39(std::nullptr_t arg0, uint seed) {
  return (uint)qHash(arg0, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:96
// [4] uint qHash(const QChar, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHash5QCharj_40(const QChar* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:104
// [4] uint qHash(QLatin1String, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHash13QLatin1Stringj_41(QLatin1String* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:102
// [4] uint qHash(QStringView, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHash11QStringViewj_42(QStringView* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:80
// [8] qreal qFabs(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z5qFabsd(qreal v) {
  return (qreal)qFabs(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:68
// [4] int qCeil(qreal)
extern "C" Q_DECL_EXPORT
int C_Z5qCeild(qreal v) {
  return (int)qCeil(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:116
// [8] qreal qAtan(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z5qAtand(qreal v) {
  return (qreal)qAtan(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:110
// [8] qreal qAsin(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z5qAsind(qreal v) {
  return (qreal)qAsin(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:104
// [8] qreal qAcos(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z5qAcosd(qreal v) {
  return (qreal)qAcos(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:261
// [16] QTextStream & flush(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z5flushR11QTextStream(QTextStream* s) {
  auto& rv = flush(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:253
// [16] QTextStream & fixed(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z5fixedR11QTextStream(QTextStream* s) {
  auto& rv = fixed(*s);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:112
// [-2] void swap(QUrlQuery &, QUrlQuery &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QUrlQueryS0_(QUrlQuery* value1, QUrlQuery* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:177
// [-2] void swap(QTimeZone &, QTimeZone &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QTimeZoneS0__1(QTimeZone* value1, QTimeZone* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:129
// [-2] void swap(QMimeType &, QMimeType &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QMimeTypeS0__2(QMimeType* value1, QMimeType* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:157
// [-2] void swap(QFileInfo &, QFileInfo &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QFileInfoS0__3(QFileInfo* value1, QFileInfo* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:393
// [-2] void swap(QDateTime &, QDateTime &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QDateTimeS0__4(QDateTime* value1, QDateTime* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:128
// [-2] void swap(QCollator &, QCollator &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QCollatorS0__5(QCollator* value1, QCollator* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:175
// [-2] void swap(QBitArray &, QBitArray &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR9QBitArrayS0__6(QBitArray* value1, QBitArray* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:600
// [-2] void swap(QVariant &, QVariant &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR8QVariantS0__7(QVariant* value1, QVariant* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:332
// [-2] void swap(QCborMap &, QCborMap &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR8QCborMapS0__8(QCborMap* value1, QCborMap* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1419
// [-2] void swap(QString &, QString &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR7QStringS0__9(QString* value1, QString* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1098
// [-2] void swap(QLocale &, QLocale &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR7QLocaleS0__10(QLocale* value1, QLocale* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:174
// [-2] void swap(QDebug &, QDebug &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR6QDebugS0__11(QDebug* value1, QDebug* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:375
// [-2] void swap(QUrl &, QUrl &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR4QUrlS0__12(QUrl* value1, QUrl* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:233
// [-2] void swap(QDir &, QDir &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR4QDirS0__13(QDir* value1, QDir* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:283
// [-2] void swap(QRegularExpressionMatchIterator &, QRegularExpressionMatchIterator &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR31QRegularExpressionMatchIteratorS0__14(QRegularExpressionMatchIterator* value1, QRegularExpressionMatchIterator* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:245
// [-2] void swap(QRegularExpressionMatch &, QRegularExpressionMatch &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR23QRegularExpressionMatchS0__15(QRegularExpressionMatch* value1, QRegularExpressionMatch* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:151
// [-2] void swap(QPersistentModelIndex &, QPersistentModelIndex &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR21QPersistentModelIndexS0__16(QPersistentModelIndex* value1, QPersistentModelIndex* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:95
// [-2] void swap(QXmlStreamStringRef &, QXmlStreamStringRef &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR19QXmlStreamStringRefS0__17(QXmlStreamStringRef* value1, QXmlStreamStringRef* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:106
// [-2] void swap(QProcessEnvironment &, QProcessEnvironment &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR19QProcessEnvironmentS0__18(QProcessEnvironment* value1, QProcessEnvironment* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:166
// [-2] void swap(QRegularExpression &, QRegularExpression &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR18QRegularExpressionS0__19(QRegularExpression* value1, QRegularExpression* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:108
// [-2] void swap(QCommandLineOption &, QCommandLineOption &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR18QCommandLineOptionS0__20(QCommandLineOption* value1, QCommandLineOption* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:127
// [-2] void swap(QCollatorSortKey &, QCollatorSortKey &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR16QCollatorSortKeyS0__21(QCollatorSortKey* value1, QCollatorSortKey* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:265
// [-2] void swap(QItemSelection &, QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR14QItemSelectionS0__22(QItemSelection* value1, QItemSelection* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:196
// [-2] void swap(QDeadlineTimer &, QDeadlineTimer &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR14QDeadlineTimerS0__23(QDeadlineTimer* value1, QDeadlineTimer* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:169
// [-2] void swap(QJsonDocument &, QJsonDocument &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR13QJsonDocumentS0__24(QJsonDocument* value1, QJsonDocument* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:118
// [-2] void swap(QStorageInfo &, QStorageInfo &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR12QStorageInfoS0__25(QStorageInfo* value1, QStorageInfo* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:128
// [-2] void swap(QEasingCurve &, QEasingCurve &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR12QEasingCurveS0__26(QEasingCurve* value1, QEasingCurve* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:263
// [-2] void swap(QJsonObject &, QJsonObject &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR11QJsonObjectS0__27(QJsonObject* value1, QJsonObject* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:248
// [-2] void swap(QJsonValue &, QJsonValue &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR10QJsonValueS0__28(QJsonValue* value1, QJsonValue* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:266
// [-2] void swap(QJsonArray &, QJsonArray &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR10QJsonArrayS0__29(QJsonArray* value1, QJsonArray* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:319
// [-2] void swap(QCborValue &, QCborValue &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR10QCborValueS0__30(QCborValue* value1, QCborValue* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:278
// [-2] void swap(QCborArray &, QCborArray &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR10QCborArrayS0__31(QCborArray* value1, QCborArray* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:708
// [-2] void swap(QByteArray &, QByteArray &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR10QByteArrayS0__32(QByteArray* value1, QByteArray* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:98
// [8] qreal qTan(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z4qTand(qreal v) {
  return (qreal)qTan(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:86
// [8] qreal qSin(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z4qSind(qreal v) {
  return (qreal)qSin(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:146
// [8] qreal qPow(qreal, qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z4qPowdd(qreal x, qreal y) {
  return (qreal)qPow(x, y);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:56
// [8] double qInf()
extern "C" Q_DECL_EXPORT
double C_Z4qInfv() {
  return (double)qInf();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:140
// [8] qreal qExp(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z4qExpd(qreal v) {
  return (qreal)qExp(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:92
// [8] qreal qCos(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z4qCosd(qreal v) {
  return (qreal)qCos(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:256
// [16] QTextStream & left(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z4leftR11QTextStream(QTextStream* s) {
  auto& rv = left(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:260
// [16] QTextStream & endl(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z4endlR11QTextStream(QTextStream* s) {
  auto& rv = endl(*s);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:134
// [8] qreal qLn(qreal)
extern "C" Q_DECL_EXPORT
qreal C_Z3qLnd(qreal v) {
  return (qreal)qLn(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:237
// [16] QTextStream & oct(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z3octR11QTextStream(QTextStream* s) {
  auto& rv = oct(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:239
// [16] QTextStream & hex(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z3hexR11QTextStream(QTextStream* s) {
  auto& rv = hex(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:238
// [16] QTextStream & dec(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z3decR11QTextStream(QTextStream* s) {
  auto& rv = dec(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:264
// [16] QTextStream & bom(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z3bomR11QTextStream(QTextStream* s) {
  auto& rv = bom(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:236
// [16] QTextStream & bin(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z3binR11QTextStream(QTextStream* s) {
  auto& rv = bin(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:368
// [8] QDebug qt_QMetaEnum_flagDebugOperator(QDebug &, quint64, const QMetaObject *, const char *)
extern "C" Q_DECL_EXPORT
void* C_Z30qt_QMetaEnum_flagDebugOperatorR6QDebugyPK11QMetaObjectPKc(QDebug* dbg, quint64 value, const QMetaObject * meta, const char * name) {
  auto rv = qt_QMetaEnum_flagDebugOperator(*dbg, value, meta, name);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:345
// [-2] void qt_QMetaEnum_flagDebugOperator(QDebug &, size_t, int)
extern "C" Q_DECL_EXPORT
void C_Z30qt_QMetaEnum_flagDebugOperatorR6QDebugmi_1(QDebug* debug, size_t sizeofT, int value) {
  qt_QMetaEnum_flagDebugOperator(*debug, sizeofT, value);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:266
// [16] QTextStream & ws(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z2wsR11QTextStream(QTextStream* s) {
  auto& rv = ws(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:93
// [-2] void qRegisterStaticPluginFunction(QStaticPlugin)
extern "C" Q_DECL_EXPORT
void C_Z29qRegisterStaticPluginFunction13QStaticPlugin(QStaticPlugin* staticPlugin) {
  qRegisterStaticPluginFunction(*staticPlugin);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1166
// [4] int qEnvironmentVariableIntValue(const char *, bool *)
extern "C" Q_DECL_EXPORT
int C_Z28qEnvironmentVariableIntValuePKcPb(const char * varName, bool * ok) {
  return (int)qEnvironmentVariableIntValue(varName, ok);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1164
// [1] bool qEnvironmentVariableIsEmpty(const char *)
extern "C" Q_DECL_EXPORT
bool C_Z27qEnvironmentVariableIsEmptyPKc(const char * varName) {
  return (bool)qEnvironmentVariableIsEmpty(varName);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:367
// [8] QDebug qt_QMetaEnum_debugOperator(QDebug &, int, const QMetaObject *, const char *)
extern "C" Q_DECL_EXPORT
void* C_Z26qt_QMetaEnum_debugOperatorR6QDebugiPK11QMetaObjectPKc(QDebug* arg0, int value, const QMetaObject * meta, const char * name) {
  auto rv = qt_QMetaEnum_debugOperator(*arg0, value, meta, name);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1165
// [1] bool qEnvironmentVariableIsSet(const char *)
extern "C" Q_DECL_EXPORT
bool C_Z25qEnvironmentVariableIsSetPKc(const char * varName) {
  return (bool)qEnvironmentVariableIsSet(varName);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:87
// [-2] void qt_qFindChildren_helper(const QObject *, const QString &, const QMetaObject &, QList<void *> *, Qt::FindChildOptions)
extern "C" Q_DECL_EXPORT
void C_Z23qt_qFindChildren_helperPK7QObjectRK7QStringRK11QMetaObjectP5QListIPvE6QFlagsIN2Qt15FindChildOptionEE(const QObject * parent, QString* name, QMetaObject* mo, QList<void *> * list, QFlags<Qt::FindChildOption> options) {
  qt_qFindChildren_helper(parent, *name, *mo, list, options);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:89
// [-2] void qt_qFindChildren_helper(const QObject *, const QRegExp &, const QMetaObject &, QList<void *> *, Qt::FindChildOptions)
extern "C" Q_DECL_EXPORT
void C_Z23qt_qFindChildren_helperPK7QObjectRK7QRegExpRK11QMetaObjectP5QListIPvE6QFlagsIN2Qt15FindChildOptionEE_1(const QObject * parent, QRegExp* re, QMetaObject* mo, QList<void *> * list, QFlags<Qt::FindChildOption> options) {
  qt_qFindChildren_helper(parent, *re, *mo, list, options);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:91
// [-2] void qt_qFindChildren_helper(const QObject *, const QRegularExpression &, const QMetaObject &, QList<void *> *, Qt::FindChildOptions)
extern "C" Q_DECL_EXPORT
void C_Z23qt_qFindChildren_helperPK7QObjectRK18QRegularExpressionRK11QMetaObjectP5QListIPvE6QFlagsIN2Qt15FindChildOptionEE_2(const QObject * parent, QRegularExpression* re, QMetaObject* mo, QList<void *> * list, QFlags<Qt::FindChildOption> options) {
  qt_qFindChildren_helper(parent, *re, *mo, list, options);
}

// Invalid Visibility=Default Availability=Available
// ./bsheaders/QtCore/extra_export.h:12
// [1] bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *)
extern "C" Q_DECL_EXPORT
bool C_Z23qUnregisterResourceDataiPKhS0_S0_(int arg0, const unsigned char * arg1, const unsigned char * arg2, const unsigned char * arg3) {
  return (bool)qUnregisterResourceData(arg0, arg1, arg2, arg3);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:280
// [40] QTextStreamManipulator qSetRealNumberPrecision(int)
extern "C" Q_DECL_EXPORT
void C_Z23qSetRealNumberPrecisioni(int precision) {
  auto rv = qSetRealNumberPrecision(precision);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:58
// [1] unsigned char qPluginArchRequirements()
extern "C" Q_DECL_EXPORT
unsigned char C_Z23qPluginArchRequirementsv() {
  return (unsigned char)qPluginArchRequirements();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:198
// [8] QtMessageHandler qInstallMessageHandler(QtMessageHandler)
extern "C" Q_DECL_EXPORT
void C_Z22qInstallMessageHandlerPFv9QtMsgTypeRK18QMessageLogContextRK7QStringE(QtMessageHandler arg0) {
  auto rv = qInstallMessageHandler(arg0);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:796
// [4] uint qCountTrailingZeroBits(quint64)
extern "C" Q_DECL_EXPORT
uint C_Z22qCountTrailingZeroBitsy(quint64 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:780
// [4] uint qCountTrailingZeroBits(quint16)
extern "C" Q_DECL_EXPORT
uint C_Z22qCountTrailingZeroBitst_1(quint16 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:807
// [4] uint qCountTrailingZeroBits(unsigned long)
extern "C" Q_DECL_EXPORT
uint C_Z22qCountTrailingZeroBitsm_2(unsigned long v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:747
// [4] uint qCountTrailingZeroBits(quint32)
extern "C" Q_DECL_EXPORT
uint C_Z22qCountTrailingZeroBitsj_3(quint32 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:765
// [4] uint qCountTrailingZeroBits(quint8)
extern "C" Q_DECL_EXPORT
uint C_Z22qCountTrailingZeroBitsh_4(quint8 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid Visibility=Default Availability=Available
// ./bsheaders/QtCore/extra_export.h:11
// [1] bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *)
extern "C" Q_DECL_EXPORT
bool C_Z21qRegisterResourceDataiPKhS0_S0_(int arg0, const unsigned char * arg1, const unsigned char * arg2, const unsigned char * arg3) {
  return (bool)qRegisterResourceData(arg0, arg1, arg2, arg3);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:852
// [4] uint qCountLeadingZeroBits(quint64)
extern "C" Q_DECL_EXPORT
uint C_Z21qCountLeadingZeroBitsy(quint64 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:839
// [4] uint qCountLeadingZeroBits(quint16)
extern "C" Q_DECL_EXPORT
uint C_Z21qCountLeadingZeroBitst_1(quint16 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:867
// [4] uint qCountLeadingZeroBits(unsigned long)
extern "C" Q_DECL_EXPORT
uint C_Z21qCountLeadingZeroBitsm_2(unsigned long v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:812
// [4] uint qCountLeadingZeroBits(quint32)
extern "C" Q_DECL_EXPORT
uint C_Z21qCountLeadingZeroBitsj_3(quint32 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:827
// [4] uint qCountLeadingZeroBits(quint8)
extern "C" Q_DECL_EXPORT
uint C_Z21qCountLeadingZeroBitsh_4(quint8 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:93
// [8] QObject * qt_qFindChild_helper(const QObject *, const QString &, const QMetaObject &, Qt::FindChildOptions)
extern "C" Q_DECL_EXPORT
void* C_Z20qt_qFindChild_helperPK7QObjectRK7QStringRK11QMetaObject6QFlagsIN2Qt15FindChildOptionEE(const QObject * parent, QString* name, QMetaObject* mo, QFlags<Qt::FindChildOption> options) {
  return (void*)qt_qFindChild_helper(parent, *name, *mo, options);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1160
// [8] QString qEnvironmentVariable(const char *, const QString &)
extern "C" Q_DECL_EXPORT
void* C_Z20qEnvironmentVariablePKcRK7QString(const char * varName, QString* defaultValue) {
  auto rv = qEnvironmentVariable(varName, *defaultValue);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1159
// [8] QString qEnvironmentVariable(const char *)
extern "C" Q_DECL_EXPORT
void* C_Z20qEnvironmentVariablePKc_1(const char * varName) {
  auto rv = qEnvironmentVariable(varName);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:68
// [-2] void qSetGlobalQHashSeed(int)
extern "C" Q_DECL_EXPORT
void C_Z19qSetGlobalQHashSeedi(int newSeed) {
  qSetGlobalQHashSeed(newSeed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:467
// [8] const QMetaObject * qt_getQtMetaObject()
extern "C" Q_DECL_EXPORT
void* C_Z18qt_getQtMetaObjectv() {
  return (void*)qt_getQtMetaObject();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:53
// [8] const QMetaObject * qt_getQtMetaObject()
extern "C" Q_DECL_EXPORT
void* C_Z18qt_getQtMetaObjectv_1() {
  return (void*)qt_getQtMetaObject();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:200
// [-2] void qSetMessagePattern(const QString &)
extern "C" Q_DECL_EXPORT
void C_Z18qSetMessagePatternRK7QString(QString* messagePattern) {
  qSetMessagePattern(*messagePattern);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:252
// [-2] void qRemovePostRoutine(QtCleanUpFunction)
extern "C" Q_DECL_EXPORT
void C_Z18qRemovePostRoutinePFvvE(QtCleanUpFunction arg0) {
  qRemovePostRoutine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:186
// [-2] void qt_message_output(QtMsgType, const QMessageLogContext &, const QString &)
extern "C" Q_DECL_EXPORT
void C_Z17qt_message_output9QtMsgTypeRK18QMessageLogContextRK7QString(QtMsgType arg0, QMessageLogContext* context, QString* message) {
  qt_message_output(arg0, *context, *message);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:236
// [4] float qRadiansToDegrees(float)
extern "C" Q_DECL_EXPORT
float C_Z17qRadiansToDegreesf(float radians) {
  return (float)qRadiansToDegrees(radians);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:241
// [8] double qRadiansToDegrees(double)
extern "C" Q_DECL_EXPORT
double C_Z17qRadiansToDegreesd_1(double radians) {
  return (double)qRadiansToDegrees(radians);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:201
// [8] QString qFormatLogMessage(QtMsgType, const QMessageLogContext &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_Z17qFormatLogMessage9QtMsgTypeRK18QMessageLogContextRK7QString(QtMsgType type_, QMessageLogContext* context, QString* buf) {
  auto rv = qFormatLogMessage(type_, *context, *buf);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:92
// [-2] void qFloatFromFloat16(float *, const qfloat16 *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_Z17qFloatFromFloat16PfPK8qfloat16x(float * arg0, const qfloat16 * arg1, qsizetype length) {
  qFloatFromFloat16(arg0, arg1, length);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:226
// [4] float qDegreesToRadians(float)
extern "C" Q_DECL_EXPORT
float C_Z17qDegreesToRadiansf(float degrees) {
  return (float)qDegreesToRadians(degrees);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:231
// [8] double qDegreesToRadians(double)
extern "C" Q_DECL_EXPORT
double C_Z17qDegreesToRadiansd_1(double degrees) {
  return (double)qDegreesToRadians(degrees);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:804
// [-2] void qt_check_pointer(const char *, int)
extern "C" Q_DECL_EXPORT
void C_Z16qt_check_pointerPKci(const char * arg0, int arg1) {
  qt_check_pointer(arg0, arg1);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:722
// [4] uint qPopulationCount(quint64)
extern "C" Q_DECL_EXPORT
uint C_Z16qPopulationCounty(quint64 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:711
// [4] uint qPopulationCount(quint16)
extern "C" Q_DECL_EXPORT
uint C_Z16qPopulationCountt_1(quint16 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:737
// [4] uint qPopulationCount(unsigned long)
extern "C" Q_DECL_EXPORT
uint C_Z16qPopulationCountm_2(unsigned long v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:688
// [4] uint qPopulationCount(quint32)
extern "C" Q_DECL_EXPORT
uint C_Z16qPopulationCountj_3(quint32 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:701
// [4] uint qPopulationCount(quint8)
extern "C" Q_DECL_EXPORT
uint C_Z16qPopulationCounth_4(quint8 v) {
  return (uint)qPopulationCount(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:67
// [4] int qGlobalQHashSeed()
extern "C" Q_DECL_EXPORT
int C_Z16qGlobalQHashSeedv() {
  return (int)qGlobalQHashSeed();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:249
// [16] QTextStream & uppercasedigits(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z15uppercasedigitsR11QTextStream(QTextStream* s) {
  auto& rv = uppercasedigits(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:770
// [8] QString qt_error_string(int)
extern "C" Q_DECL_EXPORT
void* C_Z15qt_error_stringi(int errorCode) {
  auto rv = qt_error_string(errorCode);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:926
// [8] void * qReallocAligned(void *, size_t, size_t, size_t)
extern "C" Q_DECL_EXPORT
void* C_Z15qReallocAlignedPvmmm(void * ptr, size_t size, size_t oldsize, size_t alignment) {
  return (void*)qReallocAligned(ptr, size, oldsize, alignment);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:264
// [8] quint64 qNextPowerOfTwo(quint64)
extern "C" Q_DECL_EXPORT
quint64 C_Z15qNextPowerOfTwoy(quint64 v) {
  return (quint64)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:287
// [8] quint64 qNextPowerOfTwo(qint64)
extern "C" Q_DECL_EXPORT
quint64 C_Z15qNextPowerOfTwox_1(qint64 v) {
  return (quint64)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:247
// [4] quint32 qNextPowerOfTwo(quint32)
extern "C" Q_DECL_EXPORT
quint32 C_Z15qNextPowerOfTwoj_2(quint32 v) {
  return (quint32)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:282
// [4] quint32 qNextPowerOfTwo(qint32)
extern "C" Q_DECL_EXPORT
quint32 C_Z15qNextPowerOfTwoi_3(qint32 v) {
  return (quint32)qNextPowerOfTwo(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:91
// [-2] void qFloatToFloat16(qfloat16 *, const float *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_Z15qFloatToFloat16P8qfloat16PKfx(qfloat16 * arg0, const float * arg1, qsizetype length) {
  qFloatToFloat16(arg0, arg1, length);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:251
// [-2] void qAddPostRoutine(QtCleanUpFunction)
extern "C" Q_DECL_EXPORT
void C_Z15qAddPostRoutinePFvvE(QtCleanUpFunction arg0) {
  qAddPostRoutine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:251
// [16] QTextStream & lowercasedigits(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z15lowercasedigitsR11QTextStream(QTextStream* s) {
  auto& rv = lowercasedigits(*s);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:268
// [40] QTextStreamManipulator qSetFieldWidth(int)
extern "C" Q_DECL_EXPORT
void C_Z14qSetFieldWidthi(int width) {
  auto rv = qSetFieldWidth(width);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:925
// [8] void * qMallocAligned(size_t, size_t)
extern "C" Q_DECL_EXPORT
void* C_Z14qMallocAlignedmm(size_t size, size_t alignment) {
  return (void*)qMallocAligned(size, alignment);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:58
// [4] quint32 qFloatDistance(float, float)
extern "C" Q_DECL_EXPORT
quint32 C_Z14qFloatDistanceff(float a, float b) {
  return (quint32)qFloatDistance(a, b);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:59
// [8] quint64 qFloatDistance(double, double)
extern "C" Q_DECL_EXPORT
quint64 C_Z14qFloatDistancedd_1(double a, double b) {
  return (quint64)qFloatDistance(a, b);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:250
// [-2] void qAddPreRoutine(QtStartUpFunction)
extern "C" Q_DECL_EXPORT
void C_Z14qAddPreRoutinePFvvE(QtStartUpFunction arg0) {
  qAddPreRoutine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:248
// [16] QTextStream & uppercasebase(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z13uppercasebaseR11QTextStream(QTextStream* s) {
  auto& rv = uppercasebase(*s);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:105
// [1] bool qFuzzyCompare(qfloat16, qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z13qFuzzyCompare8qfloat16S__2(qfloat16* p1, qfloat16* p2) {
  return (bool)qFuzzyCompare(*p1, *p2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:256
// [8] const char * qFlagLocation(const char *)
extern "C" Q_DECL_EXPORT
void* C_Z13qFlagLocationPKc(const char * method) {
  return (void*)qFlagLocation(method);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:189
// [-2] void qErrnoWarning(int, const char *, ...)
extern "C" Q_DECL_EXPORT
void C_Z13qErrnoWarningiPKcz(int code, const char * msg) {
  qErrnoWarning(code, msg);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:190
// [-2] void qErrnoWarning(const char *, ...)
extern "C" Q_DECL_EXPORT
void C_Z13qErrnoWarningPKcz_1(const char * msg) {
  qErrnoWarning(msg);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:250
// [16] QTextStream & lowercasebase(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z13lowercasebaseR11QTextStream(QTextStream* s) {
  auto& rv = lowercasebase(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:733
// [1] bool qSharedBuild()
extern "C" Q_DECL_EXPORT
bool C_Z12qSharedBuildv() {
  return (bool)qSharedBuild();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:251
// [1] bool qFuzzyIsNull(qfloat16)
extern "C" Q_DECL_EXPORT
bool C_Z12qFuzzyIsNull8qfloat16_2(qfloat16* f) {
  return (bool)qFuzzyIsNull(*f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:927
// [-2] void qFreeAligned(void *)
extern "C" Q_DECL_EXPORT
void C_Z12qFreeAlignedPv(void * ptr) {
  qFreeAligned(ptr);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:246
// [16] QTextStream & noforcepoint(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z12noforcepointR11QTextStream(QTextStream* s) {
  auto& rv = noforcepoint(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:794
// [-2] void qt_assert_x(const char *, const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void C_Z11qt_assert_xPKcS0_S0_i(const char * where, const char * what, const char * file, int line) {
  qt_assert_x(where, what, file, line);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:704
// [8] QByteArray qUncompress(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_Z11qUncompressRK10QByteArray(QByteArray* data) {
  auto rv = qUncompress(*data);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:701
// [8] QByteArray qUncompress(const uchar *, int)
extern "C" Q_DECL_EXPORT
void* C_Z11qUncompressPKhi_1(const uchar * data, int nbytes) {
  auto rv = qUncompress(data, nbytes);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:274
// [40] QTextStreamManipulator qSetPadChar(QChar)
extern "C" Q_DECL_EXPORT
void C_Z11qSetPadChar5QChar(QChar* ch) {
  auto rv = qSetPadChar(*ch);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:245
// [16] QTextStream & noforcesign(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z11noforcesignR11QTextStream(QTextStream* s) {
  auto& rv = noforcesign(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:254
// [16] QTextStream & scientific(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z10scientificR11QTextStream(QTextStream* s) {
  auto& rv = scientific(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:105
// [4] int qvsnprintf(char *, size_t, const char *, __va_list_tag *)
extern "C" Q_DECL_EXPORT
int C_Z10qvsnprintfPcmPKcP13__va_list_tag(char * str, size_t n, const char * fmt_, va_list ap) {
  return (int)qvsnprintf(str, n, fmt_, ap);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:244
// [16] QTextStream & noshowbase(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z10noshowbaseR11QTextStream(QTextStream* s) {
  auto& rv = noshowbase(*s);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:243
// [16] QTextStream & forcepoint(QTextStream &)
extern "C" Q_DECL_EXPORT
void* C_Z10forcepointR11QTextStream(QTextStream* s) {
  auto& rv = forcepoint(*s);
return &rv;
}

//  main block end
