
#include <QtCore>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_core(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:227
// [16] QTextStream & operator>>(QTextStream &, QTextStreamFunction) 
// (12)qm2984433300 (27)_ZrsR11QTextStreamPFS0_S0_E
/*void qm2984433300(QTextStream & s, QTextStreamFunction f)*/ {
  QTextStream & s = *(QTextStream *)this_; QTextStreamFunction f = *(QTextStreamFunction*)this_;
  (void) operator>>(s, f);
  auto xptr = (QTextStream & (*)(QTextStream&, QTextStream& (*)(QTextStream&)) ) &operator>>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:471
// [32] QMarginsF operator+(const QMarginsF &) 
// (11)qm390233878 (16)_ZpsRK9QMarginsF
/*void qm390233878(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) operator+(margins);
  auto xptr = (QMarginsF (*)(QMarginsF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:267
// [16] QMargins operator+(const QMargins &) 
// (12)qm3989844413 (15)_ZpsRK8QMargins
/*void qm3989844413_1(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) operator+(margins);
  auto xptr = (QMargins (*)(QMargins const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:390
// [16] const QPointF operator+(const QPointF &) 
// (12)qm4237328298 (14)_ZpsRK7QPointF
/*void qm4237328298_2(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) operator+(p);
  auto xptr = (const QPointF (*)(QPointF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:195
// [8] const QPoint operator+(const QPoint &) 
// (12)qm2162863503 (13)_ZpsRK6QPoint
/*void qm2162863503_3(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) operator+(p);
  auto xptr = (const QPoint (*)(QPoint const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:171
// [16] QMargins operator+(int, const QMargins &) 
// (12)qm1951256613 (16)_ZpliRK8QMargins
/*void qm1951256613_4(int lhs, const QMargins & rhs)*/ {
  int lhs = *(int*)this_; const QMargins & rhs = *(const QMargins *)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QMargins (*)(int, QMargins const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:238
// [8] double operator+(int, qfloat16) 
// (12)qm1612945965 (14)_Zpli8qfloat16
/*void qm1612945965_5(int lhs, qfloat16 rhs)*/ {
  int lhs = *(int*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (double (*)(int, qfloat16) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator+(float, qfloat16) 
// (12)qm2435367328 (14)_Zplf8qfloat16
/*void qm2435367328_6(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (float (*)(float, qfloat16) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator+(long double, qfloat16) 
// (12)qm2048883363 (14)_Zple8qfloat16
/*void qm2048883363_7(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (long double (*)(long double, qfloat16) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:403
// [32] QMarginsF operator+(qreal, const QMarginsF &) 
// (12)qm2921568767 (17)_ZpldRK9QMarginsF
/*void qm2921568767_8(double lhs, const QMarginsF & rhs)*/ {
  double lhs = *(double*)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QMarginsF (*)(double, QMarginsF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator+(double, qfloat16) 
// (12)qm2514293149 (14)_Zpld8qfloat16
/*void qm2514293149_9(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (double (*)(double, qfloat16) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1537
// [8] const QString operator+(char, const QString &) 
// (12)qm1698233742 (15)_ZplcRK7QString
/*void qm1698233742_10(char c, const QString & s)*/ {
  char c = *(char*)this_; const QString & s = *(const QString *)this_;
  (void) operator+(c, s);
  auto xptr = (const QString (*)(char, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:729
// [8] const QByteArray operator+(char, const QByteArray &) 
// (11)qm544857774 (19)_ZplcRK10QByteArray
/*void qm544857774_11(char a1, const QByteArray & a2)*/ {
  char a1 = *(char*)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator+(a1, a2);
  auto xptr = (const QByteArray (*)(char, QByteArray const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:397
// [32] QMarginsF operator+(const QMarginsF &, qreal) 
// (12)qm1547187576 (17)_ZplRK9QMarginsFd
/*void qm1547187576_12(const QMarginsF & lhs, double rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; double rhs = *(double*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QMarginsF (*)(QMarginsF const&, double) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:385
// [32] QMarginsF operator+(const QMarginsF &, const QMarginsF &) 
// (12)qm3961635288 (19)_ZplRK9QMarginsFS1_
/*void qm3961635288_13(const QMarginsF & lhs, const QMarginsF & rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QMarginsF (*)(QMarginsF const&, QMarginsF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:883
// [32] QRectF operator+(const QMarginsF &, const QRectF &) 
// (10)qm15590110 (25)_ZplRK9QMarginsFRK6QRectF
/*void qm15590110_14(const QMarginsF & lhs, const QRectF & rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; const QRectF & rhs = *(const QRectF *)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QRectF (*)(QMarginsF const&, QRectF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:165
// [16] QMargins operator+(const QMargins &, int) 
// (12)qm3223739038 (16)_ZplRK8QMarginsi
/*void qm3223739038_15(const QMargins & lhs, int rhs)*/ {
  const QMargins & lhs = *(const QMargins *)this_; int rhs = *(int*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QMargins (*)(QMargins const&, int) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:153
// [16] QMargins operator+(const QMargins &, const QMargins &) 
// (11)qm835774006 (18)_ZplRK8QMarginsS1_
/*void qm835774006_16(const QMargins & m1, const QMargins & m2)*/ {
  const QMargins & m1 = *(const QMargins *)this_; const QMargins & m2 = *(const QMargins *)this_;
  (void) operator+(m1, m2);
  auto xptr = (QMargins (*)(QMargins const&, QMargins const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:470
// [16] QRect operator+(const QMargins &, const QRect &) 
// (12)qm1317900354 (23)_ZplRK8QMarginsRK5QRect
/*void qm1317900354_17(const QMargins & margins, const QRect & rectangle)*/ {
  const QMargins & margins = *(const QMargins *)this_; const QRect & rectangle = *(const QRect *)this_;
  (void) operator+(margins, rectangle);
  auto xptr = (QRect (*)(QMargins const&, QRect const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1539
// [8] const QString operator+(const QString &, char) 
// (10)qm33174209 (15)_ZplRK7QStringc
/*void qm33174209_18(const QString & s, char c)*/ {
  const QString & s = *(const QString *)this_; char c = *(char*)this_;
  (void) operator+(s, c);
  auto xptr = (const QString (*)(QString const&, char) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1526
// [8] const QString operator+(const QString &, const QString &) 
// (12)qm1108150989 (17)_ZplRK7QStringS1_
/*void qm1108150989_19(const QString & s1, const QString & s2)*/ {
  const QString & s1 = *(const QString *)this_; const QString & s2 = *(const QString *)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QString (*)(QString const&, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2052
// [8] QString operator+(const QString &, const QStringRef &) 
// (12)qm1246583475 (28)_ZplRK7QStringRK10QStringRef
/*void qm1246583475_20(const QString & s1, const QStringRef & s2)*/ {
  const QString & s1 = *(const QString *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QString const&, QStringRef const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1543
// [8] const QString operator+(const QString &, const QByteArray &) 
// (12)qm2342419832 (28)_ZplRK7QStringRK10QByteArray
/*void qm2342419832_21(const QString & s, const QByteArray & ba)*/ {
  const QString & s = *(const QString *)this_; const QByteArray & ba = *(const QByteArray *)this_;
  (void) operator+(s, ba);
  auto xptr = (const QString (*)(QString const&, QByteArray const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1533
// [8] const QString operator+(const QString &, const char *) 
// (12)qm3136575855 (17)_ZplRK7QStringPKc
/*void qm3136575855_22(const QString & s1, const char * s2)*/ {
  const QString & s1 = *(const QString *)this_; const char * s2 = *(const char **)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QString (*)(QString const&, char const*) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1528
// [8] const QString operator+(const QString &, QChar) 
// (11)qm991030071 (20)_ZplRK7QString5QChar
/*void qm991030071_23(const QString & s1, QChar s2)*/ {
  const QString & s1 = *(const QString *)this_; QChar s2 = *(QChar*)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QString (*)(QString const&, QChar) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:370
// [16] const QPointF operator+(const QPointF &, const QPointF &) 
// (11)qm273917057 (17)_ZplRK7QPointFS1_
/*void qm273917057_24(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) operator+(p1, p2);
  auto xptr = (const QPointF (*)(QPointF const&, QPointF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:356
// [16] const QSizeF operator+(const QSizeF &, const QSizeF &) 
// (12)qm3417679851 (16)_ZplRK6QSizeFS1_
/*void qm3417679851_25(const QSizeF & s1, const QSizeF & s2)*/ {
  const QSizeF & s1 = *(const QSizeF *)this_; const QSizeF & s2 = *(const QSizeF *)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QSizeF (*)(QSizeF const&, QSizeF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:877
// [32] QRectF operator+(const QRectF &, const QMarginsF &) 
// (12)qm1295664671 (25)_ZplRK6QRectFRK9QMarginsF
/*void qm1295664671_26(const QRectF & lhs, const QMarginsF & rhs)*/ {
  const QRectF & lhs = *(const QRectF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (QRectF (*)(QRectF const&, QMarginsF const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:171
// [8] const QPoint operator+(const QPoint &, const QPoint &) 
// (12)qm2388321340 (16)_ZplRK6QPointS1_
/*void qm2388321340_27(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) operator+(p1, p2);
  auto xptr = (const QPoint (*)(QPoint const&, QPoint const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:181
// [8] const QSize operator+(const QSize &, const QSize &) 
// (10)qm98504685 (15)_ZplRK5QSizeS1_
/*void qm98504685_28(const QSize & s1, const QSize & s2)*/ {
  const QSize & s1 = *(const QSize *)this_; const QSize & s2 = *(const QSize *)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QSize (*)(QSize const&, QSize const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:464
// [16] QRect operator+(const QRect &, const QMargins &) 
// (12)qm2694712873 (23)_ZplRK5QRectRK8QMargins
/*void qm2694712873_29(const QRect & rectangle, const QMargins & margins)*/ {
  const QRect & rectangle = *(const QRect *)this_; const QMargins & margins = *(const QMargins *)this_;
  (void) operator+(rectangle, margins);
  auto xptr = (QRect (*)(QRect const&, QMargins const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstringlist.h:303
// [8] QStringList operator+(const QList<QString> &, const QStringList &) 
// (12)qm1530907636 (37)_ZplRK5QListI7QStringERK11QStringList
/*void qm1530907636_30(const QList<QString> & one, const QStringList & other)*/ {
  const QList<QString> & one = *(const QList<QString> *)this_; const QStringList & other = *(const QStringList *)this_;
  (void) operator+(one, other);
  auto xptr = (QStringList (*)(QList<QString> const&, QStringList const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2060
// [8] QString operator+(const QStringRef &, const QStringRef &) 
// (12)qm2187585212 (21)_ZplRK10QStringRefS1_
/*void qm2187585212_31(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QStringRef const&, QStringRef const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2054
// [8] QString operator+(const QStringRef &, const QString &) 
// (11)qm123018332 (28)_ZplRK10QStringRefRK7QString
/*void qm123018332_32(const QStringRef & s1, const QString & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QString & s2 = *(const QString *)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QStringRef const&, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2062
// [8] QString operator+(const QStringRef &, QChar) 
// (11)qm920852783 (24)_ZplRK10QStringRef5QChar
/*void qm920852783_33(const QStringRef & s1, QChar s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; QChar s2 = *(QChar*)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QStringRef const&, QChar) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2056
// [8] QString operator+(const QStringRef &, QLatin1String) 
// (11)qm235322364 (33)_ZplRK10QStringRef13QLatin1String
/*void qm235322364_34(const QStringRef & s1, QLatin1String s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QStringRef const&, QLatin1String) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:725
// [8] const QByteArray operator+(const QByteArray &, char) 
// (11)qm912353213 (19)_ZplRK10QByteArrayc
/*void qm912353213_35(const QByteArray & a1, char a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; char a2 = *(char*)this_;
  (void) operator+(a1, a2);
  auto xptr = (const QByteArray (*)(QByteArray const&, char) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:721
// [8] const QByteArray operator+(const QByteArray &, const QByteArray &) 
// (12)qm3666259671 (21)_ZplRK10QByteArrayS1_
/*void qm3666259671_36(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator+(a1, a2);
  auto xptr = (const QByteArray (*)(QByteArray const&, QByteArray const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1541
// [8] const QString operator+(const QByteArray &, const QString &) 
// (12)qm2204296096 (28)_ZplRK10QByteArrayRK7QString
/*void qm2204296096_37(const QByteArray & ba, const QString & s)*/ {
  const QByteArray & ba = *(const QByteArray *)this_; const QString & s = *(const QString *)this_;
  (void) operator+(ba, s);
  auto xptr = (const QString (*)(QByteArray const&, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:723
// [8] const QByteArray operator+(const QByteArray &, const char *) 
// (11)qm578813301 (21)_ZplRK10QByteArrayPKc
/*void qm578813301_38(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator+(a1, a2);
  auto xptr = (const QByteArray (*)(QByteArray const&, char const*) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1535
// [8] const QString operator+(const char *, const QString &) 
// (12)qm2616539459 (17)_ZplPKcRK7QString
/*void qm2616539459_39(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QString (*)(char const*, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:727
// [8] const QByteArray operator+(const char *, const QByteArray &) 
// (11)qm380215537 (21)_ZplPKcRK10QByteArray
/*void qm380215537_40(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator+(a1, a2);
  auto xptr = (const QByteArray (*)(char const*, QByteArray const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:238
// [8] double operator+(qfloat16, int) 
// (11)qm174939024 (14)_Zpl8qfloat16i
/*void qm174939024_41(qfloat16 lhs, int rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; int rhs = *(int*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (double (*)(qfloat16, int) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator+(qfloat16, float) 
// (12)qm2597471745 (14)_Zpl8qfloat16f
/*void qm2597471745_42(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (float (*)(qfloat16, float) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator+(qfloat16, long double) 
// (10)qm64690107 (14)_Zpl8qfloat16e
/*void qm64690107_43(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (long double (*)(qfloat16, long double) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator+(qfloat16, double) 
// (12)qm1960585005 (14)_Zpl8qfloat16d
/*void qm1960585005_44(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator+(lhs, rhs);
  auto xptr = (double (*)(qfloat16, double) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:209
// [2] qfloat16 operator+(qfloat16, qfloat16) 
// (12)qm4235887502 (15)_Zpl8qfloat16S_
/*void qm4235887502_45(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator+(a, b);
  auto xptr = (qfloat16 (*)(qfloat16, qfloat16) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1530
// [8] const QString operator+(QChar, const QString &) 
// (12)qm2840614217 (20)_Zpl5QCharRK7QString
/*void qm2840614217_46(QChar s1, const QString & s2)*/ {
  QChar s1 = *(QChar*)this_; const QString & s2 = *(const QString *)this_;
  (void) operator+(s1, s2);
  auto xptr = (const QString (*)(QChar, QString const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2064
// [8] QString operator+(QChar, const QStringRef &) 
// (12)qm3803008054 (24)_Zpl5QCharRK10QStringRef
/*void qm3803008054_47(QChar s1, const QStringRef & s2)*/ {
  QChar s1 = *(QChar*)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QChar, QStringRef const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2058
// [8] QString operator+(QLatin1String, const QStringRef &) 
// (10)qm74604158 (33)_Zpl13QLatin1StringRK10QStringRef
/*void qm74604158_48(QLatin1String s1, const QStringRef & s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator+(s1, s2);
  auto xptr = (QString (*)(QLatin1String, QStringRef const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [2] qfloat16 & operator+=(qfloat16 &, float) 
// (11)qm538330031 (15)_ZpLR8qfloat16f
/*void qm538330031(qfloat16 & lhs, float rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; float rhs = *(float*)this_;
  (void) operator+=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, float) ) &operator+=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [2] qfloat16 & operator+=(qfloat16 &, long double) 
// (12)qm3105821205 (15)_ZpLR8qfloat16e
/*void qm3105821205_1(qfloat16 & lhs, long double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; long double rhs = *(long double*)this_;
  (void) operator+=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, long double) ) &operator+=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [2] qfloat16 & operator+=(qfloat16 &, double) 
// (12)qm3457688195 (15)_ZpLR8qfloat16d
/*void qm3457688195_2(qfloat16 & lhs, double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; double rhs = *(double*)this_;
  (void) operator+=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, double) ) &operator+=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:786
// [4] QIncompatibleFlag operator|(QMetaType::TypeFlags::enum_type, int) 
// (12)qm1591451100 (26)_ZorN9QMetaType8TypeFlagEi
/*void qm1591451100(QMetaType::TypeFlag f1, int f2)*/ {
  QMetaType::TypeFlag f1 = *(QMetaType::TypeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMetaType::TypeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:786
// [4] QFlags<QMetaType::TypeFlags::enum_type> operator|(QMetaType::TypeFlags::enum_type, QMetaType::TypeFlags::enum_type) 
// (12)qm4018418462 (28)_ZorN9QMetaType8TypeFlagES0_
/*void qm4018418462_1(QMetaType::TypeFlag f1, QMetaType::TypeFlag f2)*/ {
  QMetaType::TypeFlag f1 = *(QMetaType::TypeFlag*)this_; QMetaType::TypeFlag f2 = *(QMetaType::TypeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMetaType::TypeFlag> (*)(QMetaType::TypeFlag, QMetaType::TypeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetatype.h:786
// [4] QFlags<QMetaType::TypeFlags::enum_type> operator|(QMetaType::TypeFlags::enum_type, QFlags<QMetaType::TypeFlags::enum_type>) 
// (11)qm503714390 (37)_ZorN9QMetaType8TypeFlagE6QFlagsIS0_E
/*void qm503714390_2(QMetaType::TypeFlag f1, QFlags<QMetaType::TypeFlag> f2)*/ {
  QMetaType::TypeFlag f1 = *(QMetaType::TypeFlag*)this_; QFlags<QMetaType::TypeFlag> f2 = *(QFlags<QMetaType::TypeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMetaType::TypeFlag> (*)(QMetaType::TypeFlag, QFlags<QMetaType::TypeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QIncompatibleFlag operator|(QIODevice::OpenMode::enum_type, int) 
// (12)qm4095788413 (31)_ZorN9QIODevice12OpenModeFlagEi
/*void qm4095788413_3(QIODevice::OpenModeFlag f1, int f2)*/ {
  QIODevice::OpenModeFlag f1 = *(QIODevice::OpenModeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QIODevice::OpenModeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QFlags<QIODevice::OpenMode::enum_type> operator|(QIODevice::OpenMode::enum_type, QIODevice::OpenMode::enum_type) 
// (12)qm1026084235 (33)_ZorN9QIODevice12OpenModeFlagES0_
/*void qm1026084235_4(QIODevice::OpenModeFlag f1, QIODevice::OpenModeFlag f2)*/ {
  QIODevice::OpenModeFlag f1 = *(QIODevice::OpenModeFlag*)this_; QIODevice::OpenModeFlag f2 = *(QIODevice::OpenModeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QIODevice::OpenModeFlag> (*)(QIODevice::OpenModeFlag, QIODevice::OpenModeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:185
// [4] QFlags<QIODevice::OpenMode::enum_type> operator|(QIODevice::OpenMode::enum_type, QFlags<QIODevice::OpenMode::enum_type>) 
// (12)qm2870482785 (42)_ZorN9QIODevice12OpenModeFlagE6QFlagsIS0_E
/*void qm2870482785_5(QIODevice::OpenModeFlag f1, QFlags<QIODevice::OpenModeFlag> f2)*/ {
  QIODevice::OpenModeFlag f1 = *(QIODevice::OpenModeFlag*)this_; QFlags<QIODevice::OpenModeFlag> f2 = *(QFlags<QIODevice::OpenModeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QIODevice::OpenModeFlag> (*)(QIODevice::OpenModeFlag, QFlags<QIODevice::OpenModeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QIncompatibleFlag operator|(QLibrary::LoadHints::enum_type, int) 
// (12)qm2710642181 (25)_ZorN8QLibrary8LoadHintEi
/*void qm2710642181_6(QLibrary::LoadHint f1, int f2)*/ {
  QLibrary::LoadHint f1 = *(QLibrary::LoadHint*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QLibrary::LoadHint, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QFlags<QLibrary::LoadHints::enum_type> operator|(QLibrary::LoadHints::enum_type, QLibrary::LoadHints::enum_type) 
// (12)qm3419365528 (27)_ZorN8QLibrary8LoadHintES0_
/*void qm3419365528_7(QLibrary::LoadHint f1, QLibrary::LoadHint f2)*/ {
  QLibrary::LoadHint f1 = *(QLibrary::LoadHint*)this_; QLibrary::LoadHint f2 = *(QLibrary::LoadHint*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLibrary::LoadHint> (*)(QLibrary::LoadHint, QLibrary::LoadHint) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlibrary.h:100
// [4] QFlags<QLibrary::LoadHints::enum_type> operator|(QLibrary::LoadHints::enum_type, QFlags<QLibrary::LoadHints::enum_type>) 
// (11)qm181532949 (36)_ZorN8QLibrary8LoadHintE6QFlagsIS0_E
/*void qm181532949_8(QLibrary::LoadHint f1, QFlags<QLibrary::LoadHint> f2)*/ {
  QLibrary::LoadHint f1 = *(QLibrary::LoadHint*)this_; QFlags<QLibrary::LoadHint> f2 = *(QFlags<QLibrary::LoadHint>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLibrary::LoadHint> (*)(QLibrary::LoadHint, QFlags<QLibrary::LoadHint>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1595
// [4] QIncompatibleFlag operator|(QString::SectionFlags::enum_type, int) 
// (12)qm1560518889 (28)_ZorN7QString11SectionFlagEi
/*void qm1560518889_9(QString::SectionFlag f1, int f2)*/ {
  QString::SectionFlag f1 = *(QString::SectionFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QString::SectionFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1595
// [4] QFlags<QString::SectionFlags::enum_type> operator|(QString::SectionFlags::enum_type, QString::SectionFlags::enum_type) 
// (11)qm366853729 (30)_ZorN7QString11SectionFlagES0_
/*void qm366853729_10(QString::SectionFlag f1, QString::SectionFlag f2)*/ {
  QString::SectionFlag f1 = *(QString::SectionFlag*)this_; QString::SectionFlag f2 = *(QString::SectionFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QString::SectionFlag> (*)(QString::SectionFlag, QString::SectionFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1595
// [4] QFlags<QString::SectionFlags::enum_type> operator|(QString::SectionFlags::enum_type, QFlags<QString::SectionFlags::enum_type>) 
// (12)qm4217772098 (39)_ZorN7QString11SectionFlagE6QFlagsIS0_E
/*void qm4217772098_11(QString::SectionFlag f1, QFlags<QString::SectionFlag> f2)*/ {
  QString::SectionFlag f1 = *(QString::SectionFlag*)this_; QFlags<QString::SectionFlag> f2 = *(QFlags<QString::SectionFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QString::SectionFlag> (*)(QString::SectionFlag, QFlags<QString::SectionFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1194
// [4] QIncompatibleFlag operator|(QLocale::NumberOptions::enum_type, int) 
// (12)qm2006849962 (29)_ZorN7QLocale12NumberOptionEi
/*void qm2006849962_12(QLocale::NumberOption f1, int f2)*/ {
  QLocale::NumberOption f1 = *(QLocale::NumberOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QLocale::NumberOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1194
// [4] QFlags<QLocale::NumberOptions::enum_type> operator|(QLocale::NumberOptions::enum_type, QLocale::NumberOptions::enum_type) 
// (12)qm2083816210 (31)_ZorN7QLocale12NumberOptionES0_
/*void qm2083816210_13(QLocale::NumberOption f1, QLocale::NumberOption f2)*/ {
  QLocale::NumberOption f1 = *(QLocale::NumberOption*)this_; QLocale::NumberOption f2 = *(QLocale::NumberOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLocale::NumberOption> (*)(QLocale::NumberOption, QLocale::NumberOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1194
// [4] QFlags<QLocale::NumberOptions::enum_type> operator|(QLocale::NumberOptions::enum_type, QFlags<QLocale::NumberOptions::enum_type>) 
// (12)qm2504203432 (40)_ZorN7QLocale12NumberOptionE6QFlagsIS0_E
/*void qm2504203432_14(QLocale::NumberOption f1, QFlags<QLocale::NumberOption> f2)*/ {
  QLocale::NumberOption f1 = *(QLocale::NumberOption*)this_; QFlags<QLocale::NumberOption> f2 = *(QFlags<QLocale::NumberOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLocale::NumberOption> (*)(QLocale::NumberOption, QFlags<QLocale::NumberOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QIncompatibleFlag operator|(QUrl::ComponentFormattingOptions::enum_type, int) 
// (12)qm2589485139 (39)_ZorN4QUrl25ComponentFormattingOptionEi
/*void qm2589485139_15(QUrl::ComponentFormattingOption f1, int f2)*/ {
  QUrl::ComponentFormattingOption f1 = *(QUrl::ComponentFormattingOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QUrl::ComponentFormattingOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QFlags<QUrl::ComponentFormattingOptions::enum_type> operator|(QUrl::ComponentFormattingOptions::enum_type, QUrl::ComponentFormattingOptions::enum_type) 
// (12)qm2655548810 (41)_ZorN4QUrl25ComponentFormattingOptionES0_
/*void qm2655548810_16(QUrl::ComponentFormattingOption f1, QUrl::ComponentFormattingOption f2)*/ {
  QUrl::ComponentFormattingOption f1 = *(QUrl::ComponentFormattingOption*)this_; QUrl::ComponentFormattingOption f2 = *(QUrl::ComponentFormattingOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QUrl::ComponentFormattingOption> (*)(QUrl::ComponentFormattingOption, QUrl::ComponentFormattingOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:394
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOption, QUrl::UrlFormattingOption) 
// (12)qm3748073278 (63)_ZorN4QUrl25ComponentFormattingOptionENS_19UrlFormattingOptionE
/*void qm3748073278_17(QUrl::ComponentFormattingOption f, QUrl::UrlFormattingOption i)*/ {
  QUrl::ComponentFormattingOption f = *(QUrl::ComponentFormattingOption*)this_; QUrl::UrlFormattingOption i = *(QUrl::UrlFormattingOption*)this_;
  (void) operator|(f, i);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::ComponentFormattingOption, QUrl::UrlFormattingOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:376
// [4] QFlags<QUrl::ComponentFormattingOptions::enum_type> operator|(QUrl::ComponentFormattingOptions::enum_type, QFlags<QUrl::ComponentFormattingOptions::enum_type>) 
// (12)qm2907627925 (50)_ZorN4QUrl25ComponentFormattingOptionE6QFlagsIS0_E
/*void qm2907627925_18(QUrl::ComponentFormattingOption f1, QFlags<QUrl::ComponentFormattingOption> f2)*/ {
  QUrl::ComponentFormattingOption f1 = *(QUrl::ComponentFormattingOption*)this_; QFlags<QUrl::ComponentFormattingOption> f2 = *(QFlags<QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QUrl::ComponentFormattingOption> (*)(QUrl::ComponentFormattingOption, QFlags<QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:400
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOption, QUrl::FormattingOptions) 
// (12)qm2919355403 (82)_ZorN4QUrl25ComponentFormattingOptionE12QUrlTwoFlagsINS_19UrlFormattingOptionES0_E
/*void qm2919355403_19(QUrl::ComponentFormattingOption f, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i)*/ {
  QUrl::ComponentFormattingOption f = *(QUrl::ComponentFormattingOption*)this_; QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i = *(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(f, i);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::ComponentFormattingOption, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:384
// [4] QIncompatibleFlag operator|(QUrl::UrlFormattingOption, int) 
// (11)qm607184720 (33)_ZorN4QUrl19UrlFormattingOptionEi
/*void qm607184720_20(QUrl::UrlFormattingOption f1, int f2)*/ {
  QUrl::UrlFormattingOption f1 = *(QUrl::UrlFormattingOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QUrl::UrlFormattingOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:380
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::UrlFormattingOption) 
// (12)qm3361867408 (35)_ZorN4QUrl19UrlFormattingOptionES0_
/*void qm3361867408_21(QUrl::UrlFormattingOption f1, QUrl::UrlFormattingOption f2)*/ {
  QUrl::UrlFormattingOption f1 = *(QUrl::UrlFormattingOption*)this_; QUrl::UrlFormattingOption f2 = *(QUrl::UrlFormattingOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::UrlFormattingOption, QUrl::UrlFormattingOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:390
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption) 
// (11)qm737205597 (63)_ZorN4QUrl19UrlFormattingOptionENS_25ComponentFormattingOptionE
/*void qm737205597_22(QUrl::UrlFormattingOption i, QUrl::ComponentFormattingOption f)*/ {
  QUrl::UrlFormattingOption i = *(QUrl::UrlFormattingOption*)this_; QUrl::ComponentFormattingOption f = *(QUrl::ComponentFormattingOption*)this_;
  (void) operator|(i, f);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:392
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::ComponentFormattingOptions) 
// (12)qm1036867784 (72)_ZorN4QUrl19UrlFormattingOptionE6QFlagsINS_25ComponentFormattingOptionEE
/*void qm1036867784_23(QUrl::UrlFormattingOption i, QFlags<QUrl::ComponentFormattingOption> f)*/ {
  QUrl::UrlFormattingOption i = *(QUrl::UrlFormattingOption*)this_; QFlags<QUrl::ComponentFormattingOption> f = *(QFlags<QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(i, f);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::UrlFormattingOption, QFlags<QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:382
// [4] QUrl::FormattingOptions operator|(QUrl::UrlFormattingOption, QUrl::FormattingOptions) 
// (12)qm3858722239 (82)_ZorN4QUrl19UrlFormattingOptionE12QUrlTwoFlagsIS0_NS_25ComponentFormattingOptionEE
/*void qm3858722239_24(QUrl::UrlFormattingOption f1, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> f2)*/ {
  QUrl::UrlFormattingOption f1 = *(QUrl::UrlFormattingOption*)this_; QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> f2 = *(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrl::UrlFormattingOption, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:239
// [4] QIncompatibleFlag operator|(QDir::SortFlags::enum_type, int) 
// (12)qm2216212119 (21)_ZorN4QDir8SortFlagEi
/*void qm2216212119_25(QDir::SortFlag f1, int f2)*/ {
  QDir::SortFlag f1 = *(QDir::SortFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDir::SortFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:239
// [4] QFlags<QDir::SortFlags::enum_type> operator|(QDir::SortFlags::enum_type, QDir::SortFlags::enum_type) 
// (12)qm1354073683 (23)_ZorN4QDir8SortFlagES0_
/*void qm1354073683_26(QDir::SortFlag f1, QDir::SortFlag f2)*/ {
  QDir::SortFlag f1 = *(QDir::SortFlag*)this_; QDir::SortFlag f2 = *(QDir::SortFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDir::SortFlag> (*)(QDir::SortFlag, QDir::SortFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:239
// [4] QFlags<QDir::SortFlags::enum_type> operator|(QDir::SortFlags::enum_type, QFlags<QDir::SortFlags::enum_type>) 
// (12)qm1246044547 (32)_ZorN4QDir8SortFlagE6QFlagsIS0_E
/*void qm1246044547_27(QDir::SortFlag f1, QFlags<QDir::SortFlag> f2)*/ {
  QDir::SortFlag f1 = *(QDir::SortFlag*)this_; QFlags<QDir::SortFlag> f2 = *(QFlags<QDir::SortFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDir::SortFlag> (*)(QDir::SortFlag, QFlags<QDir::SortFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:238
// [4] QIncompatibleFlag operator|(QDir::Filters::enum_type, int) 
// (11)qm973574024 (19)_ZorN4QDir6FilterEi
/*void qm973574024_28(QDir::Filter f1, int f2)*/ {
  QDir::Filter f1 = *(QDir::Filter*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDir::Filter, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:238
// [4] QFlags<QDir::Filters::enum_type> operator|(QDir::Filters::enum_type, QDir::Filters::enum_type) 
// (12)qm3270164186 (21)_ZorN4QDir6FilterES0_
/*void qm3270164186_29(QDir::Filter f1, QDir::Filter f2)*/ {
  QDir::Filter f1 = *(QDir::Filter*)this_; QDir::Filter f2 = *(QDir::Filter*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDir::Filter> (*)(QDir::Filter, QDir::Filter) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:238
// [4] QFlags<QDir::Filters::enum_type> operator|(QDir::Filters::enum_type, QFlags<QDir::Filters::enum_type>) 
// (12)qm1403580745 (30)_ZorN4QDir6FilterE6QFlagsIS0_E
/*void qm1403580745_30(QDir::Filter f1, QFlags<QDir::Filter> f2)*/ {
  QDir::Filter f1 = *(QDir::Filter*)this_; QFlags<QDir::Filter> f2 = *(QFlags<QDir::Filter>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDir::Filter> (*)(QDir::Filter, QFlags<QDir::Filter>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QIncompatibleFlag operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, int) 
// (12)qm2297472495 (44)_ZorN19QTextBoundaryFinder14BoundaryReasonEi
/*void qm2297472495_31(QTextBoundaryFinder::BoundaryReason f1, int f2)*/ {
  QTextBoundaryFinder::BoundaryReason f1 = *(QTextBoundaryFinder::BoundaryReason*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextBoundaryFinder::BoundaryReason, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type> operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, QTextBoundaryFinder::BoundaryReasons::enum_type) 
// (11)qm871184539 (46)_ZorN19QTextBoundaryFinder14BoundaryReasonES0_
/*void qm871184539_32(QTextBoundaryFinder::BoundaryReason f1, QTextBoundaryFinder::BoundaryReason f2)*/ {
  QTextBoundaryFinder::BoundaryReason f1 = *(QTextBoundaryFinder::BoundaryReason*)this_; QTextBoundaryFinder::BoundaryReason f2 = *(QTextBoundaryFinder::BoundaryReason*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextBoundaryFinder::BoundaryReason> (*)(QTextBoundaryFinder::BoundaryReason, QTextBoundaryFinder::BoundaryReason) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:106
// [4] QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type> operator|(QTextBoundaryFinder::BoundaryReasons::enum_type, QFlags<QTextBoundaryFinder::BoundaryReasons::enum_type>) 
// (11)qm343711330 (55)_ZorN19QTextBoundaryFinder14BoundaryReasonE6QFlagsIS0_E
/*void qm343711330_33(QTextBoundaryFinder::BoundaryReason f1, QFlags<QTextBoundaryFinder::BoundaryReason> f2)*/ {
  QTextBoundaryFinder::BoundaryReason f1 = *(QTextBoundaryFinder::BoundaryReason*)this_; QFlags<QTextBoundaryFinder::BoundaryReason> f2 = *(QFlags<QTextBoundaryFinder::BoundaryReason>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextBoundaryFinder::BoundaryReason> (*)(QTextBoundaryFinder::BoundaryReason, QFlags<QTextBoundaryFinder::BoundaryReason>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QIncompatibleFlag operator|(QItemSelectionModel::SelectionFlags::enum_type, int) 
// (12)qm2283940520 (43)_ZorN19QItemSelectionModel13SelectionFlagEi
/*void qm2283940520_34(QItemSelectionModel::SelectionFlag f1, int f2)*/ {
  QItemSelectionModel::SelectionFlag f1 = *(QItemSelectionModel::SelectionFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QItemSelectionModel::SelectionFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QFlags<QItemSelectionModel::SelectionFlags::enum_type> operator|(QItemSelectionModel::SelectionFlags::enum_type, QItemSelectionModel::SelectionFlags::enum_type) 
// (12)qm4057104186 (45)_ZorN19QItemSelectionModel13SelectionFlagES0_
/*void qm4057104186_35(QItemSelectionModel::SelectionFlag f1, QItemSelectionModel::SelectionFlag f2)*/ {
  QItemSelectionModel::SelectionFlag f1 = *(QItemSelectionModel::SelectionFlag*)this_; QItemSelectionModel::SelectionFlag f2 = *(QItemSelectionModel::SelectionFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QItemSelectionModel::SelectionFlag> (*)(QItemSelectionModel::SelectionFlag, QItemSelectionModel::SelectionFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:226
// [4] QFlags<QItemSelectionModel::SelectionFlags::enum_type> operator|(QItemSelectionModel::SelectionFlags::enum_type, QFlags<QItemSelectionModel::SelectionFlags::enum_type>) 
// (12)qm3337660733 (54)_ZorN19QItemSelectionModel13SelectionFlagE6QFlagsIS0_E
/*void qm3337660733_36(QItemSelectionModel::SelectionFlag f1, QFlags<QItemSelectionModel::SelectionFlag> f2)*/ {
  QItemSelectionModel::SelectionFlag f1 = *(QItemSelectionModel::SelectionFlag*)this_; QFlags<QItemSelectionModel::SelectionFlag> f2 = *(QFlags<QItemSelectionModel::SelectionFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QItemSelectionModel::SelectionFlag> (*)(QItemSelectionModel::SelectionFlag, QFlags<QItemSelectionModel::SelectionFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:178
// [4] QIncompatibleFlag operator|(QRegularExpression::PatternOptions::enum_type, int) 
// (12)qm1393662740 (42)_ZorN18QRegularExpression13PatternOptionEi
/*void qm1393662740_37(QRegularExpression::PatternOption f1, int f2)*/ {
  QRegularExpression::PatternOption f1 = *(QRegularExpression::PatternOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QRegularExpression::PatternOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:178
// [4] QFlags<QRegularExpression::PatternOptions::enum_type> operator|(QRegularExpression::PatternOptions::enum_type, QRegularExpression::PatternOptions::enum_type) 
// (10)qm96781991 (44)_ZorN18QRegularExpression13PatternOptionES0_
/*void qm96781991_38(QRegularExpression::PatternOption f1, QRegularExpression::PatternOption f2)*/ {
  QRegularExpression::PatternOption f1 = *(QRegularExpression::PatternOption*)this_; QRegularExpression::PatternOption f2 = *(QRegularExpression::PatternOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRegularExpression::PatternOption> (*)(QRegularExpression::PatternOption, QRegularExpression::PatternOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:178
// [4] QFlags<QRegularExpression::PatternOptions::enum_type> operator|(QRegularExpression::PatternOptions::enum_type, QFlags<QRegularExpression::PatternOptions::enum_type>) 
// (12)qm3198038819 (53)_ZorN18QRegularExpression13PatternOptionE6QFlagsIS0_E
/*void qm3198038819_39(QRegularExpression::PatternOption f1, QFlags<QRegularExpression::PatternOption> f2)*/ {
  QRegularExpression::PatternOption f1 = *(QRegularExpression::PatternOption*)this_; QFlags<QRegularExpression::PatternOption> f2 = *(QFlags<QRegularExpression::PatternOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRegularExpression::PatternOption> (*)(QRegularExpression::PatternOption, QFlags<QRegularExpression::PatternOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:179
// [4] QIncompatibleFlag operator|(QRegularExpression::MatchOptions::enum_type, int) 
// (12)qm1978845428 (40)_ZorN18QRegularExpression11MatchOptionEi
/*void qm1978845428_40(QRegularExpression::MatchOption f1, int f2)*/ {
  QRegularExpression::MatchOption f1 = *(QRegularExpression::MatchOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QRegularExpression::MatchOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:179
// [4] QFlags<QRegularExpression::MatchOptions::enum_type> operator|(QRegularExpression::MatchOptions::enum_type, QRegularExpression::MatchOptions::enum_type) 
// (12)qm2849510374 (42)_ZorN18QRegularExpression11MatchOptionES0_
/*void qm2849510374_41(QRegularExpression::MatchOption f1, QRegularExpression::MatchOption f2)*/ {
  QRegularExpression::MatchOption f1 = *(QRegularExpression::MatchOption*)this_; QRegularExpression::MatchOption f2 = *(QRegularExpression::MatchOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRegularExpression::MatchOption> (*)(QRegularExpression::MatchOption, QRegularExpression::MatchOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:179
// [4] QFlags<QRegularExpression::MatchOptions::enum_type> operator|(QRegularExpression::MatchOptions::enum_type, QFlags<QRegularExpression::MatchOptions::enum_type>) 
// (12)qm4146756400 (51)_ZorN18QRegularExpression11MatchOptionE6QFlagsIS0_E
/*void qm4146756400_42(QRegularExpression::MatchOption f1, QFlags<QRegularExpression::MatchOption> f2)*/ {
  QRegularExpression::MatchOption f1 = *(QRegularExpression::MatchOption*)this_; QFlags<QRegularExpression::MatchOption> f2 = *(QFlags<QRegularExpression::MatchOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRegularExpression::MatchOption> (*)(QRegularExpression::MatchOption, QFlags<QRegularExpression::MatchOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:107
// [4] QIncompatibleFlag operator|(QCommandLineOption::Flags::enum_type, int) 
// (12)qm2042140188 (32)_ZorN18QCommandLineOption4FlagEi
/*void qm2042140188_43(QCommandLineOption::Flag f1, int f2)*/ {
  QCommandLineOption::Flag f1 = *(QCommandLineOption::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QCommandLineOption::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:107
// [4] QFlags<QCommandLineOption::Flags::enum_type> operator|(QCommandLineOption::Flags::enum_type, QCommandLineOption::Flags::enum_type) 
// (12)qm3014400699 (34)_ZorN18QCommandLineOption4FlagES0_
/*void qm3014400699_44(QCommandLineOption::Flag f1, QCommandLineOption::Flag f2)*/ {
  QCommandLineOption::Flag f1 = *(QCommandLineOption::Flag*)this_; QCommandLineOption::Flag f2 = *(QCommandLineOption::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCommandLineOption::Flag> (*)(QCommandLineOption::Flag, QCommandLineOption::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:107
// [4] QFlags<QCommandLineOption::Flags::enum_type> operator|(QCommandLineOption::Flags::enum_type, QFlags<QCommandLineOption::Flags::enum_type>) 
// (12)qm3507622911 (43)_ZorN18QCommandLineOption4FlagE6QFlagsIS0_E
/*void qm3507622911_45(QCommandLineOption::Flag f1, QFlags<QCommandLineOption::Flag> f2)*/ {
  QCommandLineOption::Flag f1 = *(QCommandLineOption::Flag*)this_; QFlags<QCommandLineOption::Flag> f2 = *(QFlags<QCommandLineOption::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCommandLineOption::Flag> (*)(QCommandLineOption::Flag, QFlags<QCommandLineOption::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:366
// [4] QIncompatibleFlag operator|(QAbstractItemModel::CheckIndexOptions::enum_type, int) 
// (12)qm3383880349 (45)_ZorN18QAbstractItemModel16CheckIndexOptionEi
/*void qm3383880349_46(QAbstractItemModel::CheckIndexOption f1, int f2)*/ {
  QAbstractItemModel::CheckIndexOption f1 = *(QAbstractItemModel::CheckIndexOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAbstractItemModel::CheckIndexOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:366
// [4] QFlags<QAbstractItemModel::CheckIndexOptions::enum_type> operator|(QAbstractItemModel::CheckIndexOptions::enum_type, QAbstractItemModel::CheckIndexOptions::enum_type) 
// (12)qm3364306607 (47)_ZorN18QAbstractItemModel16CheckIndexOptionES0_
/*void qm3364306607_47(QAbstractItemModel::CheckIndexOption f1, QAbstractItemModel::CheckIndexOption f2)*/ {
  QAbstractItemModel::CheckIndexOption f1 = *(QAbstractItemModel::CheckIndexOption*)this_; QAbstractItemModel::CheckIndexOption f2 = *(QAbstractItemModel::CheckIndexOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractItemModel::CheckIndexOption> (*)(QAbstractItemModel::CheckIndexOption, QAbstractItemModel::CheckIndexOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:366
// [4] QFlags<QAbstractItemModel::CheckIndexOptions::enum_type> operator|(QAbstractItemModel::CheckIndexOptions::enum_type, QFlags<QAbstractItemModel::CheckIndexOptions::enum_type>) 
// (12)qm4049468490 (56)_ZorN18QAbstractItemModel16CheckIndexOptionE6QFlagsIS0_E
/*void qm4049468490_48(QAbstractItemModel::CheckIndexOption f1, QFlags<QAbstractItemModel::CheckIndexOption> f2)*/ {
  QAbstractItemModel::CheckIndexOption f1 = *(QAbstractItemModel::CheckIndexOption*)this_; QFlags<QAbstractItemModel::CheckIndexOption> f2 = *(QFlags<QAbstractItemModel::CheckIndexOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractItemModel::CheckIndexOption> (*)(QAbstractItemModel::CheckIndexOption, QFlags<QAbstractItemModel::CheckIndexOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QIncompatibleFlag operator|(QStandardPaths::LocateOptions::enum_type, int) 
// (12)qm2503186027 (37)_ZorN14QStandardPaths12LocateOptionEi
/*void qm2503186027_49(QStandardPaths::LocateOption f1, int f2)*/ {
  QStandardPaths::LocateOption f1 = *(QStandardPaths::LocateOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStandardPaths::LocateOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QFlags<QStandardPaths::LocateOptions::enum_type> operator|(QStandardPaths::LocateOptions::enum_type, QStandardPaths::LocateOptions::enum_type) 
// (12)qm3553761537 (39)_ZorN14QStandardPaths12LocateOptionES0_
/*void qm3553761537_50(QStandardPaths::LocateOption f1, QStandardPaths::LocateOption f2)*/ {
  QStandardPaths::LocateOption f1 = *(QStandardPaths::LocateOption*)this_; QStandardPaths::LocateOption f2 = *(QStandardPaths::LocateOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStandardPaths::LocateOption> (*)(QStandardPaths::LocateOption, QStandardPaths::LocateOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstandardpaths.h:111
// [4] QFlags<QStandardPaths::LocateOptions::enum_type> operator|(QStandardPaths::LocateOptions::enum_type, QFlags<QStandardPaths::LocateOptions::enum_type>) 
// (11)qm913635891 (48)_ZorN14QStandardPaths12LocateOptionE6QFlagsIS0_E
/*void qm913635891_51(QStandardPaths::LocateOption f1, QFlags<QStandardPaths::LocateOption> f2)*/ {
  QStandardPaths::LocateOption f1 = *(QStandardPaths::LocateOption*)this_; QFlags<QStandardPaths::LocateOption> f2 = *(QFlags<QStandardPaths::LocateOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStandardPaths::LocateOption> (*)(QStandardPaths::LocateOption, QFlags<QStandardPaths::LocateOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QIncompatibleFlag operator|(QDirIterator::IteratorFlags::enum_type, int) 
// (12)qm3709420913 (35)_ZorN12QDirIterator12IteratorFlagEi
/*void qm3709420913_52(QDirIterator::IteratorFlag f1, int f2)*/ {
  QDirIterator::IteratorFlag f1 = *(QDirIterator::IteratorFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDirIterator::IteratorFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QFlags<QDirIterator::IteratorFlags::enum_type> operator|(QDirIterator::IteratorFlags::enum_type, QDirIterator::IteratorFlags::enum_type) 
// (12)qm2082810014 (37)_ZorN12QDirIterator12IteratorFlagES0_
/*void qm2082810014_53(QDirIterator::IteratorFlag f1, QDirIterator::IteratorFlag f2)*/ {
  QDirIterator::IteratorFlag f1 = *(QDirIterator::IteratorFlag*)this_; QDirIterator::IteratorFlag f2 = *(QDirIterator::IteratorFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDirIterator::IteratorFlag> (*)(QDirIterator::IteratorFlag, QDirIterator::IteratorFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdiriterator.h:86
// [4] QFlags<QDirIterator::IteratorFlags::enum_type> operator|(QDirIterator::IteratorFlags::enum_type, QFlags<QDirIterator::IteratorFlags::enum_type>) 
// (11)qm598508371 (46)_ZorN12QDirIterator12IteratorFlagE6QFlagsIS0_E
/*void qm598508371_54(QDirIterator::IteratorFlag f1, QFlags<QDirIterator::IteratorFlag> f2)*/ {
  QDirIterator::IteratorFlag f1 = *(QDirIterator::IteratorFlag*)this_; QFlags<QDirIterator::IteratorFlag> f2 = *(QFlags<QDirIterator::IteratorFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDirIterator::IteratorFlag> (*)(QDirIterator::IteratorFlag, QFlags<QDirIterator::IteratorFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QIncompatibleFlag operator|(QTextStream::NumberFlags::enum_type, int) 
// (11)qm902111922 (32)_ZorN11QTextStream10NumberFlagEi
/*void qm902111922_55(QTextStream::NumberFlag f1, int f2)*/ {
  QTextStream::NumberFlag f1 = *(QTextStream::NumberFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextStream::NumberFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QFlags<QTextStream::NumberFlags::enum_type> operator|(QTextStream::NumberFlags::enum_type, QTextStream::NumberFlags::enum_type) 
// (12)qm1327804468 (34)_ZorN11QTextStream10NumberFlagES0_
/*void qm1327804468_56(QTextStream::NumberFlag f1, QTextStream::NumberFlag f2)*/ {
  QTextStream::NumberFlag f1 = *(QTextStream::NumberFlag*)this_; QTextStream::NumberFlag f2 = *(QTextStream::NumberFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextStream::NumberFlag> (*)(QTextStream::NumberFlag, QTextStream::NumberFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:202
// [4] QFlags<QTextStream::NumberFlags::enum_type> operator|(QTextStream::NumberFlags::enum_type, QFlags<QTextStream::NumberFlags::enum_type>) 
// (12)qm2329565906 (43)_ZorN11QTextStream10NumberFlagE6QFlagsIS0_E
/*void qm2329565906_57(QTextStream::NumberFlag f1, QFlags<QTextStream::NumberFlag> f2)*/ {
  QTextStream::NumberFlag f1 = *(QTextStream::NumberFlag*)this_; QFlags<QTextStream::NumberFlag> f2 = *(QFlags<QTextStream::NumberFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextStream::NumberFlag> (*)(QTextStream::NumberFlag, QFlags<QTextStream::NumberFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QIncompatibleFlag operator|(QFileDevice::Permissions::enum_type, int) 
// (12)qm1642168293 (32)_ZorN11QFileDevice10PermissionEi
/*void qm1642168293_58(QFileDevice::Permission f1, int f2)*/ {
  QFileDevice::Permission f1 = *(QFileDevice::Permission*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFileDevice::Permission, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QFlags<QFileDevice::Permissions::enum_type> operator|(QFileDevice::Permissions::enum_type, QFileDevice::Permissions::enum_type) 
// (12)qm2936275658 (34)_ZorN11QFileDevice10PermissionES0_
/*void qm2936275658_59(QFileDevice::Permission f1, QFileDevice::Permission f2)*/ {
  QFileDevice::Permission f1 = *(QFileDevice::Permission*)this_; QFileDevice::Permission f2 = *(QFileDevice::Permission*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileDevice::Permission> (*)(QFileDevice::Permission, QFileDevice::Permission) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfiledevice.h:150
// [4] QFlags<QFileDevice::Permissions::enum_type> operator|(QFileDevice::Permissions::enum_type, QFlags<QFileDevice::Permissions::enum_type>) 
// (12)qm2579804446 (43)_ZorN11QFileDevice10PermissionE6QFlagsIS0_E
/*void qm2579804446_60(QFileDevice::Permission f1, QFlags<QFileDevice::Permission> f2)*/ {
  QFileDevice::Permission f1 = *(QFileDevice::Permission*)this_; QFlags<QFileDevice::Permission> f2 = *(QFlags<QFileDevice::Permission>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileDevice::Permission> (*)(QFileDevice::Permission, QFlags<QFileDevice::Permission>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:135
// [4] QIncompatibleFlag operator|(QTextCodec::ConversionFlags::enum_type, int) 
// (12)qm1043016958 (35)_ZorN10QTextCodec14ConversionFlagEi
/*void qm1043016958_61(QTextCodec::ConversionFlag f1, int f2)*/ {
  QTextCodec::ConversionFlag f1 = *(QTextCodec::ConversionFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextCodec::ConversionFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:135
// [4] QFlags<QTextCodec::ConversionFlags::enum_type> operator|(QTextCodec::ConversionFlags::enum_type, QTextCodec::ConversionFlags::enum_type) 
// (12)qm4098922196 (37)_ZorN10QTextCodec14ConversionFlagES0_
/*void qm4098922196_62(QTextCodec::ConversionFlag f1, QTextCodec::ConversionFlag f2)*/ {
  QTextCodec::ConversionFlag f1 = *(QTextCodec::ConversionFlag*)this_; QTextCodec::ConversionFlag f2 = *(QTextCodec::ConversionFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextCodec::ConversionFlag> (*)(QTextCodec::ConversionFlag, QTextCodec::ConversionFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:135
// [4] QFlags<QTextCodec::ConversionFlags::enum_type> operator|(QTextCodec::ConversionFlags::enum_type, QFlags<QTextCodec::ConversionFlags::enum_type>) 
// (12)qm3890194278 (46)_ZorN10QTextCodec14ConversionFlagE6QFlagsIS0_E
/*void qm3890194278_63(QTextCodec::ConversionFlag f1, QFlags<QTextCodec::ConversionFlag> f2)*/ {
  QTextCodec::ConversionFlag f1 = *(QTextCodec::ConversionFlag*)this_; QFlags<QTextCodec::ConversionFlag> f2 = *(QFlags<QTextCodec::ConversionFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextCodec::ConversionFlag> (*)(QTextCodec::ConversionFlag, QFlags<QTextCodec::ConversionFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QIncompatibleFlag operator|(QEventLoop::ProcessEventsFlags::enum_type, int) 
// (12)qm1187736442 (38)_ZorN10QEventLoop17ProcessEventsFlagEi
/*void qm1187736442_64(QEventLoop::ProcessEventsFlag f1, int f2)*/ {
  QEventLoop::ProcessEventsFlag f1 = *(QEventLoop::ProcessEventsFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QEventLoop::ProcessEventsFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QFlags<QEventLoop::ProcessEventsFlags::enum_type> operator|(QEventLoop::ProcessEventsFlags::enum_type, QEventLoop::ProcessEventsFlags::enum_type) 
// (12)qm1124558664 (40)_ZorN10QEventLoop17ProcessEventsFlagES0_
/*void qm1124558664_65(QEventLoop::ProcessEventsFlag f1, QEventLoop::ProcessEventsFlag f2)*/ {
  QEventLoop::ProcessEventsFlag f1 = *(QEventLoop::ProcessEventsFlag*)this_; QEventLoop::ProcessEventsFlag f2 = *(QEventLoop::ProcessEventsFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QEventLoop::ProcessEventsFlag> (*)(QEventLoop::ProcessEventsFlag, QEventLoop::ProcessEventsFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:85
// [4] QFlags<QEventLoop::ProcessEventsFlags::enum_type> operator|(QEventLoop::ProcessEventsFlags::enum_type, QFlags<QEventLoop::ProcessEventsFlags::enum_type>) 
// (11)qm419624556 (49)_ZorN10QEventLoop17ProcessEventsFlagE6QFlagsIS0_E
/*void qm419624556_66(QEventLoop::ProcessEventsFlag f1, QFlags<QEventLoop::ProcessEventsFlag> f2)*/ {
  QEventLoop::ProcessEventsFlag f1 = *(QEventLoop::ProcessEventsFlag*)this_; QFlags<QEventLoop::ProcessEventsFlag> f2 = *(QFlags<QEventLoop::ProcessEventsFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QEventLoop::ProcessEventsFlag> (*)(QEventLoop::ProcessEventsFlag, QFlags<QEventLoop::ProcessEventsFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:492
// [4] QIncompatibleFlag operator|(QByteArray::Base64Options::enum_type, int) 
// (12)qm2532620255 (33)_ZorN10QByteArray12Base64OptionEi
/*void qm2532620255_67(QByteArray::Base64Option f1, int f2)*/ {
  QByteArray::Base64Option f1 = *(QByteArray::Base64Option*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QByteArray::Base64Option, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:492
// [4] QFlags<QByteArray::Base64Options::enum_type> operator|(QByteArray::Base64Options::enum_type, QByteArray::Base64Options::enum_type) 
// (11)qm521298212 (35)_ZorN10QByteArray12Base64OptionES0_
/*void qm521298212_68(QByteArray::Base64Option f1, QByteArray::Base64Option f2)*/ {
  QByteArray::Base64Option f1 = *(QByteArray::Base64Option*)this_; QByteArray::Base64Option f2 = *(QByteArray::Base64Option*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QByteArray::Base64Option> (*)(QByteArray::Base64Option, QByteArray::Base64Option) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:492
// [4] QFlags<QByteArray::Base64Options::enum_type> operator|(QByteArray::Base64Options::enum_type, QFlags<QByteArray::Base64Options::enum_type>) 
// (11)qm730920638 (44)_ZorN10QByteArray12Base64OptionE6QFlagsIS0_E
/*void qm730920638_69(QByteArray::Base64Option f1, QFlags<QByteArray::Base64Option> f2)*/ {
  QByteArray::Base64Option f1 = *(QByteArray::Base64Option*)this_; QFlags<QByteArray::Base64Option> f2 = *(QFlags<QByteArray::Base64Option>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QByteArray::Base64Option> (*)(QByteArray::Base64Option, QFlags<QByteArray::Base64Option>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QIncompatibleFlag operator|(QArrayData::AllocationOptions::enum_type, int) 
// (12)qm4283091042 (37)_ZorN10QArrayData16AllocationOptionEi
/*void qm4283091042_70(QArrayData::AllocationOption f1, int f2)*/ {
  QArrayData::AllocationOption f1 = *(QArrayData::AllocationOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QArrayData::AllocationOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QFlags<QArrayData::AllocationOptions::enum_type> operator|(QArrayData::AllocationOptions::enum_type, QArrayData::AllocationOptions::enum_type) 
// (12)qm2395190466 (39)_ZorN10QArrayData16AllocationOptionES0_
/*void qm2395190466_71(QArrayData::AllocationOption f1, QArrayData::AllocationOption f2)*/ {
  QArrayData::AllocationOption f1 = *(QArrayData::AllocationOption*)this_; QArrayData::AllocationOption f2 = *(QArrayData::AllocationOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QArrayData::AllocationOption> (*)(QArrayData::AllocationOption, QArrayData::AllocationOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:126
// [4] QFlags<QArrayData::AllocationOptions::enum_type> operator|(QArrayData::AllocationOptions::enum_type, QFlags<QArrayData::AllocationOptions::enum_type>) 
// (12)qm4157586352 (48)_ZorN10QArrayData16AllocationOptionE6QFlagsIS0_E
/*void qm4157586352_72(QArrayData::AllocationOption f1, QFlags<QArrayData::AllocationOption> f2)*/ {
  QArrayData::AllocationOption f1 = *(QArrayData::AllocationOption*)this_; QFlags<QArrayData::AllocationOption> f2 = *(QFlags<QArrayData::AllocationOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QArrayData::AllocationOption> (*)(QArrayData::AllocationOption, QFlags<QArrayData::AllocationOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:396
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOptions, QUrl::UrlFormattingOption) 
// (12)qm1978630886 (73)_Zor6QFlagsIN4QUrl25ComponentFormattingOptionEENS0_19UrlFormattingOptionE
/*void qm1978630886_73(QFlags<QUrl::ComponentFormattingOption> f, QUrl::UrlFormattingOption i)*/ {
  QFlags<QUrl::ComponentFormattingOption> f = *(QFlags<QUrl::ComponentFormattingOption>*)this_; QUrl::UrlFormattingOption i = *(QUrl::UrlFormattingOption*)this_;
  (void) operator|(f, i);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QFlags<QUrl::ComponentFormattingOption>, QUrl::UrlFormattingOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:402
// [4] QUrl::FormattingOptions operator|(QUrl::ComponentFormattingOptions, QUrl::FormattingOptions) 
// (12)qm2032421335 (92)_Zor6QFlagsIN4QUrl25ComponentFormattingOptionEE12QUrlTwoFlagsINS0_19UrlFormattingOptionES1_E
/*void qm2032421335_74(QFlags<QUrl::ComponentFormattingOption> f, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i)*/ {
  QFlags<QUrl::ComponentFormattingOption> f = *(QFlags<QUrl::ComponentFormattingOption>*)this_; QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i = *(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(f, i);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QFlags<QUrl::ComponentFormattingOption>, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:398
// [4] QUrl::FormattingOptions operator|(QUrl::FormattingOptions, QUrl::ComponentFormattingOptions) 
// (12)qm2378524547 (92)_Zor12QUrlTwoFlagsIN4QUrl19UrlFormattingOptionENS0_25ComponentFormattingOptionEE6QFlagsIS2_E
/*void qm2378524547_75(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i, QFlags<QUrl::ComponentFormattingOption> f)*/ {
  QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> i = *(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>*)this_; QFlags<QUrl::ComponentFormattingOption> f = *(QFlags<QUrl::ComponentFormattingOption>*)this_;
  (void) operator|(i, f);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> (*)(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>, QFlags<QUrl::ComponentFormattingOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:388
// [4] QUrl::FormattingOptions & operator|=(QUrl::FormattingOptions &, QUrl::ComponentFormattingOptions) 
// (11)qm317680412 (93)_ZoRR12QUrlTwoFlagsIN4QUrl19UrlFormattingOptionENS0_25ComponentFormattingOptionEE6QFlagsIS2_E
/*void qm317680412(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> & i, QFlags<QUrl::ComponentFormattingOption> f)*/ {
  QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> & i = *(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> *)this_; QFlags<QUrl::ComponentFormattingOption> f = *(QFlags<QUrl::ComponentFormattingOption>*)this_;
  (void) operator|=(i, f);
  auto xptr = (QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> & (*)(QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption>&, QFlags<QUrl::ComponentFormattingOption>) ) &operator|=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:476
// [32] QMarginsF operator-(const QMarginsF &) 
// (12)qm3470121654 (16)_ZngRK9QMarginsF
/*void qm3470121654(const QMarginsF & margins)*/ {
  const QMarginsF & margins = *(const QMarginsF *)this_;
  (void) operator-(margins);
  auto xptr = (QMarginsF (*)(QMarginsF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:272
// [16] QMargins operator-(const QMargins &) 
// (12)qm2888781140 (15)_ZngRK8QMargins
/*void qm2888781140_1(const QMargins & margins)*/ {
  const QMargins & margins = *(const QMargins *)this_;
  (void) operator-(margins);
  auto xptr = (QMargins (*)(QMargins const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:395
// [16] const QPointF operator-(const QPointF &) 
// (11)qm127333889 (14)_ZngRK7QPointF
/*void qm127333889_2(const QPointF & p)*/ {
  const QPointF & p = *(const QPointF *)this_;
  (void) operator-(p);
  auto xptr = (const QPointF (*)(QPointF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:198
// [8] const QPoint operator-(const QPoint &) 
// (12)qm1378837456 (13)_ZngRK6QPoint
/*void qm1378837456_3(const QPoint & p)*/ {
  const QPoint & p = *(const QPoint *)this_;
  (void) operator-(p);
  auto xptr = (const QPoint (*)(QPoint const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:202
// [2] qfloat16 operator-(qfloat16) 
// (12)qm1728041979 (13)_Zng8qfloat16
/*void qm1728041979_4(qfloat16 a)*/ {
  qfloat16 a = *(qfloat16*)this_;
  (void) operator-(a);
  auto xptr = (qfloat16 (*)(qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:280
// [1] bool operator!=(int, qfloat16) 
// (12)qm4266105418 (14)_Znei8qfloat16
/*void qm4266105418(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator!=(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator!=(float, qfloat16) 
// (11)qm256688583 (14)_Znef8qfloat16
/*void qm256688583_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator!=(long double, qfloat16) 
// (12)qm3833297604 (14)_Znee8qfloat16
/*void qm3833297604_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator!=(double, qfloat16) 
// (11)qm196678138 (14)_Zned8qfloat16
/*void qm196678138_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:62
// [1] bool operator!=(char, QLatin1Char) 
// (12)qm1400454698 (18)_Znec11QLatin1Char
/*void qm1400454698_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:811
// [1] bool operator!=(const QByteArray::FromBase64Result &, const QByteArray::FromBase64Result &) 
// (11)qm395552423 (41)_ZneRKN10QByteArray16FromBase64ResultES2_
/*void qm395552423_5(const QByteArray::FromBase64Result & lhs, const QByteArray::FromBase64Result & rhs)*/ {
  const QByteArray::FromBase64Result & lhs = *(const QByteArray::FromBase64Result *)this_; const QByteArray::FromBase64Result & rhs = *(const QByteArray::FromBase64Result *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QByteArray::FromBase64Result const&, QByteArray::FromBase64Result const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:380
// [1] bool operator!=(const QMarginsF &, const QMarginsF &) 
// (12)qm1731178221 (19)_ZneRK9QMarginsFS1_
/*void qm1731178221_6(const QMarginsF & lhs, const QMarginsF & rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QMarginsF const&, QMarginsF const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:616
// [1] bool operator!=(const QVariant &, const QVariantComparisonHelper &) 
// (12)qm3740722057 (43)_ZneRK8QVariantRK24QVariantComparisonHelper
/*void qm3740722057_7(const QVariant & v1, const QVariantComparisonHelper & v2)*/ {
  const QVariant & v1 = *(const QVariant *)this_; const QVariantComparisonHelper & v2 = *(const QVariantComparisonHelper *)this_;
  (void) operator!=(v1, v2);
  auto xptr = (bool (*)(QVariant const&, QVariantComparisonHelper const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:144
// [1] bool operator!=(const QMargins &, const QMargins &) 
// (12)qm2164734316 (18)_ZneRK8QMarginsS1_
/*void qm2164734316_8(const QMargins & m1, const QMargins & m2)*/ {
  const QMargins & m1 = *(const QMargins *)this_; const QMargins & m2 = *(const QMargins *)this_;
  (void) operator!=(m1, m2);
  auto xptr = (bool (*)(QMargins const&, QMargins const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1830
// [1] bool operator!=(const QString &, const QStringRef &) 
// (10)qm57209471 (28)_ZneRK7QStringRK10QStringRef
/*void qm57209471_9(const QString & lhs, const QStringRef & rhs)*/ {
  const QString & lhs = *(const QString *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1892
// [1] bool operator!=(const QString &, QChar) 
// (12)qm1831412091 (20)_ZneRK7QString5QChar
/*void qm1831412091_10(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:363
// [1] bool operator!=(const QPointF &, const QPointF &) 
// (11)qm387243259 (17)_ZneRK7QPointFS1_
/*void qm387243259_11(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) operator!=(p1, p2);
  auto xptr = (bool (*)(QPointF const&, QPointF const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:353
// [1] bool operator!=(const QSizeF &, const QSizeF &) 
// (12)qm3775513839 (16)_ZneRK6QSizeFS1_
/*void qm3775513839_12(const QSizeF & s1, const QSizeF & s2)*/ {
  const QSizeF & s1 = *(const QSizeF *)this_; const QSizeF & s2 = *(const QSizeF *)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(QSizeF const&, QSizeF const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:866
// [1] bool operator!=(const QRectF &, const QRectF &) 
// (12)qm2472166244 (16)_ZneRK6QRectFS1_
/*void qm2472166244_13(const QRectF & r1, const QRectF & r2)*/ {
  const QRectF & r1 = *(const QRectF *)this_; const QRectF & r2 = *(const QRectF *)this_;
  (void) operator!=(r1, r2);
  auto xptr = (bool (*)(QRectF const&, QRectF const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:168
// [1] bool operator!=(const QPoint &, const QPoint &) 
// (12)qm2766571320 (16)_ZneRK6QPointS1_
/*void qm2766571320_14(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) operator!=(p1, p2);
  auto xptr = (bool (*)(QPoint const&, QPoint const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:178
// [1] bool operator!=(const QSize &, const QSize &) 
// (12)qm3600260886 (15)_ZneRK5QSizeS1_
/*void qm3600260886_15(const QSize & s1, const QSize & s2)*/ {
  const QSize & s1 = *(const QSize *)this_; const QSize & s2 = *(const QSize *)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(QSize const&, QSize const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:459
// [1] bool operator!=(const QRect &, const QRect &) 
// (12)qm2188874192 (15)_ZneRK5QRectS1_
/*void qm2188874192_16(const QRect & r1, const QRect & r2)*/ {
  const QRect & r1 = *(const QRect *)this_; const QRect & r2 = *(const QRect *)this_;
  (void) operator!=(r1, r2);
  auto xptr = (bool (*)(QRect const&, QRect const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:309
// [1] bool operator!=(const QVersionNumber &, const QVersionNumber &) 
// (12)qm2468729933 (25)_ZneRK14QVersionNumberS1_
/*void qm2468729933_17(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:108
// [1] bool operator!=(const QStorageInfo &, const QStorageInfo &) 
// (12)qm1415209611 (23)_ZneRK12QStorageInfoS1_
/*void qm1415209611_18(const QStorageInfo & first, const QStorageInfo & second)*/ {
  const QStorageInfo & first = *(const QStorageInfo *)this_; const QStorageInfo & second = *(const QStorageInfo *)this_;
  (void) operator!=(first, second);
  auto xptr = (bool (*)(QStorageInfo const&, QStorageInfo const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:202
// [1] bool operator!=(const QMetaMethod &, const QMetaMethod &) 
// (12)qm1850754557 (22)_ZneRK11QMetaMethodS1_
/*void qm1850754557_19(const QMetaMethod & m1, const QMetaMethod & m2)*/ {
  const QMetaMethod & m1 = *(const QMetaMethod *)this_; const QMetaMethod & m2 = *(const QMetaMethod *)this_;
  (void) operator!=(m1, m2);
  auto xptr = (bool (*)(QMetaMethod const&, QMetaMethod const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1818
// [1] bool operator!=(const QStringRef &, const QStringRef &) 
// (12)qm4250915789 (21)_ZneRK10QStringRefS1_
/*void qm4250915789_20(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(QStringRef const&, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1837
// [1] bool operator!=(const QStringRef &, const QString &) 
// (12)qm1316009104 (28)_ZneRK10QStringRefRK7QString
/*void qm1316009104_21(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1977
// [1] bool operator!=(const QStringRef &, const QByteArray &) 
// (12)qm2078831616 (32)_ZneRK10QStringRefRK10QByteArray
/*void qm2078831616_22(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1911
// [1] bool operator!=(const QStringRef &, QChar) 
// (12)qm4002325766 (24)_ZneRK10QStringRef5QChar
/*void qm4002325766_23(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1873
// [1] bool operator!=(const QStringRef &, QLatin1String) 
// (12)qm3036807051 (33)_ZneRK10QStringRef13QLatin1String
/*void qm3036807051_24(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:690
// [1] bool operator!=(const QByteArray &, const QByteArray &) 
// (12)qm2780470182 (21)_ZneRK10QByteArrayS1_
/*void qm2780470182_25(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator!=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1984
// [1] bool operator!=(const QByteArray &, const QStringRef &) 
// (12)qm2999003444 (32)_ZneRK10QByteArrayRK10QStringRef
/*void qm2999003444_26(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:692
// [1] bool operator!=(const QByteArray &, const char *) 
// (12)qm1564723204 (21)_ZneRK10QByteArrayPKc
/*void qm1564723204_27(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator!=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1428
// [1] bool operator!=(const char *, const QString &) 
// (12)qm2628927801 (17)_ZnePKcRK7QString
/*void qm2628927801_28(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2006
// [1] bool operator!=(const char *, const QStringRef &) 
// (12)qm2823205451 (21)_ZnePKcRK10QStringRef
/*void qm2823205451_29(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:694
// [1] bool operator!=(const char *, const QByteArray &) 
// (12)qm1771410816 (21)_ZnePKcRK10QByteArray
/*void qm1771410816_30(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator!=(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1441
// [1] bool operator!=(const char *, QLatin1String) 
// (12)qm1487601994 (22)_ZnePKc13QLatin1String
/*void qm1487601994_31(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1375
// [1] bool operator!=(QString::Null, QString::Null) 
// (12)qm3490968056 (22)_ZneN7QString4NullES0_
/*void qm3490968056_32(QString::Null arg0, QString::Null arg1)*/ {
  QString::Null arg0 = *(QString::Null*)this_; QString::Null arg1 = *(QString::Null*)this_;
  (void) operator!=(arg0, arg1);
  auto xptr = (bool (*)(QString::Null, QString::Null) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:656
// [1] bool operator!=(std::nullptr_t, QChar) 
// (12)qm1558436589 (12)_ZneDn5QChar
/*void qm1558436589_33(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator!=(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:280
// [1] bool operator!=(qfloat16, int) 
// (12)qm2483641335 (14)_Zne8qfloat16i
/*void qm2483641335_34(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator!=(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator!=(qfloat16, float) 
// (10)qm79054438 (14)_Zne8qfloat16f
/*void qm79054438_35(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator!=(qfloat16, long double) 
// (12)qm2646546396 (14)_Zne8qfloat16e
/*void qm2646546396_36(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator!=(qfloat16, double) 
// (12)qm3937937226 (14)_Zne8qfloat16d
/*void qm3937937226_37(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:254
// [1] bool operator!=(qfloat16, qfloat16) 
// (11)qm791810933 (15)_Zne8qfloat16S_
/*void qm791810933_38(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator!=(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:96
// [1] bool operator!=(QCborTag, QCborKnownTags) 
// (12)qm2419108264 (29)_Zne8QCborTag14QCborKnownTags
/*void qm2419108264_39(QCborTag t, QCborKnownTags kt)*/ {
  QCborTag t = *(QCborTag*)this_; QCborKnownTags kt = *(QCborKnownTags*)this_;
  (void) operator!=(t, kt);
  auto xptr = (bool (*)(QCborTag, QCborKnownTags) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:640
// [1] bool operator!=(QChar, QChar) 
// (12)qm2690507620 (12)_Zne5QCharS_
/*void qm2690507620_40(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator!=(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1887
// [1] bool operator!=(QChar, const QString &) 
// (12)qm4285046533 (20)_Zne5QCharRK7QString
/*void qm4285046533_41(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1906
// [1] bool operator!=(QChar, const QStringRef &) 
// (11)qm985722911 (24)_Zne5QCharRK10QStringRef
/*void qm985722911_42(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:651
// [1] bool operator!=(QChar, std::nullptr_t) 
// (12)qm4093667272 (12)_Zne5QCharDn
/*void qm4093667272_43(QChar lhs, nullptr_t arg1)*/ {
  QChar lhs = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator!=(lhs, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1925
// [1] bool operator!=(QChar, QLatin1String) 
// (11)qm876548837 (25)_Zne5QChar13QLatin1String
/*void qm876548837_44(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:97
// [1] bool operator!=(QCborKnownTags, QCborTag) 
// (11)qm210339309 (29)_Zne14QCborKnownTags8QCborTag
/*void qm210339309_45(QCborKnownTags kt, QCborTag t)*/ {
  QCborKnownTags kt = *(QCborKnownTags*)this_; QCborTag t = *(QCborTag*)this_;
  (void) operator!=(kt, t);
  auto xptr = (bool (*)(QCborKnownTags, QCborTag) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1384
// [1] bool operator!=(QLatin1String, QLatin1String) 
// (11)qm853804104 (21)_Zne13QLatin1StringS_
/*void qm853804104_46(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator!=(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1866
// [1] bool operator!=(QLatin1String, const QStringRef &) 
// (12)qm3212122633 (33)_Zne13QLatin1StringRK10QStringRef
/*void qm3212122633_47(QLatin1String lhs, const QStringRef & rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QStringRef const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1930
// [1] bool operator!=(QLatin1String, QChar) 
// (12)qm3862762977 (25)_Zne13QLatin1String5QChar
/*void qm3862762977_48(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:69
// [1] bool operator!=(QLatin1Char, char) 
// (12)qm2880846505 (18)_Zne11QLatin1Charc
/*void qm2880846505_49(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:189
// [16] QMargins operator*(int, const QMargins &) 
// (12)qm2768608274 (16)_ZmliRK8QMargins
/*void qm2768608274(int factor, const QMargins & margins)*/ {
  int factor = *(int*)this_; const QMargins & margins = *(const QMargins *)this_;
  (void) operator*(factor, margins);
  auto xptr = (QMargins (*)(int, QMargins const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:192
// [8] const QPoint operator*(int, const QPoint &) 
// (12)qm3326395924 (14)_ZmliRK6QPoint
/*void qm3326395924_1(int factor, const QPoint & p)*/ {
  int factor = *(int*)this_; const QPoint & p = *(const QPoint *)this_;
  (void) operator*(factor, p);
  auto xptr = (const QPoint (*)(int, QPoint const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:240
// [8] double operator*(int, qfloat16) 
// (12)qm4069815871 (14)_Zmli8qfloat16
/*void qm4069815871_2(int lhs, qfloat16 rhs)*/ {
  int lhs = *(int*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (double (*)(int, qfloat16) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:186
// [8] const QPoint operator*(float, const QPoint &) 
// (11)qm927964569 (14)_ZmlfRK6QPoint
/*void qm927964569_3(float factor, const QPoint & p)*/ {
  float factor = *(float*)this_; const QPoint & p = *(const QPoint *)this_;
  (void) operator*(factor, p);
  auto xptr = (const QPoint (*)(float, QPoint const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator*(float, qfloat16) 
// (10)qm60763570 (14)_Zmlf8qfloat16
/*void qm60763570_4(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (float (*)(float, qfloat16) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator*(long double, qfloat16) 
// (12)qm3903362737 (14)_Zmle8qfloat16
/*void qm3903362737_5(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (long double (*)(long double, qfloat16) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:421
// [32] QMarginsF operator*(qreal, const QMarginsF &) 
// (11)qm374305980 (17)_ZmldRK9QMarginsF
/*void qm374305980_6(double lhs, const QMarginsF & rhs)*/ {
  double lhs = *(double*)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (QMarginsF (*)(double, QMarginsF const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:201
// [16] QMargins operator*(qreal, const QMargins &) 
// (12)qm1001037308 (16)_ZmldRK8QMargins
/*void qm1001037308_7(double factor, const QMargins & margins)*/ {
  double factor = *(double*)this_; const QMargins & margins = *(const QMargins *)this_;
  (void) operator*(factor, margins);
  auto xptr = (QMargins (*)(double, QMargins const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:385
// [16] const QPointF operator*(qreal, const QPointF &) 
// (12)qm1352652298 (15)_ZmldRK7QPointF
/*void qm1352652298_8(double c, const QPointF & p)*/ {
  double c = *(double*)this_; const QPointF & p = *(const QPointF *)this_;
  (void) operator*(c, p);
  auto xptr = (const QPointF (*)(double, QPointF const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:365
// [16] const QSizeF operator*(qreal, const QSizeF &) 
// (12)qm1681063370 (14)_ZmldRK6QSizeF
/*void qm1681063370_9(double c, const QSizeF & s)*/ {
  double c = *(double*)this_; const QSizeF & s = *(const QSizeF *)this_;
  (void) operator*(c, s);
  auto xptr = (const QSizeF (*)(double, QSizeF const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:189
// [8] const QPoint operator*(double, const QPoint &) 
// (11)qm867847588 (14)_ZmldRK6QPoint
/*void qm867847588_10(double factor, const QPoint & p)*/ {
  double factor = *(double*)this_; const QPoint & p = *(const QPoint *)this_;
  (void) operator*(factor, p);
  auto xptr = (const QPoint (*)(double, QPoint const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:190
// [8] const QSize operator*(qreal, const QSize &) 
// (12)qm3500869847 (13)_ZmldRK5QSize
/*void qm3500869847_11(double c, const QSize & s)*/ {
  double c = *(double*)this_; const QSize & s = *(const QSize *)this_;
  (void) operator*(c, s);
  auto xptr = (const QSize (*)(double, QSize const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator*(double, qfloat16) 
// (11)qm124452239 (14)_Zmld8qfloat16
/*void qm124452239_12(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (double (*)(double, qfloat16) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:415
// [32] QMarginsF operator*(const QMarginsF &, qreal) 
// (12)qm3830765627 (17)_ZmlRK9QMarginsFd
/*void qm3830765627_13(const QMarginsF & lhs, double rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; double rhs = *(double*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (QMarginsF (*)(QMarginsF const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:183
// [16] QMargins operator*(const QMargins &, int) 
// (11)qm292427433 (16)_ZmlRK8QMarginsi
/*void qm292427433_14(const QMargins & margins, int factor)*/ {
  const QMargins & margins = *(const QMargins *)this_; int factor = *(int*)this_;
  (void) operator*(margins, factor);
  auto xptr = (QMargins (*)(QMargins const&, int) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:195
// [16] QMargins operator*(const QMargins &, qreal) 
// (12)qm1876912660 (16)_ZmlRK8QMarginsd
/*void qm1876912660_15(const QMargins & margins, double factor)*/ {
  const QMargins & margins = *(const QMargins *)this_; double factor = *(double*)this_;
  (void) operator*(margins, factor);
  auto xptr = (QMargins (*)(QMargins const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:380
// [16] const QPointF operator*(const QPointF &, qreal) 
// (11)qm595928172 (15)_ZmlRK7QPointFd
/*void qm595928172_16(const QPointF & p, double c)*/ {
  const QPointF & p = *(const QPointF *)this_; double c = *(double*)this_;
  (void) operator*(p, c);
  auto xptr = (const QPointF (*)(QPointF const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:362
// [16] const QSizeF operator*(const QSizeF &, qreal) 
// (12)qm3770557984 (14)_ZmlRK6QSizeFd
/*void qm3770557984_17(const QSizeF & s, double c)*/ {
  const QSizeF & s = *(const QSizeF *)this_; double c = *(double*)this_;
  (void) operator*(s, c);
  auto xptr = (const QSizeF (*)(QSizeF const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:183
// [8] const QPoint operator*(const QPoint &, int) 
// (11)qm877829746 (14)_ZmlRK6QPointi
/*void qm877829746_18(const QPoint & p, int factor)*/ {
  const QPoint & p = *(const QPoint *)this_; int factor = *(int*)this_;
  (void) operator*(p, factor);
  auto xptr = (const QPoint (*)(QPoint const&, int) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:177
// [8] const QPoint operator*(const QPoint &, float) 
// (12)qm2767029219 (14)_ZmlRK6QPointf
/*void qm2767029219_19(const QPoint & p, float factor)*/ {
  const QPoint & p = *(const QPoint *)this_; float factor = *(float*)this_;
  (void) operator*(p, factor);
  auto xptr = (const QPoint (*)(QPoint const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:180
// [8] const QPoint operator*(const QPoint &, double) 
// (12)qm1256448719 (14)_ZmlRK6QPointd
/*void qm1256448719_20(const QPoint & p, double factor)*/ {
  const QPoint & p = *(const QPoint *)this_; double factor = *(double*)this_;
  (void) operator*(p, factor);
  auto xptr = (const QPoint (*)(QPoint const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:187
// [8] const QSize operator*(const QSize &, qreal) 
// (12)qm2150438193 (13)_ZmlRK5QSized
/*void qm2150438193_21(const QSize & s, double c)*/ {
  const QSize & s = *(const QSize *)this_; double c = *(double*)this_;
  (void) operator*(s, c);
  auto xptr = (const QSize (*)(QSize const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:240
// [8] double operator*(qfloat16, int) 
// (12)qm2564470658 (14)_Zml8qfloat16i
/*void qm2564470658_22(qfloat16 lhs, int rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; int rhs = *(int*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (double (*)(qfloat16, int) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator*(qfloat16, float) 
// (11)qm140880403 (14)_Zml8qfloat16f
/*void qm140880403_23(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (float (*)(qfloat16, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator*(qfloat16, long double) 
// (12)qm2439838633 (14)_Zml8qfloat16e
/*void qm2439838633_24(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (long double (*)(qfloat16, long double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator*(qfloat16, double) 
// (12)qm3865824063 (14)_Zml8qfloat16d
/*void qm3865824063_25(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator*(lhs, rhs);
  auto xptr = (double (*)(qfloat16, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:211
// [2] qfloat16 operator*(qfloat16, qfloat16) 
// (11)qm256984362 (15)_Zml8qfloat16S_
/*void qm256984362_26(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator*(a, b);
  auto xptr = (qfloat16 (*)(qfloat16, qfloat16) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:239
// [8] double operator-(int, qfloat16) 
// (12)qm2210650749 (14)_Zmii8qfloat16
/*void qm2210650749_5(int lhs, qfloat16 rhs)*/ {
  int lhs = *(int*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (double (*)(int, qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator-(float, qfloat16) 
// (12)qm1925743088 (14)_Zmif8qfloat16
/*void qm1925743088_6(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (float (*)(float, qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator-(long double, qfloat16) 
// (12)qm2583640819 (14)_Zmie8qfloat16
/*void qm2583640819_7(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (long double (*)(long double, qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator-(double, qfloat16) 
// (12)qm1983730125 (14)_Zmid8qfloat16
/*void qm1983730125_8(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (double (*)(double, qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:409
// [32] QMarginsF operator-(const QMarginsF &, qreal) 
// (12)qm1626846806 (17)_ZmiRK9QMarginsFd
/*void qm1626846806_9(const QMarginsF & lhs, double rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; double rhs = *(double*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (QMarginsF (*)(QMarginsF const&, double) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:391
// [32] QMarginsF operator-(const QMarginsF &, const QMarginsF &) 
// (12)qm2476156577 (19)_ZmiRK9QMarginsFS1_
/*void qm2476156577_10(const QMarginsF & lhs, const QMarginsF & rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (QMarginsF (*)(QMarginsF const&, QMarginsF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:177
// [16] QMargins operator-(const QMargins &, int) 
// (11)qm205628858 (16)_ZmiRK8QMarginsi
/*void qm205628858_11(const QMargins & lhs, int rhs)*/ {
  const QMargins & lhs = *(const QMargins *)this_; int rhs = *(int*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (QMargins (*)(QMargins const&, int) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:159
// [16] QMargins operator-(const QMargins &, const QMargins &) 
// (12)qm3980010618 (18)_ZmiRK8QMarginsS1_
/*void qm3980010618_12(const QMargins & m1, const QMargins & m2)*/ {
  const QMargins & m1 = *(const QMargins *)this_; const QMargins & m2 = *(const QMargins *)this_;
  (void) operator-(m1, m2);
  auto xptr = (QMargins (*)(QMargins const&, QMargins const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:375
// [16] const QPointF operator-(const QPointF &, const QPointF &) 
// (11)qm748431279 (17)_ZmiRK7QPointFS1_
/*void qm748431279_13(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) operator-(p1, p2);
  auto xptr = (const QPointF (*)(QPointF const&, QPointF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:359
// [16] const QSizeF operator-(const QSizeF &, const QSizeF &) 
// (11)qm131225807 (16)_ZmiRK6QSizeFS1_
/*void qm131225807_14(const QSizeF & s1, const QSizeF & s2)*/ {
  const QSizeF & s1 = *(const QSizeF *)this_; const QSizeF & s2 = *(const QSizeF *)this_;
  (void) operator-(s1, s2);
  auto xptr = (const QSizeF (*)(QSizeF const&, QSizeF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:889
// [32] QRectF operator-(const QRectF &, const QMarginsF &) 
// (12)qm2622963698 (25)_ZmiRK6QRectFRK9QMarginsF
/*void qm2622963698_15(const QRectF & lhs, const QMarginsF & rhs)*/ {
  const QRectF & lhs = *(const QRectF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (QRectF (*)(QRectF const&, QMarginsF const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:174
// [8] const QPoint operator-(const QPoint &, const QPoint &) 
// (12)qm1111300888 (16)_ZmiRK6QPointS1_
/*void qm1111300888_16(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) operator-(p1, p2);
  auto xptr = (const QPoint (*)(QPoint const&, QPoint const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:184
// [8] const QSize operator-(const QSize &, const QSize &) 
// (12)qm1851244121 (15)_ZmiRK5QSizeS1_
/*void qm1851244121_17(const QSize & s1, const QSize & s2)*/ {
  const QSize & s1 = *(const QSize *)this_; const QSize & s2 = *(const QSize *)this_;
  (void) operator-(s1, s2);
  auto xptr = (const QSize (*)(QSize const&, QSize const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:476
// [16] QRect operator-(const QRect &, const QMargins &) 
// (12)qm1747010185 (23)_ZmiRK5QRectRK8QMargins
/*void qm1747010185_18(const QRect & lhs, const QMargins & rhs)*/ {
  const QRect & lhs = *(const QRect *)this_; const QMargins & rhs = *(const QMargins *)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (QRect (*)(QRect const&, QMargins const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:239
// [8] double operator-(qfloat16, int) 
// (12)qm3918339008 (14)_Zmi8qfloat16i
/*void qm3918339008_19(qfloat16 lhs, int rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; int rhs = *(int*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (double (*)(qfloat16, int) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator-(qfloat16, float) 
// (12)qm2033321553 (14)_Zmi8qfloat16f
/*void qm2033321553_20(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (float (*)(qfloat16, float) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator-(qfloat16, long double) 
// (12)qm3761985515 (14)_Zmi8qfloat16e
/*void qm3761985515_21(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (long double (*)(qfloat16, long double) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator-(qfloat16, double) 
// (12)qm2537318269 (14)_Zmi8qfloat16d
/*void qm2537318269_22(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator-(lhs, rhs);
  auto xptr = (double (*)(qfloat16, double) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:210
// [2] qfloat16 operator-(qfloat16, qfloat16) 
// (12)qm2549232186 (15)_Zmi8qfloat16S_
/*void qm2549232186_23(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator-(a, b);
  auto xptr = (qfloat16 (*)(qfloat16, qfloat16) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [2] qfloat16 & operator*=(qfloat16 &, float) 
// (12)qm3544024331 (15)_ZmLR8qfloat16f
/*void qm3544024331(qfloat16 & lhs, float rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; float rhs = *(float*)this_;
  (void) operator*=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, float) ) &operator*=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [2] qfloat16 & operator*=(qfloat16 &, long double) 
// (12)qm1244976305 (15)_ZmLR8qfloat16e
/*void qm1244976305_1(qfloat16 & lhs, long double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; long double rhs = *(long double*)this_;
  (void) operator*=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, long double) ) &operator*=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [2] qfloat16 & operator*=(qfloat16 &, double) 
// (12)qm1026810919 (15)_ZmLR8qfloat16d
/*void qm1026810919_2(qfloat16 & lhs, double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; double rhs = *(double*)this_;
  (void) operator*=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, double) ) &operator*=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [2] qfloat16 & operator-=(qfloat16 &, float) 
// (12)qm1268707867 (15)_ZmIR8qfloat16f
/*void qm1268707867(qfloat16 & lhs, float rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; float rhs = *(float*)this_;
  (void) operator-=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, float) ) &operator-=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [2] qfloat16 & operator-=(qfloat16 &, long double) 
// (12)qm3533153185 (15)_ZmIR8qfloat16e
/*void qm3533153185_1(qfloat16 & lhs, long double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; long double rhs = *(long double*)this_;
  (void) operator-=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, long double) ) &operator-=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [2] qfloat16 & operator-=(qfloat16 &, double) 
// (12)qm2777715511 (15)_ZmIR8qfloat16d
/*void qm2777715511_2(qfloat16 & lhs, double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; double rhs = *(double*)this_;
  (void) operator-=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, double) ) &operator-=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:276
// [1] bool operator<(int, qfloat16) 
// (12)qm2097422302 (14)_Zlti8qfloat16
/*void qm2097422302(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator<(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator<(float, qfloat16) 
// (12)qm2349810771 (14)_Zltf8qfloat16
/*void qm2349810771_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator<(long double, qfloat16) 
// (12)qm1731788624 (14)_Zlte8qfloat16
/*void qm1731788624_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator<(double, qfloat16) 
// (12)qm2298123374 (14)_Zltd8qfloat16
/*void qm2298123374_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:65
// [1] bool operator<(char, QLatin1Char) 
// (11)qm692084718 (18)_Zltc11QLatin1Char
/*void qm692084718_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1831
// [1] bool operator<(const QString &, const QStringRef &) 
// (12)qm3955101296 (28)_ZltRK7QStringRK10QStringRef
/*void qm3955101296_5(const QString & lhs, const QStringRef & rhs)*/ {
  const QString & lhs = *(const QString *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QStringRef const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1893
// [1] bool operator<(const QString &, QChar) 
// (12)qm4161411270 (20)_ZltRK7QString5QChar
/*void qm4161411270_6(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:76
// [1] bool operator<(const QCollatorSortKey &, const QCollatorSortKey &) 
// (12)qm1622027340 (27)_ZltRK16QCollatorSortKeyS1_
/*void qm1622027340_7(const QCollatorSortKey & lhs, const QCollatorSortKey & rhs)*/ {
  const QCollatorSortKey & lhs = *(const QCollatorSortKey *)this_; const QCollatorSortKey & rhs = *(const QCollatorSortKey *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QCollatorSortKey const&, QCollatorSortKey const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:300
// [1] bool operator<(const QVersionNumber &, const QVersionNumber &) 
// (12)qm3228313893 (25)_ZltRK14QVersionNumberS1_
/*void qm3228313893_8(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1838
// [1] bool operator<(const QStringRef &, const QString &) 
// (12)qm2795915423 (28)_ZltRK10QStringRefRK7QString
/*void qm2795915423_9(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1978
// [1] bool operator<(const QStringRef &, const QByteArray &) 
// (12)qm3873891889 (32)_ZltRK10QStringRefRK10QByteArray
/*void qm3873891889_10(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1912
// [1] bool operator<(const QStringRef &, QChar) 
// (11)qm350289396 (24)_ZltRK10QStringRef5QChar
/*void qm350289396_11(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1874
// [1] bool operator<(const QStringRef &, QLatin1String) 
// (12)qm3829592355 (33)_ZltRK10QStringRef13QLatin1String
/*void qm3829592355_12(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:696
// [1] bool operator<(const QByteArray &, const QByteArray &) 
// (11)qm285177774 (21)_ZltRK10QByteArrayS1_
/*void qm285177774_13(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator<(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1985
// [1] bool operator<(const QByteArray &, const QStringRef &) 
// (11)qm802142981 (32)_ZltRK10QByteArrayRK10QStringRef
/*void qm802142981_14(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:698
// [1] bool operator<(const QByteArray &, const char *) 
// (12)qm3892716556 (21)_ZltRK10QByteArrayPKc
/*void qm3892716556_15(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator<(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1430
// [1] bool operator<(const char *, const QString &) 
// (12)qm3481873842 (17)_ZltPKcRK7QString
/*void qm3481873842_16(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator<(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2008
// [1] bool operator<(const char *, const QStringRef &) 
// (11)qm486760003 (21)_ZltPKcRK10QStringRef
/*void qm486760003_17(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator<(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:700
// [1] bool operator<(const char *, const QByteArray &) 
// (12)qm3704650120 (21)_ZltPKcRK10QByteArray
/*void qm3704650120_18(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator<(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1443
// [1] bool operator<(const char *, QLatin1String) 
// (12)qm1455803540 (22)_ZltPKc13QLatin1String
/*void qm1455803540_19(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator<(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:649
// [1] bool operator<(std::nullptr_t, QChar) 
// (12)qm3819789538 (12)_ZltDn5QChar
/*void qm3819789538_20(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator<(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:276
// [1] bool operator<(qfloat16, int) 
// (11)qm390782563 (14)_Zlt8qfloat16i
/*void qm390782563_21(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator<(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator<(qfloat16, float) 
// (12)qm2281030642 (14)_Zlt8qfloat16f
/*void qm2281030642_22(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator<(qfloat16, long double) 
// (11)qm519869000 (14)_Zlt8qfloat16e
/*void qm519869000_23(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator<(qfloat16, double) 
// (12)qm1778098910 (14)_Zlt8qfloat16d
/*void qm1778098910_24(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:250
// [1] bool operator<(qfloat16, qfloat16) 
// (12)qm3637708717 (15)_Zlt8qfloat16S_
/*void qm3637708717_25(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator<(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:638
// [1] bool operator<(QChar, QChar) 
// (11)qm521364843 (12)_Zlt5QCharS_
/*void qm521364843_26(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator<(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1882
// [1] bool operator<(QChar, const QString &) 
// (12)qm1783342776 (20)_Zlt5QCharRK7QString
/*void qm1783342776_27(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1901
// [1] bool operator<(QChar, const QStringRef &) 
// (12)qm3232671981 (24)_Zlt5QCharRK10QStringRef
/*void qm3232671981_28(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:647
// [1] bool operator<(QChar, std::nullptr_t) 
// (12)qm1263460807 (12)_Zlt5QCharDn
/*void qm1263460807_29(QChar arg0, nullptr_t arg1)*/ {
  QChar arg0 = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator<(arg0, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1920
// [1] bool operator<(QChar, QLatin1String) 
// (12)qm1735847821 (25)_Zlt5QChar13QLatin1String
/*void qm1735847821_30(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1386
// [1] bool operator<(QLatin1String, QLatin1String) 
// (12)qm2275534912 (21)_Zlt13QLatin1StringS_
/*void qm2275534912_31(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator<(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1867
// [1] bool operator<(QLatin1String, const QStringRef &) 
// (12)qm3996521633 (33)_Zlt13QLatin1StringRK10QStringRef
/*void qm3996521633_32(QLatin1String lhs, const QStringRef & rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QStringRef const&) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1931
// [1] bool operator<(QLatin1String, QChar) 
// (12)qm3044337801 (25)_Zlt13QLatin1String5QChar
/*void qm3044337801_33(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:72
// [1] bool operator<(QLatin1Char, char) 
// (12)qm3515833197 (18)_Zlt11QLatin1Charc
/*void qm3515833197_34(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator<(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:230
// [16] QTextStream & operator<<(QTextStream &, QTextStreamFunction) 
// (12)qm2921664235 (27)_ZlsR11QTextStreamPFS0_S0_E
/*void qm2921664235(QTextStream & s, QTextStreamFunction f)*/ {
  QTextStream & s = *(QTextStream *)this_; QTextStreamFunction f = *(QTextStreamFunction*)this_;
  (void) operator<<(s, f);
  auto xptr = (QTextStream & (*)(QTextStream&, QTextStream& (*)(QTextStream&)) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:233
// [16] QTextStream & operator<<(QTextStream &, QTextStreamManipulator) 
// (11)qm800847658 (42)_ZlsR11QTextStream22QTextStreamManipulator
/*void qm800847658_1(QTextStream & s, QTextStreamManipulator m)*/ {
  QTextStream & s = *(QTextStream *)this_; QTextStreamManipulator m = *(QTextStreamManipulator*)this_;
  (void) operator<<(s, m);
  auto xptr = (QTextStream & (*)(QTextStream&, QTextStreamManipulator) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:278
// [1] bool operator<=(int, qfloat16) 
// (11)qm310117589 (14)_Zlei8qfloat16
/*void qm310117589(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator<=(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator<=(float, qfloat16) 
// (12)qm3816251224 (14)_Zlef8qfloat16
/*void qm3816251224_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator<=(long double, qfloat16) 
// (11)qm138470491 (14)_Zlee8qfloat16
/*void qm138470491_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator<=(double, qfloat16) 
// (12)qm3884093285 (14)_Zled8qfloat16
/*void qm3884093285_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:63
// [1] bool operator<=(char, QLatin1Char) 
// (12)qm3570998089 (18)_Zlec11QLatin1Char
/*void qm3570998089_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1833
// [1] bool operator<=(const QString &, const QStringRef &) 
// (11)qm371374352 (28)_ZleRK7QStringRK10QStringRef
/*void qm371374352_5(const QString & lhs, const QStringRef & rhs)*/ {
  const QString & lhs = *(const QString *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1895
// [1] bool operator<=(const QString &, QChar) 
// (12)qm1761430264 (20)_ZleRK7QString5QChar
/*void qm1761430264_6(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:248
// [1] bool operator<=(const QUuid &, const QUuid &) 
// (12)qm1056135088 (15)_ZleRK5QUuidS1_
/*void qm1056135088_7(const QUuid & lhs, const QUuid & rhs)*/ {
  const QUuid & lhs = *(const QUuid *)this_; const QUuid & rhs = *(const QUuid *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QUuid const&, QUuid const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:303
// [1] bool operator<=(const QVersionNumber &, const QVersionNumber &) 
// (12)qm2125662116 (25)_ZleRK14QVersionNumberS1_
/*void qm2125662116_8(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1823
// [1] bool operator<=(const QStringRef &, const QStringRef &) 
// (12)qm2313934140 (21)_ZleRK10QStringRefS1_
/*void qm2313934140_9(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator<=(s1, s2);
  auto xptr = (bool (*)(QStringRef const&, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1840
// [1] bool operator<=(const QStringRef &, const QString &) 
// (12)qm1530593279 (28)_ZleRK10QStringRefRK7QString
/*void qm1530593279_10(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1980
// [1] bool operator<=(const QStringRef &, const QByteArray &) 
// (10)qm53064208 (32)_ZleRK10QStringRefRK10QByteArray
/*void qm53064208_11(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1914
// [1] bool operator<=(const QStringRef &, QChar) 
// (12)qm3235802246 (24)_ZleRK10QStringRef5QChar
/*void qm3235802246_12(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1876
// [1] bool operator<=(const QStringRef &, QLatin1String) 
// (12)qm2832084521 (33)_ZleRK10QStringRef13QLatin1String
/*void qm2832084521_13(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:702
// [1] bool operator<=(const QByteArray &, const QByteArray &) 
// (12)qm3507395927 (21)_ZleRK10QByteArrayS1_
/*void qm3507395927_14(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator<=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1987
// [1] bool operator<=(const QByteArray &, const QStringRef &) 
// (12)qm3389058852 (32)_ZleRK10QByteArrayRK10QStringRef
/*void qm3389058852_15(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:704
// [1] bool operator<=(const QByteArray &, const char *) 
// (11)qm704106229 (21)_ZleRK10QByteArrayPKc
/*void qm704106229_16(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator<=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1434
// [1] bool operator<=(const char *, const QString &) 
// (11)qm875884712 (17)_ZlePKcRK7QString
/*void qm875884712_17(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator<=(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2010
// [1] bool operator<=(const char *, const QStringRef &) 
// (12)qm3706893498 (21)_ZlePKcRK10QStringRef
/*void qm3706893498_18(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator<=(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:706
// [1] bool operator<=(const char *, const QByteArray &) 
// (11)qm488739697 (21)_ZlePKcRK10QByteArray
/*void qm488739697_19(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator<=(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1447
// [1] bool operator<=(const char *, QLatin1String) 
// (12)qm2456123334 (22)_ZlePKc13QLatin1String
/*void qm2456123334_20(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator<=(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:659
// [1] bool operator<=(std::nullptr_t, QChar) 
// (12)qm1477839568 (12)_ZleDn5QChar
/*void qm1477839568_21(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator<=(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:278
// [1] bool operator<=(qfloat16, int) 
// (12)qm2016593256 (14)_Zle8qfloat16i
/*void qm2016593256_22(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator<=(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator<=(qfloat16, float) 
// (12)qm3901610233 (14)_Zle8qfloat16f
/*void qm3901610233_23(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator<=(qfloat16, long double) 
// (12)qm1904511299 (14)_Zle8qfloat16e
/*void qm1904511299_24(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator<=(qfloat16, double) 
// (11)qm109296085 (14)_Zle8qfloat16d
/*void qm109296085_25(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:252
// [1] bool operator<=(qfloat16, qfloat16) 
// (12)qm1332651582 (15)_Zle8qfloat16S_
/*void qm1332651582_26(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator<=(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:643
// [1] bool operator<=(QChar, QChar) 
// (12)qm2762486617 (12)_Zle5QCharS_
/*void qm2762486617_27(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator<=(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1888
// [1] bool operator<=(QChar, const QString &) 
// (12)qm4206687366 (20)_Zle5QCharRK7QString
/*void qm4206687366_28(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1907
// [1] bool operator<=(QChar, const QStringRef &) 
// (11)qm344996255 (24)_Zle5QCharRK10QStringRef
/*void qm344996255_29(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:654
// [1] bool operator<=(QChar, std::nullptr_t) 
// (12)qm4042635253 (12)_Zle5QCharDn
/*void qm4042635253_30(QChar lhs, nullptr_t arg1)*/ {
  QChar lhs = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator<=(lhs, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1926
// [1] bool operator<=(QChar, QLatin1String) 
// (12)qm3651780876 (25)_Zle5QChar13QLatin1String
/*void qm3651780876_31(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1394
// [1] bool operator<=(QLatin1String, QLatin1String) 
// (12)qm1179648697 (21)_Zle13QLatin1StringS_
/*void qm1179648697_32(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator<=(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1869
// [1] bool operator<=(QLatin1String, const QStringRef &) 
// (12)qm2730150827 (33)_Zle13QLatin1StringRK10QStringRef
/*void qm2730150827_33(QLatin1String lhs, const QStringRef & rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QStringRef const&) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1933
// [1] bool operator<=(QLatin1String, QChar) 
// (11)qm195806728 (25)_Zle13QLatin1String5QChar
/*void qm195806728_34(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:70
// [1] bool operator<=(QLatin1Char, char) 
// (11)qm739647434 (18)_Zle11QLatin1Charc
/*void qm739647434_35(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator<=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator<=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:275
// [1] bool operator>(int, qfloat16) 
// (11)qm211205072 (14)_Zgti8qfloat16
/*void qm211205072(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator>(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator>(float, qfloat16) 
// (12)qm4254982237 (14)_Zgtf8qfloat16
/*void qm4254982237_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator>(long double, qfloat16) 
// (11)qm380263262 (14)_Zgte8qfloat16
/*void qm380263262_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator>(double, qfloat16) 
// (12)qm4184354912 (14)_Zgtd8qfloat16
/*void qm4184354912_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:66
// [1] bool operator>(char, QLatin1Char) 
// (12)qm1939567699 (18)_Zgtc11QLatin1Char
/*void qm1939567699_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1832
// [1] bool operator>(const QString &, const QStringRef &) 
// (12)qm1287704116 (28)_ZgtRK7QStringRK10QStringRef
/*void qm1287704116_5(const QString & lhs, const QStringRef & rhs)*/ {
  const QString & lhs = *(const QString *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1894
// [1] bool operator>(const QString &, QChar) 
// (10)qm98397096 (20)_ZgtRK7QString5QChar
/*void qm98397096_6(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:294
// [1] bool operator>(const QVersionNumber &, const QVersionNumber &) 
// (12)qm3056620350 (25)_ZgtRK14QVersionNumberS1_
/*void qm3056620350_7(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1821
// [1] bool operator>(const QStringRef &, const QStringRef &) 
// (12)qm3807225065 (21)_ZgtRK10QStringRefS1_
/*void qm3807225065_8(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator>(s1, s2);
  auto xptr = (bool (*)(QStringRef const&, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1839
// [1] bool operator>(const QStringRef &, const QString &) 
// (10)qm30968027 (28)_ZgtRK10QStringRefRK7QString
/*void qm30968027_9(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1979
// [1] bool operator>(const QStringRef &, const QByteArray &) 
// (12)qm2586959144 (32)_ZgtRK10QStringRefRK10QByteArray
/*void qm2586959144_10(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1913
// [1] bool operator>(const QStringRef &, QChar) 
// (12)qm2497410740 (24)_ZgtRK10QStringRef5QChar
/*void qm2497410740_11(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1875
// [1] bool operator>(const QStringRef &, QLatin1String) 
// (12)qm2153090776 (33)_ZgtRK10QStringRef13QLatin1String
/*void qm2153090776_12(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:708
// [1] bool operator>(const QByteArray &, const QByteArray &) 
// (12)qm3121147010 (21)_ZgtRK10QByteArrayS1_
/*void qm3121147010_13(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator>(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1986
// [1] bool operator>(const QByteArray &, const QStringRef &) 
// (12)qm1394114588 (32)_ZgtRK10QByteArrayRK10QStringRef
/*void qm1394114588_14(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:710
// [1] bool operator>(const QByteArray &, const char *) 
// (12)qm1123139360 (21)_ZgtRK10QByteArrayPKc
/*void qm1123139360_15(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator>(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1432
// [1] bool operator>(const char *, const QString &) 
// (11)qm293440332 (17)_ZgtPKcRK7QString
/*void qm293440332_16(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator>(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2012
// [1] bool operator>(const char *, const QStringRef &) 
// (12)qm3086271855 (21)_ZgtPKcRK10QStringRef
/*void qm3086271855_17(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator>(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:712
// [1] bool operator>(const char *, const QByteArray &) 
// (12)qm1982325412 (21)_ZgtPKcRK10QByteArray
/*void qm1982325412_18(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator>(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1445
// [1] bool operator>(const char *, QLatin1String) 
// (12)qm1689737196 (22)_ZgtPKc13QLatin1String
/*void qm1689737196_19(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator>(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:658
// [1] bool operator>(std::nullptr_t, QChar) 
// (11)qm458073877 (12)_ZgtDn5QChar
/*void qm458073877_20(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator>(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:275
// [1] bool operator>(qfloat16, int) 
// (12)qm1725463149 (14)_Zgt8qfloat16i
/*void qm1725463149_21(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator>(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator>(qfloat16, float) 
// (12)qm4133971964 (14)_Zgt8qfloat16f
/*void qm4133971964_22(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator>(qfloat16, long double) 
// (12)qm1869493830 (14)_Zgt8qfloat16e
/*void qm1869493830_23(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator>(qfloat16, double) 
// (11)qm409536208 (14)_Zgt8qfloat16d
/*void qm409536208_24(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:249
// [1] bool operator>(qfloat16, qfloat16) 
// (12)qm1058715662 (15)_Zgt8qfloat16S_
/*void qm1058715662_25(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator>(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:642
// [1] bool operator>(QChar, QChar) 
// (12)qm3891502748 (12)_Zgt5QCharS_
/*void qm3891502748_26(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator>(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1884
// [1] bool operator>(QChar, const QString &) 
// (12)qm2543637974 (20)_Zgt5QCharRK7QString
/*void qm2543637974_27(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1903
// [1] bool operator>(QChar, const QStringRef &) 
// (12)qm1083515821 (24)_Zgt5QCharRK10QStringRef
/*void qm1083515821_28(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:653
// [1] bool operator>(QChar, std::nullptr_t) 
// (12)qm3014531632 (12)_Zgt5QCharDn
/*void qm3014531632_29(QChar lhs, nullptr_t arg1)*/ {
  QChar lhs = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator>(lhs, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1922
// [1] bool operator>(QChar, QLatin1String) 
// (11)qm288003478 (25)_Zgt5QChar13QLatin1String
/*void qm288003478_30(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1392
// [1] bool operator>(QLatin1String, QLatin1String) 
// (11)qm760640364 (21)_Zgt13QLatin1StringS_
/*void qm760640364_31(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator>(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1868
// [1] bool operator>(QLatin1String, const QStringRef &) 
// (12)qm2317445978 (33)_Zgt13QLatin1StringRK10QStringRef
/*void qm2317445978_32(QLatin1String lhs, const QStringRef & rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QStringRef const&) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1932
// [1] bool operator>(QLatin1String, QChar) 
// (12)qm3274216082 (25)_Zgt13QLatin1String5QChar
/*void qm3274216082_33(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:73
// [1] bool operator>(QLatin1Char, char) 
// (12)qm2337566928 (18)_Zgt11QLatin1Charc
/*void qm2337566928_34(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator>(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator>;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:277
// [1] bool operator>=(int, qfloat16) 
// (12)qm1676583131 (14)_Zgei8qfloat16
/*void qm1676583131(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator>=(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator>=(float, qfloat16) 
// (12)qm2464545622 (14)_Zgef8qfloat16
/*void qm2464545622_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator>=(long double, qfloat16) 
// (12)qm2043822165 (14)_Zgee8qfloat16
/*void qm2043822165_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator>=(double, qfloat16) 
// (12)qm2517642091 (14)_Zged8qfloat16
/*void qm2517642091_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:64
// [1] bool operator>=(char, QLatin1Char) 
// (12)qm2382508276 (18)_Zgec11QLatin1Char
/*void qm2382508276_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1834
// [1] bool operator>=(const QString &, const QStringRef &) 
// (12)qm2975627604 (28)_ZgeRK7QStringRK10QStringRef
/*void qm2975627604_5(const QString & lhs, const QStringRef & rhs)*/ {
  const QString & lhs = *(const QString *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1896
// [1] bool operator>=(const QString &, QChar) 
// (12)qm2502572438 (20)_ZgeRK7QString5QChar
/*void qm2502572438_6(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:250
// [1] bool operator>=(const QUuid &, const QUuid &) 
// (12)qm3644516371 (15)_ZgeRK5QUuidS1_
/*void qm3644516371_7(const QUuid & lhs, const QUuid & rhs)*/ {
  const QUuid & lhs = *(const QUuid *)this_; const QUuid & rhs = *(const QUuid *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QUuid const&, QUuid const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:297
// [1] bool operator>=(const QVersionNumber &, const QVersionNumber &) 
// (11)qm149913023 (25)_ZgeRK14QVersionNumberS1_
/*void qm149913023_8(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1825
// [1] bool operator>=(const QStringRef &, const QStringRef &) 
// (11)qm589057552 (21)_ZgeRK10QStringRefS1_
/*void qm589057552_9(const QStringRef & s1, const QStringRef & s2)*/ {
  const QStringRef & s1 = *(const QStringRef *)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator>=(s1, s2);
  auto xptr = (bool (*)(QStringRef const&, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1841
// [1] bool operator>=(const QStringRef &, const QString &) 
// (12)qm4232331195 (28)_ZgeRK10QStringRefRK7QString
/*void qm4232331195_10(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1981
// [1] bool operator>=(const QStringRef &, const QByteArray &) 
// (12)qm2147387657 (32)_ZgeRK10QStringRefRK10QByteArray
/*void qm2147387657_11(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1915
// [1] bool operator>=(const QStringRef &, QChar) 
// (12)qm1088808902 (24)_ZgeRK10QStringRef5QChar
/*void qm1088808902_12(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1877
// [1] bool operator>=(const QStringRef &, QLatin1String) 
// (12)qm3436794322 (33)_ZgeRK10QStringRef13QLatin1String
/*void qm3436794322_13(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:714
// [1] bool operator>=(const QByteArray &, const QByteArray &) 
// (12)qm2079917691 (21)_ZgeRK10QByteArrayS1_
/*void qm2079917691_14(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator>=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1988
// [1] bool operator>=(const QByteArray &, const QStringRef &) 
// (12)qm3067597885 (32)_ZgeRK10QByteArrayRK10QStringRef
/*void qm3067597885_15(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:716
// [1] bool operator>=(const QByteArray &, const char *) 
// (12)qm2197837273 (21)_ZgeRK10QByteArrayPKc
/*void qm2197837273_16(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator>=(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1436
// [1] bool operator>=(const char *, const QString &) 
// (12)qm3938473558 (17)_ZgePKcRK7QString
/*void qm3938473558_17(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator>=(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2014
// [1] bool operator>=(const char *, const QStringRef &) 
// (12)qm1980051350 (21)_ZgePKcRK10QStringRef
/*void qm1980051350_18(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator>=(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:718
// [1] bool operator>=(const char *, const QByteArray &) 
// (12)qm3084257373 (21)_ZgePKcRK10QByteArray
/*void qm3084257373_19(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator>=(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1449
// [1] bool operator>=(const char *, QLatin1String) 
// (12)qm2685922494 (22)_ZgePKc13QLatin1String
/*void qm2685922494_20(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator>=(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:657
// [1] bool operator>=(std::nullptr_t, QChar) 
// (12)qm2700538151 (12)_ZgeDn5QChar
/*void qm2700538151_21(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator>=(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:277
// [1] bool operator>=(qfloat16, int) 
// (11)qm161505638 (14)_Zge8qfloat16i
/*void qm161505638_22(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator>=(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator>=(qfloat16, float) 
// (12)qm2568977655 (14)_Zge8qfloat16f
/*void qm2568977655_23(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator>=(qfloat16, long double) 
// (9)qm1453389 (14)_Zge8qfloat16e
/*void qm1453389_24(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator>=(qfloat16, double) 
// (12)qm1997610459 (14)_Zge8qfloat16d
/*void qm1997610459_25(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:251
// [1] bool operator>=(qfloat16, qfloat16) 
// (12)qm2829523357 (15)_Zge8qfloat16S_
/*void qm2829523357_26(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator>=(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:641
// [1] bool operator>=(QChar, QChar) 
// (12)qm1548273838 (12)_Zge5QCharS_
/*void qm1548273838_27(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator>=(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1889
// [1] bool operator>=(QChar, const QString &) 
// (11)qm124487656 (20)_Zge5QCharRK7QString
/*void qm124487656_28(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1908
// [1] bool operator>=(QChar, const QStringRef &) 
// (12)qm2494280415 (24)_Zge5QCharRK10QStringRef
/*void qm2494280415_29(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:652
// [1] bool operator>=(QChar, std::nullptr_t) 
// (11)qm135613442 (12)_Zge5QCharDn
/*void qm135613442_30(QChar lhs, nullptr_t arg1)*/ {
  QChar lhs = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator>=(lhs, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1927
// [1] bool operator>=(QChar, QLatin1String) 
// (12)qm2952117015 (25)_Zge5QChar13QLatin1String
/*void qm2952117015_31(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1396
// [1] bool operator>=(QLatin1String, QLatin1String) 
// (12)qm3970406805 (21)_Zge13QLatin1StringS_
/*void qm3970406805_32(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator>=(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1870
// [1] bool operator>=(QLatin1String, const QStringRef &) 
// (12)qm3333272656 (33)_Zge13QLatin1StringRK10QStringRef
/*void qm3333272656_33(QLatin1String lhs, const QStringRef & rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QStringRef const&) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1934
// [1] bool operator>=(QLatin1String, QChar) 
// (12)qm2113387539 (25)_Zge13QLatin1String5QChar
/*void qm2113387539_34(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:71
// [1] bool operator>=(QLatin1Char, char) 
// (12)qm1993159799 (18)_Zge11QLatin1Charc
/*void qm1993159799_35(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator>=(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator>=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:279
// [1] bool operator==(int, qfloat16) 
// (12)qm2449115405 (14)_Zeqi8qfloat16
/*void qm2449115405(int a, qfloat16 b)*/ {
  int a = *(int*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator==(a, b);
  auto xptr = (bool (*)(int, qfloat16) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator==(float, qfloat16) 
// (12)qm1626460800 (14)_Zeqf8qfloat16
/*void qm1626460800_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(float, qfloat16) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator==(long double, qfloat16) 
// (12)qm2345036163 (14)_Zeqe8qfloat16
/*void qm2345036163_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(long double, qfloat16) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator==(double, qfloat16) 
// (12)qm1677984445 (14)_Zeqd8qfloat16
/*void qm1677984445_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(double, qfloat16) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:61
// [1] bool operator==(char, QLatin1Char) 
// (12)qm3351048123 (18)_Zeqc11QLatin1Char
/*void qm3351048123_4(char lhs, QLatin1Char rhs)*/ {
  char lhs = *(char*)this_; QLatin1Char rhs = *(QLatin1Char*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(char, QLatin1Char) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:800
// [1] bool operator==(const QByteArray::FromBase64Result &, const QByteArray::FromBase64Result &) 
// (11)qm869393393 (41)_ZeqRKN10QByteArray16FromBase64ResultES2_
/*void qm869393393_5(const QByteArray::FromBase64Result & lhs, const QByteArray::FromBase64Result & rhs)*/ {
  const QByteArray::FromBase64Result & lhs = *(const QByteArray::FromBase64Result *)this_; const QByteArray::FromBase64Result & rhs = *(const QByteArray::FromBase64Result *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QByteArray::FromBase64Result const&, QByteArray::FromBase64Result const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:372
// [1] bool operator==(const QMarginsF &, const QMarginsF &) 
// (12)qm3769878766 (19)_ZeqRK9QMarginsFS1_
/*void qm3769878766_6(const QMarginsF & lhs, const QMarginsF & rhs)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; const QMarginsF & rhs = *(const QMarginsF *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QMarginsF const&, QMarginsF const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:611
// [1] bool operator==(const QVariant &, const QVariantComparisonHelper &) 
// (11)qm883001350 (43)_ZeqRK8QVariantRK24QVariantComparisonHelper
/*void qm883001350_7(const QVariant & v1, const QVariantComparisonHelper & v2)*/ {
  const QVariant & v1 = *(const QVariant *)this_; const QVariantComparisonHelper & v2 = *(const QVariantComparisonHelper *)this_;
  (void) operator==(v1, v2);
  auto xptr = (bool (*)(QVariant const&, QVariantComparisonHelper const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:135
// [1] bool operator==(const QMargins &, const QMargins &) 
// (11)qm365095165 (18)_ZeqRK8QMarginsS1_
/*void qm365095165_8(const QMargins & m1, const QMargins & m2)*/ {
  const QMargins & m1 = *(const QMargins *)this_; const QMargins & m2 = *(const QMargins *)this_;
  (void) operator==(m1, m2);
  auto xptr = (bool (*)(QMargins const&, QMargins const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1891
// [1] bool operator==(const QString &, QChar) 
// (12)qm4104645799 (20)_ZeqRK7QString5QChar
/*void qm4104645799_9(const QString & lhs, QChar rhs)*/ {
  const QString & lhs = *(const QString *)this_; QChar rhs = *(QChar*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QString const&, QChar) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:357
// [1] bool operator==(const QPointF &, const QPointF &) 
// (12)qm3070151026 (17)_ZeqRK7QPointFS1_
/*void qm3070151026_10(const QPointF & p1, const QPointF & p2)*/ {
  const QPointF & p1 = *(const QPointF *)this_; const QPointF & p2 = *(const QPointF *)this_;
  (void) operator==(p1, p2);
  auto xptr = (bool (*)(QPointF const&, QPointF const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:350
// [1] bool operator==(const QSizeF &, const QSizeF &) 
// (12)qm3666817870 (16)_ZeqRK6QSizeFS1_
/*void qm3666817870_11(const QSizeF & s1, const QSizeF & s2)*/ {
  const QSizeF & s1 = *(const QSizeF *)this_; const QSizeF & s2 = *(const QSizeF *)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(QSizeF const&, QSizeF const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:860
// [1] bool operator==(const QRectF &, const QRectF &) 
// (12)qm2833036485 (16)_ZeqRK6QRectFS1_
/*void qm2833036485_12(const QRectF & r1, const QRectF & r2)*/ {
  const QRectF & r1 = *(const QRectF *)this_; const QRectF & r2 = *(const QRectF *)this_;
  (void) operator==(r1, r2);
  auto xptr = (bool (*)(QRectF const&, QRectF const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:165
// [1] bool operator==(const QPoint &, const QPoint &) 
// (12)qm2673897625 (16)_ZeqRK6QPointS1_
/*void qm2673897625_13(const QPoint & p1, const QPoint & p2)*/ {
  const QPoint & p1 = *(const QPoint *)this_; const QPoint & p2 = *(const QPoint *)this_;
  (void) operator==(p1, p2);
  auto xptr = (bool (*)(QPoint const&, QPoint const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:175
// [1] bool operator==(const QSize &, const QSize &) 
// (12)qm1044444726 (15)_ZeqRK5QSizeS1_
/*void qm1044444726_14(const QSize & s1, const QSize & s2)*/ {
  const QSize & s1 = *(const QSize *)this_; const QSize & s2 = *(const QSize *)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(QSize const&, QSize const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrect.h:454
// [1] bool operator==(const QRect &, const QRect &) 
// (12)qm1788934384 (15)_ZeqRK5QRectS1_
/*void qm1788934384_15(const QRect & r1, const QRect & r2)*/ {
  const QRect & r1 = *(const QRect *)this_; const QRect & r2 = *(const QRect *)this_;
  (void) operator==(r1, r2);
  auto xptr = (bool (*)(QRect const&, QRect const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhash.h:139
// [1] bool operator==(const QHashDummyValue &, const QHashDummyValue &) 
// (12)qm3205389729 (26)_ZeqRK15QHashDummyValueS1_
/*void qm3205389729_16(const QHashDummyValue & arg0, const QHashDummyValue & arg1)*/ {
  const QHashDummyValue & arg0 = *(const QHashDummyValue *)this_; const QHashDummyValue & arg1 = *(const QHashDummyValue *)this_;
  (void) operator==(arg0, arg1);
  auto xptr = (bool (*)(QHashDummyValue const&, QHashDummyValue const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:306
// [1] bool operator==(const QVersionNumber &, const QVersionNumber &) 
// (11)qm271546135 (25)_ZeqRK14QVersionNumberS1_
/*void qm271546135_17(const QVersionNumber & lhs, const QVersionNumber & rhs)*/ {
  const QVersionNumber & lhs = *(const QVersionNumber *)this_; const QVersionNumber & rhs = *(const QVersionNumber *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QVersionNumber const&, QVersionNumber const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:101
// [1] bool operator==(const QStorageInfo &, const QStorageInfo &) 
// (12)qm2761795938 (23)_ZeqRK12QStorageInfoS1_
/*void qm2761795938_18(const QStorageInfo & first, const QStorageInfo & second)*/ {
  const QStorageInfo & first = *(const QStorageInfo *)this_; const QStorageInfo & second = *(const QStorageInfo *)this_;
  (void) operator==(first, second);
  auto xptr = (bool (*)(QStorageInfo const&, QStorageInfo const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:200
// [1] bool operator==(const QMetaMethod &, const QMetaMethod &) 
// (12)qm2785601645 (22)_ZeqRK11QMetaMethodS1_
/*void qm2785601645_19(const QMetaMethod & m1, const QMetaMethod & m2)*/ {
  const QMetaMethod & m1 = *(const QMetaMethod *)this_; const QMetaMethod & m2 = *(const QMetaMethod *)this_;
  (void) operator==(m1, m2);
  auto xptr = (bool (*)(QMetaMethod const&, QMetaMethod const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1836
// [1] bool operator==(const QStringRef &, const QString &) 
// (12)qm1252268353 (28)_ZeqRK10QStringRefRK7QString
/*void qm1252268353_20(const QStringRef & lhs, const QString & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QString & rhs = *(const QString *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QString const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1976
// [1] bool operator==(const QStringRef &, const QByteArray &) 
// (12)qm3600392397 (32)_ZeqRK10QStringRefRK10QByteArray
/*void qm3600392397_21(const QStringRef & lhs, const QByteArray & rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; const QByteArray & rhs = *(const QByteArray *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QByteArray const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1910
// [1] bool operator==(const QStringRef &, QChar) 
// (11)qm933771281 (24)_ZeqRK10QStringRef5QChar
/*void qm933771281_22(const QStringRef & lhs, QChar rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QChar rhs = *(QChar*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QChar) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1872
// [1] bool operator==(const QStringRef &, QLatin1String) 
// (12)qm1350119506 (33)_ZeqRK10QStringRef13QLatin1String
/*void qm1350119506_23(const QStringRef & lhs, QLatin1String rhs)*/ {
  const QStringRef & lhs = *(const QStringRef *)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QStringRef const&, QLatin1String) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:684
// [1] bool operator==(const QByteArray &, const QByteArray &) 
// (11)qm709266324 (21)_ZeqRK10QByteArrayS1_
/*void qm709266324_24(const QByteArray & a1, const QByteArray & a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator==(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, QByteArray const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1983
// [1] bool operator==(const QByteArray &, const QStringRef &) 
// (11)qm531693049 (32)_ZeqRK10QByteArrayRK10QStringRef
/*void qm531693049_25(const QByteArray & lhs, const QStringRef & rhs)*/ {
  const QByteArray & lhs = *(const QByteArray *)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QByteArray const&, QStringRef const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:686
// [1] bool operator==(const QByteArray &, const char *) 
// (12)qm3535788086 (21)_ZeqRK10QByteArrayPKc
/*void qm3535788086_26(const QByteArray & a1, const char * a2)*/ {
  const QByteArray & a1 = *(const QByteArray *)this_; const char * a2 = *(const char **)this_;
  (void) operator==(a1, a2);
  auto xptr = (bool (*)(QByteArray const&, char const*) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1426
// [1] bool operator==(const char *, const QString &) 
// (12)qm1029199024 (17)_ZeqPKcRK7QString
/*void qm1029199024_27(const char * s1, const QString & s2)*/ {
  const char * s1 = *(const char **)this_; const QString & s2 = *(const QString *)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(char const*, QString const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:2004
// [1] bool operator==(const char *, const QStringRef &) 
// (11)qm666542713 (21)_ZeqPKcRK10QStringRef
/*void qm666542713_28(const char * s1, const QStringRef & s2)*/ {
  const char * s1 = *(const char **)this_; const QStringRef & s2 = *(const QStringRef *)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(char const*, QStringRef const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:688
// [1] bool operator==(const char *, const QByteArray &) 
// (12)qm3865675186 (21)_ZeqPKcRK10QByteArray
/*void qm3865675186_29(const char * a1, const QByteArray & a2)*/ {
  const char * a1 = *(const char **)this_; const QByteArray & a2 = *(const QByteArray *)this_;
  (void) operator==(a1, a2);
  auto xptr = (bool (*)(char const*, QByteArray const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1439
// [1] bool operator==(const char *, QLatin1String) 
// (12)qm2431888602 (22)_ZeqPKc13QLatin1String
/*void qm2431888602_30(const char * s1, QLatin1String s2)*/ {
  const char * s1 = *(const char **)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(char const*, QLatin1String) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1370
// [1] bool operator==(QString::Null, QString::Null) 
// (11)qm407592040 (22)_ZeqN7QString4NullES0_
/*void qm407592040_31(QString::Null arg0, QString::Null arg1)*/ {
  QString::Null arg0 = *(QString::Null*)this_; QString::Null arg1 = *(QString::Null*)this_;
  (void) operator==(arg0, arg1);
  auto xptr = (bool (*)(QString::Null, QString::Null) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:648
// [1] bool operator==(std::nullptr_t, QChar) 
// (12)qm1429156455 (12)_ZeqDn5QChar
/*void qm1429156455_32(nullptr_t arg0, QChar rhs)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; QChar rhs = *(QChar*)this_;
  (void) operator==(arg0, rhs);
  auto xptr = (bool (*)(decltype(nullptr), QChar) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:279
// [1] bool operator==(qfloat16, int) 
// (12)qm4222896304 (14)_Zeq8qfloat16i
/*void qm4222896304_33(qfloat16 a, int b)*/ {
  qfloat16 a = *(qfloat16*)this_; int b = *(int*)this_;
  (void) operator==(a, b);
  auto xptr = (bool (*)(qfloat16, int) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:268
// [1] bool operator==(qfloat16, float) 
// (12)qm1795904801 (14)_Zeq8qfloat16f
/*void qm1795904801_34(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, float) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:266
// [1] bool operator==(qfloat16, long double) 
// (12)qm4060218523 (14)_Zeq8qfloat16e
/*void qm4060218523_35(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, long double) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:267
// [1] bool operator==(qfloat16, double) 
// (12)qm2231710733 (14)_Zeq8qfloat16d
/*void qm2231710733_36(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(qfloat16, double) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:253
// [1] bool operator==(qfloat16, qfloat16) 
// (12)qm3353705045 (15)_Zeq8qfloat16S_
/*void qm3353705045_37(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator==(a, b);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:94
// [1] bool operator==(QCborTag, QCborKnownTags) 
// (12)qm1642110791 (29)_Zeq8QCborTag14QCborKnownTags
/*void qm1642110791_38(QCborTag t, QCborKnownTags kt)*/ {
  QCborTag t = *(QCborTag*)this_; QCborKnownTags kt = *(QCborKnownTags*)this_;
  (void) operator==(t, kt);
  auto xptr = (bool (*)(QCborTag, QCborKnownTags) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:637
// [1] bool operator==(QChar, QChar) 
// (12)qm2844855278 (12)_Zeq5QCharS_
/*void qm2844855278_39(QChar c1, QChar c2)*/ {
  QChar c1 = *(QChar*)this_; QChar c2 = *(QChar*)this_;
  (void) operator==(c1, c2);
  auto xptr = (bool (*)(QChar, QChar) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1880
// [1] bool operator==(QChar, const QString &) 
// (12)qm1726370521 (20)_Zeq5QCharRK7QString
/*void qm1726370521_40(QChar lhs, const QString & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QString & rhs = *(const QString *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QChar, QString const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1899
// [1] bool operator==(QChar, const QStringRef &) 
// (12)qm3823529224 (24)_Zeq5QCharRK10QStringRef
/*void qm3823529224_41(QChar lhs, const QStringRef & rhs)*/ {
  QChar lhs = *(QChar*)this_; const QStringRef & rhs = *(const QStringRef *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QChar, QStringRef const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:646
// [1] bool operator==(QChar, std::nullptr_t) 
// (12)qm4258041666 (12)_Zeq5QCharDn
/*void qm4258041666_42(QChar lhs, nullptr_t arg1)*/ {
  QChar lhs = *(QChar*)this_; nullptr_t arg1 = *(nullptr_t*)this_;
  (void) operator==(lhs, arg1);
  auto xptr = (bool (*)(QChar, decltype(nullptr)) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1918
// [1] bool operator==(QChar, QLatin1String) 
// (12)qm3073749439 (25)_Zeq5QChar13QLatin1String
/*void qm3073749439_43(QChar lhs, QLatin1String rhs)*/ {
  QChar lhs = *(QChar*)this_; QLatin1String rhs = *(QLatin1String*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QChar, QLatin1String) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:95
// [1] bool operator==(QCborKnownTags, QCborTag) 
// (12)qm4250514178 (29)_Zeq14QCborKnownTags8QCborTag
/*void qm4250514178_44(QCborKnownTags kt, QCborTag t)*/ {
  QCborKnownTags kt = *(QCborKnownTags*)this_; QCborTag t = *(QCborTag*)this_;
  (void) operator==(kt, t);
  auto xptr = (bool (*)(QCborKnownTags, QCborTag) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1382
// [1] bool operator==(QLatin1String, QLatin1String) 
// (12)qm3172471930 (21)_Zeq13QLatin1StringS_
/*void qm3172471930_45(QLatin1String s1, QLatin1String s2)*/ {
  QLatin1String s1 = *(QLatin1String*)this_; QLatin1String s2 = *(QLatin1String*)this_;
  (void) operator==(s1, s2);
  auto xptr = (bool (*)(QLatin1String, QLatin1String) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1929
// [1] bool operator==(QLatin1String, QChar) 
// (12)qm1698150075 (25)_Zeq13QLatin1String5QChar
/*void qm1698150075_46(QLatin1String lhs, QChar rhs)*/ {
  QLatin1String lhs = *(QLatin1String*)this_; QChar rhs = *(QChar*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QLatin1String, QChar) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:68
// [1] bool operator==(QLatin1Char, char) 
// (12)qm1064561464 (18)_Zeq11QLatin1Charc
/*void qm1064561464_47(QLatin1Char lhs, char rhs)*/ {
  QLatin1Char lhs = *(QLatin1Char*)this_; char rhs = *(char*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QLatin1Char, char) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:241
// [8] double operator/(int, qfloat16) 
// (11)qm593809633 (14)_Zdvi8qfloat16
/*void qm593809633(int lhs, qfloat16 rhs)*/ {
  int lhs = *(int*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (double (*)(int, qfloat16) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator/(float, qfloat16) 
// (12)qm3530525548 (14)_Zdvf8qfloat16
/*void qm3530525548_1(float lhs, qfloat16 rhs)*/ {
  float lhs = *(float*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (float (*)(float, qfloat16) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator/(long double, qfloat16) 
// (11)qm962080879 (14)_Zdve8qfloat16
/*void qm962080879_2(long double lhs, qfloat16 rhs)*/ {
  long double lhs = *(long double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (long double (*)(long double, qfloat16) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator/(double, qfloat16) 
// (12)qm3600440145 (14)_Zdvd8qfloat16
/*void qm3600440145_3(double lhs, qfloat16 rhs)*/ {
  double lhs = *(double*)this_; qfloat16 rhs = *(qfloat16*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (double (*)(double, qfloat16) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:427
// [32] QMarginsF operator/(const QMarginsF &, qreal) 
// (11)qm648227235 (17)_ZdvRK9QMarginsFd
/*void qm648227235_4(const QMarginsF & lhs, double divisor)*/ {
  const QMarginsF & lhs = *(const QMarginsF *)this_; double divisor = *(double*)this_;
  (void) operator/(lhs, divisor);
  auto xptr = (QMarginsF (*)(QMarginsF const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:207
// [16] QMargins operator/(const QMargins &, int) 
// (11)qm828385557 (16)_ZdvRK8QMarginsi
/*void qm828385557_5(const QMargins & margins, int divisor)*/ {
  const QMargins & margins = *(const QMargins *)this_; int divisor = *(int*)this_;
  (void) operator/(margins, divisor);
  auto xptr = (QMargins (*)(QMargins const&, int) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmargins.h:213
// [16] QMargins operator/(const QMargins &, qreal) 
// (12)qm1339119016 (16)_ZdvRK8QMarginsd
/*void qm1339119016_6(const QMargins & margins, double divisor)*/ {
  const QMargins & margins = *(const QMargins *)this_; double divisor = *(double*)this_;
  (void) operator/(margins, divisor);
  auto xptr = (QMargins (*)(QMargins const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:407
// [16] const QPointF operator/(const QPointF &, qreal) 
// (12)qm1111436057 (15)_ZdvRK7QPointFd
/*void qm1111436057_7(const QPointF & p, double divisor)*/ {
  const QPointF & p = *(const QPointF *)this_; double divisor = *(double*)this_;
  (void) operator/(p, divisor);
  auto xptr = (const QPointF (*)(QPointF const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:375
// [16] const QSizeF operator/(const QSizeF &, qreal) 
// (11)qm827228414 (14)_ZdvRK6QSizeFd
/*void qm827228414_8(const QSizeF & s, double c)*/ {
  const QSizeF & s = *(const QSizeF *)this_; double c = *(double*)this_;
  (void) operator/(s, c);
  auto xptr = (const QSizeF (*)(QSizeF const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qpoint.h:208
// [8] const QPoint operator/(const QPoint &, qreal) 
// (12)qm2601731089 (14)_ZdvRK6QPointd
/*void qm2601731089_9(const QPoint & p, double c)*/ {
  const QPoint & p = *(const QPoint *)this_; double c = *(double*)this_;
  (void) operator/(p, c);
  auto xptr = (const QPoint (*)(QPoint const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:200
// [8] const QSize operator/(const QSize &, qreal) 
// (12)qm3421256341 (13)_ZdvRK5QSized
/*void qm3421256341_10(const QSize & s, double c)*/ {
  const QSize & s = *(const QSize *)this_; double c = *(double*)this_;
  (void) operator/(s, c);
  auto xptr = (const QSize (*)(QSize const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:241
// [8] double operator/(qfloat16, int) 
// (12)qm1227493724 (14)_Zdv8qfloat16i
/*void qm1227493724_11(qfloat16 lhs, int rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; int rhs = *(int*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (double (*)(qfloat16, int) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [4] float operator/(qfloat16, float) 
// (12)qm3650424013 (14)_Zdv8qfloat16f
/*void qm3650424013_12(qfloat16 lhs, float rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; float rhs = *(float*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (float (*)(qfloat16, float) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [16] long double operator/(qfloat16, long double) 
// (12)qm1083989367 (14)_Zdv8qfloat16e
/*void qm1083989367_13(qfloat16 lhs, long double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; long double rhs = *(long double*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (long double (*)(qfloat16, long double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [8] double operator/(qfloat16, double) 
// (11)qm932933089 (14)_Zdv8qfloat16d
/*void qm932933089_14(qfloat16 lhs, double rhs)*/ {
  qfloat16 lhs = *(qfloat16*)this_; double rhs = *(double*)this_;
  (void) operator/(lhs, rhs);
  auto xptr = (double (*)(qfloat16, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:212
// [2] qfloat16 operator/(qfloat16, qfloat16) 
// (12)qm1860913759 (15)_Zdv8qfloat16S_
/*void qm1860913759_15(qfloat16 a, qfloat16 b)*/ {
  qfloat16 a = *(qfloat16*)this_; qfloat16 b = *(qfloat16*)this_;
  (void) operator/(a, b);
  auto xptr = (qfloat16 (*)(qfloat16, qfloat16) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:231
// [2] qfloat16 & operator/=(qfloat16 &, float) 
// (12)qm2995227262 (15)_ZdVR8qfloat16f
/*void qm2995227262(qfloat16 & lhs, float rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; float rhs = *(float*)this_;
  (void) operator/=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, float) ) &operator/=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

#ifndef Q_OS_DARWIN
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:229
// [2] qfloat16 & operator/=(qfloat16 &, long double) 
// (11)qm730782660 (15)_ZdVR8qfloat16e
/*void qm730782660_1(qfloat16 & lhs, long double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; long double rhs = *(long double*)this_;
  (void) operator/=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, long double) ) &operator/=;
  fnptrsumval += (uint64_t)(void*)xptr;
}
#endif

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:230
// [2] qfloat16 & operator/=(qfloat16 &, double) 
// (12)qm1552542546 (15)_ZdVR8qfloat16d
/*void qm1552542546_2(qfloat16 & lhs, double rhs)*/ {
  qfloat16 & lhs = *(qfloat16 *)this_; double rhs = *(double*)this_;
  (void) operator/=(lhs, rhs);
  auto xptr = (qfloat16 & (*)(qfloat16&, double) ) &operator/=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1600
// [4] QIncompatibleFlag operator|(MatchFlags::enum_type, int) 
// (12)qm1555469413 (24)_ZN2QtorENS_9MatchFlagEi
/*void qm1555469413_76(Qt::MatchFlag f1, int f2)*/ {
  Qt::MatchFlag f1 = *(Qt::MatchFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::MatchFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1600
// [4] QFlags<MatchFlags::enum_type> operator|(MatchFlags::enum_type, MatchFlags::enum_type) 
// (12)qm2740952102 (26)_ZN2QtorENS_9MatchFlagES0_
/*void qm2740952102_77(Qt::MatchFlag f1, Qt::MatchFlag f2)*/ {
  Qt::MatchFlag f1 = *(Qt::MatchFlag*)this_; Qt::MatchFlag f2 = *(Qt::MatchFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MatchFlag> (*)(Qt::MatchFlag, Qt::MatchFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1600
// [4] QFlags<MatchFlags::enum_type> operator|(MatchFlags::enum_type, QFlags<MatchFlags::enum_type>) 
// (11)qm702289940 (35)_ZN2QtorENS_9MatchFlagE6QFlagsIS0_E
/*void qm702289940_78(Qt::MatchFlag f1, QFlags<Qt::MatchFlag> f2)*/ {
  Qt::MatchFlag f1 = *(Qt::MatchFlag*)this_; QFlags<Qt::MatchFlag> f2 = *(QFlags<Qt::MatchFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MatchFlag> (*)(Qt::MatchFlag, QFlags<Qt::MatchFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1582
// [4] QIncompatibleFlag operator|(ItemFlags::enum_type, int) 
// (11)qm299040471 (23)_ZN2QtorENS_8ItemFlagEi
/*void qm299040471_79(Qt::ItemFlag f1, int f2)*/ {
  Qt::ItemFlag f1 = *(Qt::ItemFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::ItemFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1582
// [4] QFlags<ItemFlags::enum_type> operator|(ItemFlags::enum_type, ItemFlags::enum_type) 
// (12)qm3637220670 (25)_ZN2QtorENS_8ItemFlagES0_
/*void qm3637220670_80(Qt::ItemFlag f1, Qt::ItemFlag f2)*/ {
  Qt::ItemFlag f1 = *(Qt::ItemFlag*)this_; Qt::ItemFlag f2 = *(Qt::ItemFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ItemFlag> (*)(Qt::ItemFlag, Qt::ItemFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1582
// [4] QFlags<ItemFlags::enum_type> operator|(ItemFlags::enum_type, QFlags<ItemFlags::enum_type>) 
// (12)qm1542016123 (34)_ZN2QtorENS_8ItemFlagE6QFlagsIS0_E
/*void qm1542016123_81(Qt::ItemFlag f1, QFlags<Qt::ItemFlag> f2)*/ {
  Qt::ItemFlag f1 = *(Qt::ItemFlag*)this_; QFlags<Qt::ItemFlag> f2 = *(QFlags<Qt::ItemFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ItemFlag> (*)(Qt::ItemFlag, QFlags<Qt::ItemFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1334
// [4] QIncompatibleFlag operator|(Edges::enum_type, int) 
// (12)qm3503095467 (19)_ZN2QtorENS_4EdgeEi
/*void qm3503095467_82(Qt::Edge f1, int f2)*/ {
  Qt::Edge f1 = *(Qt::Edge*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::Edge, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1334
// [4] QFlags<Edges::enum_type> operator|(Edges::enum_type, Edges::enum_type) 
// (12)qm1531011802 (21)_ZN2QtorENS_4EdgeES0_
/*void qm1531011802_83(Qt::Edge f1, Qt::Edge f2)*/ {
  Qt::Edge f1 = *(Qt::Edge*)this_; Qt::Edge f2 = *(Qt::Edge*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::Edge> (*)(Qt::Edge, Qt::Edge) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1334
// [4] QFlags<Edges::enum_type> operator|(Edges::enum_type, QFlags<Edges::enum_type>) 
// (12)qm2111787525 (30)_ZN2QtorENS_4EdgeE6QFlagsIS0_E
/*void qm2111787525_84(Qt::Edge f1, QFlags<Qt::Edge> f2)*/ {
  Qt::Edge f1 = *(Qt::Edge*)this_; QFlags<Qt::Edge> f2 = *(QFlags<Qt::Edge>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::Edge> (*)(Qt::Edge, QFlags<Qt::Edge>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1625
// [4] QIncompatibleFlag operator|(TextInteractionFlags::enum_type, int) 
// (11)qm517220129 (35)_ZN2QtorENS_19TextInteractionFlagEi
/*void qm517220129_85(Qt::TextInteractionFlag f1, int f2)*/ {
  Qt::TextInteractionFlag f1 = *(Qt::TextInteractionFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::TextInteractionFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1625
// [4] QFlags<TextInteractionFlags::enum_type> operator|(TextInteractionFlags::enum_type, TextInteractionFlags::enum_type) 
// (12)qm1696773747 (37)_ZN2QtorENS_19TextInteractionFlagES0_
/*void qm1696773747_86(Qt::TextInteractionFlag f1, Qt::TextInteractionFlag f2)*/ {
  Qt::TextInteractionFlag f1 = *(Qt::TextInteractionFlag*)this_; Qt::TextInteractionFlag f2 = *(Qt::TextInteractionFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::TextInteractionFlag> (*)(Qt::TextInteractionFlag, Qt::TextInteractionFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1625
// [4] QFlags<TextInteractionFlags::enum_type> operator|(TextInteractionFlags::enum_type, QFlags<TextInteractionFlags::enum_type>) 
// (11)qm866201329 (46)_ZN2QtorENS_19TextInteractionFlagE6QFlagsIS0_E
/*void qm866201329_87(Qt::TextInteractionFlag f1, QFlags<Qt::TextInteractionFlag> f2)*/ {
  Qt::TextInteractionFlag f1 = *(Qt::TextInteractionFlag*)this_; QFlags<Qt::TextInteractionFlag> f2 = *(QFlags<Qt::TextInteractionFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::TextInteractionFlag> (*)(Qt::TextInteractionFlag, QFlags<Qt::TextInteractionFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:596
// [4] QIncompatibleFlag operator|(ImageConversionFlags::enum_type, int) 
// (12)qm1466268361 (35)_ZN2QtorENS_19ImageConversionFlagEi
/*void qm1466268361_88(Qt::ImageConversionFlag f1, int f2)*/ {
  Qt::ImageConversionFlag f1 = *(Qt::ImageConversionFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::ImageConversionFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:596
// [4] QFlags<ImageConversionFlags::enum_type> operator|(ImageConversionFlags::enum_type, ImageConversionFlags::enum_type) 
// (12)qm3865029487 (37)_ZN2QtorENS_19ImageConversionFlagES0_
/*void qm3865029487_89(Qt::ImageConversionFlag f1, Qt::ImageConversionFlag f2)*/ {
  Qt::ImageConversionFlag f1 = *(Qt::ImageConversionFlag*)this_; Qt::ImageConversionFlag f2 = *(Qt::ImageConversionFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ImageConversionFlag> (*)(Qt::ImageConversionFlag, Qt::ImageConversionFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:596
// [4] QFlags<ImageConversionFlags::enum_type> operator|(ImageConversionFlags::enum_type, QFlags<ImageConversionFlags::enum_type>) 
// (12)qm2339400947 (46)_ZN2QtorENS_19ImageConversionFlagE6QFlagsIS0_E
/*void qm2339400947_90(Qt::ImageConversionFlag f1, QFlags<Qt::ImageConversionFlag> f2)*/ {
  Qt::ImageConversionFlag f1 = *(Qt::ImageConversionFlag*)this_; QFlags<Qt::ImageConversionFlag> f2 = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ImageConversionFlag> (*)(Qt::ImageConversionFlag, QFlags<Qt::ImageConversionFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:204
// [4] QIncompatibleFlag operator|(SplitBehavior::enum_type, int) 
// (12)qm4246097253 (34)_ZN2QtorENS_18SplitBehaviorFlagsEi
/*void qm4246097253_91(Qt::SplitBehaviorFlags f1, int f2)*/ {
  Qt::SplitBehaviorFlags f1 = *(Qt::SplitBehaviorFlags*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::SplitBehaviorFlags, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:204
// [4] QFlags<SplitBehavior::enum_type> operator|(SplitBehavior::enum_type, SplitBehavior::enum_type) 
// (12)qm1548769270 (36)_ZN2QtorENS_18SplitBehaviorFlagsES0_
/*void qm1548769270_92(Qt::SplitBehaviorFlags f1, Qt::SplitBehaviorFlags f2)*/ {
  Qt::SplitBehaviorFlags f1 = *(Qt::SplitBehaviorFlags*)this_; Qt::SplitBehaviorFlags f2 = *(Qt::SplitBehaviorFlags*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::SplitBehaviorFlags> (*)(Qt::SplitBehaviorFlags, Qt::SplitBehaviorFlags) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:204
// [4] QFlags<SplitBehavior::enum_type> operator|(SplitBehavior::enum_type, QFlags<SplitBehavior::enum_type>) 
// (11)qm144431465 (45)_ZN2QtorENS_18SplitBehaviorFlagsE6QFlagsIS0_E
/*void qm144431465_93(Qt::SplitBehaviorFlags f1, QFlags<Qt::SplitBehaviorFlags> f2)*/ {
  Qt::SplitBehaviorFlags f1 = *(Qt::SplitBehaviorFlags*)this_; QFlags<Qt::SplitBehaviorFlags> f2 = *(QFlags<Qt::SplitBehaviorFlags>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::SplitBehaviorFlags> (*)(Qt::SplitBehaviorFlags, QFlags<Qt::SplitBehaviorFlags>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:355
// [4] QIncompatibleFlag operator|(ScreenOrientations::enum_type, int) 
// (12)qm4151389316 (33)_ZN2QtorENS_17ScreenOrientationEi
/*void qm4151389316_94(Qt::ScreenOrientation f1, int f2)*/ {
  Qt::ScreenOrientation f1 = *(Qt::ScreenOrientation*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::ScreenOrientation, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:355
// [4] QFlags<ScreenOrientations::enum_type> operator|(ScreenOrientations::enum_type, ScreenOrientations::enum_type) 
// (11)qm562089714 (35)_ZN2QtorENS_17ScreenOrientationES0_
/*void qm562089714_95(Qt::ScreenOrientation f1, Qt::ScreenOrientation f2)*/ {
  Qt::ScreenOrientation f1 = *(Qt::ScreenOrientation*)this_; Qt::ScreenOrientation f2 = *(Qt::ScreenOrientation*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ScreenOrientation> (*)(Qt::ScreenOrientation, Qt::ScreenOrientation) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:355
// [4] QFlags<ScreenOrientations::enum_type> operator|(ScreenOrientations::enum_type, QFlags<ScreenOrientations::enum_type>) 
// (12)qm2043099877 (44)_ZN2QtorENS_17ScreenOrientationE6QFlagsIS0_E
/*void qm2043099877_96(Qt::ScreenOrientation f1, QFlags<Qt::ScreenOrientation> f2)*/ {
  Qt::ScreenOrientation f1 = *(Qt::ScreenOrientation*)this_; QFlags<Qt::ScreenOrientation> f2 = *(QFlags<Qt::ScreenOrientation>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ScreenOrientation> (*)(Qt::ScreenOrientation, QFlags<Qt::ScreenOrientation>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QIncompatibleFlag operator|(KeyboardModifiers::enum_type, int) 
// (12)qm1992936348 (32)_ZN2QtorENS_16KeyboardModifierEi
/*void qm1992936348_97(Qt::KeyboardModifier f1, int f2)*/ {
  Qt::KeyboardModifier f1 = *(Qt::KeyboardModifier*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::KeyboardModifier, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QFlags<KeyboardModifiers::enum_type> operator|(KeyboardModifiers::enum_type, KeyboardModifiers::enum_type) 
// (12)qm2650120392 (34)_ZN2QtorENS_16KeyboardModifierES0_
/*void qm2650120392_98(Qt::KeyboardModifier f1, Qt::KeyboardModifier f2)*/ {
  Qt::KeyboardModifier f1 = *(Qt::KeyboardModifier*)this_; Qt::KeyboardModifier f2 = *(Qt::KeyboardModifier*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::KeyboardModifier> (*)(Qt::KeyboardModifier, Qt::KeyboardModifier) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:110
// [4] QFlags<KeyboardModifiers::enum_type> operator|(KeyboardModifiers::enum_type, QFlags<KeyboardModifiers::enum_type>) 
// (12)qm3571576482 (43)_ZN2QtorENS_16KeyboardModifierE6QFlagsIS0_E
/*void qm3571576482_99(Qt::KeyboardModifier f1, QFlags<Qt::KeyboardModifier> f2)*/ {
  Qt::KeyboardModifier f1 = *(Qt::KeyboardModifier*)this_; QFlags<Qt::KeyboardModifier> f2 = *(QFlags<Qt::KeyboardModifier>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::KeyboardModifier> (*)(Qt::KeyboardModifier, QFlags<Qt::KeyboardModifier>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1439
// [4] QIncompatibleFlag operator|(InputMethodQueries::enum_type, int) 
// (12)qm2707825131 (32)_ZN2QtorENS_16InputMethodQueryEi
/*void qm2707825131_100(Qt::InputMethodQuery f1, int f2)*/ {
  Qt::InputMethodQuery f1 = *(Qt::InputMethodQuery*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::InputMethodQuery, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1439
// [4] QFlags<InputMethodQueries::enum_type> operator|(InputMethodQueries::enum_type, InputMethodQueries::enum_type) 
// (12)qm3176436528 (34)_ZN2QtorENS_16InputMethodQueryES0_
/*void qm3176436528_101(Qt::InputMethodQuery f1, Qt::InputMethodQuery f2)*/ {
  Qt::InputMethodQuery f1 = *(Qt::InputMethodQuery*)this_; Qt::InputMethodQuery f2 = *(Qt::InputMethodQuery*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::InputMethodQuery> (*)(Qt::InputMethodQuery, Qt::InputMethodQuery) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1439
// [4] QFlags<InputMethodQueries::enum_type> operator|(InputMethodQueries::enum_type, QFlags<InputMethodQueries::enum_type>) 
// (11)qm352126546 (43)_ZN2QtorENS_16InputMethodQueryE6QFlagsIS0_E
/*void qm352126546_102(Qt::InputMethodQuery f1, QFlags<Qt::InputMethodQuery> f2)*/ {
  Qt::InputMethodQuery f1 = *(Qt::InputMethodQuery*)this_; QFlags<Qt::InputMethodQuery> f2 = *(QFlags<Qt::InputMethodQuery>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::InputMethodQuery> (*)(Qt::InputMethodQuery, QFlags<Qt::InputMethodQuery>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1677
// [4] QIncompatibleFlag operator|(TouchPointStates::enum_type, int) 
// (12)qm2503082291 (31)_ZN2QtorENS_15TouchPointStateEi
/*void qm2503082291_103(Qt::TouchPointState f1, int f2)*/ {
  Qt::TouchPointState f1 = *(Qt::TouchPointState*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::TouchPointState, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1677
// [4] QFlags<TouchPointStates::enum_type> operator|(TouchPointStates::enum_type, TouchPointStates::enum_type) 
// (12)qm3487287483 (33)_ZN2QtorENS_15TouchPointStateES0_
/*void qm3487287483_104(Qt::TouchPointState f1, Qt::TouchPointState f2)*/ {
  Qt::TouchPointState f1 = *(Qt::TouchPointState*)this_; Qt::TouchPointState f2 = *(Qt::TouchPointState*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::TouchPointState> (*)(Qt::TouchPointState, Qt::TouchPointState) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1677
// [4] QFlags<TouchPointStates::enum_type> operator|(TouchPointStates::enum_type, QFlags<TouchPointStates::enum_type>) 
// (12)qm3221569921 (42)_ZN2QtorENS_15TouchPointStateE6QFlagsIS0_E
/*void qm3221569921_105(Qt::TouchPointState f1, QFlags<Qt::TouchPointState> f2)*/ {
  Qt::TouchPointState f1 = *(Qt::TouchPointState*)this_; QFlags<Qt::TouchPointState> f2 = *(QFlags<Qt::TouchPointState>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::TouchPointState> (*)(Qt::TouchPointState, QFlags<Qt::TouchPointState>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1474
// [4] QIncompatibleFlag operator|(InputMethodHints::enum_type, int) 
// (12)qm1093730291 (31)_ZN2QtorENS_15InputMethodHintEi
/*void qm1093730291_106(Qt::InputMethodHint f1, int f2)*/ {
  Qt::InputMethodHint f1 = *(Qt::InputMethodHint*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::InputMethodHint, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1474
// [4] QFlags<InputMethodHints::enum_type> operator|(InputMethodHints::enum_type, InputMethodHints::enum_type) 
// (12)qm1579422956 (33)_ZN2QtorENS_15InputMethodHintES0_
/*void qm1579422956_107(Qt::InputMethodHint f1, Qt::InputMethodHint f2)*/ {
  Qt::InputMethodHint f1 = *(Qt::InputMethodHint*)this_; Qt::InputMethodHint f2 = *(Qt::InputMethodHint*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::InputMethodHint> (*)(Qt::InputMethodHint, Qt::InputMethodHint) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1474
// [4] QFlags<InputMethodHints::enum_type> operator|(InputMethodHints::enum_type, QFlags<InputMethodHints::enum_type>) 
// (12)qm3280503227 (42)_ZN2QtorENS_15InputMethodHintE6QFlagsIS0_E
/*void qm3280503227_108(Qt::InputMethodHint f1, QFlags<Qt::InputMethodHint> f2)*/ {
  Qt::InputMethodHint f1 = *(Qt::InputMethodHint*)this_; QFlags<Qt::InputMethodHint> f2 = *(QFlags<Qt::InputMethodHint>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::InputMethodHint> (*)(Qt::InputMethodHint, QFlags<Qt::InputMethodHint>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1764
// [4] QIncompatibleFlag operator|(MouseEventFlags::enum_type, int) 
// (12)qm1290450444 (30)_ZN2QtorENS_14MouseEventFlagEi
/*void qm1290450444_109(Qt::MouseEventFlag f1, int f2)*/ {
  Qt::MouseEventFlag f1 = *(Qt::MouseEventFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::MouseEventFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1764
// [4] QFlags<MouseEventFlags::enum_type> operator|(MouseEventFlags::enum_type, MouseEventFlags::enum_type) 
// (12)qm3254787440 (32)_ZN2QtorENS_14MouseEventFlagES0_
/*void qm3254787440_110(Qt::MouseEventFlag f1, Qt::MouseEventFlag f2)*/ {
  Qt::MouseEventFlag f1 = *(Qt::MouseEventFlag*)this_; Qt::MouseEventFlag f2 = *(Qt::MouseEventFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MouseEventFlag> (*)(Qt::MouseEventFlag, Qt::MouseEventFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1764
// [4] QFlags<MouseEventFlags::enum_type> operator|(MouseEventFlags::enum_type, QFlags<MouseEventFlags::enum_type>) 
// (12)qm2704334861 (41)_ZN2QtorENS_14MouseEventFlagE6QFlagsIS0_E
/*void qm2704334861_111(Qt::MouseEventFlag f1, QFlags<Qt::MouseEventFlag> f2)*/ {
  Qt::MouseEventFlag f1 = *(Qt::MouseEventFlag*)this_; QFlags<Qt::MouseEventFlag> f2 = *(QFlags<Qt::MouseEventFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MouseEventFlag> (*)(Qt::MouseEventFlag, QFlags<Qt::MouseEventFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1255
// [4] QIncompatibleFlag operator|(DockWidgetAreas::enum_type, int) 
// (12)qm2358024335 (30)_ZN2QtorENS_14DockWidgetAreaEi
/*void qm2358024335_112(Qt::DockWidgetArea f1, int f2)*/ {
  Qt::DockWidgetArea f1 = *(Qt::DockWidgetArea*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::DockWidgetArea, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1255
// [4] QFlags<DockWidgetAreas::enum_type> operator|(DockWidgetAreas::enum_type, DockWidgetAreas::enum_type) 
// (11)qm242752337 (32)_ZN2QtorENS_14DockWidgetAreaES0_
/*void qm242752337_113(Qt::DockWidgetArea f1, Qt::DockWidgetArea f2)*/ {
  Qt::DockWidgetArea f1 = *(Qt::DockWidgetArea*)this_; Qt::DockWidgetArea f2 = *(Qt::DockWidgetArea*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::DockWidgetArea> (*)(Qt::DockWidgetArea, Qt::DockWidgetArea) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1255
// [4] QFlags<DockWidgetAreas::enum_type> operator|(DockWidgetAreas::enum_type, QFlags<DockWidgetAreas::enum_type>) 
// (12)qm1266171881 (41)_ZN2QtorENS_14DockWidgetAreaE6QFlagsIS0_E
/*void qm1266171881_114(Qt::DockWidgetArea f1, QFlags<Qt::DockWidgetArea> f2)*/ {
  Qt::DockWidgetArea f1 = *(Qt::DockWidgetArea*)this_; QFlags<Qt::DockWidgetArea> f2 = *(QFlags<Qt::DockWidgetArea>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::DockWidgetArea> (*)(Qt::DockWidgetArea, QFlags<Qt::DockWidgetArea>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:240
// [4] QIncompatibleFlag operator|(Alignment::enum_type, int) 
// (12)qm3161384235 (29)_ZN2QtorENS_13AlignmentFlagEi
/*void qm3161384235_115(Qt::AlignmentFlag f1, int f2)*/ {
  Qt::AlignmentFlag f1 = *(Qt::AlignmentFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::AlignmentFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:240
// [4] QFlags<Alignment::enum_type> operator|(Alignment::enum_type, Alignment::enum_type) 
// (12)qm3936837599 (31)_ZN2QtorENS_13AlignmentFlagES0_
/*void qm3936837599_116(Qt::AlignmentFlag f1, Qt::AlignmentFlag f2)*/ {
  Qt::AlignmentFlag f1 = *(Qt::AlignmentFlag*)this_; Qt::AlignmentFlag f2 = *(Qt::AlignmentFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::AlignmentFlag> (*)(Qt::AlignmentFlag, Qt::AlignmentFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:240
// [4] QFlags<Alignment::enum_type> operator|(Alignment::enum_type, QFlags<Alignment::enum_type>) 
// (12)qm2556822043 (40)_ZN2QtorENS_13AlignmentFlagE6QFlagsIS0_E
/*void qm2556822043_117(Qt::AlignmentFlag f1, QFlags<Qt::AlignmentFlag> f2)*/ {
  Qt::AlignmentFlag f1 = *(Qt::AlignmentFlag*)this_; QFlags<Qt::AlignmentFlag> f2 = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::AlignmentFlag> (*)(Qt::AlignmentFlag, QFlags<Qt::AlignmentFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:335
// [4] QIncompatibleFlag operator|(WindowStates::enum_type, int) 
// (12)qm3113329822 (27)_ZN2QtorENS_11WindowStateEi
/*void qm3113329822_118(Qt::WindowState f1, int f2)*/ {
  Qt::WindowState f1 = *(Qt::WindowState*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::WindowState, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:335
// [4] QFlags<WindowStates::enum_type> operator|(WindowStates::enum_type, WindowStates::enum_type) 
// (12)qm1926132187 (29)_ZN2QtorENS_11WindowStateES0_
/*void qm1926132187_119(Qt::WindowState f1, Qt::WindowState f2)*/ {
  Qt::WindowState f1 = *(Qt::WindowState*)this_; Qt::WindowState f2 = *(Qt::WindowState*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::WindowState> (*)(Qt::WindowState, Qt::WindowState) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:335
// [4] QFlags<WindowStates::enum_type> operator|(WindowStates::enum_type, QFlags<WindowStates::enum_type>) 
// (12)qm3329080939 (38)_ZN2QtorENS_11WindowStateE6QFlagsIS0_E
/*void qm3329080939_120(Qt::WindowState f1, QFlags<Qt::WindowState> f2)*/ {
  Qt::WindowState f1 = *(Qt::WindowState*)this_; QFlags<Qt::WindowState> f2 = *(QFlags<Qt::WindowState>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::WindowState> (*)(Qt::WindowState, QFlags<Qt::WindowState>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1273
// [4] QIncompatibleFlag operator|(ToolBarAreas::enum_type, int) 
// (10)qm96763550 (27)_ZN2QtorENS_11ToolBarAreaEi
/*void qm96763550_121(Qt::ToolBarArea f1, int f2)*/ {
  Qt::ToolBarArea f1 = *(Qt::ToolBarArea*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::ToolBarArea, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1273
// [4] QFlags<ToolBarAreas::enum_type> operator|(ToolBarAreas::enum_type, ToolBarAreas::enum_type) 
// (11)qm348714564 (29)_ZN2QtorENS_11ToolBarAreaES0_
/*void qm348714564_122(Qt::ToolBarArea f1, Qt::ToolBarArea f2)*/ {
  Qt::ToolBarArea f1 = *(Qt::ToolBarArea*)this_; Qt::ToolBarArea f2 = *(Qt::ToolBarArea*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ToolBarArea> (*)(Qt::ToolBarArea, Qt::ToolBarArea) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1273
// [4] QFlags<ToolBarAreas::enum_type> operator|(ToolBarAreas::enum_type, QFlags<ToolBarAreas::enum_type>) 
// (11)qm935487034 (38)_ZN2QtorENS_11ToolBarAreaE6QFlagsIS0_E
/*void qm935487034_123(Qt::ToolBarArea f1, QFlags<Qt::ToolBarArea> f2)*/ {
  Qt::ToolBarArea f1 = *(Qt::ToolBarArea*)this_; QFlags<Qt::ToolBarArea> f2 = *(QFlags<Qt::ToolBarArea>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::ToolBarArea> (*)(Qt::ToolBarArea, QFlags<Qt::ToolBarArea>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:177
// [4] QIncompatibleFlag operator|(Orientations::enum_type, int) 
// (12)qm4057150723 (27)_ZN2QtorENS_11OrientationEi
/*void qm4057150723_124(Qt::Orientation f1, int f2)*/ {
  Qt::Orientation f1 = *(Qt::Orientation*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::Orientation, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:177
// [4] QFlags<Orientations::enum_type> operator|(Orientations::enum_type, Orientations::enum_type) 
// (11)qm824798748 (29)_ZN2QtorENS_11OrientationES0_
/*void qm824798748_125(Qt::Orientation f1, Qt::Orientation f2)*/ {
  Qt::Orientation f1 = *(Qt::Orientation*)this_; Qt::Orientation f2 = *(Qt::Orientation*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::Orientation> (*)(Qt::Orientation, Qt::Orientation) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:177
// [4] QFlags<Orientations::enum_type> operator|(Orientations::enum_type, QFlags<Orientations::enum_type>) 
// (12)qm4036694838 (38)_ZN2QtorENS_11OrientationE6QFlagsIS0_E
/*void qm4036694838_126(Qt::Orientation f1, QFlags<Qt::Orientation> f2)*/ {
  Qt::Orientation f1 = *(Qt::Orientation*)this_; QFlags<Qt::Orientation> f2 = *(QFlags<Qt::Orientation>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::Orientation> (*)(Qt::Orientation, QFlags<Qt::Orientation>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:169
// [4] QIncompatibleFlag operator|(MouseButtons::enum_type, int) 
// (12)qm1198711856 (27)_ZN2QtorENS_11MouseButtonEi
/*void qm1198711856_127(Qt::MouseButton f1, int f2)*/ {
  Qt::MouseButton f1 = *(Qt::MouseButton*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::MouseButton, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:169
// [4] QFlags<MouseButtons::enum_type> operator|(MouseButtons::enum_type, MouseButtons::enum_type) 
// (11)qm882270159 (29)_ZN2QtorENS_11MouseButtonES0_
/*void qm882270159_128(Qt::MouseButton f1, Qt::MouseButton f2)*/ {
  Qt::MouseButton f1 = *(Qt::MouseButton*)this_; Qt::MouseButton f2 = *(Qt::MouseButton*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MouseButton> (*)(Qt::MouseButton, Qt::MouseButton) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:169
// [4] QFlags<MouseButtons::enum_type> operator|(MouseButtons::enum_type, QFlags<MouseButtons::enum_type>) 
// (11)qm310809555 (38)_ZN2QtorENS_11MouseButtonE6QFlagsIS0_E
/*void qm310809555_129(Qt::MouseButton f1, QFlags<Qt::MouseButton> f2)*/ {
  Qt::MouseButton f1 = *(Qt::MouseButton*)this_; QFlags<Qt::MouseButton> f2 = *(QFlags<Qt::MouseButton>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::MouseButton> (*)(Qt::MouseButton, QFlags<Qt::MouseButton>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1709
// [4] QIncompatibleFlag operator|(GestureFlags::enum_type, int) 
// (11)qm629932246 (27)_ZN2QtorENS_11GestureFlagEi
/*void qm629932246_130(Qt::GestureFlag f1, int f2)*/ {
  Qt::GestureFlag f1 = *(Qt::GestureFlag*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::GestureFlag, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1709
// [4] QFlags<GestureFlags::enum_type> operator|(GestureFlags::enum_type, GestureFlags::enum_type) 
// (12)qm2614447930 (29)_ZN2QtorENS_11GestureFlagES0_
/*void qm2614447930_131(Qt::GestureFlag f1, Qt::GestureFlag f2)*/ {
  Qt::GestureFlag f1 = *(Qt::GestureFlag*)this_; Qt::GestureFlag f2 = *(Qt::GestureFlag*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::GestureFlag> (*)(Qt::GestureFlag, Qt::GestureFlag) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1709
// [4] QFlags<GestureFlags::enum_type> operator|(GestureFlags::enum_type, QFlags<GestureFlags::enum_type>) 
// (11)qm804645106 (38)_ZN2QtorENS_11GestureFlagE6QFlagsIS0_E
/*void qm804645106_132(Qt::GestureFlag f1, QFlags<Qt::GestureFlag> f2)*/ {
  Qt::GestureFlag f1 = *(Qt::GestureFlag*)this_; QFlags<Qt::GestureFlag> f2 = *(QFlags<Qt::GestureFlag>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::GestureFlag> (*)(Qt::GestureFlag, QFlags<Qt::GestureFlag>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:324
// [4] QIncompatibleFlag operator|(WindowFlags::enum_type, int) 
// (12)qm2449767241 (26)_ZN2QtorENS_10WindowTypeEi
/*void qm2449767241_133(Qt::WindowType f1, int f2)*/ {
  Qt::WindowType f1 = *(Qt::WindowType*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::WindowType, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:324
// [4] QFlags<WindowFlags::enum_type> operator|(WindowFlags::enum_type, WindowFlags::enum_type) 
// (12)qm2866530003 (28)_ZN2QtorENS_10WindowTypeES0_
/*void qm2866530003_134(Qt::WindowType f1, Qt::WindowType f2)*/ {
  Qt::WindowType f1 = *(Qt::WindowType*)this_; Qt::WindowType f2 = *(Qt::WindowType*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::WindowType> (*)(Qt::WindowType, Qt::WindowType) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:324
// [4] QFlags<WindowFlags::enum_type> operator|(WindowFlags::enum_type, QFlags<WindowFlags::enum_type>) 
// (12)qm1779298022 (37)_ZN2QtorENS_10WindowTypeE6QFlagsIS0_E
/*void qm1779298022_135(Qt::WindowType f1, QFlags<Qt::WindowType> f2)*/ {
  Qt::WindowType f1 = *(Qt::WindowType*)this_; QFlags<Qt::WindowType> f2 = *(QFlags<Qt::WindowType>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::WindowType> (*)(Qt::WindowType, QFlags<Qt::WindowType>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1525
// [4] QIncompatibleFlag operator|(DropActions::enum_type, int) 
// (12)qm1723174316 (26)_ZN2QtorENS_10DropActionEi
/*void qm1723174316_136(Qt::DropAction f1, int f2)*/ {
  Qt::DropAction f1 = *(Qt::DropAction*)this_; int f2 = *(int*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(Qt::DropAction, int) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1525
// [4] QFlags<DropActions::enum_type> operator|(DropActions::enum_type, DropActions::enum_type) 
// (12)qm3708576482 (28)_ZN2QtorENS_10DropActionES0_
/*void qm3708576482_137(Qt::DropAction f1, Qt::DropAction f2)*/ {
  Qt::DropAction f1 = *(Qt::DropAction*)this_; Qt::DropAction f2 = *(Qt::DropAction*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::DropAction> (*)(Qt::DropAction, Qt::DropAction) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1525
// [4] QFlags<DropActions::enum_type> operator|(DropActions::enum_type, QFlags<DropActions::enum_type>) 
// (10)qm84136883 (37)_ZN2QtorENS_10DropActionE6QFlagsIS0_E
/*void qm84136883_138(Qt::DropAction f1, QFlags<Qt::DropAction> f2)*/ {
  Qt::DropAction f1 = *(Qt::DropAction*)this_; QFlags<Qt::DropAction> f2 = *(QFlags<Qt::DropAction>*)this_;
  (void) Qt::operator|(f1, f2);
  auto xptr = (QFlags<Qt::DropAction> (*)(Qt::DropAction, QFlags<Qt::DropAction>) ) &Qt::operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1864
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TimerType) 
// (12)qm1318149872 (43)_ZN2Qt20qt_getEnumMetaObjectENS_9TimerTypeE
/*void qm1318149872(Qt::TimerType arg0)*/ {
  Qt::TimerType arg0 = *(Qt::TimerType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TimerType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1835
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SortOrder) 
// (12)qm4028443750 (43)_ZN2Qt20qt_getEnumMetaObjectENS_9SortOrderE
/*void qm4028443750_1(Qt::SortOrder arg0)*/ {
  Qt::SortOrder arg0 = *(Qt::SortOrder*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::SortOrder) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1820
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DayOfWeek) 
// (10)qm10336876 (43)_ZN2Qt20qt_getEnumMetaObjectENS_9DayOfWeekE
/*void qm10336876_2(Qt::DayOfWeek arg0)*/ {
  Qt::DayOfWeek arg0 = *(Qt::DayOfWeek*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::DayOfWeek) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1788
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ArrowType) 
// (12)qm4037354890 (43)_ZN2Qt20qt_getEnumMetaObjectENS_9ArrowTypeE
/*void qm4037354890_3(Qt::ArrowType arg0)*/ {
  Qt::ArrowType arg0 = *(Qt::ArrowType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ArrowType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1819
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TimeSpec) 
// (12)qm3912874540 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8TimeSpecE
/*void qm3912874540_4(Qt::TimeSpec arg0)*/ {
  Qt::TimeSpec arg0 = *(Qt::TimeSpec*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TimeSpec) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1807
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextFlag) 
// (12)qm2454736953 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8TextFlagE
/*void qm2454736953_5(Qt::TextFlag arg0)*/ {
  Qt::TextFlag arg0 = *(Qt::TextFlag*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TextFlag) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1798
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SizeMode) 
// (12)qm2937312830 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8SizeModeE
/*void qm2937312830_6(Qt::SizeMode arg0)*/ {
  Qt::SizeMode arg0 = *(Qt::SizeMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::SizeMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1803
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SizeHint) 
// (11)qm483827796 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8SizeHintE
/*void qm483827796_7(Qt::SizeHint arg0)*/ {
  Qt::SizeHint arg0 = *(Qt::SizeHint*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::SizeHint) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1790
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenStyle) 
// (12)qm1473454293 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8PenStyleE
/*void qm1473454293_8(Qt::PenStyle arg0)*/ {
  Qt::PenStyle arg0 = *(Qt::PenStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::PenStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1795
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MaskMode) 
// (12)qm3076944075 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8MaskModeE
/*void qm3076944075_9(Qt::MaskMode arg0)*/ {
  Qt::MaskMode arg0 = *(Qt::MaskMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::MaskMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1794
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FillRule) 
// (12)qm3108163372 (42)_ZN2Qt20qt_getEnumMetaObjectENS_8FillRuleE
/*void qm3108163372_10(Qt::FillRule arg0)*/ {
  Qt::FillRule arg0 = *(Qt::FillRule*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::FillRule) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1800
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Corner) 
// (10)qm41956775 (40)_ZN2Qt20qt_getEnumMetaObjectENS_6CornerE
/*void qm41956775_11(Qt::Corner arg0)*/ {
  Qt::Corner arg0 = *(Qt::Corner*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::Corner) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1796
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::BGMode) 
// (12)qm3498319835 (40)_ZN2Qt20qt_getEnumMetaObjectENS_6BGModeE
/*void qm3498319835_12(Qt::BGMode arg0)*/ {
  Qt::BGMode arg0 = *(Qt::BGMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::BGMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1801
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Edge) 
// (12)qm2889060271 (38)_ZN2Qt20qt_getEnumMetaObjectENS_4EdgeE
/*void qm2889060271_13(Qt::Edge arg0)*/ {
  Qt::Edge arg0 = *(Qt::Edge*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::Edge) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1799
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Axis) 
// (12)qm1434081685 (38)_ZN2Qt20qt_getEnumMetaObjectENS_4AxisE
/*void qm1434081685_14(Qt::Axis arg0)*/ {
  Qt::Axis arg0 = *(Qt::Axis*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::Axis) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1826
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Key) 
// (12)qm1007567179 (37)_ZN2Qt20qt_getEnumMetaObjectENS_3KeyE
/*void qm1007567179_15(Qt::Key arg0)*/ {
  Qt::Key arg0 = *(Qt::Key*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::Key) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1869
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::HighDpiScaleFactorRoundingPolicy) 
// (12)qm3591767670 (67)_ZN2Qt20qt_getEnumMetaObjectENS_32HighDpiScaleFactorRoundingPolicyE
/*void qm3591767670_16(Qt::HighDpiScaleFactorRoundingPolicy arg0)*/ {
  Qt::HighDpiScaleFactorRoundingPolicy arg0 = *(Qt::HighDpiScaleFactorRoundingPolicy*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::HighDpiScaleFactorRoundingPolicy) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1831
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemSelectionOperation) 
// (12)qm3923047580 (57)_ZN2Qt20qt_getEnumMetaObjectENS_22ItemSelectionOperationE
/*void qm3923047580_17(Qt::ItemSelectionOperation arg0)*/ {
  Qt::ItemSelectionOperation arg0 = *(Qt::ItemSelectionOperation*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ItemSelectionOperation) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1844
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ApplicationAttribute) 
// (12)qm2814643615 (55)_ZN2Qt20qt_getEnumMetaObjectENS_20ApplicationAttributeE
/*void qm2814643615_18(Qt::ApplicationAttribute arg0)*/ {
  Qt::ApplicationAttribute arg0 = *(Qt::ApplicationAttribute*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ApplicationAttribute) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1828
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextInteractionFlag) 
// (12)qm3842236290 (54)_ZN2Qt20qt_getEnumMetaObjectENS_19TextInteractionFlagE
/*void qm3842236290_19(Qt::TextInteractionFlag arg0)*/ {
  Qt::TextInteractionFlag arg0 = *(Qt::TextInteractionFlag*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TextInteractionFlag) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1824
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TransformationMode) 
// (12)qm4210321813 (53)_ZN2Qt20qt_getEnumMetaObjectENS_18TransformationModeE
/*void qm4210321813_20(Qt::TransformationMode arg0)*/ {
  Qt::TransformationMode arg0 = *(Qt::TransformationMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TransformationMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1854
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScreenOrientation) 
// (12)qm1256137943 (52)_ZN2Qt20qt_getEnumMetaObjectENS_17ScreenOrientationE
/*void qm1256137943_21(Qt::ScreenOrientation arg0)*/ {
  Qt::ScreenOrientation arg0 = *(Qt::ScreenOrientation*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ScreenOrientation) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1861
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::NativeGestureType) 
// (11)qm514178590 (52)_ZN2Qt20qt_getEnumMetaObjectENS_17NativeGestureTypeE
/*void qm514178590_22(Qt::NativeGestureType arg0)*/ {
  Qt::NativeGestureType arg0 = *(Qt::NativeGestureType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::NativeGestureType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1830
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemSelectionMode) 
// (12)qm2650422521 (52)_ZN2Qt20qt_getEnumMetaObjectENS_17ItemSelectionModeE
/*void qm2650422521_23(Qt::ItemSelectionMode arg0)*/ {
  Qt::ItemSelectionMode arg0 = *(Qt::ItemSelectionMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ItemSelectionMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1787
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ContextMenuPolicy) 
// (12)qm1668965336 (52)_ZN2Qt20qt_getEnumMetaObjectENS_17ContextMenuPolicyE
/*void qm1668965336_24(Qt::ContextMenuPolicy arg0)*/ {
  Qt::ContextMenuPolicy arg0 = *(Qt::ContextMenuPolicy*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ContextMenuPolicy) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1870
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TabFocusBehavior) 
// (11)qm614089662 (51)_ZN2Qt20qt_getEnumMetaObjectENS_16TabFocusBehaviorE
/*void qm614089662_25(Qt::TabFocusBehavior arg0)*/ {
  Qt::TabFocusBehavior arg0 = *(Qt::TabFocusBehavior*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TabFocusBehavior) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1866
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseEventSource) 
// (12)qm1953733327 (51)_ZN2Qt20qt_getEnumMetaObjectENS_16MouseEventSourceE
/*void qm1953733327_26(Qt::MouseEventSource arg0)*/ {
  Qt::MouseEventSource arg0 = *(Qt::MouseEventSource*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::MouseEventSource) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1849
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodQuery) 
// (12)qm3314666203 (51)_ZN2Qt20qt_getEnumMetaObjectENS_16InputMethodQueryE
/*void qm3314666203_27(Qt::InputMethodQuery arg0)*/ {
  Qt::InputMethodQuery arg0 = *(Qt::InputMethodQuery*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::InputMethodQuery) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1857
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ApplicationState) 
// (11)qm822691474 (51)_ZN2Qt20qt_getEnumMetaObjectENS_16ApplicationStateE
/*void qm822691474_28(Qt::ApplicationState arg0)*/ {
  Qt::ApplicationState arg0 = *(Qt::ApplicationState*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ApplicationState) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1843
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WidgetAttribute) 
// (12)qm1137076098 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15WidgetAttributeE
/*void qm1137076098_29(Qt::WidgetAttribute arg0)*/ {
  Qt::WidgetAttribute arg0 = *(Qt::WidgetAttribute*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::WidgetAttribute) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1789
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolButtonStyle) 
// (12)qm1358296921 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15ToolButtonStyleE
/*void qm1358296921_30(Qt::ToolButtonStyle arg0)*/ {
  Qt::ToolButtonStyle arg0 = *(Qt::ToolButtonStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ToolButtonStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1827
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ShortcutContext) 
// (12)qm3356161099 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15ShortcutContextE
/*void qm3356161099_31(Qt::ShortcutContext arg0)*/ {
  Qt::ShortcutContext arg0 = *(Qt::ShortcutContext*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ShortcutContext) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1785
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScrollBarPolicy) 
// (12)qm2726440263 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15ScrollBarPolicyE
/*void qm2726440263_32(Qt::ScrollBarPolicy arg0)*/ {
  Qt::ScrollBarPolicy arg0 = *(Qt::ScrollBarPolicy*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ScrollBarPolicy) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1802
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::LayoutDirection) 
// (12)qm3475191068 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15LayoutDirectionE
/*void qm3475191068_33(Qt::LayoutDirection arg0)*/ {
  Qt::LayoutDirection arg0 = *(Qt::LayoutDirection*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::LayoutDirection) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1848
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodHint) 
// (12)qm1969121131 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15InputMethodHintE
/*void qm1969121131_34(Qt::InputMethodHint arg0)*/ {
  Qt::InputMethodHint arg0 = *(Qt::InputMethodHint*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::InputMethodHint) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1863
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CursorMoveStyle) 
// (12)qm1583097858 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15CursorMoveStyleE
/*void qm1583097858_35(Qt::CursorMoveStyle arg0)*/ {
  Qt::CursorMoveStyle arg0 = *(Qt::CursorMoveStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::CursorMoveStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1836
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CaseSensitivity) 
// (12)qm2123879032 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15CaseSensitivityE
/*void qm2123879032_36(Qt::CaseSensitivity arg0)*/ {
  Qt::CaseSensitivity arg0 = *(Qt::CaseSensitivity*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::CaseSensitivity) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1823
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::AspectRatioMode) 
// (12)qm3695168479 (50)_ZN2Qt20qt_getEnumMetaObjectENS_15AspectRatioModeE
/*void qm3695168479_37(Qt::AspectRatioMode arg0)*/ {
  Qt::AspectRatioMode arg0 = *(Qt::AspectRatioMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::AspectRatioMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1842
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowModality) 
// (12)qm4283388058 (49)_ZN2Qt20qt_getEnumMetaObjectENS_14WindowModalityE
/*void qm4283388058_38(Qt::WindowModality arg0)*/ {
  Qt::WindowModality arg0 = *(Qt::WindowModality*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::WindowModality) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1867
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseEventFlag) 
// (11)qm969669004 (49)_ZN2Qt20qt_getEnumMetaObjectENS_14MouseEventFlagE
/*void qm969669004_39(Qt::MouseEventFlag arg0)*/ {
  Qt::MouseEventFlag arg0 = *(Qt::MouseEventFlag*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::MouseEventFlag) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1814
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DockWidgetArea) 
// (12)qm3851016179 (49)_ZN2Qt20qt_getEnumMetaObjectENS_14DockWidgetAreaE
/*void qm3851016179_40(Qt::DockWidgetArea arg0)*/ {
  Qt::DockWidgetArea arg0 = *(Qt::DockWidgetArea*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::DockWidgetArea) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1856
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ConnectionType) 
// (12)qm2027206671 (49)_ZN2Qt20qt_getEnumMetaObjectENS_14ConnectionTypeE
/*void qm2027206671_41(Qt::ConnectionType arg0)*/ {
  Qt::ConnectionType arg0 = *(Qt::ConnectionType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ConnectionType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1817
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextElideMode) 
// (12)qm3745415230 (48)_ZN2Qt20qt_getEnumMetaObjectENS_13TextElideModeE
/*void qm3745415230_42(Qt::TextElideMode arg0)*/ {
  Qt::TextElideMode arg0 = *(Qt::TextElideMode*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TextElideMode) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1797
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ClipOperation) 
// (12)qm2410521195 (48)_ZN2Qt20qt_getEnumMetaObjectENS_13ClipOperationE
/*void qm2410521195_43(Qt::ClipOperation arg0)*/ {
  Qt::ClipOperation arg0 = *(Qt::ClipOperation*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ClipOperation) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1792
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenJoinStyle) 
// (12)qm3185036282 (47)_ZN2Qt20qt_getEnumMetaObjectENS_12PenJoinStyleE
/*void qm3185036282_44(Qt::PenJoinStyle arg0)*/ {
  Qt::PenJoinStyle arg0 = *(Qt::PenJoinStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::PenJoinStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1834
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemDataRole) 
// (12)qm4126599612 (47)_ZN2Qt20qt_getEnumMetaObjectENS_12ItemDataRoleE
/*void qm4126599612_45(Qt::ItemDataRole arg0)*/ {
  Qt::ItemDataRole arg0 = *(Qt::ItemDataRole*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ItemDataRole) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1859
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GestureState) 
// (12)qm4200295663 (47)_ZN2Qt20qt_getEnumMetaObjectENS_12GestureStateE
/*void qm4200295663_46(Qt::GestureState arg0)*/ {
  Qt::GestureState arg0 = *(Qt::GestureState*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::GestureState) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1851
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::EnterKeyType) 
// (10)qm24344984 (47)_ZN2Qt20qt_getEnumMetaObjectENS_12EnterKeyTypeE
/*void qm24344984_47(Qt::EnterKeyType arg0)*/ {
  Qt::EnterKeyType arg0 = *(Qt::EnterKeyType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::EnterKeyType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1868
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ChecksumType) 
// (12)qm2233403464 (47)_ZN2Qt20qt_getEnumMetaObjectENS_12ChecksumTypeE
/*void qm2233403464_48(Qt::ChecksumType arg0)*/ {
  Qt::ChecksumType arg0 = *(Qt::ChecksumType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ChecksumType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1841
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowState) 
// (12)qm2508158895 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11WindowStateE
/*void qm2508158895_49(Qt::WindowState arg0)*/ {
  Qt::WindowState arg0 = *(Qt::WindowState*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::WindowState) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1815
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolBarArea) 
// (12)qm2787536158 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11ToolBarAreaE
/*void qm2787536158_50(Qt::ToolBarArea arg0)*/ {
  Qt::ToolBarArea arg0 = *(Qt::ToolBarArea*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ToolBarArea) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1865
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScrollPhase) 
// (11)qm109853328 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11ScrollPhaseE
/*void qm109853328_51(Qt::ScrollPhase arg0)*/ {
  Qt::ScrollPhase arg0 = *(Qt::ScrollPhase*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::ScrollPhase) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1791
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::PenCapStyle) 
// (12)qm1524122249 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11PenCapStyleE
/*void qm1524122249_52(Qt::PenCapStyle arg0)*/ {
  Qt::PenCapStyle arg0 = *(Qt::PenCapStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::PenCapStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1804
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Orientation) 
// (12)qm1708695816 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11OrientationE
/*void qm1708695816_53(Qt::Orientation arg0)*/ {
  Qt::Orientation arg0 = *(Qt::Orientation*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::Orientation) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1822
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GlobalColor) 
// (12)qm4157033073 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11GlobalColorE
/*void qm4157033073_54(Qt::GlobalColor arg0)*/ {
  Qt::GlobalColor arg0 = *(Qt::GlobalColor*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::GlobalColor) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1860
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::GestureType) 
// (12)qm3555221217 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11GestureTypeE
/*void qm3555221217_55(Qt::GestureType arg0)*/ {
  Qt::GestureType arg0 = *(Qt::GestureType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::GestureType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1847
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FocusReason) 
// (12)qm1628898734 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11FocusReasonE
/*void qm1628898734_56(Qt::FocusReason arg0)*/ {
  Qt::FocusReason arg0 = *(Qt::FocusReason*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::FocusReason) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1786
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::FocusPolicy) 
// (12)qm2629712217 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11FocusPolicyE
/*void qm2629712217_57(Qt::FocusPolicy arg0)*/ {
  Qt::FocusPolicy arg0 = *(Qt::FocusPolicy*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::FocusPolicy) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1821
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CursorShape) 
// (12)qm1000293382 (46)_ZN2Qt20qt_getEnumMetaObjectENS_11CursorShapeE
/*void qm1000293382_58(Qt::CursorShape arg0)*/ {
  Qt::CursorShape arg0 = *(Qt::CursorShape*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::CursorShape) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1840
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowType) 
// (12)qm1642848150 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10WindowTypeE
/*void qm1642848150_59(Qt::WindowType arg0)*/ {
  Qt::WindowType arg0 = *(Qt::WindowType*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::WindowType) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1816
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextFormat) 
// (11)qm724787019 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10TextFormatE
/*void qm724787019_60(Qt::TextFormat arg0)*/ {
  Qt::TextFormat arg0 = *(Qt::TextFormat*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::TextFormat) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1805
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DropAction) 
// (10)qm78146432 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10DropActionE
/*void qm78146432_61(Qt::DropAction arg0)*/ {
  Qt::DropAction arg0 = *(Qt::DropAction*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::DropAction) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1818
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DateFormat) 
// (12)qm3658217819 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10DateFormatE
/*void qm3658217819_62(Qt::DateFormat arg0)*/ {
  Qt::DateFormat arg0 = *(Qt::DateFormat*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::DateFormat) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1833
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::CheckState) 
// (11)qm595660734 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10CheckStateE
/*void qm595660734_63(Qt::CheckState arg0)*/ {
  Qt::CheckState arg0 = *(Qt::CheckState*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::CheckState) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1793
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::BrushStyle) 
// (12)qm3028821280 (45)_ZN2Qt20qt_getEnumMetaObjectENS_10BrushStyleE
/*void qm3028821280_64(Qt::BrushStyle arg0)*/ {
  Qt::BrushStyle arg0 = *(Qt::BrushStyle*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(Qt::BrushStyle) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1837
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MatchFlags) 
// (12)qm1012338795 (52)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_9MatchFlagEE
/*void qm1012338795_65(QFlags<Qt::MatchFlag> arg0)*/ {
  QFlags<Qt::MatchFlag> arg0 = *(QFlags<Qt::MatchFlag>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::MatchFlag>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1832
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ItemFlags) 
// (12)qm1912621447 (51)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_8ItemFlagEE
/*void qm1912621447_66(QFlags<Qt::ItemFlag> arg0)*/ {
  QFlags<Qt::ItemFlag> arg0 = *(QFlags<Qt::ItemFlag>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::ItemFlag>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1811
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Edges) 
// (11)qm166602308 (47)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_4EdgeEE
/*void qm166602308_67(QFlags<Qt::Edge> arg0)*/ {
  QFlags<Qt::Edge> arg0 = *(QFlags<Qt::Edge>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::Edge>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1829
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TextInteractionFlags) 
// (12)qm1896442581 (63)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_19TextInteractionFlagEE
/*void qm1896442581_68(QFlags<Qt::TextInteractionFlag> arg0)*/ {
  QFlags<Qt::TextInteractionFlag> arg0 = *(QFlags<Qt::TextInteractionFlag>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::TextInteractionFlag>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1825
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ImageConversionFlags) 
// (11)qm951596861 (63)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_19ImageConversionFlagEE
/*void qm951596861_69(QFlags<Qt::ImageConversionFlag> arg0)*/ {
  QFlags<Qt::ImageConversionFlag> arg0 = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::ImageConversionFlag>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1809
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::SplitBehavior) 
// (12)qm2733913212 (62)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_18SplitBehaviorFlagsEE
/*void qm2733913212_70(QFlags<Qt::SplitBehaviorFlags> arg0)*/ {
  QFlags<Qt::SplitBehaviorFlags> arg0 = *(QFlags<Qt::SplitBehaviorFlags>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::SplitBehaviorFlags>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1855
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ScreenOrientations) 
// (11)qm576213362 (61)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_17ScreenOrientationEE
/*void qm576213362_71(QFlags<Qt::ScreenOrientation> arg0)*/ {
  QFlags<Qt::ScreenOrientation> arg0 = *(QFlags<Qt::ScreenOrientation>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::ScreenOrientation>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1838
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::KeyboardModifiers) 
// (11)qm221099377 (60)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_16KeyboardModifierEE
/*void qm221099377_72(QFlags<Qt::KeyboardModifier> arg0)*/ {
  QFlags<Qt::KeyboardModifier> arg0 = *(QFlags<Qt::KeyboardModifier>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::KeyboardModifier>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1852
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodQueries) 
// (12)qm3665977094 (60)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_16InputMethodQueryEE
/*void qm3665977094_73(QFlags<Qt::InputMethodQuery> arg0)*/ {
  QFlags<Qt::InputMethodQuery> arg0 = *(QFlags<Qt::InputMethodQuery>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::InputMethodQuery>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1853
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::TouchPointStates) 
// (12)qm4072615478 (59)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_15TouchPointStateEE
/*void qm4072615478_74(QFlags<Qt::TouchPointState> arg0)*/ {
  QFlags<Qt::TouchPointState> arg0 = *(QFlags<Qt::TouchPointState>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::TouchPointState>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1850
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::InputMethodHints) 
// (11)qm649974006 (59)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_15InputMethodHintEE
/*void qm649974006_75(QFlags<Qt::InputMethodHint> arg0)*/ {
  QFlags<Qt::InputMethodHint> arg0 = *(QFlags<Qt::InputMethodHint>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::InputMethodHint>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1812
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DockWidgetAreas) 
// (12)qm3996204507 (58)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_14DockWidgetAreaEE
/*void qm3996204507_76(QFlags<Qt::DockWidgetArea> arg0)*/ {
  QFlags<Qt::DockWidgetArea> arg0 = *(QFlags<Qt::DockWidgetArea>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::DockWidgetArea>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1806
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Alignment) 
// (12)qm3993895608 (57)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_13AlignmentFlagEE
/*void qm3993895608_77(QFlags<Qt::AlignmentFlag> arg0)*/ {
  QFlags<Qt::AlignmentFlag> arg0 = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::AlignmentFlag>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1846
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowStates) 
// (12)qm3822156336 (55)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11WindowStateEE
/*void qm3822156336_78(QFlags<Qt::WindowState> arg0)*/ {
  QFlags<Qt::WindowState> arg0 = *(QFlags<Qt::WindowState>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::WindowState>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1813
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::ToolBarAreas) 
// (12)qm1602527280 (55)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11ToolBarAreaEE
/*void qm1602527280_79(QFlags<Qt::ToolBarArea> arg0)*/ {
  QFlags<Qt::ToolBarArea> arg0 = *(QFlags<Qt::ToolBarArea>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::ToolBarArea>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1808
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::Orientations) 
// (12)qm2878598061 (55)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11OrientationEE
/*void qm2878598061_80(QFlags<Qt::Orientation> arg0)*/ {
  QFlags<Qt::Orientation> arg0 = *(QFlags<Qt::Orientation>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::Orientation>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1839
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::MouseButtons) 
// (11)qm489831070 (55)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_11MouseButtonEE
/*void qm489831070_81(QFlags<Qt::MouseButton> arg0)*/ {
  QFlags<Qt::MouseButton> arg0 = *(QFlags<Qt::MouseButton>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::MouseButton>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1845
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::WindowFlags) 
// (12)qm3856507512 (54)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_10WindowTypeEE
/*void qm3856507512_82(QFlags<Qt::WindowType> arg0)*/ {
  QFlags<Qt::WindowType> arg0 = *(QFlags<Qt::WindowType>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::WindowType>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1810
// [8] const QMetaObject * qt_getEnumMetaObject(Qt::DropActions) 
// (11)qm292312221 (54)_ZN2Qt20qt_getEnumMetaObjectE6QFlagsINS_10DropActionEE
/*void qm292312221_83(QFlags<Qt::DropAction> arg0)*/ {
  QFlags<Qt::DropAction> arg0 = *(QFlags<Qt::DropAction>*)this_;
  (void) Qt::qt_getEnumMetaObject(arg0);
  auto xptr = (const QMetaObject * (*)(QFlags<Qt::DropAction>) ) &Qt::qt_getEnumMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1864
// [8] const char * qt_getEnumName(Qt::TimerType) 
// (11)qm297462418 (37)_ZN2Qt14qt_getEnumNameENS_9TimerTypeE
/*void qm297462418(Qt::TimerType arg0)*/ {
  Qt::TimerType arg0 = *(Qt::TimerType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TimerType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1835
// [8] const char * qt_getEnumName(Qt::SortOrder) 
// (12)qm2939590660 (37)_ZN2Qt14qt_getEnumNameENS_9SortOrderE
/*void qm2939590660_1(Qt::SortOrder arg0)*/ {
  Qt::SortOrder arg0 = *(Qt::SortOrder*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::SortOrder) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1820
// [8] const char * qt_getEnumName(Qt::DayOfWeek) 
// (12)qm1605766670 (37)_ZN2Qt14qt_getEnumNameENS_9DayOfWeekE
/*void qm1605766670_2(Qt::DayOfWeek arg0)*/ {
  Qt::DayOfWeek arg0 = *(Qt::DayOfWeek*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::DayOfWeek) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1788
// [8] const char * qt_getEnumName(Qt::ArrowType) 
// (12)qm2945356264 (37)_ZN2Qt14qt_getEnumNameENS_9ArrowTypeE
/*void qm2945356264_3(Qt::ArrowType arg0)*/ {
  Qt::ArrowType arg0 = *(Qt::ArrowType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ArrowType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1819
// [8] const char * qt_getEnumName(Qt::TimeSpec) 
// (12)qm3339046933 (36)_ZN2Qt14qt_getEnumNameENS_8TimeSpecE
/*void qm3339046933_4(Qt::TimeSpec arg0)*/ {
  Qt::TimeSpec arg0 = *(Qt::TimeSpec*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TimeSpec) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1807
// [8] const char * qt_getEnumName(Qt::TextFlag) 
// (12)qm3161209344 (36)_ZN2Qt14qt_getEnumNameENS_8TextFlagE
/*void qm3161209344_5(Qt::TextFlag arg0)*/ {
  Qt::TextFlag arg0 = *(Qt::TextFlag*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TextFlag) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1798
// [8] const char * qt_getEnumName(Qt::SizeMode) 
// (12)qm2167389191 (36)_ZN2Qt14qt_getEnumNameENS_8SizeModeE
/*void qm2167389191_6(Qt::SizeMode arg0)*/ {
  Qt::SizeMode arg0 = *(Qt::SizeMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::SizeMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1803
// [8] const char * qt_getEnumName(Qt::SizeHint) 
// (11)qm854248045 (36)_ZN2Qt14qt_getEnumNameENS_8SizeHintE
/*void qm854248045_7(Qt::SizeHint arg0)*/ {
  Qt::SizeHint arg0 = *(Qt::SizeHint*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::SizeHint) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1790
// [8] const char * qt_getEnumName(Qt::PenStyle) 
// (12)qm2045725420 (36)_ZN2Qt14qt_getEnumNameENS_8PenStyleE
/*void qm2045725420_8(Qt::PenStyle arg0)*/ {
  Qt::PenStyle arg0 = *(Qt::PenStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::PenStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1795
// [8] const char * qt_getEnumName(Qt::MaskMode) 
// (12)qm2572819186 (36)_ZN2Qt14qt_getEnumNameENS_8MaskModeE
/*void qm2572819186_9(Qt::MaskMode arg0)*/ {
  Qt::MaskMode arg0 = *(Qt::MaskMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::MaskMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1794
// [8] const char * qt_getEnumName(Qt::FillRule) 
// (12)qm2541659413 (36)_ZN2Qt14qt_getEnumNameENS_8FillRuleE
/*void qm2541659413_10(Qt::FillRule arg0)*/ {
  Qt::FillRule arg0 = *(Qt::FillRule*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::FillRule) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1800
// [8] const char * qt_getEnumName(Qt::Corner) 
// (12)qm1835183743 (34)_ZN2Qt14qt_getEnumNameENS_6CornerE
/*void qm1835183743_11(Qt::Corner arg0)*/ {
  Qt::Corner arg0 = *(Qt::Corner*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::Corner) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1796
// [8] const char * qt_getEnumName(Qt::BGMode) 
// (12)qm3211166723 (34)_ZN2Qt14qt_getEnumNameENS_6BGModeE
/*void qm3211166723_12(Qt::BGMode arg0)*/ {
  Qt::BGMode arg0 = *(Qt::BGMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::BGMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1801
// [8] const char * qt_getEnumName(Qt::Edge) 
// (11)qm686321436 (32)_ZN2Qt14qt_getEnumNameENS_4EdgeE
/*void qm686321436_13(Qt::Edge arg0)*/ {
  Qt::Edge arg0 = *(Qt::Edge*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::Edge) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1799
// [8] const char * qt_getEnumName(Qt::Axis) 
// (12)qm3517036838 (32)_ZN2Qt14qt_getEnumNameENS_4AxisE
/*void qm3517036838_14(Qt::Axis arg0)*/ {
  Qt::Axis arg0 = *(Qt::Axis*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::Axis) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1826
// [8] const char * qt_getEnumName(Qt::Key) 
// (12)qm1504652376 (31)_ZN2Qt14qt_getEnumNameENS_3KeyE
/*void qm1504652376_15(Qt::Key arg0)*/ {
  Qt::Key arg0 = *(Qt::Key*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::Key) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1869
// [8] const char * qt_getEnumName(Qt::HighDpiScaleFactorRoundingPolicy) 
// (11)qm617356833 (61)_ZN2Qt14qt_getEnumNameENS_32HighDpiScaleFactorRoundingPolicyE
/*void qm617356833_16(Qt::HighDpiScaleFactorRoundingPolicy arg0)*/ {
  Qt::HighDpiScaleFactorRoundingPolicy arg0 = *(Qt::HighDpiScaleFactorRoundingPolicy*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::HighDpiScaleFactorRoundingPolicy) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1831
// [8] const char * qt_getEnumName(Qt::ItemSelectionOperation) 
// (12)qm1630030754 (51)_ZN2Qt14qt_getEnumNameENS_22ItemSelectionOperationE
/*void qm1630030754_17(Qt::ItemSelectionOperation arg0)*/ {
  Qt::ItemSelectionOperation arg0 = *(Qt::ItemSelectionOperation*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ItemSelectionOperation) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1844
// [8] const char * qt_getEnumName(Qt::ApplicationAttribute) 
// (12)qm2527691913 (49)_ZN2Qt14qt_getEnumNameENS_20ApplicationAttributeE
/*void qm2527691913_18(Qt::ApplicationAttribute arg0)*/ {
  Qt::ApplicationAttribute arg0 = *(Qt::ApplicationAttribute*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ApplicationAttribute) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1828
// [8] const char * qt_getEnumName(Qt::TextInteractionFlag) 
// (12)qm3859031596 (48)_ZN2Qt14qt_getEnumNameENS_19TextInteractionFlagE
/*void qm3859031596_19(Qt::TextInteractionFlag arg0)*/ {
  Qt::TextInteractionFlag arg0 = *(Qt::TextInteractionFlag*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TextInteractionFlag) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1824
// [8] const char * qt_getEnumName(Qt::TransformationMode) 
// (12)qm1274006295 (47)_ZN2Qt14qt_getEnumNameENS_18TransformationModeE
/*void qm1274006295_20(Qt::TransformationMode arg0)*/ {
  Qt::TransformationMode arg0 = *(Qt::TransformationMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TransformationMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1854
// [8] const char * qt_getEnumName(Qt::ScreenOrientation) 
// (12)qm1519682284 (46)_ZN2Qt14qt_getEnumNameENS_17ScreenOrientationE
/*void qm1519682284_21(Qt::ScreenOrientation arg0)*/ {
  Qt::ScreenOrientation arg0 = *(Qt::ScreenOrientation*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ScreenOrientation) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1861
// [8] const char * qt_getEnumName(Qt::NativeGestureType) 
// (11)qm250484773 (46)_ZN2Qt14qt_getEnumNameENS_17NativeGestureTypeE
/*void qm250484773_22(Qt::NativeGestureType arg0)*/ {
  Qt::NativeGestureType arg0 = *(Qt::NativeGestureType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::NativeGestureType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1830
// [8] const char * qt_getEnumName(Qt::ItemSelectionMode) 
// (12)qm2377226946 (46)_ZN2Qt14qt_getEnumNameENS_17ItemSelectionModeE
/*void qm2377226946_23(Qt::ItemSelectionMode arg0)*/ {
  Qt::ItemSelectionMode arg0 = *(Qt::ItemSelectionMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ItemSelectionMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1787
// [8] const char * qt_getEnumName(Qt::ContextMenuPolicy) 
// (12)qm1932641763 (46)_ZN2Qt14qt_getEnumNameENS_17ContextMenuPolicyE
/*void qm1932641763_24(Qt::ContextMenuPolicy arg0)*/ {
  Qt::ContextMenuPolicy arg0 = *(Qt::ContextMenuPolicy*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ContextMenuPolicy) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1870
// [8] const char * qt_getEnumName(Qt::TabFocusBehavior) 
// (12)qm3041272356 (45)_ZN2Qt14qt_getEnumNameENS_16TabFocusBehaviorE
/*void qm3041272356_25(Qt::TabFocusBehavior arg0)*/ {
  Qt::TabFocusBehavior arg0 = *(Qt::TabFocusBehavior*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TabFocusBehavior) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1866
// [8] const char * qt_getEnumName(Qt::MouseEventSource) 
// (12)qm3853515605 (45)_ZN2Qt14qt_getEnumNameENS_16MouseEventSourceE
/*void qm3853515605_26(Qt::MouseEventSource arg0)*/ {
  Qt::MouseEventSource arg0 = *(Qt::MouseEventSource*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::MouseEventSource) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1849
// [8] const char * qt_getEnumName(Qt::InputMethodQuery) 
// (12)qm1414376257 (45)_ZN2Qt14qt_getEnumNameENS_16InputMethodQueryE
/*void qm1414376257_27(Qt::InputMethodQuery arg0)*/ {
  Qt::InputMethodQuery arg0 = *(Qt::InputMethodQuery*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::InputMethodQuery) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1857
// [8] const char * qt_getEnumName(Qt::ApplicationState) 
// (12)qm2698323720 (45)_ZN2Qt14qt_getEnumNameENS_16ApplicationStateE
/*void qm2698323720_28(Qt::ApplicationState arg0)*/ {
  Qt::ApplicationState arg0 = *(Qt::ApplicationState*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ApplicationState) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1843
// [8] const char * qt_getEnumName(Qt::WidgetAttribute) 
// (12)qm4224412364 (44)_ZN2Qt14qt_getEnumNameENS_15WidgetAttributeE
/*void qm4224412364_29(Qt::WidgetAttribute arg0)*/ {
  Qt::WidgetAttribute arg0 = *(Qt::WidgetAttribute*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::WidgetAttribute) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1789
// [8] const char * qt_getEnumName(Qt::ToolButtonStyle) 
// (12)qm3908631063 (44)_ZN2Qt14qt_getEnumNameENS_15ToolButtonStyleE
/*void qm3908631063_30(Qt::ToolButtonStyle arg0)*/ {
  Qt::ToolButtonStyle arg0 = *(Qt::ToolButtonStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ToolButtonStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1827
// [8] const char * qt_getEnumName(Qt::ShortcutContext) 
// (12)qm1879570693 (44)_ZN2Qt14qt_getEnumNameENS_15ShortcutContextE
/*void qm1879570693_31(Qt::ShortcutContext arg0)*/ {
  Qt::ShortcutContext arg0 = *(Qt::ShortcutContext*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ShortcutContext) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1785
// [8] const char * qt_getEnumName(Qt::ScrollBarPolicy) 
// (11)qm445587465 (44)_ZN2Qt14qt_getEnumNameENS_15ScrollBarPolicyE
/*void qm445587465_32(Qt::ScrollBarPolicy arg0)*/ {
  Qt::ScrollBarPolicy arg0 = *(Qt::ScrollBarPolicy*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ScrollBarPolicy) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1802
// [8] const char * qt_getEnumName(Qt::LayoutDirection) 
// (12)qm1999517778 (44)_ZN2Qt14qt_getEnumNameENS_15LayoutDirectionE
/*void qm1999517778_33(Qt::LayoutDirection arg0)*/ {
  Qt::LayoutDirection arg0 = *(Qt::LayoutDirection*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::LayoutDirection) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1848
// [8] const char * qt_getEnumName(Qt::InputMethodHint) 
// (12)qm3444795941 (44)_ZN2Qt14qt_getEnumNameENS_15InputMethodHintE
/*void qm3444795941_34(Qt::InputMethodHint arg0)*/ {
  Qt::InputMethodHint arg0 = *(Qt::InputMethodHint*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::InputMethodHint) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1863
// [8] const char * qt_getEnumName(Qt::CursorMoveStyle) 
// (12)qm3864077644 (44)_ZN2Qt14qt_getEnumNameENS_15CursorMoveStyleE
/*void qm3864077644_35(Qt::CursorMoveStyle arg0)*/ {
  Qt::CursorMoveStyle arg0 = *(Qt::CursorMoveStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::CursorMoveStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1836
// [8] const char * qt_getEnumName(Qt::CaseSensitivity) 
// (12)qm3332038454 (44)_ZN2Qt14qt_getEnumNameENS_15CaseSensitivityE
/*void qm3332038454_36(Qt::CaseSensitivity arg0)*/ {
  Qt::CaseSensitivity arg0 = *(Qt::CaseSensitivity*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::CaseSensitivity) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1823
// [8] const char * qt_getEnumName(Qt::AspectRatioMode) 
// (12)qm1681049233 (44)_ZN2Qt14qt_getEnumNameENS_15AspectRatioModeE
/*void qm1681049233_37(Qt::AspectRatioMode arg0)*/ {
  Qt::AspectRatioMode arg0 = *(Qt::AspectRatioMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::AspectRatioMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1842
// [8] const char * qt_getEnumName(Qt::WindowModality) 
// (12)qm1340543405 (43)_ZN2Qt14qt_getEnumNameENS_14WindowModalityE
/*void qm1340543405_38(Qt::WindowModality arg0)*/ {
  Qt::WindowModality arg0 = *(Qt::WindowModality*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::WindowModality) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1867
// [8] const char * qt_getEnumName(Qt::MouseEventFlag) 
// (12)qm2305013947 (43)_ZN2Qt14qt_getEnumNameENS_14MouseEventFlagE
/*void qm2305013947_39(Qt::MouseEventFlag arg0)*/ {
  Qt::MouseEventFlag arg0 = *(Qt::MouseEventFlag*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::MouseEventFlag) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1814
// [8] const char * qt_getEnumName(Qt::DockWidgetArea) 
// (12)qm1428264644 (43)_ZN2Qt14qt_getEnumNameENS_14DockWidgetAreaE
/*void qm1428264644_40(Qt::DockWidgetArea arg0)*/ {
  Qt::DockWidgetArea arg0 = *(Qt::DockWidgetArea*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::DockWidgetArea) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1856
// [8] const char * qt_getEnumName(Qt::ConnectionType) 
// (12)qm3363633464 (43)_ZN2Qt14qt_getEnumNameENS_14ConnectionTypeE
/*void qm3363633464_41(Qt::ConnectionType arg0)*/ {
  Qt::ConnectionType arg0 = *(Qt::ConnectionType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ConnectionType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1817
// [8] const char * qt_getEnumName(Qt::TextElideMode) 
// (12)qm2816972100 (42)_ZN2Qt14qt_getEnumNameENS_13TextElideModeE
/*void qm2816972100_42(Qt::TextElideMode arg0)*/ {
  Qt::TextElideMode arg0 = *(Qt::TextElideMode*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TextElideMode) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1797
// [8] const char * qt_getEnumName(Qt::ClipOperation) 
// (12)qm4151621393 (42)_ZN2Qt14qt_getEnumNameENS_13ClipOperationE
/*void qm4151621393_43(Qt::ClipOperation arg0)*/ {
  Qt::ClipOperation arg0 = *(Qt::ClipOperation*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ClipOperation) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1792
// [8] const char * qt_getEnumName(Qt::PenJoinStyle) 
// (12)qm1661670322 (41)_ZN2Qt14qt_getEnumNameENS_12PenJoinStyleE
/*void qm1661670322_44(Qt::PenJoinStyle arg0)*/ {
  Qt::PenJoinStyle arg0 = *(Qt::PenJoinStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::PenJoinStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1834
// [8] const char * qt_getEnumName(Qt::ItemDataRole) 
// (11)qm724185588 (41)_ZN2Qt14qt_getEnumNameENS_12ItemDataRoleE
/*void qm724185588_45(Qt::ItemDataRole arg0)*/ {
  Qt::ItemDataRole arg0 = *(Qt::ItemDataRole*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ItemDataRole) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1859
// [8] const char * qt_getEnumName(Qt::GestureState) 
// (11)qm612873383 (41)_ZN2Qt14qt_getEnumNameENS_12GestureStateE
/*void qm612873383_46(Qt::GestureState arg0)*/ {
  Qt::GestureState arg0 = *(Qt::GestureState*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::GestureState) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1851
// [8] const char * qt_getEnumName(Qt::EnterKeyType) 
// (12)qm3752829392 (41)_ZN2Qt14qt_getEnumNameENS_12EnterKeyTypeE
/*void qm3752829392_47(Qt::EnterKeyType arg0)*/ {
  Qt::EnterKeyType arg0 = *(Qt::EnterKeyType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::EnterKeyType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1868
// [8] const char * qt_getEnumName(Qt::ChecksumType) 
// (12)qm1539559424 (41)_ZN2Qt14qt_getEnumNameENS_12ChecksumTypeE
/*void qm1539559424_48(Qt::ChecksumType arg0)*/ {
  Qt::ChecksumType arg0 = *(Qt::ChecksumType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ChecksumType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1841
// [8] const char * qt_getEnumName(Qt::WindowState) 
// (12)qm4063885890 (40)_ZN2Qt14qt_getEnumNameENS_11WindowStateE
/*void qm4063885890_49(Qt::WindowState arg0)*/ {
  Qt::WindowState arg0 = *(Qt::WindowState*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::WindowState) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1815
// [8] const char * qt_getEnumName(Qt::ToolBarArea) 
// (12)qm3244351731 (40)_ZN2Qt14qt_getEnumNameENS_11ToolBarAreaE
/*void qm3244351731_50(Qt::ToolBarArea arg0)*/ {
  Qt::ToolBarArea arg0 = *(Qt::ToolBarArea*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ToolBarArea) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1865
// [8] const char * qt_getEnumName(Qt::ScrollPhase) 
// (12)qm1640675197 (40)_ZN2Qt14qt_getEnumNameENS_11ScrollPhaseE
/*void qm1640675197_51(Qt::ScrollPhase arg0)*/ {
  Qt::ScrollPhase arg0 = *(Qt::ScrollPhase*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::ScrollPhase) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1791
// [8] const char * qt_getEnumName(Qt::PenCapStyle) 
// (12)qm1033817956 (40)_ZN2Qt14qt_getEnumNameENS_11PenCapStyleE
/*void qm1033817956_52(Qt::PenCapStyle arg0)*/ {
  Qt::PenCapStyle arg0 = *(Qt::PenCapStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::PenCapStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1804
// [8] const char * qt_getEnumName(Qt::Orientation) 
// (10)qm43920613 (40)_ZN2Qt14qt_getEnumNameENS_11OrientationE
/*void qm43920613_53(Qt::Orientation arg0)*/ {
  Qt::Orientation arg0 = *(Qt::Orientation*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::Orientation) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1822
// [8] const char * qt_getEnumName(Qt::GlobalColor) 
// (12)qm2424424348 (40)_ZN2Qt14qt_getEnumNameENS_11GlobalColorE
/*void qm2424424348_54(Qt::GlobalColor arg0)*/ {
  Qt::GlobalColor arg0 = *(Qt::GlobalColor*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::GlobalColor) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1860
// [8] const char * qt_getEnumName(Qt::GestureType) 
// (12)qm3031356172 (40)_ZN2Qt14qt_getEnumNameENS_11GestureTypeE
/*void qm3031356172_55(Qt::GestureType arg0)*/ {
  Qt::GestureType arg0 = *(Qt::GestureType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::GestureType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1847
// [8] const char * qt_getEnumName(Qt::FocusReason) 
// (11)qm106006595 (40)_ZN2Qt14qt_getEnumNameENS_11FocusReasonE
/*void qm106006595_56(Qt::FocusReason arg0)*/ {
  Qt::FocusReason arg0 = *(Qt::FocusReason*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::FocusReason) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1786
// [8] const char * qt_getEnumName(Qt::FocusPolicy) 
// (12)qm4227380404 (40)_ZN2Qt14qt_getEnumNameENS_11FocusPolicyE
/*void qm4227380404_57(Qt::FocusPolicy arg0)*/ {
  Qt::FocusPolicy arg0 = *(Qt::FocusPolicy*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::FocusPolicy) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1821
// [8] const char * qt_getEnumName(Qt::CursorShape) 
// (12)qm1557776875 (40)_ZN2Qt14qt_getEnumNameENS_11CursorShapeE
/*void qm1557776875_58(Qt::CursorShape arg0)*/ {
  Qt::CursorShape arg0 = *(Qt::CursorShape*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::CursorShape) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1840
// [8] const char * qt_getEnumName(Qt::WindowType) 
// (12)qm4197252621 (39)_ZN2Qt14qt_getEnumNameENS_10WindowTypeE
/*void qm4197252621_59(Qt::WindowType arg0)*/ {
  Qt::WindowType arg0 = *(Qt::WindowType*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::WindowType) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1816
// [8] const char * qt_getEnumName(Qt::TextFormat) 
// (12)qm2968813264 (39)_ZN2Qt14qt_getEnumNameENS_10TextFormatE
/*void qm2968813264_60(Qt::TextFormat arg0)*/ {
  Qt::TextFormat arg0 = *(Qt::TextFormat*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::TextFormat) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1805
// [8] const char * qt_getEnumName(Qt::DropAction) 
// (12)qm2674870811 (39)_ZN2Qt14qt_getEnumNameENS_10DropActionE
/*void qm2674870811_61(Qt::DropAction arg0)*/ {
  Qt::DropAction arg0 = *(Qt::DropAction*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::DropAction) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1818
// [8] const char * qt_getEnumName(Qt::DateFormat) 
// (12)qm1103943872 (39)_ZN2Qt14qt_getEnumNameENS_10DateFormatE
/*void qm1103943872_62(Qt::DateFormat arg0)*/ {
  Qt::DateFormat arg0 = *(Qt::DateFormat*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::DateFormat) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1833
// [8] const char * qt_getEnumName(Qt::CheckState) 
// (12)qm3091607077 (39)_ZN2Qt14qt_getEnumNameENS_10CheckStateE
/*void qm3091607077_63(Qt::CheckState arg0)*/ {
  Qt::CheckState arg0 = *(Qt::CheckState*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::CheckState) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1793
// [8] const char * qt_getEnumName(Qt::BrushStyle) 
// (11)qm793707707 (39)_ZN2Qt14qt_getEnumNameENS_10BrushStyleE
/*void qm793707707_64(Qt::BrushStyle arg0)*/ {
  Qt::BrushStyle arg0 = *(Qt::BrushStyle*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(Qt::BrushStyle) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1837
// [8] const char * qt_getEnumName(Qt::MatchFlags) 
// (11)qm740079184 (46)_ZN2Qt14qt_getEnumNameE6QFlagsINS_9MatchFlagEE
/*void qm740079184_65(QFlags<Qt::MatchFlag> arg0)*/ {
  QFlags<Qt::MatchFlag> arg0 = *(QFlags<Qt::MatchFlag>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::MatchFlag>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1832
// [8] const char * qt_getEnumName(Qt::ItemFlags) 
// (12)qm3822856221 (45)_ZN2Qt14qt_getEnumNameE6QFlagsINS_8ItemFlagEE
/*void qm3822856221_66(QFlags<Qt::ItemFlag> arg0)*/ {
  QFlags<Qt::ItemFlag> arg0 = *(QFlags<Qt::ItemFlag>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::ItemFlag>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1811
// [8] const char * qt_getEnumName(Qt::Edges) 
// (12)qm3610443276 (41)_ZN2Qt14qt_getEnumNameE6QFlagsINS_4EdgeEE
/*void qm3610443276_67(QFlags<Qt::Edge> arg0)*/ {
  QFlags<Qt::Edge> arg0 = *(QFlags<Qt::Edge>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::Edge>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1829
// [8] const char * qt_getEnumName(Qt::TextInteractionFlags) 
// (12)qm4269306090 (57)_ZN2Qt14qt_getEnumNameE6QFlagsINS_19TextInteractionFlagEE
/*void qm4269306090_68(QFlags<Qt::TextInteractionFlag> arg0)*/ {
  QFlags<Qt::TextInteractionFlag> arg0 = *(QFlags<Qt::TextInteractionFlag>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::TextInteractionFlag>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1825
// [8] const char * qt_getEnumName(Qt::ImageConversionFlags) 
// (12)qm3083414786 (57)_ZN2Qt14qt_getEnumNameE6QFlagsINS_19ImageConversionFlagEE
/*void qm3083414786_69(QFlags<Qt::ImageConversionFlag> arg0)*/ {
  QFlags<Qt::ImageConversionFlag> arg0 = *(QFlags<Qt::ImageConversionFlag>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::ImageConversionFlag>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1809
// [8] const char * qt_getEnumName(Qt::SplitBehavior) 
// (12)qm3060855968 (56)_ZN2Qt14qt_getEnumNameE6QFlagsINS_18SplitBehaviorFlagsEE
/*void qm3060855968_70(QFlags<Qt::SplitBehaviorFlags> arg0)*/ {
  QFlags<Qt::SplitBehaviorFlags> arg0 = *(QFlags<Qt::SplitBehaviorFlags>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::SplitBehaviorFlags>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1855
// [8] const char * qt_getEnumName(Qt::ScreenOrientations) 
// (12)qm2814689902 (55)_ZN2Qt14qt_getEnumNameE6QFlagsINS_17ScreenOrientationEE
/*void qm2814689902_71(QFlags<Qt::ScreenOrientation> arg0)*/ {
  QFlags<Qt::ScreenOrientation> arg0 = *(QFlags<Qt::ScreenOrientation>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::ScreenOrientation>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1838
// [8] const char * qt_getEnumName(Qt::KeyboardModifiers) 
// (12)qm4102975779 (54)_ZN2Qt14qt_getEnumNameE6QFlagsINS_16KeyboardModifierEE
/*void qm4102975779_72(QFlags<Qt::KeyboardModifier> arg0)*/ {
  QFlags<Qt::KeyboardModifier> arg0 = *(QFlags<Qt::KeyboardModifier>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::KeyboardModifier>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1852
// [8] const char * qt_getEnumName(Qt::InputMethodQueries) 
// (11)qm589405012 (54)_ZN2Qt14qt_getEnumNameE6QFlagsINS_16InputMethodQueryEE
/*void qm589405012_73(QFlags<Qt::InputMethodQuery> arg0)*/ {
  QFlags<Qt::InputMethodQuery> arg0 = *(QFlags<Qt::InputMethodQuery>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::InputMethodQuery>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1853
// [8] const char * qt_getEnumName(Qt::TouchPointStates) 
// (12)qm3903067050 (53)_ZN2Qt14qt_getEnumNameE6QFlagsINS_15TouchPointStateEE
/*void qm3903067050_74(QFlags<Qt::TouchPointState> arg0)*/ {
  QFlags<Qt::TouchPointState> arg0 = *(QFlags<Qt::TouchPointState>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::TouchPointState>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1850
// [8] const char * qt_getEnumName(Qt::InputMethodHints) 
// (12)qm1017572714 (53)_ZN2Qt14qt_getEnumNameE6QFlagsINS_15InputMethodHintEE
/*void qm1017572714_75(QFlags<Qt::InputMethodHint> arg0)*/ {
  QFlags<Qt::InputMethodHint> arg0 = *(QFlags<Qt::InputMethodHint>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::InputMethodHint>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1812
// [8] const char * qt_getEnumName(Qt::DockWidgetAreas) 
// (11)qm802741455 (52)_ZN2Qt14qt_getEnumNameE6QFlagsINS_14DockWidgetAreaEE
/*void qm802741455_76(QFlags<Qt::DockWidgetArea> arg0)*/ {
  QFlags<Qt::DockWidgetArea> arg0 = *(QFlags<Qt::DockWidgetArea>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::DockWidgetArea>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1806
// [8] const char * qt_getEnumName(Qt::Alignment) 
// (12)qm1727184262 (51)_ZN2Qt14qt_getEnumNameE6QFlagsINS_13AlignmentFlagEE
/*void qm1727184262_77(QFlags<Qt::AlignmentFlag> arg0)*/ {
  QFlags<Qt::AlignmentFlag> arg0 = *(QFlags<Qt::AlignmentFlag>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::AlignmentFlag>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1846
// [8] const char * qt_getEnumName(Qt::WindowStates) 
// (12)qm3535598374 (49)_ZN2Qt14qt_getEnumNameE6QFlagsINS_11WindowStateEE
/*void qm3535598374_78(QFlags<Qt::WindowState> arg0)*/ {
  QFlags<Qt::WindowState> arg0 = *(QFlags<Qt::WindowState>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::WindowState>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1813
// [8] const char * qt_getEnumName(Qt::ToolBarAreas) 
// (12)qm1860774182 (49)_ZN2Qt14qt_getEnumNameE6QFlagsINS_11ToolBarAreaEE
/*void qm1860774182_79(QFlags<Qt::ToolBarArea> arg0)*/ {
  QFlags<Qt::ToolBarArea> arg0 = *(QFlags<Qt::ToolBarArea>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::ToolBarArea>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1808
// [8] const char * qt_getEnumName(Qt::Orientations) 
// (12)qm2600362683 (49)_ZN2Qt14qt_getEnumNameE6QFlagsINS_11OrientationEE
/*void qm2600362683_80(QFlags<Qt::Orientation> arg0)*/ {
  QFlags<Qt::Orientation> arg0 = *(QFlags<Qt::Orientation>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::Orientation>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1839
// [8] const char * qt_getEnumName(Qt::MouseButtons) 
// (11)qm744469384 (49)_ZN2Qt14qt_getEnumNameE6QFlagsINS_11MouseButtonEE
/*void qm744469384_81(QFlags<Qt::MouseButton> arg0)*/ {
  QFlags<Qt::MouseButton> arg0 = *(QFlags<Qt::MouseButton>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::MouseButton>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1845
// [8] const char * qt_getEnumName(Qt::WindowFlags) 
// (12)qm3873070038 (48)_ZN2Qt14qt_getEnumNameE6QFlagsINS_10WindowTypeEE
/*void qm3873070038_82(QFlags<Qt::WindowType> arg0)*/ {
  QFlags<Qt::WindowType> arg0 = *(QFlags<Qt::WindowType>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::WindowType>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1810
// [8] const char * qt_getEnumName(Qt::DropActions) 
// (11)qm309046579 (48)_ZN2Qt14qt_getEnumNameE6QFlagsINS_10DropActionEE
/*void qm309046579_83(QFlags<Qt::DropAction> arg0)*/ {
  QFlags<Qt::DropAction> arg0 = *(QFlags<Qt::DropAction>*)this_;
  (void) Qt::qt_getEnumName(arg0);
  auto xptr = (const char * (*)(QFlags<Qt::DropAction>) ) &Qt::qt_getEnumName;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:92
// [4] int qstrcmp(const char *, const QByteArray &) 
// (11)qm483383700 (28)_ZL7qstrcmpPKcRK10QByteArray
/*void qm483383700(const char * str1, const QByteArray & str2)*/ {
  const char * str1 = *(const char **)this_; const QByteArray & str2 = *(const QByteArray *)this_;
  (void) qstrcmp(str1, str2);
  auto xptr = (int (*)(char const*, QByteArray const&) ) &qstrcmp;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:922
// [1] bool qIsNull(float) 
// (12)qm3394532936 (12)_ZL7qIsNullf
/*void qm3394532936(float f)*/ {
  float f = *(float*)this_;
  (void) qIsNull(f);
  auto xptr = (bool (*)(float) ) &qIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:917
// [1] bool qIsNull(double) 
// (11)qm609884004 (12)_ZL7qIsNulld
/*void qm609884004_1(double d)*/ {
  double d = *(double*)this_;
  (void) qIsNull(d);
  auto xptr = (bool (*)(double) ) &qIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:897
// [1] bool qFuzzyCompare(float, float) 
// (12)qm2414448910 (20)_ZL13qFuzzyCompareff
/*void qm2414448910(float p1, float p2)*/ {
  float p1 = *(float*)this_; float p2 = *(float*)this_;
  (void) qFuzzyCompare(p1, p2);
  auto xptr = (bool (*)(float, float) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:892
// [1] bool qFuzzyCompare(double, double) 
// (12)qm1406243488 (20)_ZL13qFuzzyComparedd
/*void qm1406243488_1(double p1, double p2)*/ {
  double p1 = *(double*)this_; double p2 = *(double*)this_;
  (void) qFuzzyCompare(p1, p2);
  auto xptr = (bool (*)(double, double) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:907
// [1] bool qFuzzyIsNull(float) 
// (9)qm2756447 (18)_ZL12qFuzzyIsNullf
/*void qm2756447(float f)*/ {
  float f = *(float*)this_;
  (void) qFuzzyIsNull(f);
  auto xptr = (bool (*)(float) ) &qFuzzyIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:902
// [1] bool qFuzzyIsNull(double) 
// (12)qm3995364979 (18)_ZL12qFuzzyIsNulld
/*void qm3995364979_1(double d)*/ {
  double d = *(double*)this_;
  (void) qFuzzyIsNull(d);
  auto xptr = (bool (*)(double) ) &qFuzzyIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:127
// [1] bool qIsFinite(qfloat16) 
// (12)qm1697348782 (21)_Z9qIsFinite8qfloat16
/*void qm1697348782(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qIsFinite(f);
  auto xptr = (bool (*)(qfloat16) ) &qIsFinite;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:766
// [8] QByteArray qCompress(const QByteArray &, int) 
// (12)qm3580640037 (27)_Z9qCompressRK10QByteArrayi
/*void qm3580640037(const QByteArray & data, int compressionLevel)*/ {
  const QByteArray & data = *(const QByteArray *)this_; int compressionLevel = *(int*)this_;
  (void) qCompress(data, compressionLevel);
  auto xptr = (QByteArray (*)(QByteArray const&, int) ) &qCompress;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:76
// [4] uint qstrnlen(const char *, uint) 
// (12)qm4284818088 (15)_Z8qstrnlenPKcj
/*void qm4284818088(const char * str, unsigned int maxlen)*/ {
  const char * str = *(const char **)this_; unsigned int maxlen = *(unsigned int*)this_;
  (void) qstrnlen(str, maxlen);
  auto xptr = (unsigned int (*)(char const*, unsigned int) ) &qstrnlen;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:95
// [4] int qstrncmp(const char *, const char *, uint) 
// (12)qm2829993768 (18)_Z8qstrncmpPKcS0_j
/*void qm2829993768(const char * str1, const char * str2, unsigned int len_)*/ {
  const char * str1 = *(const char **)this_; const char * str2 = *(const char **)this_; unsigned int len_ = *(unsigned int*)this_;
  (void) qstrncmp(str1, str2, len_);
  auto xptr = (int (*)(char const*, char const*, unsigned int) ) &qstrncmp;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:659
// [8] qint64 qRound64(float) 
// (12)qm2946416877 (12)_Z8qRound64f
/*void qm2946416877(float d)*/ {
  float d = *(float*)this_;
  (void) qRound64(d);
  auto xptr = (long long (*)(float) ) &qRound64;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:657
// [8] qint64 qRound64(double) 
// (12)qm1099997633 (12)_Z8qRound64d
/*void qm1099997633_1(double d)*/ {
  double d = *(double*)this_;
  (void) qRound64(d);
  auto xptr = (long long (*)(double) ) &qRound64;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:135
// [8] qint64 qRound64(qfloat16) 
// (12)qm3945566319 (20)_Z8qRound648qfloat16
/*void qm3945566319_2(qfloat16 d)*/ {
  qfloat16 d = *(qfloat16*)this_;
  (void) qRound64(d);
  auto xptr = (long long (*)(qfloat16) ) &qRound64;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1272
// [4] int qIntCast(float) 
// (12)qm1807953448 (12)_Z8qIntCastf
/*void qm1807953448(float f)*/ {
  float f = *(float*)this_;
  (void) qIntCast(f);
  auto xptr = (int (*)(float) ) &qIntCast;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1271
// [4] int qIntCast(double) 
// (12)qm2244824836 (12)_Z8qIntCastd
/*void qm2244824836_1(double f)*/ {
  double f = *(double*)this_;
  (void) qIntCast(f);
  auto xptr = (int (*)(double) ) &qIntCast;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:156
// [4] int qIntCast(qfloat16) 
// (11)qm644895044 (20)_Z8qIntCast8qfloat16
/*void qm644895044_2(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qIntCast(f);
  auto xptr = (int (*)(qfloat16) ) &qIntCast;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:206
// [8] qreal qFastSin(qreal) 
// (12)qm1595905336 (12)_Z8qFastSind
/*void qm1595905336(double x)*/ {
  double x = *(double*)this_;
  (void) qFastSin(x);
  auto xptr = (double (*)(double) ) &qFastSin;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:216
// [8] qreal qFastCos(qreal) 
// (12)qm4108833289 (12)_Z8qFastCosd
/*void qm4108833289(double x)*/ {
  double x = *(double*)this_;
  (void) qFastCos(x);
  auto xptr = (double (*)(double) ) &qFastCos;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:762
// [-2] void qt_noop() 
// (12)qm1899492123 (11)_Z7qt_noopv
/*void qm1899492123()*/ {
  ;
  (void) qt_noop();
  auto xptr = (void (*)() ) &qt_noop;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:73
// [4] uint qstrlen(const char *) 
// (11)qm726415450 (13)_Z7qstrlenPKc
/*void qm726415450(const char * str)*/ {
  const char * str = *(const char **)this_;
  (void) qstrlen(str);
  auto xptr = (unsigned int (*)(char const*) ) &qstrlen;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:151
// [1] bool qIsNull(qfloat16) 
// (12)qm3383525925 (19)_Z7qIsNull8qfloat16
/*void qm3383525925_2(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qIsNull(f);
  auto xptr = (bool (*)(qfloat16) ) &qIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qendian.h:170
// [4] float qbswap(float) 
// (12)qm2315866073 (10)_Z6qbswapf
/*void qm2315866073(float source)*/ {
  float source = *(float*)this_;
  (void) qbswap(source);
  auto xptr = (float (*)(float) ) &qbswap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qendian.h:175
// [8] double qbswap(double) 
// (12)qm1678192373 (10)_Z6qbswapd
/*void qm1678192373_1(double source)*/ {
  double source = *(double*)this_;
  (void) qbswap(source);
  auto xptr = (double (*)(double) ) &qbswap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qendian.h:165
// [2] qfloat16 qbswap(qfloat16) 
// (12)qm2646069628 (18)_Z6qbswap8qfloat16
/*void qm2646069628_2(qfloat16 source)*/ {
  qfloat16 source = *(qfloat16*)this_;
  (void) qbswap(source);
  auto xptr = (qfloat16 (*)(qfloat16) ) &qbswap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:654
// [4] int qRound(float) 
// (12)qm2761452052 (10)_Z6qRoundf
/*void qm2761452052(float d)*/ {
  float d = *(float*)this_;
  (void) qRound(d);
  auto xptr = (int (*)(float) ) &qRound;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:652
// [4] int qRound(double) 
// (12)qm1251347256 (10)_Z6qRoundd
/*void qm1251347256_1(double d)*/ {
  double d = *(double*)this_;
  (void) qRound(d);
  auto xptr = (int (*)(double) ) &qRound;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:132
// [4] int qRound(qfloat16) 
// (12)qm1230684450 (18)_Z6qRound8qfloat16
/*void qm1230684450_2(qfloat16 d)*/ {
  qfloat16 d = *(qfloat16*)this_;
  (void) qRound(d);
  auto xptr = (int (*)(qfloat16) ) &qRound;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:126
// [1] bool qIsNaN(qfloat16) 
// (12)qm3763416151 (18)_Z6qIsNaN8qfloat16
/*void qm3763416151(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qIsNaN(f);
  auto xptr = (bool (*)(qfloat16) ) &qIsNaN;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:125
// [1] bool qIsInf(qfloat16) 
// (12)qm1539011130 (18)_Z6qIsInf8qfloat16
/*void qm1539011130(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qIsInf(f);
  auto xptr = (bool (*)(qfloat16) ) &qIsInf;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:74
// [4] int qFloor(qreal) 
// (12)qm3079625086 (10)_Z6qFloord
/*void qm3079625086(double v)*/ {
  double v = *(double*)this_;
  (void) qFloor(v);
  auto xptr = (int (*)(double) ) &qFloor;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:122
// [8] qreal qAtan2(qreal, qreal) 
// (12)qm1927508754 (11)_Z6qAtan2dd
/*void qm1927508754(double y, double x)*/ {
  double y = *(double*)this_; double x = *(double*)this_;
  (void) qAtan2(y, x);
  auto xptr = (double (*)(double, double) ) &qAtan2;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:128
// [8] qreal qSqrt(qreal) 
// (12)qm1340667641 (9)_Z5qSqrtd
/*void qm1340667641(double v)*/ {
  double v = *(double*)this_;
  (void) qSqrt(v);
  auto xptr = (double (*)(double) ) &qSqrt;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:87
// [4] uint qHash(quint64, uint) 
// (12)qm3763794226 (10)_Z5qHashyj
/*void qm3763794226(unsigned long long key, unsigned int seed)*/ {
  unsigned long long key = *(unsigned long long*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(unsigned long long, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:91
// [4] uint qHash(qint64, uint) 
// (12)qm4182622323 (10)_Z5qHashxj
/*void qm4182622323_1(long long key, unsigned int seed)*/ {
  long long key = *(long long*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(long long, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:76
// [4] uint qHash(ushort, uint) 
// (12)qm1442353023 (10)_Z5qHashtj
/*void qm1442353023_2(unsigned short key, unsigned int seed)*/ {
  unsigned short key = *(unsigned short*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(unsigned short, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:77
// [4] uint qHash(short, uint) 
// (11)qm448338360 (10)_Z5qHashsj
/*void qm448338360_3(short key, unsigned int seed)*/ {
  short key = *(short*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(short, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:80
// [4] uint qHash(ulong, uint) 
// (12)qm3472369255 (10)_Z5qHashmj
/*void qm3472369255_4(unsigned long key, unsigned int seed)*/ {
  unsigned long key = *(unsigned long*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(unsigned long, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:86
// [4] uint qHash(long, uint) 
// (12)qm3621984038 (10)_Z5qHashlj
/*void qm3621984038_5(long key, unsigned int seed)*/ {
  long key = *(long*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(long, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:78
// [4] uint qHash(uint, uint) 
// (12)qm2176430240 (10)_Z5qHashjj
/*void qm2176430240_6(unsigned int key, unsigned int seed)*/ {
  unsigned int key = *(unsigned int*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(unsigned int, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:79
// [4] uint qHash(int, uint) 
// (12)qm2861884259 (10)_Z5qHashij
/*void qm2861884259_7(int key, unsigned int seed)*/ {
  int key = *(int*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(int, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:74
// [4] uint qHash(uchar, uint) 
// (12)qm3012547106 (10)_Z5qHashhj
/*void qm3012547106_8(unsigned char key, unsigned int seed)*/ {
  unsigned char key = *(unsigned char*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(unsigned char, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:73
// [4] uint qHash(char, uint) 
// (12)qm1350241257 (10)_Z5qHashcj
/*void qm1350241257_9(char key, unsigned int seed)*/ {
  char key = *(char*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(char, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:75
// [4] uint qHash(signed char, uint) 
// (12)qm1649240427 (10)_Z5qHashaj
/*void qm1649240427_10(signed char key, unsigned int seed)*/ {
  signed char key = *(signed char*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(signed char, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:151
// [4] uint qHash(const QPersistentModelIndex &, uint) 
// (12)qm3575193829 (34)_Z5qHashRK21QPersistentModelIndexj
/*void qm3575193829_11(const QPersistentModelIndex & index, unsigned int seed)*/ {
  const QPersistentModelIndex & index = *(const QPersistentModelIndex *)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(index, seed);
  auto xptr = (unsigned int (*)(QPersistentModelIndex const&, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:229
// [4] uint qHash(const QItemSelectionRange &) 
// (12)qm2121295873 (31)_Z5qHashRK19QItemSelectionRange
/*void qm2121295873_12(const QItemSelectionRange & arg0)*/ {
  const QItemSelectionRange & arg0 = *(const QItemSelectionRange *)this_;
  (void) qHash(arg0);
  auto xptr = (unsigned int (*)(QItemSelectionRange const&) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:465
// [4] uint qHash(const QModelIndex &) 
// (12)qm1737397311 (23)_Z5qHashRK11QModelIndex
/*void qm1737397311_13(const QModelIndex & index)*/ {
  const QModelIndex & index = *(const QModelIndex *)this_;
  (void) qHash(index);
  auto xptr = (unsigned int (*)(QModelIndex const&) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:108
// [4] uint qHash(std::nullptr_t, uint) 
// (12)qm4287484797 (11)_Z5qHashDnj
/*void qm4287484797_14(nullptr_t arg0, unsigned int seed)*/ {
  nullptr_t arg0 = *(nullptr_t*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(arg0, seed);
  auto xptr = (unsigned int (*)(decltype(nullptr), unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:146
// [4] uint qHash(QCborTag, uint) 
// (10)qm83263110 (18)_Z5qHash8QCborTagj
/*void qm83263110_15(QCborTag tag, unsigned int seed)*/ {
  QCborTag tag = *(QCborTag*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(tag, seed);
  auto xptr = (unsigned int (*)(QCborTag, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:97
// [4] uint qHash(const QChar, uint) 
// (12)qm3774540772 (15)_Z5qHash5QCharj
/*void qm3774540772_16(const QChar key, unsigned int seed)*/ {
  const QChar key = *(const QChar*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(QChar, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborcommon.h:141
// [4] uint qHash(QCborSimpleType, uint) 
// (12)qm3918103904 (26)_Z5qHash15QCborSimpleTypej
/*void qm3918103904_17(QCborSimpleType tag, unsigned int seed)*/ {
  QCborSimpleType tag = *(QCborSimpleType*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(tag, seed);
  auto xptr = (unsigned int (*)(QCborSimpleType, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:80
// [8] qreal qFabs(qreal) 
// (12)qm3835071523 (9)_Z5qFabsd
/*void qm3835071523(double v)*/ {
  double v = *(double*)this_;
  (void) qFabs(v);
  auto xptr = (double (*)(double) ) &qFabs;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:68
// [4] int qCeil(qreal) 
// (12)qm1645966715 (9)_Z5qCeild
/*void qm1645966715(double v)*/ {
  double v = *(double*)this_;
  (void) qCeil(v);
  auto xptr = (int (*)(double) ) &qCeil;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:116
// [8] qreal qAtan(qreal) 
// (12)qm3428525531 (9)_Z5qAtand
/*void qm3428525531(double v)*/ {
  double v = *(double*)this_;
  (void) qAtan(v);
  auto xptr = (double (*)(double) ) &qAtan;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:110
// [8] qreal qAsin(qreal) 
// (12)qm1604275418 (9)_Z5qAsind
/*void qm1604275418(double v)*/ {
  double v = *(double*)this_;
  (void) qAsin(v);
  auto xptr = (double (*)(double) ) &qAsin;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:104
// [8] qreal qAcos(qreal) 
// (12)qm4100393963 (9)_Z5qAcosd
/*void qm4100393963(double v)*/ {
  double v = *(double*)this_;
  (void) qAcos(v);
  auto xptr = (double (*)(double) ) &qAcos;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:798
// [-2] void swap(QByteArray::FromBase64Result &, QByteArray::FromBase64Result &) 
// (12)qm1491598770 (43)_Z4swapRN10QByteArray16FromBase64ResultES1_
/*void qm1491598770(QByteArray::FromBase64Result & value1, QByteArray::FromBase64Result & value2)*/ {
  QByteArray::FromBase64Result & value1 = *(QByteArray::FromBase64Result *)this_; QByteArray::FromBase64Result & value2 = *(QByteArray::FromBase64Result *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QByteArray::FromBase64Result&, QByteArray::FromBase64Result&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:119
// [-2] void swap(QUrlQuery &, QUrlQuery &) 
// (11)qm449925117 (21)_Z4swapR9QUrlQueryS0_
/*void qm449925117_1(QUrlQuery & value1, QUrlQuery & value2)*/ {
  QUrlQuery & value1 = *(QUrlQuery *)this_; QUrlQuery & value2 = *(QUrlQuery *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QUrlQuery&, QUrlQuery&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtimezone.h:175
// [-2] void swap(QTimeZone &, QTimeZone &) 
// (11)qm895245137 (21)_Z4swapR9QTimeZoneS0_
/*void qm895245137_2(QTimeZone & value1, QTimeZone & value2)*/ {
  QTimeZone & value1 = *(QTimeZone *)this_; QTimeZone & value2 = *(QTimeZone *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTimeZone&, QTimeZone&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:127
// [-2] void swap(QMimeType &, QMimeType &) 
// (12)qm3129414183 (21)_Z4swapR9QMimeTypeS0_
/*void qm3129414183_3(QMimeType & value1, QMimeType & value2)*/ {
  QMimeType & value1 = *(QMimeType *)this_; QMimeType & value2 = *(QMimeType *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QMimeType&, QMimeType&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileinfo.h:163
// [-2] void swap(QFileInfo &, QFileInfo &) 
// (11)qm370854987 (21)_Z4swapR9QFileInfoS0_
/*void qm370854987_4(QFileInfo & value1, QFileInfo & value2)*/ {
  QFileInfo & value1 = *(QFileInfo *)this_; QFileInfo & value2 = *(QFileInfo *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QFileInfo&, QFileInfo&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:437
// [-2] void swap(QDateTime &, QDateTime &) 
// (12)qm1238944212 (21)_Z4swapR9QDateTimeS0_
/*void qm1238944212_5(QDateTime & value1, QDateTime & value2)*/ {
  QDateTime & value1 = *(QDateTime *)this_; QDateTime & value2 = *(QDateTime *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDateTime&, QDateTime&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:131
// [-2] void swap(QCollator &, QCollator &) 
// (12)qm2220929104 (21)_Z4swapR9QCollatorS0_
/*void qm2220929104_6(QCollator & value1, QCollator & value2)*/ {
  QCollator & value1 = *(QCollator *)this_; QCollator & value2 = *(QCollator *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCollator&, QCollator&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbitarray.h:174
// [-2] void swap(QBitArray &, QBitArray &) 
// (12)qm3586511895 (21)_Z4swapR9QBitArrayS0_
/*void qm3586511895_7(QBitArray & value1, QBitArray & value2)*/ {
  QBitArray & value1 = *(QBitArray *)this_; QBitArray & value2 = *(QBitArray *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QBitArray&, QBitArray&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:621
// [-2] void swap(QVariant &, QVariant &) 
// (12)qm2137528386 (20)_Z4swapR8QVariantS0_
/*void qm2137528386_8(QVariant & value1, QVariant & value2)*/ {
  QVariant & value1 = *(QVariant *)this_; QVariant & value2 = *(QVariant *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QVariant&, QVariant&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcbormap.h:339
// [-2] void swap(QCborMap &, QCborMap &) 
// (12)qm2019116846 (20)_Z4swapR8QCborMapS0_
/*void qm2019116846_9(QCborMap & value1, QCborMap & value2)*/ {
  QCborMap & value1 = *(QCborMap *)this_; QCborMap & value2 = *(QCborMap *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCborMap&, QCborMap&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1594
// [-2] void swap(QString &, QString &) 
// (12)qm2982988640 (19)_Z4swapR7QStringS0_
/*void qm2982988640_10(QString & value1, QString & value2)*/ {
  QString & value1 = *(QString *)this_; QString & value2 = *(QString *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QString&, QString&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:1193
// [-2] void swap(QLocale &, QLocale &) 
// (11)qm509076801 (19)_Z4swapR7QLocaleS0_
/*void qm509076801_11(QLocale & value1, QLocale & value2)*/ {
  QLocale & value1 = *(QLocale *)this_; QLocale & value2 = *(QLocale *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QLocale&, QLocale&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdebug.h:178
// [-2] void swap(QDebug &, QDebug &) 
// (12)qm4214017607 (18)_Z4swapR6QDebugS0_
/*void qm4214017607_12(QDebug & value1, QDebug & value2)*/ {
  QDebug & value1 = *(QDebug *)this_; QDebug & value2 = *(QDebug *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDebug&, QDebug&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:375
// [-2] void swap(QUrl &, QUrl &) 
// (12)qm4250098826 (16)_Z4swapR4QUrlS0_
/*void qm4250098826_13(QUrl & value1, QUrl & value2)*/ {
  QUrl & value1 = *(QUrl *)this_; QUrl & value2 = *(QUrl *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QUrl&, QUrl&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdir.h:237
// [-2] void swap(QDir &, QDir &) 
// (12)qm2452556683 (16)_Z4swapR4QDirS0_
/*void qm2452556683_14(QDir & value1, QDir & value2)*/ {
  QDir & value1 = *(QDir *)this_; QDir & value2 = *(QDir *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDir&, QDir&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:289
// [-2] void swap(QRegularExpressionMatchIterator &, QRegularExpressionMatchIterator &) 
// (12)qm1120078859 (44)_Z4swapR31QRegularExpressionMatchIteratorS0_
/*void qm1120078859_15(QRegularExpressionMatchIterator & value1, QRegularExpressionMatchIterator & value2)*/ {
  QRegularExpressionMatchIterator & value1 = *(QRegularExpressionMatchIterator *)this_; QRegularExpressionMatchIterator & value2 = *(QRegularExpressionMatchIterator *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QRegularExpressionMatchIterator&, QRegularExpressionMatchIterator&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:253
// [-2] void swap(QRegularExpressionMatch &, QRegularExpressionMatch &) 
// (12)qm1483352364 (36)_Z4swapR23QRegularExpressionMatchS0_
/*void qm1483352364_16(QRegularExpressionMatch & value1, QRegularExpressionMatch & value2)*/ {
  QRegularExpressionMatch & value1 = *(QRegularExpressionMatch *)this_; QRegularExpressionMatch & value2 = *(QRegularExpressionMatch *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QRegularExpressionMatch&, QRegularExpressionMatch&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:149
// [-2] void swap(QPersistentModelIndex &, QPersistentModelIndex &) 
// (12)qm1511827621 (34)_Z4swapR21QPersistentModelIndexS0_
/*void qm1511827621_17(QPersistentModelIndex & value1, QPersistentModelIndex & value2)*/ {
  QPersistentModelIndex & value1 = *(QPersistentModelIndex *)this_; QPersistentModelIndex & value2 = *(QPersistentModelIndex *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPersistentModelIndex&, QPersistentModelIndex&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qxmlstream.h:91
// [-2] void swap(QXmlStreamStringRef &, QXmlStreamStringRef &) 
// (12)qm1344333736 (32)_Z4swapR19QXmlStreamStringRefS0_
/*void qm1344333736_18(QXmlStreamStringRef & value1, QXmlStreamStringRef & value2)*/ {
  QXmlStreamStringRef & value1 = *(QXmlStreamStringRef *)this_; QXmlStreamStringRef & value2 = *(QXmlStreamStringRef *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QXmlStreamStringRef&, QXmlStreamStringRef&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:106
// [-2] void swap(QProcessEnvironment &, QProcessEnvironment &) 
// (12)qm2920865460 (32)_Z4swapR19QProcessEnvironmentS0_
/*void qm2920865460_19(QProcessEnvironment & value1, QProcessEnvironment & value2)*/ {
  QProcessEnvironment & value1 = *(QProcessEnvironment *)this_; QProcessEnvironment & value2 = *(QProcessEnvironment *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QProcessEnvironment&, QProcessEnvironment&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:177
// [-2] void swap(QRegularExpression &, QRegularExpression &) 
// (11)qm125578622 (31)_Z4swapR18QRegularExpressionS0_
/*void qm125578622_20(QRegularExpression & value1, QRegularExpression & value2)*/ {
  QRegularExpression & value1 = *(QRegularExpression *)this_; QRegularExpression & value2 = *(QRegularExpression *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QRegularExpression&, QRegularExpression&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcommandlineoption.h:106
// [-2] void swap(QCommandLineOption &, QCommandLineOption &) 
// (12)qm2861804652 (31)_Z4swapR18QCommandLineOptionS0_
/*void qm2861804652_21(QCommandLineOption & value1, QCommandLineOption & value2)*/ {
  QCommandLineOption & value1 = *(QCommandLineOption *)this_; QCommandLineOption & value2 = *(QCommandLineOption *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCommandLineOption&, QCommandLineOption&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcollator.h:130
// [-2] void swap(QCollatorSortKey &, QCollatorSortKey &) 
// (12)qm3495370052 (29)_Z4swapR16QCollatorSortKeyS0_
/*void qm3495370052_22(QCollatorSortKey & value1, QCollatorSortKey & value2)*/ {
  QCollatorSortKey & value1 = *(QCollatorSortKey *)this_; QCollatorSortKey & value2 = *(QCollatorSortKey *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCollatorSortKey&, QCollatorSortKey&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:265
// [-2] void swap(QItemSelection &, QItemSelection &) 
// (11)qm462712975 (27)_Z4swapR14QItemSelectionS0_
/*void qm462712975_23(QItemSelection & value1, QItemSelection & value2)*/ {
  QItemSelection & value1 = *(QItemSelection *)this_; QItemSelection & value2 = *(QItemSelection *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QItemSelection&, QItemSelection&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdeadlinetimer.h:195
// [-2] void swap(QDeadlineTimer &, QDeadlineTimer &) 
// (12)qm1539509751 (27)_Z4swapR14QDeadlineTimerS0_
/*void qm1539509751_24(QDeadlineTimer & value1, QDeadlineTimer & value2)*/ {
  QDeadlineTimer & value1 = *(QDeadlineTimer *)this_; QDeadlineTimer & value2 = *(QDeadlineTimer *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDeadlineTimer&, QDeadlineTimer&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsondocument.h:175
// [-2] void swap(QJsonDocument &, QJsonDocument &) 
// (12)qm2723325936 (26)_Z4swapR13QJsonDocumentS0_
/*void qm2723325936_25(QJsonDocument & value1, QJsonDocument & value2)*/ {
  QJsonDocument & value1 = *(QJsonDocument *)this_; QJsonDocument & value2 = *(QJsonDocument *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QJsonDocument&, QJsonDocument&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstorageinfo.h:116
// [-2] void swap(QStorageInfo &, QStorageInfo &) 
// (12)qm3925354317 (25)_Z4swapR12QStorageInfoS0_
/*void qm3925354317_26(QStorageInfo & value1, QStorageInfo & value2)*/ {
  QStorageInfo & value1 = *(QStorageInfo *)this_; QStorageInfo & value2 = *(QStorageInfo *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QStorageInfo&, QStorageInfo&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeasingcurve.h:129
// [-2] void swap(QEasingCurve &, QEasingCurve &) 
// (12)qm2164124880 (25)_Z4swapR12QEasingCurveS0_
/*void qm2164124880_27(QEasingCurve & value1, QEasingCurve & value2)*/ {
  QEasingCurve & value1 = *(QEasingCurve *)this_; QEasingCurve & value2 = *(QEasingCurve *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QEasingCurve&, QEasingCurve&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonobject.h:303
// [-2] void swap(QJsonObject &, QJsonObject &) 
// (12)qm3352602576 (24)_Z4swapR11QJsonObjectS0_
/*void qm3352602576_28(QJsonObject & value1, QJsonObject & value2)*/ {
  QJsonObject & value1 = *(QJsonObject *)this_; QJsonObject & value2 = *(QJsonObject *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QJsonObject&, QJsonObject&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbasictimer.h:90
// [-2] void swap(QBasicTimer &, QBasicTimer &) 
// (12)qm1798525802 (24)_Z4swapR11QBasicTimerS0_
/*void qm1798525802_29(QBasicTimer & lhs, QBasicTimer & rhs)*/ {
  QBasicTimer & lhs = *(QBasicTimer *)this_; QBasicTimer & rhs = *(QBasicTimer *)this_;
  (void) swap(lhs, rhs);
  auto xptr = (void (*)(QBasicTimer&, QBasicTimer&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:233
// [-2] void swap(QJsonValue &, QJsonValue &) 
// (12)qm4269537890 (23)_Z4swapR10QJsonValueS0_
/*void qm4269537890_30(QJsonValue & value1, QJsonValue & value2)*/ {
  QJsonValue & value1 = *(QJsonValue *)this_; QJsonValue & value2 = *(QJsonValue *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QJsonValue&, QJsonValue&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonarray.h:254
// [-2] void swap(QJsonArray &, QJsonArray &) 
// (12)qm1749089933 (23)_Z4swapR10QJsonArrayS0_
/*void qm1749089933_31(QJsonArray & value1, QJsonArray & value2)*/ {
  QJsonArray & value1 = *(QJsonArray *)this_; QJsonArray & value2 = *(QJsonArray *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QJsonArray&, QJsonArray&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborvalue.h:339
// [-2] void swap(QCborValue &, QCborValue &) 
// (12)qm1180592797 (23)_Z4swapR10QCborValueS0_
/*void qm1180592797_32(QCborValue & value1, QCborValue & value2)*/ {
  QCborValue & value1 = *(QCborValue *)this_; QCborValue & value2 = *(QCborValue *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCborValue&, QCborValue&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborarray.h:283
// [-2] void swap(QCborArray &, QCborArray &) 
// (12)qm3496308338 (23)_Z4swapR10QCborArrayS0_
/*void qm3496308338_33(QCborArray & value1, QCborArray & value2)*/ {
  QCborArray & value1 = *(QCborArray *)this_; QCborArray & value2 = *(QCborArray *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCborArray&, QCborArray&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:772
// [-2] void swap(QByteArray &, QByteArray &) 
// (12)qm3522704437 (23)_Z4swapR10QByteArrayS0_
/*void qm3522704437_34(QByteArray & value1, QByteArray & value2)*/ {
  QByteArray & value1 = *(QByteArray *)this_; QByteArray & value2 = *(QByteArray *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QByteArray&, QByteArray&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:98
// [8] qreal qTan(qreal) 
// (12)qm2298732212 (8)_Z4qTand
/*void qm2298732212(double v)*/ {
  double v = *(double*)this_;
  (void) qTan(v);
  auto xptr = (double (*)(double) ) &qTan;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:86
// [8] qreal qSin(qreal) 
// (11)qm449296309 (8)_Z4qSind
/*void qm449296309(double v)*/ {
  double v = *(double*)this_;
  (void) qSin(v);
  auto xptr = (double (*)(double) ) &qSin;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:146
// [8] qreal qPow(qreal, qreal) 
// (12)qm1391490955 (9)_Z4qPowdd
/*void qm1391490955(double x, double y)*/ {
  double x = *(double*)this_; double y = *(double*)this_;
  (void) qPow(x, y);
  auto xptr = (double (*)(double, double) ) &qPow;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:140
// [8] qreal qExp(qreal) 
// (12)qm2786085230 (8)_Z4qExpd
/*void qm2786085230(double v)*/ {
  double v = *(double*)this_;
  (void) qExp(v);
  auto xptr = (double (*)(double) ) &qExp;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:92
// [8] qreal qCos(qreal) 
// (12)qm2973757572 (8)_Z4qCosd
/*void qm2973757572(double v)*/ {
  double v = *(double*)this_;
  (void) qCos(v);
  auto xptr = (double (*)(double) ) &qCos;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:134
// [8] qreal qLn(qreal) 
// (11)qm415760338 (7)_Z3qLnd
/*void qm415760338(double v)*/ {
  double v = *(double*)this_;
  (void) qLn(v);
  auto xptr = (double (*)(double) ) &qLn;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:320
// [40] QTextStreamManipulator qSetRealNumberPrecision(int) 
// (12)qm1417490559 (28)_Z23qSetRealNumberPrecisioni
/*void qm1417490559(int precision)*/ {
  int precision = *(int*)this_;
  (void) qSetRealNumberPrecision(precision);
  auto xptr = (QTextStreamManipulator (*)(int) ) &qSetRealNumberPrecision;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:59
// [1] unsigned char qPluginArchRequirements() 
// (12)qm3675706074 (28)_Z23qPluginArchRequirementsv
/*void qm3675706074()*/ {
  ;
  (void) qPluginArchRequirements();
  auto xptr = (unsigned char (*)() ) &qPluginArchRequirements;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:796
// [4] uint qCountTrailingZeroBits(quint64) 
// (11)qm790983629 (27)_Z22qCountTrailingZeroBitsy
/*void qm790983629(unsigned long long v)*/ {
  unsigned long long v = *(unsigned long long*)this_;
  (void) qCountTrailingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned long long) ) &qCountTrailingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:780
// [4] uint qCountTrailingZeroBits(quint16) 
// (12)qm1368657776 (27)_Z22qCountTrailingZeroBitst
/*void qm1368657776_1(unsigned short v)*/ {
  unsigned short v = *(unsigned short*)this_;
  (void) qCountTrailingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned short) ) &qCountTrailingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:807
// [4] uint qCountTrailingZeroBits(unsigned long) 
// (11)qm905947056 (27)_Z22qCountTrailingZeroBitsm
/*void qm905947056_2(unsigned long v)*/ {
  unsigned long v = *(unsigned long*)this_;
  (void) qCountTrailingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned long) ) &qCountTrailingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:747
// [4] uint qCountTrailingZeroBits(quint32) 
// (12)qm2879074835 (27)_Z22qCountTrailingZeroBitsj
/*void qm2879074835_3(unsigned int v)*/ {
  unsigned int v = *(unsigned int*)this_;
  (void) qCountTrailingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned int) ) &qCountTrailingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:765
// [4] uint qCountTrailingZeroBits(quint8) 
// (12)qm1167414079 (27)_Z22qCountTrailingZeroBitsh
/*void qm1167414079_4(unsigned char v)*/ {
  unsigned char v = *(unsigned char*)this_;
  (void) qCountTrailingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned char) ) &qCountTrailingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:852
// [4] uint qCountLeadingZeroBits(quint64) 
// (11)qm417088220 (26)_Z21qCountLeadingZeroBitsy
/*void qm417088220(unsigned long long v)*/ {
  unsigned long long v = *(unsigned long long*)this_;
  (void) qCountLeadingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned long long) ) &qCountLeadingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:839
// [4] uint qCountLeadingZeroBits(quint16) 
// (12)qm1718435425 (26)_Z21qCountLeadingZeroBitst
/*void qm1718435425_1(unsigned short v)*/ {
  unsigned short v = *(unsigned short*)this_;
  (void) qCountLeadingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned short) ) &qCountLeadingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:867
// [4] uint qCountLeadingZeroBits(unsigned long) 
// (10)qm33986209 (26)_Z21qCountLeadingZeroBitsm
/*void qm33986209_2(unsigned long v)*/ {
  unsigned long v = *(unsigned long*)this_;
  (void) qCountLeadingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned long) ) &qCountLeadingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:812
// [4] uint qCountLeadingZeroBits(quint32) 
// (12)qm2623668994 (26)_Z21qCountLeadingZeroBitsj
/*void qm2623668994_3(unsigned int v)*/ {
  unsigned int v = *(unsigned int*)this_;
  (void) qCountLeadingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned int) ) &qCountLeadingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:827
// [4] uint qCountLeadingZeroBits(quint8) 
// (12)qm1919705646 (26)_Z21qCountLeadingZeroBitsh
/*void qm1919705646_4(unsigned char v)*/ {
  unsigned char v = *(unsigned char*)this_;
  (void) qCountLeadingZeroBits(v);
  auto xptr = (unsigned int (*)(unsigned char) ) &qCountLeadingZeroBits;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:485
// [8] const QMetaObject * qt_getQtMetaObject() 
// (12)qm2415084537 (23)_Z18qt_getQtMetaObjectv
/*void qm2415084537()*/ {
  ;
  (void) qt_getQtMetaObject();
  auto xptr = (const QMetaObject * (*)() ) &qt_getQtMetaObject;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:236
// [4] float qRadiansToDegrees(float) 
// (11)qm169062615 (22)_Z17qRadiansToDegreesf
/*void qm169062615(float radians)*/ {
  float radians = *(float*)this_;
  (void) qRadiansToDegrees(radians);
  auto xptr = (float (*)(float) ) &qRadiansToDegrees;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:241
// [8] double qRadiansToDegrees(double) 
// (12)qm3827159547 (22)_Z17qRadiansToDegreesd
/*void qm3827159547_1(double radians)*/ {
  double radians = *(double*)this_;
  (void) qRadiansToDegrees(radians);
  auto xptr = (double (*)(double) ) &qRadiansToDegrees;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:226
// [4] float qDegreesToRadians(float) 
// (12)qm3147022705 (22)_Z17qDegreesToRadiansf
/*void qm3147022705(float degrees)*/ {
  float degrees = *(float*)this_;
  (void) qDegreesToRadians(degrees);
  auto xptr = (float (*)(float) ) &qDegreesToRadians;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:231
// [8] double qDegreesToRadians(double) 
// (12)qm1436393565 (22)_Z17qDegreesToRadiansd
/*void qm1436393565_1(double degrees)*/ {
  double degrees = *(double*)this_;
  (void) qDegreesToRadians(degrees);
  auto xptr = (double (*)(double) ) &qDegreesToRadians;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:722
// [4] uint qPopulationCount(quint64) 
// (12)qm1348843733 (21)_Z16qPopulationCounty
/*void qm1348843733(unsigned long long v)*/ {
  unsigned long long v = *(unsigned long long*)this_;
  (void) qPopulationCount(v);
  auto xptr = (unsigned int (*)(unsigned long long) ) &qPopulationCount;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:711
// [4] uint qPopulationCount(quint16) 
// (11)qm785695848 (21)_Z16qPopulationCountt
/*void qm785695848_1(unsigned short v)*/ {
  unsigned short v = *(unsigned short*)this_;
  (void) qPopulationCount(v);
  auto xptr = (unsigned int (*)(unsigned short) ) &qPopulationCount;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:737
// [4] uint qPopulationCount(unsigned long) 
// (12)qm1254059176 (21)_Z16qPopulationCountm
/*void qm1254059176_2(unsigned long v)*/ {
  unsigned long v = *(unsigned long*)this_;
  (void) qPopulationCount(v);
  auto xptr = (unsigned int (*)(unsigned long) ) &qPopulationCount;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:688
// [4] uint qPopulationCount(quint32) 
// (12)qm3571185931 (21)_Z16qPopulationCountj
/*void qm3571185931_3(unsigned int v)*/ {
  unsigned int v = *(unsigned int*)this_;
  (void) qPopulationCount(v);
  auto xptr = (unsigned int (*)(unsigned int) ) &qPopulationCount;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:701
// [4] uint qPopulationCount(quint8) 
// (11)qm987076647 (21)_Z16qPopulationCounth
/*void qm987076647_4(unsigned char v)*/ {
  unsigned char v = *(unsigned char*)this_;
  (void) qPopulationCount(v);
  auto xptr = (unsigned int (*)(unsigned char) ) &qPopulationCount;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:264
// [8] quint64 qNextPowerOfTwo(quint64) 
// (12)qm1425976625 (20)_Z15qNextPowerOfTwoy
/*void qm1425976625(unsigned long long v)*/ {
  unsigned long long v = *(unsigned long long*)this_;
  (void) qNextPowerOfTwo(v);
  auto xptr = (unsigned long long (*)(unsigned long long) ) &qNextPowerOfTwo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:287
// [8] quint64 qNextPowerOfTwo(qint64) 
// (11)qm603561383 (20)_Z15qNextPowerOfTwox
/*void qm603561383_1(long long v)*/ {
  long long v = *(long long*)this_;
  (void) qNextPowerOfTwo(v);
  auto xptr = (unsigned long long (*)(long long) ) &qNextPowerOfTwo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:247
// [4] quint32 qNextPowerOfTwo(quint32) 
// (12)qm3493915887 (20)_Z15qNextPowerOfTwoj
/*void qm3493915887_2(unsigned int v)*/ {
  unsigned int v = *(unsigned int*)this_;
  (void) qNextPowerOfTwo(v);
  auto xptr = (unsigned int (*)(unsigned int) ) &qNextPowerOfTwo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:282
// [4] quint32 qNextPowerOfTwo(qint32) 
// (12)qm1229569365 (20)_Z15qNextPowerOfTwoi
/*void qm1229569365_3(int v)*/ {
  int v = *(int*)this_;
  (void) qNextPowerOfTwo(v);
  auto xptr = (unsigned int (*)(int) ) &qNextPowerOfTwo;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:308
// [40] QTextStreamManipulator qSetFieldWidth(int) 
// (11)qm206529559 (19)_Z14qSetFieldWidthi
/*void qm206529559(int width)*/ {
  int width = *(int*)this_;
  (void) qSetFieldWidth(width);
  auto xptr = (QTextStreamManipulator (*)(int) ) &qSetFieldWidth;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:138
// [1] bool qFuzzyCompare(qfloat16, qfloat16) 
// (12)qm2166869986 (28)_Z13qFuzzyCompare8qfloat16S_
/*void qm2166869986_2(qfloat16 p1, qfloat16 p2)*/ {
  qfloat16 p1 = *(qfloat16*)this_; qfloat16 p2 = *(qfloat16*)this_;
  (void) qFuzzyCompare(p1, p2);
  auto xptr = (bool (*)(qfloat16, qfloat16) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:289
// [1] bool qFuzzyIsNull(qfloat16) 
// (10)qm44554775 (25)_Z12qFuzzyIsNull8qfloat16
/*void qm44554775_2(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qFuzzyIsNull(f);
  auto xptr = (bool (*)(qfloat16) ) &qFuzzyIsNull;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:768
// [8] QByteArray qUncompress(const QByteArray &) 
// (12)qm3947033286 (29)_Z11qUncompressRK10QByteArray
/*void qm3947033286(const QByteArray & data)*/ {
  const QByteArray & data = *(const QByteArray *)this_;
  (void) qUncompress(data);
  auto xptr = (QByteArray (*)(QByteArray const&) ) &qUncompress;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:314
// [40] QTextStreamManipulator qSetPadChar(QChar) 
// (12)qm1038730470 (21)_Z11qSetPadChar5QChar
/*void qm1038730470(QChar ch)*/ {
  QChar ch = *(QChar*)this_;
  (void) qSetPadChar(ch);
  auto xptr = (QTextStreamManipulator (*)(QChar) ) &qSetPadChar;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfloat16.h:128
// [4] int qFpClassify(qfloat16) 
// (12)qm1802758912 (24)_Z11qFpClassify8qfloat16
/*void qm1802758912(qfloat16 f)*/ {
  qfloat16 f = *(qfloat16*)this_;
  (void) qFpClassify(f);
  auto xptr = (int (*)(qfloat16) ) &qFpClassify;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_core

//  main block end
